// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/Inv_PlayerController.h"
#include "Inventory.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

void AInv_PlayerController::BeginPlay()
{
    Super::BeginPlay();
    UE_LOG(LogInventory, Log, TEXT("BeginPlay for PlayerController"));
    UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
    if (IsValid(Subsystem))
	{
		Subsystem->AddMappingContext(DefaultIMC, 0);
	}
}

void AInv_PlayerController::PrimaryInteract()
{
    UE_LOG(LogTemp, Log, TEXT("Primary Interact Pressed"));
}

void AInv_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);

	EnhancedInputComponent->BindAction(PrimaryInteractAction, ETriggerEvent::Started, this, &AInv_PlayerController::PrimaryInteract);
}