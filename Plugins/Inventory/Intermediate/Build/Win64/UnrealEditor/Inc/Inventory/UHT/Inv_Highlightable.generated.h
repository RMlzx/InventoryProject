// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/Inv_Highlightable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORY_Inv_Highlightable_generated_h
#error "Inv_Highlightable.generated.h already included, missing '#pragma once' in Inv_Highlightable.h"
#endif
#define INVENTORY_Inv_Highlightable_generated_h

#define FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_Highlightable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UnHighlight_Implementation() {}; \
	virtual void Highlight_Implementation() {}; \
	DECLARE_FUNCTION(execUnHighlight); \
	DECLARE_FUNCTION(execHighlight);


#define FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_Highlightable_h_13_CALLBACK_WRAPPERS
#define FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_Highlightable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInv_Highlightable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInv_Highlightable(UInv_Highlightable&&); \
	UInv_Highlightable(const UInv_Highlightable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_Highlightable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_Highlightable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInv_Highlightable) \
	NO_API virtual ~UInv_Highlightable();


#define FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_Highlightable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInv_Highlightable(); \
	friend struct Z_Construct_UClass_UInv_Highlightable_Statics; \
public: \
	DECLARE_CLASS(UInv_Highlightable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Inventory"), NO_API) \
	DECLARE_SERIALIZER(UInv_Highlightable)


#define FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_Highlightable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_Highlightable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_Highlightable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_Highlightable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInv_Highlightable() {} \
public: \
	typedef UInv_Highlightable UClassType; \
	typedef IInv_Highlightable ThisClass; \
	static void Execute_Highlight(UObject* O); \
	static void Execute_UnHighlight(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_Highlightable_h_10_PROLOG
#define FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_Highlightable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_Highlightable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_Highlightable_h_13_CALLBACK_WRAPPERS \
	FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_Highlightable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORY_API UClass* StaticClass<class UInv_Highlightable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_Highlightable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
