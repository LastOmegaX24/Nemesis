// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnsetVoipSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONSETVOIP_OnsetVoipSettings_generated_h
#error "OnsetVoipSettings.generated.h already included, missing '#pragma once' in OnsetVoipSettings.h"
#endif
#define ONSETVOIP_OnsetVoipSettings_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSettings_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNameplateAttachParam_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONSETVOIP_API UScriptStruct* StaticStruct<struct FNameplateAttachParam>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSettings_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoiceEncoderSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONSETVOIP_API UScriptStruct* StaticStruct<struct FVoiceEncoderSettings>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSettings_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnsetVoipSettings(); \
	friend struct Z_Construct_UClass_UOnsetVoipSettings_Statics; \
public: \
	DECLARE_CLASS(UOnsetVoipSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnsetVoip"), NO_API) \
	DECLARE_SERIALIZER(UOnsetVoipSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSettings_h_74_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOnsetVoipSettings(UOnsetVoipSettings&&); \
	UOnsetVoipSettings(const UOnsetVoipSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnsetVoipSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnsetVoipSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnsetVoipSettings) \
	NO_API virtual ~UOnsetVoipSettings();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSettings_h_71_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSettings_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSettings_h_74_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSettings_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONSETVOIP_API UClass* StaticClass<class UOnsetVoipSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSettings_h


#define FOREACH_ENUM_EONSETAUDIOENCODEHINT(op) \
	op(EOnsetAudioEncodeHint::VoiceEncode_Voice) \
	op(EOnsetAudioEncodeHint::VoiceEncode_Audio) 

enum class EOnsetAudioEncodeHint : uint8;
template<> struct TIsUEnumClass<EOnsetAudioEncodeHint> { enum { Value = true }; };
template<> ONSETVOIP_API UEnum* StaticEnum<EOnsetAudioEncodeHint>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
