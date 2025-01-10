// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeleeTrace/Public/MeleeTraceInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeTraceInfo() {}

// Begin Cross Module References
MELEETRACE_API UClass* Z_Construct_UClass_UMeleeTraceShape_NoRegister();
MELEETRACE_API UScriptStruct* Z_Construct_UScriptStruct_FMeleeTraceInfo();
UPackage* Z_Construct_UPackage__Script_MeleeTrace();
// End Cross Module References

// Begin ScriptStruct FMeleeTraceInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeleeTraceInfo;
class UScriptStruct* FMeleeTraceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeleeTraceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeleeTraceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeleeTraceInfo, (UObject*)Z_Construct_UPackage__Script_MeleeTrace(), TEXT("MeleeTraceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MeleeTraceInfo.OuterSingleton;
}
template<> MELEETRACE_API UScriptStruct* StaticStruct<FMeleeTraceInfo>()
{
	return FMeleeTraceInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeleeTraceInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeleeTraceInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSocketName_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MeleeTraceInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndSocketName_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MeleeTraceInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceShape_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeleeTraceInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDensity_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MeleeTraceInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EndSocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceShape;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TraceDensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeleeTraceInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMeleeTraceInfo_Statics::NewProp_StartSocketName = { "StartSocketName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeleeTraceInfo, StartSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSocketName_MetaData), NewProp_StartSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMeleeTraceInfo_Statics::NewProp_EndSocketName = { "EndSocketName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeleeTraceInfo, EndSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndSocketName_MetaData), NewProp_EndSocketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeleeTraceInfo_Statics::NewProp_TraceShape = { "TraceShape", nullptr, (EPropertyFlags)0x011600000009000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeleeTraceInfo, TraceShape), Z_Construct_UClass_UMeleeTraceShape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceShape_MetaData), NewProp_TraceShape_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeleeTraceInfo_Statics::NewProp_TraceDensity = { "TraceDensity", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeleeTraceInfo, TraceDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDensity_MetaData), NewProp_TraceDensity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeleeTraceInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeTraceInfo_Statics::NewProp_StartSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeTraceInfo_Statics::NewProp_EndSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeTraceInfo_Statics::NewProp_TraceShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeTraceInfo_Statics::NewProp_TraceDensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeTraceInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeleeTraceInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MeleeTrace,
	nullptr,
	&NewStructOps,
	"MeleeTraceInfo",
	Z_Construct_UScriptStruct_FMeleeTraceInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeTraceInfo_Statics::PropPointers),
	sizeof(FMeleeTraceInfo),
	alignof(FMeleeTraceInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeTraceInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeleeTraceInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeleeTraceInfo()
{
	if (!Z_Registration_Info_UScriptStruct_MeleeTraceInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeleeTraceInfo.InnerSingleton, Z_Construct_UScriptStruct_FMeleeTraceInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeleeTraceInfo.InnerSingleton;
}
// End ScriptStruct FMeleeTraceInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMeleeTraceInfo::StaticStruct, Z_Construct_UScriptStruct_FMeleeTraceInfo_Statics::NewStructOps, TEXT("MeleeTraceInfo"), &Z_Registration_Info_UScriptStruct_MeleeTraceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeleeTraceInfo), 3124408688U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceInfo_h_1694581580(TEXT("/Script/MeleeTrace"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
