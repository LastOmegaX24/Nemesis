// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnsetVoip/Public/OnsetVoipSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnsetVoipSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetNameplateComponent_NoRegister();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipSettings();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipSettings_NoRegister();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipTalker_NoRegister();
ONSETVOIP_API UEnum* Z_Construct_UEnum_OnsetVoip_EOnsetAudioEncodeHint();
ONSETVOIP_API UScriptStruct* Z_Construct_UScriptStruct_FNameplateAttachParam();
ONSETVOIP_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceEncoderSettings();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnsetVoip();
// End Cross Module References

// Begin Enum EOnsetAudioEncodeHint
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOnsetAudioEncodeHint;
static UEnum* EOnsetAudioEncodeHint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOnsetAudioEncodeHint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOnsetAudioEncodeHint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnsetVoip_EOnsetAudioEncodeHint, (UObject*)Z_Construct_UPackage__Script_OnsetVoip(), TEXT("EOnsetAudioEncodeHint"));
	}
	return Z_Registration_Info_UEnum_EOnsetAudioEncodeHint.OuterSingleton;
}
template<> ONSETVOIP_API UEnum* StaticEnum<EOnsetAudioEncodeHint>()
{
	return EOnsetAudioEncodeHint_StaticEnum();
}
struct Z_Construct_UEnum_OnsetVoip_EOnsetAudioEncodeHint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// From engine VoiceConfig.h\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "From engine VoiceConfig.h" },
		{ "VoiceEncode_Audio.Comment", "/** Best for broadcast/high-fidelity application where the decoded audio should be as close as possible to the input */" },
		{ "VoiceEncode_Audio.Name", "EOnsetAudioEncodeHint::VoiceEncode_Audio" },
		{ "VoiceEncode_Audio.ToolTip", "Best for broadcast/high-fidelity application where the decoded audio should be as close as possible to the input" },
		{ "VoiceEncode_Voice.Comment", "/** Best for most VoIP applications where listening quality and intelligibility matter most */" },
		{ "VoiceEncode_Voice.Name", "EOnsetAudioEncodeHint::VoiceEncode_Voice" },
		{ "VoiceEncode_Voice.ToolTip", "Best for most VoIP applications where listening quality and intelligibility matter most" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOnsetAudioEncodeHint::VoiceEncode_Voice", (int64)EOnsetAudioEncodeHint::VoiceEncode_Voice },
		{ "EOnsetAudioEncodeHint::VoiceEncode_Audio", (int64)EOnsetAudioEncodeHint::VoiceEncode_Audio },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnsetVoip_EOnsetAudioEncodeHint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OnsetVoip,
	nullptr,
	"EOnsetAudioEncodeHint",
	"EOnsetAudioEncodeHint",
	Z_Construct_UEnum_OnsetVoip_EOnsetAudioEncodeHint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OnsetVoip_EOnsetAudioEncodeHint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OnsetVoip_EOnsetAudioEncodeHint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OnsetVoip_EOnsetAudioEncodeHint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OnsetVoip_EOnsetAudioEncodeHint()
{
	if (!Z_Registration_Info_UEnum_EOnsetAudioEncodeHint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOnsetAudioEncodeHint.InnerSingleton, Z_Construct_UEnum_OnsetVoip_EOnsetAudioEncodeHint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOnsetAudioEncodeHint.InnerSingleton;
}
// End Enum EOnsetAudioEncodeHint

// Begin ScriptStruct FNameplateAttachParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NameplateAttachParam;
class UScriptStruct* FNameplateAttachParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NameplateAttachParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NameplateAttachParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNameplateAttachParam, (UObject*)Z_Construct_UPackage__Script_OnsetVoip(), TEXT("NameplateAttachParam"));
	}
	return Z_Registration_Info_UScriptStruct_NameplateAttachParam.OuterSingleton;
}
template<> ONSETVOIP_API UScriptStruct* StaticStruct<FNameplateAttachParam>()
{
	return FNameplateAttachParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNameplateAttachParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[] = {
		{ "Category", "Nameplate Attachment Parameters" },
		{ "Comment", "// The socket to which the namteplate widget component attaches to.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "The socket to which the namteplate widget component attaches to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeAttachLocation_MetaData[] = {
		{ "Category", "Nameplate Attachment Parameters" },
		{ "Comment", "// Relative attach location of the component.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "Relative attach location of the component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdjustAttachZAccordingToActorBounds_MetaData[] = {
		{ "Category", "Nameplate Attachment Parameters" },
		{ "Comment", "// If this is true half of the bounds/size of the pawn/character is added to the relative attach location to estimate it's above the pawn/character visible mesh.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "If this is true half of the bounds/size of the pawn/character is added to the relative attach location to estimate it's above the pawn/character visible mesh." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeAttachLocation;
	static void NewProp_bAdjustAttachZAccordingToActorBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdjustAttachZAccordingToActorBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNameplateAttachParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNameplateAttachParam_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNameplateAttachParam, AttachSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSocketName_MetaData), NewProp_AttachSocketName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNameplateAttachParam_Statics::NewProp_RelativeAttachLocation = { "RelativeAttachLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNameplateAttachParam, RelativeAttachLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeAttachLocation_MetaData), NewProp_RelativeAttachLocation_MetaData) };
void Z_Construct_UScriptStruct_FNameplateAttachParam_Statics::NewProp_bAdjustAttachZAccordingToActorBounds_SetBit(void* Obj)
{
	((FNameplateAttachParam*)Obj)->bAdjustAttachZAccordingToActorBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNameplateAttachParam_Statics::NewProp_bAdjustAttachZAccordingToActorBounds = { "bAdjustAttachZAccordingToActorBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNameplateAttachParam), &Z_Construct_UScriptStruct_FNameplateAttachParam_Statics::NewProp_bAdjustAttachZAccordingToActorBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdjustAttachZAccordingToActorBounds_MetaData), NewProp_bAdjustAttachZAccordingToActorBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNameplateAttachParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameplateAttachParam_Statics::NewProp_AttachSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameplateAttachParam_Statics::NewProp_RelativeAttachLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameplateAttachParam_Statics::NewProp_bAdjustAttachZAccordingToActorBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameplateAttachParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNameplateAttachParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnsetVoip,
	nullptr,
	&NewStructOps,
	"NameplateAttachParam",
	Z_Construct_UScriptStruct_FNameplateAttachParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameplateAttachParam_Statics::PropPointers),
	sizeof(FNameplateAttachParam),
	alignof(FNameplateAttachParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameplateAttachParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNameplateAttachParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNameplateAttachParam()
{
	if (!Z_Registration_Info_UScriptStruct_NameplateAttachParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NameplateAttachParam.InnerSingleton, Z_Construct_UScriptStruct_FNameplateAttachParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NameplateAttachParam.InnerSingleton;
}
// End ScriptStruct FNameplateAttachParam

// Begin ScriptStruct FVoiceEncoderSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VoiceEncoderSettings;
class UScriptStruct* FVoiceEncoderSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VoiceEncoderSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VoiceEncoderSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoiceEncoderSettings, (UObject*)Z_Construct_UPackage__Script_OnsetVoip(), TEXT("VoiceEncoderSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VoiceEncoderSettings.OuterSingleton;
}
template<> ONSETVOIP_API UScriptStruct* StaticStruct<FVoiceEncoderSettings>()
{
	return FVoiceEncoderSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncodingHint_MetaData[] = {
		{ "Category", "Voice Encoder" },
		{ "Comment", "// Copied setting from VoiceConfig.h, used to tell encoder what type of audio is being encoded.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "Copied setting from VoiceConfig.h, used to tell encoder what type of audio is being encoded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdvancedEncoderSettings_MetaData[] = {
		{ "Category", "Voice Encoder" },
		{ "Comment", "// Enables advanced encoder settings.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "Enables advanced encoder settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVBR_MetaData[] = {
		{ "Category", "Voice Encoder" },
		{ "Comment", "// Encoder variable bitrate.\n" },
		{ "EditCondition", "bAdvancedEncoderSettings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "Encoder variable bitrate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Complexity_MetaData[] = {
		{ "Category", "Voice Encoder" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "// Encoder algorithmic complexity. A higher value will results in better quality but also requires more CPU usage.\n" },
		{ "EditCondition", "bAdvancedEncoderSettings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "Encoder algorithmic complexity. A higher value will results in better quality but also requires more CPU usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitRate_MetaData[] = {
		{ "Category", "Voice Encoder" },
		{ "ClampMax", "512000" },
		{ "ClampMin", "500" },
		{ "Comment", "// Encoder bitrate. See https://wiki.xiph.org/Opus_Recommended_Settings Higher values may require more bandwidth.\n" },
		{ "EditCondition", "bAdvancedEncoderSettings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "Encoder bitrate. See https:wiki.xiph.org/Opus_Recommended_Settings Higher values may require more bandwidth." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncodingHint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EncodingHint;
	static void NewProp_bAdvancedEncoderSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvancedEncoderSettings;
	static void NewProp_bEnableVBR_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVBR;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Complexity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BitRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoiceEncoderSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::NewProp_EncodingHint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::NewProp_EncodingHint = { "EncodingHint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoiceEncoderSettings, EncodingHint), Z_Construct_UEnum_OnsetVoip_EOnsetAudioEncodeHint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncodingHint_MetaData), NewProp_EncodingHint_MetaData) }; // 3084006216
void Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::NewProp_bAdvancedEncoderSettings_SetBit(void* Obj)
{
	((FVoiceEncoderSettings*)Obj)->bAdvancedEncoderSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::NewProp_bAdvancedEncoderSettings = { "bAdvancedEncoderSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoiceEncoderSettings), &Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::NewProp_bAdvancedEncoderSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdvancedEncoderSettings_MetaData), NewProp_bAdvancedEncoderSettings_MetaData) };
void Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::NewProp_bEnableVBR_SetBit(void* Obj)
{
	((FVoiceEncoderSettings*)Obj)->bEnableVBR = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::NewProp_bEnableVBR = { "bEnableVBR", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVoiceEncoderSettings), &Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::NewProp_bEnableVBR_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableVBR_MetaData), NewProp_bEnableVBR_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::NewProp_Complexity = { "Complexity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoiceEncoderSettings, Complexity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Complexity_MetaData), NewProp_Complexity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::NewProp_BitRate = { "BitRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVoiceEncoderSettings, BitRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitRate_MetaData), NewProp_BitRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::NewProp_EncodingHint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::NewProp_EncodingHint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::NewProp_bAdvancedEncoderSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::NewProp_bEnableVBR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::NewProp_Complexity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::NewProp_BitRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnsetVoip,
	nullptr,
	&NewStructOps,
	"VoiceEncoderSettings",
	Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::PropPointers),
	sizeof(FVoiceEncoderSettings),
	alignof(FVoiceEncoderSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVoiceEncoderSettings()
{
	if (!Z_Registration_Info_UScriptStruct_VoiceEncoderSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VoiceEncoderSettings.InnerSingleton, Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VoiceEncoderSettings.InnerSingleton;
}
// End ScriptStruct FVoiceEncoderSettings

// Begin Class UOnsetVoipSettings
void UOnsetVoipSettings::StaticRegisterNativesUOnsetVoipSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnsetVoipSettings);
UClass* Z_Construct_UClass_UOnsetVoipSettings_NoRegister()
{
	return UOnsetVoipSettings::StaticClass();
}
struct Z_Construct_UClass_UOnsetVoipSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Onset VoIP Settings" },
		{ "IncludePath", "OnsetVoipSettings.h" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceCaptureSampleRate_MetaData[] = {
		{ "Category", "Voice" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "Microphone capture sample rate. Possible values are 8000, 12000, 16000, 24000 and 48000. Higher values may require more bandwidth." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceCaptureChannels_MetaData[] = {
		{ "Category", "Voice" },
		{ "ClampMax", "2" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "Number of microphone capturing channels. Possible values are 1 (mono) or 2 (stereo), default: 1. Stereo requires more bandwidth." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceEncoderSettings_MetaData[] = {
		{ "Category", "Voice" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOnsetVoipTalkerClass_MetaData[] = {
		{ "Category", "Voice" },
		{ "Comment", "// This setting let's you specifiy a child class of UOnsetVoipTalker. Leave it as is by default.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "This setting let's you specifiy a child class of UOnsetVoipTalker. Leave it as is by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundAttenuation3D_MetaData[] = {
		{ "Category", "Voice|Playback" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundAttenuation2D_MetaData[] = {
		{ "Category", "Voice|Playback" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSourceEffectPresetChain3D_MetaData[] = {
		{ "Category", "Voice|Playback" },
		{ "Comment", "// Default USoundEffectSourcePresetChain to use for the voip sound wave when a player talks in 3D space.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "Default USoundEffectSourcePresetChain to use for the voip sound wave when a player talks in 3D space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSourceEffectPresetChain2D_MetaData[] = {
		{ "Category", "Voice|Playback" },
		{ "Comment", "// Default USoundEffectSourcePresetChain to use for the voip sound wave when a player talks in 2D space (voice channel).\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "Default USoundEffectSourcePresetChain to use for the voip sound wave when a player talks in 2D space (voice channel)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNameplateWidget_MetaData[] = {
		{ "Category", "Voice|Nameplate" },
		{ "Comment", "// What widget to use for the nameplate widget component on dynamic creation. If you attach a nameplate component manually then it will not use this but rather the widget class already set in the component details.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "What widget to use for the nameplate widget component on dynamic creation. If you attach a nameplate component manually then it will not use this but rather the widget class already set in the component details." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNameplateComponentClass_MetaData[] = {
		{ "Category", "Voice|Nameplate" },
		{ "Comment", "// Default nameplate component class that will be used for dynamic creation and attachment if no component was added manaully by the user on the pawn/character class.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "Default nameplate component class that will be used for dynamic creation and attachment if no component was added manaully by the user on the pawn/character class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameplateAttachParams_MetaData[] = {
		{ "Category", "Voice|Nameplate" },
		{ "Comment", "// For dynamic creation and attachment of the nameplate component you can specify some rules here.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "For dynamic creation and attachment of the nameplate component you can specify some rules here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameplateMaxDrawDistance_MetaData[] = {
		{ "Category", "Voice|Nameplate" },
		{ "Comment", "// The default nameplate draw distance or 0.0 to\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "The default nameplate draw distance or 0.0 to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBufferPlaybackDelay_MetaData[] = {
		{ "Category", "Voice|Advanced" },
		{ "ClampMax", "10.000000" },
		{ "ClampMin", "0.300000" },
		{ "Comment", "// Maximum time we allow to pass for received voice data to play.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "Maximum time we allow to pass for received voice data to play." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfFramesToStopPlaybackIfNoAudio_MetaData[] = {
		{ "Category", "Voice|Advanced" },
		{ "ClampMin", "0" },
		{ "Comment", "// Number of frames to wait to call Stop() on an UOnsetVoipAudioComponent if there is no audio to play. 0 to disable.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "Number of frames to wait to call Stop() on an UOnsetVoipAudioComponent if there is no audio to play. 0 to disable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDistanceBasedRelevancy_MetaData[] = {
		{ "Category", "Voice|Advanced" },
		{ "Comment", "// Enable for the server to do additional distance checks between two players for voice packet replication in the world channel (0).\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "Enable for the server to do additional distance checks between two players for voice packet replication in the world channel (0)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxReplicationDistance_MetaData[] = {
		{ "Category", "Voice|Advanced" },
		{ "ClampMin", "1.000000" },
		{ "Comment", "// The distance to check for if two players are relevant to each other for the world channel (0). In Unreal Units (centimeter).\n" },
		{ "EditCondition", "bUseDistanceBasedRelevancy" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "The distance to check for if two players are relevant to each other for the world channel (0). In Unreal Units (centimeter)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundWaveVolume_MetaData[] = {
		{ "Category", "Voice|Advanced" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Set the default volume of sound waves that play voice.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "ToolTip", "Set the default volume of sound waves that play voice." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FFmpegPath_MetaData[] = {
		{ "Category", "Voice|Advanced" },
		{ "ModuleRelativePath", "Public/OnsetVoipSettings.h" },
		{ "RelativeToGameDir", "" },
		{ "ToolTip", "The file path to the FFmpeg executable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_VoiceCaptureSampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VoiceCaptureChannels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VoiceEncoderSettings;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultOnsetVoipTalkerClass;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultSoundAttenuation3D;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultSoundAttenuation2D;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultSourceEffectPresetChain3D;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultSourceEffectPresetChain2D;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultNameplateWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultNameplateComponentClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NameplateAttachParams_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NameplateAttachParams;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NameplateMaxDrawDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxBufferPlaybackDelay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfFramesToStopPlaybackIfNoAudio;
	static void NewProp_bUseDistanceBasedRelevancy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDistanceBasedRelevancy;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxReplicationDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultSoundWaveVolume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FFmpegPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnsetVoipSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_VoiceCaptureSampleRate = { "VoiceCaptureSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipSettings, VoiceCaptureSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceCaptureSampleRate_MetaData), NewProp_VoiceCaptureSampleRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_VoiceCaptureChannels = { "VoiceCaptureChannels", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipSettings, VoiceCaptureChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceCaptureChannels_MetaData), NewProp_VoiceCaptureChannels_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_VoiceEncoderSettings = { "VoiceEncoderSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipSettings, VoiceEncoderSettings), Z_Construct_UScriptStruct_FVoiceEncoderSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceEncoderSettings_MetaData), NewProp_VoiceEncoderSettings_MetaData) }; // 331364430
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_DefaultOnsetVoipTalkerClass = { "DefaultOnsetVoipTalkerClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipSettings, DefaultOnsetVoipTalkerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultOnsetVoipTalkerClass_MetaData), NewProp_DefaultOnsetVoipTalkerClass_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_DefaultSoundAttenuation3D = { "DefaultSoundAttenuation3D", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipSettings, DefaultSoundAttenuation3D), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSoundAttenuation3D_MetaData), NewProp_DefaultSoundAttenuation3D_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_DefaultSoundAttenuation2D = { "DefaultSoundAttenuation2D", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipSettings, DefaultSoundAttenuation2D), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSoundAttenuation2D_MetaData), NewProp_DefaultSoundAttenuation2D_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_DefaultSourceEffectPresetChain3D = { "DefaultSourceEffectPresetChain3D", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipSettings, DefaultSourceEffectPresetChain3D), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSourceEffectPresetChain3D_MetaData), NewProp_DefaultSourceEffectPresetChain3D_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_DefaultSourceEffectPresetChain2D = { "DefaultSourceEffectPresetChain2D", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipSettings, DefaultSourceEffectPresetChain2D), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSourceEffectPresetChain2D_MetaData), NewProp_DefaultSourceEffectPresetChain2D_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_DefaultNameplateWidget = { "DefaultNameplateWidget", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipSettings, DefaultNameplateWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultNameplateWidget_MetaData), NewProp_DefaultNameplateWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_DefaultNameplateComponentClass = { "DefaultNameplateComponentClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipSettings, DefaultNameplateComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOnsetNameplateComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultNameplateComponentClass_MetaData), NewProp_DefaultNameplateComponentClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_NameplateAttachParams_Inner = { "NameplateAttachParams", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNameplateAttachParam, METADATA_PARAMS(0, nullptr) }; // 2924297831
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_NameplateAttachParams = { "NameplateAttachParams", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipSettings, NameplateAttachParams), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameplateAttachParams_MetaData), NewProp_NameplateAttachParams_MetaData) }; // 2924297831
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_NameplateMaxDrawDistance = { "NameplateMaxDrawDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipSettings, NameplateMaxDrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameplateMaxDrawDistance_MetaData), NewProp_NameplateMaxDrawDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_MaxBufferPlaybackDelay = { "MaxBufferPlaybackDelay", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipSettings, MaxBufferPlaybackDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBufferPlaybackDelay_MetaData), NewProp_MaxBufferPlaybackDelay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_NumberOfFramesToStopPlaybackIfNoAudio = { "NumberOfFramesToStopPlaybackIfNoAudio", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipSettings, NumberOfFramesToStopPlaybackIfNoAudio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfFramesToStopPlaybackIfNoAudio_MetaData), NewProp_NumberOfFramesToStopPlaybackIfNoAudio_MetaData) };
void Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_bUseDistanceBasedRelevancy_SetBit(void* Obj)
{
	((UOnsetVoipSettings*)Obj)->bUseDistanceBasedRelevancy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_bUseDistanceBasedRelevancy = { "bUseDistanceBasedRelevancy", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOnsetVoipSettings), &Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_bUseDistanceBasedRelevancy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDistanceBasedRelevancy_MetaData), NewProp_bUseDistanceBasedRelevancy_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_MaxReplicationDistance = { "MaxReplicationDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipSettings, MaxReplicationDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxReplicationDistance_MetaData), NewProp_MaxReplicationDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_DefaultSoundWaveVolume = { "DefaultSoundWaveVolume", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipSettings, DefaultSoundWaveVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSoundWaveVolume_MetaData), NewProp_DefaultSoundWaveVolume_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_FFmpegPath = { "FFmpegPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipSettings, FFmpegPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FFmpegPath_MetaData), NewProp_FFmpegPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnsetVoipSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_VoiceCaptureSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_VoiceCaptureChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_VoiceEncoderSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_DefaultOnsetVoipTalkerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_DefaultSoundAttenuation3D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_DefaultSoundAttenuation2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_DefaultSourceEffectPresetChain3D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_DefaultSourceEffectPresetChain2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_DefaultNameplateWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_DefaultNameplateComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_NameplateAttachParams_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_NameplateAttachParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_NameplateMaxDrawDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_MaxBufferPlaybackDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_NumberOfFramesToStopPlaybackIfNoAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_bUseDistanceBasedRelevancy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_MaxReplicationDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_DefaultSoundWaveVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipSettings_Statics::NewProp_FFmpegPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOnsetVoipSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_OnsetVoip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnsetVoipSettings_Statics::ClassParams = {
	&UOnsetVoipSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOnsetVoipSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnsetVoipSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnsetVoipSettings()
{
	if (!Z_Registration_Info_UClass_UOnsetVoipSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnsetVoipSettings.OuterSingleton, Z_Construct_UClass_UOnsetVoipSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnsetVoipSettings.OuterSingleton;
}
template<> ONSETVOIP_API UClass* StaticClass<UOnsetVoipSettings>()
{
	return UOnsetVoipSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnsetVoipSettings);
UOnsetVoipSettings::~UOnsetVoipSettings() {}
// End Class UOnsetVoipSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOnsetAudioEncodeHint_StaticEnum, TEXT("EOnsetAudioEncodeHint"), &Z_Registration_Info_UEnum_EOnsetAudioEncodeHint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3084006216U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNameplateAttachParam::StaticStruct, Z_Construct_UScriptStruct_FNameplateAttachParam_Statics::NewStructOps, TEXT("NameplateAttachParam"), &Z_Registration_Info_UScriptStruct_NameplateAttachParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNameplateAttachParam), 2924297831U) },
		{ FVoiceEncoderSettings::StaticStruct, Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics::NewStructOps, TEXT("VoiceEncoderSettings"), &Z_Registration_Info_UScriptStruct_VoiceEncoderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVoiceEncoderSettings), 331364430U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnsetVoipSettings, UOnsetVoipSettings::StaticClass, TEXT("UOnsetVoipSettings"), &Z_Registration_Info_UClass_UOnsetVoipSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnsetVoipSettings), 1872802821U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSettings_h_3235443499(TEXT("/Script/OnsetVoip"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
