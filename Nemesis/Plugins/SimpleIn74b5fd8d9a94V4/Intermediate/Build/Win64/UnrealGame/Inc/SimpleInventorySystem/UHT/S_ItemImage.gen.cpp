// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleInventorySystem/Public/S_ItemImage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_ItemImage() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
SIMPLEINVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FS_ItemImage();
UPackage* Z_Construct_UPackage__Script_SimpleInventorySystem();
// End Cross Module References

// Begin ScriptStruct FS_ItemImage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_ItemImage;
class UScriptStruct* FS_ItemImage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_ItemImage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_ItemImage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_ItemImage, (UObject*)Z_Construct_UPackage__Script_SimpleInventorySystem(), TEXT("S_ItemImage"));
	}
	return Z_Registration_Info_UScriptStruct_S_ItemImage.OuterSingleton;
}
template<> SIMPLEINVENTORYSYSTEM_API UScriptStruct* StaticStruct<FS_ItemImage>()
{
	return FS_ItemImage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FS_ItemImage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/S_ItemImage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_Item_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/S_ItemImage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/S_ItemImage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/S_ItemImage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_Item;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_ItemImage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FS_ItemImage_Statics::NewProp_Image_Item = { "Image_Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_ItemImage, Image_Item), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_Item_MetaData), NewProp_Image_Item_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_ItemImage_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_ItemImage, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_ItemImage_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_ItemImage, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_ItemImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ItemImage_Statics::NewProp_Image_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ItemImage_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_ItemImage_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ItemImage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_ItemImage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleInventorySystem,
	nullptr,
	&NewStructOps,
	"S_ItemImage",
	Z_Construct_UScriptStruct_FS_ItemImage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ItemImage_Statics::PropPointers),
	sizeof(FS_ItemImage),
	alignof(FS_ItemImage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_ItemImage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FS_ItemImage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FS_ItemImage()
{
	if (!Z_Registration_Info_UScriptStruct_S_ItemImage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_ItemImage.InnerSingleton, Z_Construct_UScriptStruct_FS_ItemImage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_S_ItemImage.InnerSingleton;
}
// End ScriptStruct FS_ItemImage

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_S_ItemImage_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FS_ItemImage::StaticStruct, Z_Construct_UScriptStruct_FS_ItemImage_Statics::NewStructOps, TEXT("S_ItemImage"), &Z_Registration_Info_UScriptStruct_S_ItemImage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_ItemImage), 1430944122U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_S_ItemImage_h_1491883484(TEXT("/Script/SimpleInventorySystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_S_ItemImage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_S_ItemImage_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
