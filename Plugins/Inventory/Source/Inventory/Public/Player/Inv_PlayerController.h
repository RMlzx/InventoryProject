#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UObject/ObjectPtr.h"
#include "Inv_PlayerController.generated.h"

class UInputMappingContext;
class UInv_InventoryComponent;
class UInputAction;
class UInv_HUDWidget;
/**
 * 
 */
UCLASS()
class INVENTORY_API AInv_PlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AInv_PlayerController();
	// 允许每帧调用 Tick
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	void ToggleInventory();

protected:
	//初始化
	virtual void BeginPlay() override;
	// 绑定输入动作
	virtual void SetupInputComponent() override;
private:
	void PrimaryInteract();
	void CreateHUDWidget();
	void TraceForItem();
	
	TWeakObjectPtr<UInv_InventoryComponent> InventoryComponent; //玩家的库存组件
	
	//蓝图类配置属性
	
	UPROPERTY(EditDefaultsOnly, Category = "Inventory") 
	TObjectPtr<UInputMappingContext> DefaultIMC;
	//输入按键绑定
	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	TObjectPtr<UInputAction> PrimaryInteractAction;
	//仓库输入按键绑定
	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	TObjectPtr<UInputAction> ToggleInventoryAction;
	//HUD十字准星视图绑定
	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	TSubclassOf<UInv_HUDWidget> HUDWidgetClass;
	//当前创建的十字准星
	UPROPERTY()
	TObjectPtr<UInv_HUDWidget> HUDWidget;
	
	//射线检测绑定
	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	double TraceLength;
	//物品检测的自定义碰撞通道绑定
	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	TEnumAsByte<ECollisionChannel> ItemTraceChannel;

	TWeakObjectPtr<AActor> ThisActor; //当前射线命中
	TWeakObjectPtr<AActor>LastActor; //上一帧射线命中


};
