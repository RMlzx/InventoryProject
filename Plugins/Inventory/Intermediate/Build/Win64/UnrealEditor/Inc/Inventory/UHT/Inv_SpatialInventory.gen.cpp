// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInv_SpatialInventory() {}

// Begin Cross Module References
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryBase();
INVENTORY_API UClass* Z_Construct_UClass_UInv_SpatialInventory();
INVENTORY_API UClass* Z_Construct_UClass_UInv_SpatialInventory_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References

// Begin Class UInv_SpatialInventory
void UInv_SpatialInventory::StaticRegisterNativesUInv_SpatialInventory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInv_SpatialInventory);
UClass* Z_Construct_UClass_UInv_SpatialInventory_NoRegister()
{
	return UInv_SpatialInventory::StaticClass();
}
struct Z_Construct_UClass_UInv_SpatialInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
		{ "ModuleRelativePath", "Public/Widgets/Inventory/Spatial/Inv_SpatialInventory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_SpatialInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInv_SpatialInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInv_InventoryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_SpatialInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_SpatialInventory_Statics::ClassParams = {
	&UInv_SpatialInventory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_SpatialInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_SpatialInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_SpatialInventory()
{
	if (!Z_Registration_Info_UClass_UInv_SpatialInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_SpatialInventory.OuterSingleton, Z_Construct_UClass_UInv_SpatialInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_SpatialInventory.OuterSingleton;
}
template<> INVENTORY_API UClass* StaticClass<UInv_SpatialInventory>()
{
	return UInv_SpatialInventory::StaticClass();
}
UInv_SpatialInventory::UInv_SpatialInventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_SpatialInventory);
UInv_SpatialInventory::~UInv_SpatialInventory() {}
// End Class UInv_SpatialInventory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_SpatialInventory, UInv_SpatialInventory::StaticClass, TEXT("UInv_SpatialInventory"), &Z_Registration_Info_UClass_UInv_SpatialInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_SpatialInventory), 1471541511U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h_312048872(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Widgets_Inventory_Spatial_Inv_SpatialInventory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
