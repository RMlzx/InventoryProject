// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/Public/Interaction/Inv_HighlightableStaticMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInv_HighlightableStaticMesh() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
INVENTORY_API UClass* Z_Construct_UClass_UInv_Highlightable_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_HighlightableStaticMesh();
INVENTORY_API UClass* Z_Construct_UClass_UInv_HighlightableStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// End Cross Module References

// Begin Class UInv_HighlightableStaticMesh
void UInv_HighlightableStaticMesh::StaticRegisterNativesUInv_HighlightableStaticMesh()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInv_HighlightableStaticMesh);
UClass* Z_Construct_UClass_UInv_HighlightableStaticMesh_NoRegister()
{
	return UInv_HighlightableStaticMesh::StaticClass();
}
struct Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Interaction/Inv_HighlightableStaticMesh.h" },
		{ "ModuleRelativePath", "Public/Interaction/Inv_HighlightableStaticMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMaterial_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xab\x98\xe4\xba\xae\xe6\x9d\x90\xe8\xb4\xa8\xe7\xbb\x91\xe5\xae\x9a\n" },
#endif
		{ "ModuleRelativePath", "Public/Interaction/Inv_HighlightableStaticMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xab\x98\xe4\xba\xae\xe6\x9d\x90\xe8\xb4\xa8\xe7\xbb\x91\xe5\xae\x9a" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_HighlightableStaticMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::NewProp_HighlightMaterial = { "HighlightMaterial", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_HighlightableStaticMesh, HighlightMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMaterial_MetaData), NewProp_HighlightMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::NewProp_HighlightMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInv_Highlightable_NoRegister, (int32)VTABLE_OFFSET(UInv_HighlightableStaticMesh, IInv_Highlightable), false },  // 3492978406
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::ClassParams = {
	&UInv_HighlightableStaticMesh::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_HighlightableStaticMesh()
{
	if (!Z_Registration_Info_UClass_UInv_HighlightableStaticMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_HighlightableStaticMesh.OuterSingleton, Z_Construct_UClass_UInv_HighlightableStaticMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_HighlightableStaticMesh.OuterSingleton;
}
template<> INVENTORY_API UClass* StaticClass<UInv_HighlightableStaticMesh>()
{
	return UInv_HighlightableStaticMesh::StaticClass();
}
UInv_HighlightableStaticMesh::UInv_HighlightableStaticMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_HighlightableStaticMesh);
UInv_HighlightableStaticMesh::~UInv_HighlightableStaticMesh() {}
// End Class UInv_HighlightableStaticMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_HighlightableStaticMesh_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_HighlightableStaticMesh, UInv_HighlightableStaticMesh::StaticClass, TEXT("UInv_HighlightableStaticMesh"), &Z_Registration_Info_UClass_UInv_HighlightableStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_HighlightableStaticMesh), 2385130225U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_HighlightableStaticMesh_h_4097090278(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_HighlightableStaticMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_HighlightableStaticMesh_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
