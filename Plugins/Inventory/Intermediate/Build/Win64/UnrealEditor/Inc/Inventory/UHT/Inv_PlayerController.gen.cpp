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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_AInv_PlayerController();
INVENTORY_API UClass* Z_Construct_UClass_AInv_PlayerController_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_HUDWidget_NoRegister();
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb\xe9\x85\x8d\xe7\xbd\xae\xe5\xb1\x9e\xe6\x80\xa7\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x93\x9d\xe5\x9b\xbe\xe7\xb1\xbb\xe9\x85\x8d\xe7\xbd\xae\xe5\xb1\x9e\xe6\x80\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryInteractAction_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbe\x93\xe5\x85\xa5\xe6\x8c\x89\xe9\x94\xae\xe7\xbb\x91\xe5\xae\x9a\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\x93\xe5\x85\xa5\xe6\x8c\x89\xe9\x94\xae\xe7\xbb\x91\xe5\xae\x9a" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//HUD\xe5\x8d\x81\xe5\xad\x97\xe5\x87\x86\xe6\x98\x9f\xe8\xa7\x86\xe5\x9b\xbe\xe7\xbb\x91\xe5\xae\x9a\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HUD\xe5\x8d\x81\xe5\xad\x97\xe5\x87\x86\xe6\x98\x9f\xe8\xa7\x86\xe5\x9b\xbe\xe7\xbb\x91\xe5\xae\x9a" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbd\x93\xe5\x89\x8d\xe5\x88\x9b\xe5\xbb\xba\xe7\x9a\x84\xe5\x8d\x81\xe5\xad\x97\xe5\x87\x86\xe6\x98\x9f\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe5\x88\x9b\xe5\xbb\xba\xe7\x9a\x84\xe5\x8d\x81\xe5\xad\x97\xe5\x87\x86\xe6\x98\x9f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceLength_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xb0\x84\xe7\xba\xbf\xe6\xa3\x80\xe6\xb5\x8b\xe7\xbb\x91\xe5\xae\x9a\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x84\xe7\xba\xbf\xe6\xa3\x80\xe6\xb5\x8b\xe7\xbb\x91\xe5\xae\x9a" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTraceChannel_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe6\xa3\x80\xe6\xb5\x8b\xe7\x9a\x84\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe7\xa2\xb0\xe6\x92\x9e\xe9\x80\x9a\xe9\x81\x93\xe7\xbb\x91\xe5\xae\x9a\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/Inv_PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe6\xa3\x80\xe6\xb5\x8b\xe7\x9a\x84\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe7\xa2\xb0\xe6\x92\x9e\xe9\x80\x9a\xe9\x81\x93\xe7\xbb\x91\xe5\xae\x9a" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultIMC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryInteractAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TraceLength;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemTraceChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInv_PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_DefaultIMC = { "DefaultIMC", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, DefaultIMC), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultIMC_MetaData), NewProp_DefaultIMC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_PrimaryInteractAction = { "PrimaryInteractAction", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, PrimaryInteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryInteractAction_MetaData), NewProp_PrimaryInteractAction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInv_HUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData), NewProp_HUDWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, HUDWidget), Z_Construct_UClass_UInv_HUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidget_MetaData), NewProp_HUDWidget_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, TraceLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceLength_MetaData), NewProp_TraceLength_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_ItemTraceChannel = { "ItemTraceChannel", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInv_PlayerController, ItemTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTraceChannel_MetaData), NewProp_ItemTraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInv_PlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_DefaultIMC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_PrimaryInteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_HUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_HUDWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_TraceLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInv_PlayerController_Statics::NewProp_ItemTraceChannel,
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
DEFINE_VTABLE_PTR_HELPER_CTOR(AInv_PlayerController);
AInv_PlayerController::~AInv_PlayerController() {}
// End Class AInv_PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInv_PlayerController, AInv_PlayerController::StaticClass, TEXT("AInv_PlayerController"), &Z_Registration_Info_UClass_AInv_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInv_PlayerController), 2756244646U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_1662144514(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Code_Unreal_project_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Player_Inv_PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
