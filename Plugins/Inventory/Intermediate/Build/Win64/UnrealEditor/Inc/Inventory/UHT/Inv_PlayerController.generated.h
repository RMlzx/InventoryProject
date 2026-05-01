// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/Inv_PlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORY_Inv_PlayerController_generated_h
#error "Inv_PlayerController.generated.h already included, missing '#pragma once' in Inv_PlayerController.h"
#endif
#define INVENTORY_Inv_PlayerController_generated_h

#define FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleInventory);


#define FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInv_PlayerController(); \
	friend struct Z_Construct_UClass_AInv_PlayerController_Statics; \
public: \
	DECLARE_CLASS(AInv_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory"), NO_API) \
	DECLARE_SERIALIZER(AInv_PlayerController)


#define FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInv_PlayerController(AInv_PlayerController&&); \
	AInv_PlayerController(const AInv_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInv_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInv_PlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInv_PlayerController) \
	NO_API virtual ~AInv_PlayerController();


#define FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_15_PROLOG
#define FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORY_API UClass* StaticClass<class AInv_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
