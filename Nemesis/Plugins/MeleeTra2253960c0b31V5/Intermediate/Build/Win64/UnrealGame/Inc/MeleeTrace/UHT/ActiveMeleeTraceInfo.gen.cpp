// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeleeTrace/Public/ActiveMeleeTraceInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActiveMeleeTraceInfo() {}

// Begin Cross Module References
MELEETRACE_API UScriptStruct* Z_Construct_UScriptStruct_FActiveMeleeTraceInfo();
MELEETRACE_API UScriptStruct* Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle();
UPackage* Z_Construct_UPackage__Script_MeleeTrace();
// End Cross Module References

// Begin ScriptStruct FMeleeTraceInstanceHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeleeTraceInstanceHandle;
class UScriptStruct* FMeleeTraceInstanceHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeleeTraceInstanceHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeleeTraceInstanceHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle, (UObject*)Z_Construct_UPackage__Script_MeleeTrace(), TEXT("MeleeTraceInstanceHandle"));
	}
	return Z_Registration_Info_UScriptStruct_MeleeTraceInstanceHandle.OuterSingleton;
}
template<> MELEETRACE_API UScriptStruct* StaticStruct<FMeleeTraceInstanceHandle>()
{
	return FMeleeTraceInstanceHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ActiveMeleeTraceInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActiveMeleeTraceInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_TraceHash;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeleeTraceInstanceHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle_Statics::NewProp_TraceHash = { "TraceHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeleeTraceInstanceHandle, TraceHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceHash_MetaData), NewProp_TraceHash_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle_Statics::NewProp_TraceHash,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MeleeTrace,
	nullptr,
	&NewStructOps,
	"MeleeTraceInstanceHandle",
	Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle_Statics::PropPointers),
	sizeof(FMeleeTraceInstanceHandle),
	alignof(FMeleeTraceInstanceHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle()
{
	if (!Z_Registration_Info_UScriptStruct_MeleeTraceInstanceHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeleeTraceInstanceHandle.InnerSingleton, Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeleeTraceInstanceHandle.InnerSingleton;
}
// End ScriptStruct FMeleeTraceInstanceHandle

// Begin ScriptStruct FActiveMeleeTraceInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveMeleeTraceInfo;
class UScriptStruct* FActiveMeleeTraceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveMeleeTraceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveMeleeTraceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveMeleeTraceInfo, (UObject*)Z_Construct_UPackage__Script_MeleeTrace(), TEXT("ActiveMeleeTraceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveMeleeTraceInfo.OuterSingleton;
}
template<> MELEETRACE_API UScriptStruct* StaticStruct<FActiveMeleeTraceInfo>()
{
	return FActiveMeleeTraceInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActiveMeleeTraceInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActiveMeleeTraceInfo.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveMeleeTraceInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveMeleeTraceInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MeleeTrace,
	nullptr,
	&NewStructOps,
	"ActiveMeleeTraceInfo",
	nullptr,
	0,
	sizeof(FActiveMeleeTraceInfo),
	alignof(FActiveMeleeTraceInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveMeleeTraceInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveMeleeTraceInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveMeleeTraceInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveMeleeTraceInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveMeleeTraceInfo.InnerSingleton, Z_Construct_UScriptStruct_FActiveMeleeTraceInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActiveMeleeTraceInfo.InnerSingleton;
}
// End ScriptStruct FActiveMeleeTraceInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_ActiveMeleeTraceInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMeleeTraceInstanceHandle::StaticStruct, Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle_Statics::NewStructOps, TEXT("MeleeTraceInstanceHandle"), &Z_Registration_Info_UScriptStruct_MeleeTraceInstanceHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeleeTraceInstanceHandle), 521459338U) },
		{ FActiveMeleeTraceInfo::StaticStruct, Z_Construct_UScriptStruct_FActiveMeleeTraceInfo_Statics::NewStructOps, TEXT("ActiveMeleeTraceInfo"), &Z_Registration_Info_UScriptStruct_ActiveMeleeTraceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveMeleeTraceInfo), 2612405508U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_ActiveMeleeTraceInfo_h_63442056(TEXT("/Script/MeleeTrace"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_ActiveMeleeTraceInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_ActiveMeleeTraceInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
