// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleInventorySystem/Public/S_Item.h"
#include "SimpleInventorySystem/Public/S_ItemImage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_Item() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
SIMPLEINVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_SimpleInventorySystem_EE_ObjectType();
SIMPLEINVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FS_Item();
SIMPLEINVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FS_ItemImage();
UPackage* Z_Construct_UPackage__Script_SimpleInventorySystem();
// End Cross Module References

// Begin ScriptStruct FS_Item
static_assert(std::is_polymorphic<FS_Item>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FS_Item cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_Item;
class UScriptStruct* FS_Item::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_Item.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_Item.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_Item, (UObject*)Z_Construct_UPackage__Script_SimpleInventorySystem(), TEXT("S_Item"));
	}
	return Z_Registration_Info_UScriptStruct_S_Item.OuterSingleton;
}
template<> SIMPLEINVENTORYSYSTEM_API UScriptStruct* StaticStruct<FS_Item>()
{
	return FS_Item::StaticStruct();
}
struct Z_Construct_UScriptStruct_FS_Item_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/S_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isStackable_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/S_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/S_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/S_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/S_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/S_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/S_Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/S_Item.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isStackable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isStackable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Image;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_Item>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FS_Item_Statics::NewProp_isStackable_SetBit(void* Obj)
{
	((FS_Item*)Obj)->isStackable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_Item_Statics::NewProp_isStackable = { "isStackable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FS_Item), &Z_Construct_UScriptStruct_FS_Item_Statics::NewProp_isStackable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isStackable_MetaData), NewProp_isStackable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_Item_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_Item, Image), Z_Construct_UScriptStruct_FS_ItemImage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) }; // 1430944122
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_Item_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_Item, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS_Item_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_Item, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FS_Item_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FS_Item_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_Item, Type), Z_Construct_UEnum_SimpleInventorySystem_EE_ObjectType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2863876939
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS_Item_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_Item, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS_Item_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_Item, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limit_MetaData), NewProp_Limit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_Item_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_Item_Statics::NewProp_isStackable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_Item_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_Item_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_Item_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_Item_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_Item_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_Item_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_Item_Statics::NewProp_Limit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_Item_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_Item_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleInventorySystem,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"S_Item",
	Z_Construct_UScriptStruct_FS_Item_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_Item_Statics::PropPointers),
	sizeof(FS_Item),
	alignof(FS_Item),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_Item_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FS_Item_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FS_Item()
{
	if (!Z_Registration_Info_UScriptStruct_S_Item.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_Item.InnerSingleton, Z_Construct_UScriptStruct_FS_Item_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_S_Item.InnerSingleton;
}
// End ScriptStruct FS_Item

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_S_Item_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FS_Item::StaticStruct, Z_Construct_UScriptStruct_FS_Item_Statics::NewStructOps, TEXT("S_Item"), &Z_Registration_Info_UScriptStruct_S_Item, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_Item), 2788994739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_S_Item_h_199264942(TEXT("/Script/SimpleInventorySystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_S_Item_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_S_Item_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
