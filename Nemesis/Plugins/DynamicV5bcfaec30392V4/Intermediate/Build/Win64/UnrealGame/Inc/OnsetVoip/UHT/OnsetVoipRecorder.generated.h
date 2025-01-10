// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Recording/OnsetVoipRecorder.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONSETVOIP_OnsetVoipRecorder_generated_h
#error "OnsetVoipRecorder.generated.h already included, missing '#pragma once' in OnsetVoipRecorder.h"
#endif
#define ONSETVOIP_OnsetVoipRecorder_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_Recording_OnsetVoipRecorder_h


#define FOREACH_ENUM_EONSETAUDIORECORDINGFORMAT(op) \
	op(EOnsetAudioRecordingFormat::FORMAT_PCM) \
	op(EOnsetAudioRecordingFormat::FORMAT_WAV) \
	op(EOnsetAudioRecordingFormat::FORMAT_MP3) 

enum class EOnsetAudioRecordingFormat : uint8;
template<> struct TIsUEnumClass<EOnsetAudioRecordingFormat> { enum { Value = true }; };
template<> ONSETVOIP_API UEnum* StaticEnum<EOnsetAudioRecordingFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
