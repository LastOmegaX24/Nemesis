// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleInventorySystem/Public/E_ObjectType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeE_ObjectType() {}

// Begin Cross Module References
SIMPLEINVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_SimpleInventorySystem_EE_ObjectType();
UPackage* Z_Construct_UPackage__Script_SimpleInventorySystem();
// End Cross Module References

// Begin Enum EE_ObjectType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EE_ObjectType;
static UEnum* EE_ObjectType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EE_ObjectType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EE_ObjectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleInventorySystem_EE_ObjectType, (UObject*)Z_Construct_UPackage__Script_SimpleInventorySystem(), TEXT("EE_ObjectType"));
	}
	return Z_Registration_Info_UEnum_EE_ObjectType.OuterSingleton;
}
template<> SIMPLEINVENTORYSYSTEM_API UEnum* StaticEnum<EE_ObjectType>()
{
	return EE_ObjectType_StaticEnum();
}
struct Z_Construct_UEnum_SimpleInventorySystem_EE_ObjectType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/E_ObjectType.h" },
		{ "Object.Comment", "/**\n *\n */" },
		{ "Object.DisplayName", "Object" },
		{ "Object.Name", "EE_ObjectType::Object" },
		{ "Restaure.Comment", "/**\n *\n */" },
		{ "Restaure.DisplayName", "Restaure" },
		{ "Restaure.Name", "EE_ObjectType::Restaure" },
		{ "Shield.Comment", "/**\n *\n */" },
		{ "Shield.DisplayName", "Shield" },
		{ "Shield.Name", "EE_ObjectType::Shield" },
		{ "Weapon.Comment", "/**\n *\n */" },
		{ "Weapon.DisplayName", "Weapon" },
		{ "Weapon.Name", "EE_ObjectType::Weapon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EE_ObjectType::Object", (int64)EE_ObjectType::Object },
		{ "EE_ObjectType::Restaure", (int64)EE_ObjectType::Restaure },
		{ "EE_ObjectType::Shield", (int64)EE_ObjectType::Shield },
		{ "EE_ObjectType::Weapon", (int64)EE_ObjectType::Weapon },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleInventorySystem_EE_ObjectType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleInventorySystem,
	nullptr,
	"EE_ObjectType",
	"EE_ObjectType",
	Z_Construct_UEnum_SimpleInventorySystem_EE_ObjectType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleInventorySystem_EE_ObjectType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleInventorySystem_EE_ObjectType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleInventorySystem_EE_ObjectType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleInventorySystem_EE_ObjectType()
{
	if (!Z_Registration_Info_UEnum_EE_ObjectType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EE_ObjectType.InnerSingleton, Z_Construct_UEnum_SimpleInventorySystem_EE_ObjectType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EE_ObjectType.InnerSingleton;
}
// End Enum EE_ObjectType

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_E_ObjectType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EE_ObjectType_StaticEnum, TEXT("EE_ObjectType"), &Z_Registration_Info_UEnum_EE_ObjectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2863876939U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_E_ObjectType_h_1618008170(TEXT("/Script/SimpleInventorySystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_E_ObjectType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_E_ObjectType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
