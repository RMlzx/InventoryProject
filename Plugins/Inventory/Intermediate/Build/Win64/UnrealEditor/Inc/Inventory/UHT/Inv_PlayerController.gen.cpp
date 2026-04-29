// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/Player/Inv_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInv_PlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_AInv_PlayerController();
INVENTORY_API UClass* Z_Construct_UClass_AInv_PlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References

// Begin Class AInv_PlayerController
void AInv_PlayerController::StaticRegisterNativesAInv_PlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInv_PlayerController);
UClass* Z_Construct_UClass_AInv_PlayerController_NoRegister()
{
	return AInv_PlayerController::StaticClass();
}
struct Z_Construct_UClass_AInv_PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/Inv_PlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultIMC_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryInteractAction_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultIMC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryInteractAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInv_PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_DefaultIMC = { "DefaultIMC", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, DefaultIMC), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultIMC_MetaData), NewProp_DefaultIMC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_PrimaryInteractAction = { "PrimaryInteractAction", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, PrimaryInteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryInteractAction_MetaData), NewProp_PrimaryInteractAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInv_PlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_DefaultIMC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_PrimaryInteractAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInv_PlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInv_PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInv_PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInv_PlayerController_Statics::ClassParams = {
	&AInv_PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AInv_PlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AInv_PlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInv_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AInv_PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInv_PlayerController()
{
	if (!Z_Registration_Info_UClass_AInv_PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInv_PlayerController.OuterSingleton, Z_Construct_UClass_AInv_PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInv_PlayerController.OuterSingleton;
}
template<> INVENTORY_API UClass* StaticClass<AInv_PlayerController>()
{
	return AInv_PlayerController::StaticClass();
}
AInv_PlayerController::AInv_PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInv_PlayerController);
AInv_PlayerController::~AInv_PlayerController() {}
// End Class AInv_PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInv_PlayerController, AInv_PlayerController::StaticClass, TEXT("AInv_PlayerController"), &Z_Registration_Info_UClass_AInv_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInv_PlayerController), 3235592132U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_2795721809(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
