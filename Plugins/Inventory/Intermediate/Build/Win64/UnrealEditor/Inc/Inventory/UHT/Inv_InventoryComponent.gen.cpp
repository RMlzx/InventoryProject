// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/InventoryManagement/Components/Inv_InventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInv_InventoryComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryBase_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryComponent();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References

// Begin Class UInv_InventoryComponent
void UInv_InventoryComponent::StaticRegisterNativesUInv_InventoryComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInv_InventoryComponent);
UClass* Z_Construct_UClass_UInv_InventoryComponent_NoRegister()
{
	return UInv_InventoryComponent::StaticClass();
}
struct Z_Construct_UClass_UInv_InventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InventoryManagement/Components/Inv_InventoryComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryMenu_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8c\x82\xe4\xb8\x80\xe4\xb8\xaaU\xe5\xb1\x9e\xe6\x80\xa7\xe9\x98\xb2\xe6\xad\xa2\xe8\xa2\xab\xe5\x9e\x83\xe5\x9c\xbe\xe5\x9b\x9e\xe6\x94\xb6\xe6\x9c\xba\xe5\x88\xb6\xe6\xb8\x85\xe9\x99\xa4\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8c\x82\xe4\xb8\x80\xe4\xb8\xaaU\xe5\xb1\x9e\xe6\x80\xa7\xe9\x98\xb2\xe6\xad\xa2\xe8\xa2\xab\xe5\x9e\x83\xe5\x9c\xbe\xe5\x9b\x9e\xe6\x94\xb6\xe6\x9c\xba\xe5\x88\xb6\xe6\xb8\x85\xe9\x99\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryMenuClass_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Components/Inv_InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryMenu;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InventoryMenuClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_InventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_InventoryMenu = { "InventoryMenu", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryComponent, InventoryMenu), Z_Construct_UClass_UInv_InventoryBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryMenu_MetaData), NewProp_InventoryMenu_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_InventoryMenuClass = { "InventoryMenuClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_InventoryComponent, InventoryMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInv_InventoryBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryMenuClass_MetaData), NewProp_InventoryMenuClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_InventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_InventoryMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_InventoryComponent_Statics::NewProp_InventoryMenuClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_InventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_InventoryComponent_Statics::ClassParams = {
	&UInv_InventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_InventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_InventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_InventoryComponent()
{
	if (!Z_Registration_Info_UClass_UInv_InventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_InventoryComponent.OuterSingleton, Z_Construct_UClass_UInv_InventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_InventoryComponent.OuterSingleton;
}
template<> INVENTORY_API UClass* StaticClass<UInv_InventoryComponent>()
{
	return UInv_InventoryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_InventoryComponent);
UInv_InventoryComponent::~UInv_InventoryComponent() {}
// End Class UInv_InventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_InventoryComponent, UInv_InventoryComponent::StaticClass, TEXT("UInv_InventoryComponent"), &Z_Registration_Info_UClass_UInv_InventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_InventoryComponent), 4041776701U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_3956137659(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
