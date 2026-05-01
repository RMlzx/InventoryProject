// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Inv_InventoryComponent.generated.h"

class UInv_InventoryItem;
class UInv_InventoryBase;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent),Blueprintable)
class INVENTORY_API UInv_InventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInv_InventoryComponent();

	void ToggleInventoryMenu();
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	
	TWeakObjectPtr<APlayerController> OwningController;
	
	void ConstructInventory();
	
	UPROPERTY() //挂一个U属性防止被垃圾回收机制清除
	TObjectPtr<UInv_InventoryBase> InventoryMenu; 

	UPROPERTY(EditAnywhere,Category = "Inventory")
	TSubclassOf<UInv_InventoryBase> InventoryMenuClass;
	
	bool bInventoryMenuOpen;
	void OpenInventoryMenu();
	void CloseInventoryMenu();
};
