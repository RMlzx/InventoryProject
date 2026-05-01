// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/Inv_PlayerController.h"
#include "Inventory.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Interaction/Inv_Highlightable.h"
#include "InventoryManagement/Components/Inv_InventoryComponent.h"
#include "Items/Components/Inv_ItemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Widgets/HUD/Inv_HUDWidget.h"

AInv_PlayerController::AInv_PlayerController()
{
	
	PrimaryActorTick.bCanEverTick = true;
	TraceLength = 500.0;
	
	ItemTraceChannel = ECC_GameTraceChannel1; //初始化ItemTraceChannel

}

void AInv_PlayerController::Tick(float DeltaTime)
{
	//按帧检测
	Super::Tick(DeltaTime);
	
	TraceForItem();
}

//切换库存界面
void AInv_PlayerController::ToggleInventory()
{
	if (!InventoryComponent.IsValid()) return;
	InventoryComponent->ToggleInventoryMenu();
}

//开始
void AInv_PlayerController::BeginPlay()
{
    Super::BeginPlay();
    UE_LOG(LogInventory, Log, TEXT("BeginPlay for PlayerController"));
	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if (IsValid(Subsystem))
	{
		Subsystem->AddMappingContext(DefaultIMC, 0);
	}

	InventoryComponent = FindComponentByClass<UInv_InventoryComponent>();
	CreateHUDWidget();
}

void AInv_PlayerController::PrimaryInteract()
{
    UE_LOG(LogTemp, Log, TEXT("Primary Interact Pressed"));
}

//输入
void AInv_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	//采用增强输入
	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);

	EnhancedInputComponent->BindAction(PrimaryInteractAction, ETriggerEvent::Started, this, &AInv_PlayerController::PrimaryInteract);
	EnhancedInputComponent->BindAction(ToggleInventoryAction, ETriggerEvent::Started, this, &AInv_PlayerController::ToggleInventory);
}

//显示十字准星
void AInv_PlayerController::CreateHUDWidget()
{
	//检验是否本地玩家
	if (!IsLocalController()) return;
	//创建HUDWidget
	HUDWidget = CreateWidget<UInv_HUDWidget>(this, HUDWidgetClass);
	//校验并投放
	if (IsValid(HUDWidget))
	{
		HUDWidget->AddToViewport();
	}
}
//准星（物品追踪+物品提示）
void AInv_PlayerController::TraceForItem()
{
	// 校验 GEngine 和 GameViewport 可用
	if (!IsValid(GEngine) || !IsValid(GEngine->GameViewport)) return;
	
	//获取视口大小并计算中心点（屏幕准星位置）
	FVector2D ViewportSize;
	GEngine->GameViewport->GetViewportSize(ViewportSize);
	const FVector2D ViewportCenter = ViewportSize / 2.f;
	
	// 将屏幕中心点转换为世界空间的射线起点和方向
	FVector TraceStart;
	FVector Forward;
	if (!UGameplayStatics::DeprojectScreenToWorld(this, ViewportCenter, TraceStart, Forward)) return;
	
	// 计算射线终点（起点 + 方向 * 探测长度）
	const FVector TraceEnd = TraceStart + Forward * TraceLength;
	
	// 执行单一线条射线检测（使用自定义的 ItemTraceChannel）
	FHitResult HitResult;
	GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ItemTraceChannel);
	
	// 更新命中 Actor
	LastActor = ThisActor;
	ThisActor = HitResult.GetActor();
	
	// 如果当前没有命中任何 Actor，则隐藏拾取提示
	if (!ThisActor.IsValid())
	{
		if (IsValid(HUDWidget))HUDWidget->HidePickupMessage();
	}
	
	if (ThisActor == LastActor)return;
	
	
	// 校验命中有效 Actor，获取其上的物品组件
	if (ThisActor.IsValid())
	{  //检验高亮并作出反应
		if(UActorComponent* Highlightable = ThisActor ->FindComponentByInterface(UInv_Highlightable::StaticClass());IsValid(Highlightable))
		{
			IInv_Highlightable :: Execute_Highlight(Highlightable);
			
			
		}
		
		UInv_ItemComponent* ItemComponent = ThisActor->FindComponentByClass<UInv_ItemComponent>();
		// 没有物品组件则忽略
		if (!IsValid(ItemComponent))return;  
		// 若 HUD 存在，则显示对应的拾取提示消息
		if (IsValid(HUDWidget))HUDWidget->ShowPickupMessage(ItemComponent->GetPickupMessage());
	}
	
	//日志
	if (LastActor.IsValid())
	{
		if(UActorComponent* Highlightable = LastActor ->FindComponentByInterface(UInv_Highlightable::StaticClass());IsValid(Highlightable))
		{
			IInv_Highlightable :: Execute_UnHighlight(Highlightable); //Execute需要传参
			
			
		}
		
	}
}
