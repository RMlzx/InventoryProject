// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/Items/Components/Inv_ItemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInv_ItemComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INVENTORY_API UClass* Z_Construct_UClass_UInv_ItemComponent();
INVENTORY_API UClass* Z_Construct_UClass_UInv_ItemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References

// Begin Class UInv_ItemComponent
void UInv_ItemComponent::StaticRegisterNativesUInv_ItemComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInv_ItemComponent);
UClass* Z_Construct_UClass_UInv_ItemComponent_NoRegister()
{
	return UInv_ItemComponent::StaticClass();
}
struct Z_Construct_UClass_UInv_ItemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Items/Components/Inv_ItemComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Items/Components/Inv_ItemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupMessage_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Components/Inv_ItemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PickupMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_ItemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_PickupMessage = { "PickupMessage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_ItemComponent, PickupMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupMessage_MetaData), NewProp_PickupMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_ItemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_ItemComponent_Statics::NewProp_PickupMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_ItemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_ItemComponent_Statics::ClassParams = {
	&UInv_ItemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_ItemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_ItemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_ItemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_ItemComponent()
{
	if (!Z_Registration_Info_UClass_UInv_ItemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_ItemComponent.OuterSingleton, Z_Construct_UClass_UInv_ItemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_ItemComponent.OuterSingleton;
}
template<> INVENTORY_API UClass* StaticClass<UInv_ItemComponent>()
{
	return UInv_ItemComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_ItemComponent);
UInv_ItemComponent::~UInv_ItemComponent() {}
// End Class UInv_ItemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_ItemComponent, UInv_ItemComponent::StaticClass, TEXT("UInv_ItemComponent"), &Z_Registration_Info_UClass_UInv_ItemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_ItemComponent), 583634477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h_3497292472(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Items_Components_Inv_ItemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
