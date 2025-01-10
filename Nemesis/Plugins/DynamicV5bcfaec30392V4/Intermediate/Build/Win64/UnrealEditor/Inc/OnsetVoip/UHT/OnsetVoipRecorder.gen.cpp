// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnsetVoip/Public/Recording/OnsetVoipRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnsetVoipRecorder() {}

// Begin Cross Module References
ONSETVOIP_API UEnum* Z_Construct_UEnum_OnsetVoip_EOnsetAudioRecordingFormat();
UPackage* Z_Construct_UPackage__Script_OnsetVoip();
// End Cross Module References

// Begin Enum EOnsetAudioRecordingFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOnsetAudioRecordingFormat;
static UEnum* EOnsetAudioRecordingFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOnsetAudioRecordingFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOnsetAudioRecordingFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnsetVoip_EOnsetAudioRecordingFormat, (UObject*)Z_Construct_UPackage__Script_OnsetVoip(), TEXT("EOnsetAudioRecordingFormat"));
	}
	return Z_Registration_Info_UEnum_EOnsetAudioRecordingFormat.OuterSingleton;
}
template<> ONSETVOIP_API UEnum* StaticEnum<EOnsetAudioRecordingFormat>()
{
	return EOnsetAudioRecordingFormat_StaticEnum();
}
struct Z_Construct_UEnum_OnsetVoip_EOnsetAudioRecordingFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FORMAT_MP3.Comment", "// Requires FFmpeg to be configured!\n" },
		{ "FORMAT_MP3.Name", "EOnsetAudioRecordingFormat::FORMAT_MP3" },
		{ "FORMAT_MP3.ToolTip", "Requires FFmpeg to be configured!" },
		{ "FORMAT_PCM.Comment", "// Save audio as raw PCM data.\n" },
		{ "FORMAT_PCM.Name", "EOnsetAudioRecordingFormat::FORMAT_PCM" },
		{ "FORMAT_PCM.ToolTip", "Save audio as raw PCM data." },
		{ "FORMAT_WAV.Comment", "// Save audio as a wav file with PCM data.\n" },
		{ "FORMAT_WAV.Name", "EOnsetAudioRecordingFormat::FORMAT_WAV" },
		{ "FORMAT_WAV.ToolTip", "Save audio as a wav file with PCM data." },
		{ "ModuleRelativePath", "Public/Recording/OnsetVoipRecorder.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOnsetAudioRecordingFormat::FORMAT_PCM", (int64)EOnsetAudioRecordingFormat::FORMAT_PCM },
		{ "EOnsetAudioRecordingFormat::FORMAT_WAV", (int64)EOnsetAudioRecordingFormat::FORMAT_WAV },
		{ "EOnsetAudioRecordingFormat::FORMAT_MP3", (int64)EOnsetAudioRecordingFormat::FORMAT_MP3 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnsetVoip_EOnsetAudioRecordingFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnsetVoip,
	nullptr,
	"EOnsetAudioRecordingFormat",
	"EOnsetAudioRecordingFormat",
	Z_Construct_UEnum_OnsetVoip_EOnsetAudioRecordingFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnsetVoip_EOnsetAudioRecordingFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnsetVoip_EOnsetAudioRecordingFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnsetVoip_EOnsetAudioRecordingFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnsetVoip_EOnsetAudioRecordingFormat()
{
	if (!Z_Registration_Info_UEnum_EOnsetAudioRecordingFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOnsetAudioRecordingFormat.InnerSingleton, Z_Construct_UEnum_OnsetVoip_EOnsetAudioRecordingFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOnsetAudioRecordingFormat.InnerSingleton;
}
// End Enum EOnsetAudioRecordingFormat

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_Recording_OnsetVoipRecorder_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOnsetAudioRecordingFormat_StaticEnum, TEXT("EOnsetAudioRecordingFormat"), &Z_Registration_Info_UEnum_EOnsetAudioRecordingFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2346605622U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_Recording_OnsetVoipRecorder_h_1929045411(TEXT("/Script/OnsetVoip"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_Recording_OnsetVoipRecorder_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_Recording_OnsetVoipRecorder_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
