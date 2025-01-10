// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnsetVoip/Public/OnsetVoipLocalPlayerSubsystem.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnsetVoipLocalPlayerSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_NoRegister();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipSoundWave_NoRegister();
ONSETVOIP_API UEnum* Z_Construct_UEnum_OnsetVoip_EOnsetAudioRecordingFormat();
ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnsetVoip();
// End Cross Module References

// Begin Delegate FOnVoipTalkingStateChange
struct Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature_Statics
{
	struct OnsetVoipLocalPlayerSubsystem_eventOnVoipTalkingStateChange_Parms
	{
		bool bIsTalking;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnsetVoipLocalPlayerSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsTalking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTalking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature_Statics::NewProp_bIsTalking_SetBit(void* Obj)
{
	((OnsetVoipLocalPlayerSubsystem_eventOnVoipTalkingStateChange_Parms*)Obj)->bIsTalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature_Statics::NewProp_bIsTalking = { "bIsTalking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipLocalPlayerSubsystem_eventOnVoipTalkingStateChange_Parms), &Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature_Statics::NewProp_bIsTalking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature_Statics::NewProp_bIsTalking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem, nullptr, "OnVoipTalkingStateChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature_Statics::OnsetVoipLocalPlayerSubsystem_eventOnVoipTalkingStateChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature_Statics::OnsetVoipLocalPlayerSubsystem_eventOnVoipTalkingStateChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UOnsetVoipLocalPlayerSubsystem::FOnVoipTalkingStateChange_DelegateWrapper(const FMulticastScriptDelegate& OnVoipTalkingStateChange, bool bIsTalking)
{
	struct OnsetVoipLocalPlayerSubsystem_eventOnVoipTalkingStateChange_Parms
	{
		bool bIsTalking;
	};
	OnsetVoipLocalPlayerSubsystem_eventOnVoipTalkingStateChange_Parms Parms;
	Parms.bIsTalking=bIsTalking ? true : false;
	OnVoipTalkingStateChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnVoipTalkingStateChange

// Begin Class UOnsetVoipLocalPlayerSubsystem Function ChangeVoiceCaptureDevice
struct Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ChangeVoiceCaptureDevice_Statics
{
	struct OnsetVoipLocalPlayerSubsystem_eventChangeVoiceCaptureDevice_Parms
	{
		FString DeviceName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "// Change the input device used for capturing our voice.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipLocalPlayerSubsystem.h" },
		{ "ToolTip", "Change the input device used for capturing our voice." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ChangeVoiceCaptureDevice_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipLocalPlayerSubsystem_eventChangeVoiceCaptureDevice_Parms, DeviceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceName_MetaData), NewProp_DeviceName_MetaData) };
void Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ChangeVoiceCaptureDevice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipLocalPlayerSubsystem_eventChangeVoiceCaptureDevice_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ChangeVoiceCaptureDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipLocalPlayerSubsystem_eventChangeVoiceCaptureDevice_Parms), &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ChangeVoiceCaptureDevice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ChangeVoiceCaptureDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ChangeVoiceCaptureDevice_Statics::NewProp_DeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ChangeVoiceCaptureDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ChangeVoiceCaptureDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ChangeVoiceCaptureDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem, nullptr, "ChangeVoiceCaptureDevice", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ChangeVoiceCaptureDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ChangeVoiceCaptureDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ChangeVoiceCaptureDevice_Statics::OnsetVoipLocalPlayerSubsystem_eventChangeVoiceCaptureDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ChangeVoiceCaptureDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ChangeVoiceCaptureDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ChangeVoiceCaptureDevice_Statics::OnsetVoipLocalPlayerSubsystem_eventChangeVoiceCaptureDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ChangeVoiceCaptureDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ChangeVoiceCaptureDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipLocalPlayerSubsystem::execChangeVoiceCaptureDevice)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ChangeVoiceCaptureDevice(Z_Param_DeviceName);
	P_NATIVE_END;
}
// End Class UOnsetVoipLocalPlayerSubsystem Function ChangeVoiceCaptureDevice

// Begin Class UOnsetVoipLocalPlayerSubsystem Function GetCurrentAmplitude
struct Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetCurrentAmplitude_Statics
{
	struct OnsetVoipLocalPlayerSubsystem_eventGetCurrentAmplitude_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "// The current loudness of the microphone between 0.0 and 1.0, returns -1.0 if this function is not supported by the current platform. Currently this is only supported on Windows. Not affected by cvar voice.MicInputGain2.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipLocalPlayerSubsystem.h" },
		{ "ToolTip", "The current loudness of the microphone between 0.0 and 1.0, returns -1.0 if this function is not supported by the current platform. Currently this is only supported on Windows. Not affected by cvar voice.MicInputGain2." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetCurrentAmplitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipLocalPlayerSubsystem_eventGetCurrentAmplitude_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetCurrentAmplitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetCurrentAmplitude_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetCurrentAmplitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetCurrentAmplitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem, nullptr, "GetCurrentAmplitude", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetCurrentAmplitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetCurrentAmplitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetCurrentAmplitude_Statics::OnsetVoipLocalPlayerSubsystem_eventGetCurrentAmplitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetCurrentAmplitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetCurrentAmplitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetCurrentAmplitude_Statics::OnsetVoipLocalPlayerSubsystem_eventGetCurrentAmplitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetCurrentAmplitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetCurrentAmplitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipLocalPlayerSubsystem::execGetCurrentAmplitude)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentAmplitude();
	P_NATIVE_END;
}
// End Class UOnsetVoipLocalPlayerSubsystem Function GetCurrentAmplitude

// Begin Class UOnsetVoipLocalPlayerSubsystem Function GetRecordingFile
struct Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetRecordingFile_Statics
{
	struct OnsetVoipLocalPlayerSubsystem_eventGetRecordingFile_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "// Returns the directory + filename recording to.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipLocalPlayerSubsystem.h" },
		{ "ToolTip", "Returns the directory + filename recording to." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetRecordingFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipLocalPlayerSubsystem_eventGetRecordingFile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetRecordingFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetRecordingFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetRecordingFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetRecordingFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem, nullptr, "GetRecordingFile", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetRecordingFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetRecordingFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetRecordingFile_Statics::OnsetVoipLocalPlayerSubsystem_eventGetRecordingFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetRecordingFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetRecordingFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetRecordingFile_Statics::OnsetVoipLocalPlayerSubsystem_eventGetRecordingFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetRecordingFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetRecordingFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipLocalPlayerSubsystem::execGetRecordingFile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetRecordingFile();
	P_NATIVE_END;
}
// End Class UOnsetVoipLocalPlayerSubsystem Function GetRecordingFile

// Begin Class UOnsetVoipLocalPlayerSubsystem Function IsCapturingVoice
struct Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsCapturingVoice_Statics
{
	struct OnsetVoipLocalPlayerSubsystem_eventIsCapturingVoice_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "// Returns true if our voice capture is enabled. To check if we actually talk use IsTalking().\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipLocalPlayerSubsystem.h" },
		{ "ToolTip", "Returns true if our voice capture is enabled. To check if we actually talk use IsTalking()." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsCapturingVoice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipLocalPlayerSubsystem_eventIsCapturingVoice_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsCapturingVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipLocalPlayerSubsystem_eventIsCapturingVoice_Parms), &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsCapturingVoice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsCapturingVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsCapturingVoice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsCapturingVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsCapturingVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem, nullptr, "IsCapturingVoice", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsCapturingVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsCapturingVoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsCapturingVoice_Statics::OnsetVoipLocalPlayerSubsystem_eventIsCapturingVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsCapturingVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsCapturingVoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsCapturingVoice_Statics::OnsetVoipLocalPlayerSubsystem_eventIsCapturingVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsCapturingVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsCapturingVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipLocalPlayerSubsystem::execIsCapturingVoice)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCapturingVoice();
	P_NATIVE_END;
}
// End Class UOnsetVoipLocalPlayerSubsystem Function IsCapturingVoice

// Begin Class UOnsetVoipLocalPlayerSubsystem Function IsRecording
struct Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsRecording_Statics
{
	struct OnsetVoipLocalPlayerSubsystem_eventIsRecording_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "// Returns true if currently recording.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipLocalPlayerSubsystem.h" },
		{ "ToolTip", "Returns true if currently recording." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipLocalPlayerSubsystem_eventIsRecording_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipLocalPlayerSubsystem_eventIsRecording_Parms), &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsRecording_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem, nullptr, "IsRecording", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsRecording_Statics::OnsetVoipLocalPlayerSubsystem_eventIsRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsRecording_Statics::OnsetVoipLocalPlayerSubsystem_eventIsRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipLocalPlayerSubsystem::execIsRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRecording();
	P_NATIVE_END;
}
// End Class UOnsetVoipLocalPlayerSubsystem Function IsRecording

// Begin Class UOnsetVoipLocalPlayerSubsystem Function IsTalking
struct Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsTalking_Statics
{
	struct OnsetVoipLocalPlayerSubsystem_eventIsTalking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "// Returns true if our voice capture is enabled and the microphone detected voice recently.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipLocalPlayerSubsystem.h" },
		{ "ToolTip", "Returns true if our voice capture is enabled and the microphone detected voice recently." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsTalking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipLocalPlayerSubsystem_eventIsTalking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsTalking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipLocalPlayerSubsystem_eventIsTalking_Parms), &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsTalking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsTalking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsTalking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsTalking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsTalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem, nullptr, "IsTalking", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsTalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsTalking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsTalking_Statics::OnsetVoipLocalPlayerSubsystem_eventIsTalking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsTalking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsTalking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsTalking_Statics::OnsetVoipLocalPlayerSubsystem_eventIsTalking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsTalking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsTalking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipLocalPlayerSubsystem::execIsTalking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTalking();
	P_NATIVE_END;
}
// End Class UOnsetVoipLocalPlayerSubsystem Function IsTalking

// Begin Class UOnsetVoipLocalPlayerSubsystem Function StartRecording
struct Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics
{
	struct OnsetVoipLocalPlayerSubsystem_eventStartRecording_Parms
	{
		FString Filename;
		EOnsetAudioRecordingFormat RecordingFormat;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "/* Start recording the local microphone.\n\x09 * Filename: If empty a file will be generated.\n\x09 * Return false if recording is already running or failed to start recording.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OnsetVoipLocalPlayerSubsystem.h" },
		{ "ToolTip", "Start recording the local microphone.\n       * Filename: If empty a file will be generated.\n       * Return false if recording is already running or failed to start recording." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RecordingFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RecordingFormat;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipLocalPlayerSubsystem_eventStartRecording_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::NewProp_RecordingFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::NewProp_RecordingFormat = { "RecordingFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipLocalPlayerSubsystem_eventStartRecording_Parms, RecordingFormat), Z_Construct_UEnum_OnsetVoip_EOnsetAudioRecordingFormat, METADATA_PARAMS(0, nullptr) }; // 2346605622
void Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipLocalPlayerSubsystem_eventStartRecording_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipLocalPlayerSubsystem_eventStartRecording_Parms), &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::NewProp_RecordingFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::NewProp_RecordingFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem, nullptr, "StartRecording", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::OnsetVoipLocalPlayerSubsystem_eventStartRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::OnsetVoipLocalPlayerSubsystem_eventStartRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipLocalPlayerSubsystem::execStartRecording)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_GET_ENUM(EOnsetAudioRecordingFormat,Z_Param_RecordingFormat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartRecording(Z_Param_Filename,EOnsetAudioRecordingFormat(Z_Param_RecordingFormat));
	P_NATIVE_END;
}
// End Class UOnsetVoipLocalPlayerSubsystem Function StartRecording

// Begin Class UOnsetVoipLocalPlayerSubsystem Function StopRecording
struct Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StopRecording_Statics
{
	struct OnsetVoipLocalPlayerSubsystem_eventStopRecording_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "// Stop recording. Returns false if not recording.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipLocalPlayerSubsystem.h" },
		{ "ToolTip", "Stop recording. Returns false if not recording." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StopRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipLocalPlayerSubsystem_eventStopRecording_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StopRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipLocalPlayerSubsystem_eventStopRecording_Parms), &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StopRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StopRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StopRecording_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StopRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StopRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem, nullptr, "StopRecording", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StopRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StopRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StopRecording_Statics::OnsetVoipLocalPlayerSubsystem_eventStopRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StopRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StopRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StopRecording_Statics::OnsetVoipLocalPlayerSubsystem_eventStopRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StopRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StopRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipLocalPlayerSubsystem::execStopRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StopRecording();
	P_NATIVE_END;
}
// End Class UOnsetVoipLocalPlayerSubsystem Function StopRecording

// Begin Class UOnsetVoipLocalPlayerSubsystem Function ToggleLoopback
struct Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleLoopback_Statics
{
	struct OnsetVoipLocalPlayerSubsystem_eventToggleLoopback_Parms
	{
		bool bLoopback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "// Plays our own microphone audio. Voice capture must be enabled (ToggleVoiceCapture).\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipLocalPlayerSubsystem.h" },
		{ "ToolTip", "Plays our own microphone audio. Voice capture must be enabled (ToggleVoiceCapture)." },
	};
#endif // WITH_METADATA
	static void NewProp_bLoopback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleLoopback_Statics::NewProp_bLoopback_SetBit(void* Obj)
{
	((OnsetVoipLocalPlayerSubsystem_eventToggleLoopback_Parms*)Obj)->bLoopback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleLoopback_Statics::NewProp_bLoopback = { "bLoopback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipLocalPlayerSubsystem_eventToggleLoopback_Parms), &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleLoopback_Statics::NewProp_bLoopback_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleLoopback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleLoopback_Statics::NewProp_bLoopback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleLoopback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleLoopback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem, nullptr, "ToggleLoopback", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleLoopback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleLoopback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleLoopback_Statics::OnsetVoipLocalPlayerSubsystem_eventToggleLoopback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleLoopback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleLoopback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleLoopback_Statics::OnsetVoipLocalPlayerSubsystem_eventToggleLoopback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleLoopback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleLoopback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipLocalPlayerSubsystem::execToggleLoopback)
{
	P_GET_UBOOL(Z_Param_bLoopback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleLoopback(Z_Param_bLoopback);
	P_NATIVE_END;
}
// End Class UOnsetVoipLocalPlayerSubsystem Function ToggleLoopback

// Begin Class UOnsetVoipLocalPlayerSubsystem Function ToggleVoiceCapture
struct Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture_Statics
{
	struct OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCapture_Parms
	{
		bool bCapture;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "// Starts or stops voice capture on our microphone. This will make us speak on all channels we are part of on the server.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipLocalPlayerSubsystem.h" },
		{ "ToolTip", "Starts or stops voice capture on our microphone. This will make us speak on all channels we are part of on the server." },
	};
#endif // WITH_METADATA
	static void NewProp_bCapture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCapture;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture_Statics::NewProp_bCapture_SetBit(void* Obj)
{
	((OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCapture_Parms*)Obj)->bCapture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture_Statics::NewProp_bCapture = { "bCapture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCapture_Parms), &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture_Statics::NewProp_bCapture_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCapture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCapture_Parms), &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture_Statics::NewProp_bCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem, nullptr, "ToggleVoiceCapture", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture_Statics::OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture_Statics::OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipLocalPlayerSubsystem::execToggleVoiceCapture)
{
	P_GET_UBOOL(Z_Param_bCapture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ToggleVoiceCapture(Z_Param_bCapture);
	P_NATIVE_END;
}
// End Class UOnsetVoipLocalPlayerSubsystem Function ToggleVoiceCapture

// Begin Class UOnsetVoipLocalPlayerSubsystem Function ToggleVoiceCaptureWithChannel
struct Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics
{
	struct OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCaptureWithChannel_Parms
	{
		bool bCapture;
		int32 VoiceChannelId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "/*\n\x09* Same as ToggleVoiceCapture but takes a voice channel id which hints the server that we would like to talk on a specific channel.\n\x09* The talker/player must be set in the channel with UOnsetVoipTalker::SetVoiceChannel on the server first.\n\x09* Each call to ToggleVoiceCapture* will reset the capture channels set in a previous call.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OnsetVoipLocalPlayerSubsystem.h" },
		{ "ToolTip", "* Same as ToggleVoiceCapture but takes a voice channel id which hints the server that we would like to talk on a specific channel.\n* The talker/player must be set in the channel with UOnsetVoipTalker::SetVoiceChannel on the server first.\n* Each call to ToggleVoiceCapture* will reset the capture channels set in a previous call." },
	};
#endif // WITH_METADATA
	static void NewProp_bCapture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCapture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VoiceChannelId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::NewProp_bCapture_SetBit(void* Obj)
{
	((OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCaptureWithChannel_Parms*)Obj)->bCapture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::NewProp_bCapture = { "bCapture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCaptureWithChannel_Parms), &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::NewProp_bCapture_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::NewProp_VoiceChannelId = { "VoiceChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCaptureWithChannel_Parms, VoiceChannelId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCaptureWithChannel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCaptureWithChannel_Parms), &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::NewProp_bCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::NewProp_VoiceChannelId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem, nullptr, "ToggleVoiceCaptureWithChannel", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCaptureWithChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCaptureWithChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipLocalPlayerSubsystem::execToggleVoiceCaptureWithChannel)
{
	P_GET_UBOOL(Z_Param_bCapture);
	P_GET_PROPERTY(FIntProperty,Z_Param_VoiceChannelId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ToggleVoiceCaptureWithChannel(Z_Param_bCapture,Z_Param_VoiceChannelId);
	P_NATIVE_END;
}
// End Class UOnsetVoipLocalPlayerSubsystem Function ToggleVoiceCaptureWithChannel

// Begin Class UOnsetVoipLocalPlayerSubsystem Function ToggleVoiceCaptureWithChannels
struct Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics
{
	struct OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCaptureWithChannels_Parms
	{
		bool bCapture;
		TArray<int32> VoiceChannelIds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "// Please refer to ToggleVoiceCaptureWithChannel for an explanation. This function takes multiple voice channel ids.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipLocalPlayerSubsystem.h" },
		{ "ToolTip", "Please refer to ToggleVoiceCaptureWithChannel for an explanation. This function takes multiple voice channel ids." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceChannelIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bCapture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCapture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VoiceChannelIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VoiceChannelIds;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::NewProp_bCapture_SetBit(void* Obj)
{
	((OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCaptureWithChannels_Parms*)Obj)->bCapture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::NewProp_bCapture = { "bCapture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCaptureWithChannels_Parms), &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::NewProp_bCapture_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::NewProp_VoiceChannelIds_Inner = { "VoiceChannelIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::NewProp_VoiceChannelIds = { "VoiceChannelIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCaptureWithChannels_Parms, VoiceChannelIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceChannelIds_MetaData), NewProp_VoiceChannelIds_MetaData) };
void Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCaptureWithChannels_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCaptureWithChannels_Parms), &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::NewProp_bCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::NewProp_VoiceChannelIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::NewProp_VoiceChannelIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem, nullptr, "ToggleVoiceCaptureWithChannels", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCaptureWithChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::OnsetVoipLocalPlayerSubsystem_eventToggleVoiceCaptureWithChannels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipLocalPlayerSubsystem::execToggleVoiceCaptureWithChannels)
{
	P_GET_UBOOL(Z_Param_bCapture);
	P_GET_TARRAY_REF(int32,Z_Param_Out_VoiceChannelIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ToggleVoiceCaptureWithChannels(Z_Param_bCapture,Z_Param_Out_VoiceChannelIds);
	P_NATIVE_END;
}
// End Class UOnsetVoipLocalPlayerSubsystem Function ToggleVoiceCaptureWithChannels

// Begin Class UOnsetVoipLocalPlayerSubsystem
void UOnsetVoipLocalPlayerSubsystem::StaticRegisterNativesUOnsetVoipLocalPlayerSubsystem()
{
	UClass* Class = UOnsetVoipLocalPlayerSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeVoiceCaptureDevice", &UOnsetVoipLocalPlayerSubsystem::execChangeVoiceCaptureDevice },
		{ "GetCurrentAmplitude", &UOnsetVoipLocalPlayerSubsystem::execGetCurrentAmplitude },
		{ "GetRecordingFile", &UOnsetVoipLocalPlayerSubsystem::execGetRecordingFile },
		{ "IsCapturingVoice", &UOnsetVoipLocalPlayerSubsystem::execIsCapturingVoice },
		{ "IsRecording", &UOnsetVoipLocalPlayerSubsystem::execIsRecording },
		{ "IsTalking", &UOnsetVoipLocalPlayerSubsystem::execIsTalking },
		{ "StartRecording", &UOnsetVoipLocalPlayerSubsystem::execStartRecording },
		{ "StopRecording", &UOnsetVoipLocalPlayerSubsystem::execStopRecording },
		{ "ToggleLoopback", &UOnsetVoipLocalPlayerSubsystem::execToggleLoopback },
		{ "ToggleVoiceCapture", &UOnsetVoipLocalPlayerSubsystem::execToggleVoiceCapture },
		{ "ToggleVoiceCaptureWithChannel", &UOnsetVoipLocalPlayerSubsystem::execToggleVoiceCaptureWithChannel },
		{ "ToggleVoiceCaptureWithChannels", &UOnsetVoipLocalPlayerSubsystem::execToggleVoiceCaptureWithChannels },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnsetVoipLocalPlayerSubsystem);
UClass* Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_NoRegister()
{
	return UOnsetVoipLocalPlayerSubsystem::StaticClass();
}
struct Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Subsystem based on a local player. Handles our own local voice capturing and processing.\n */" },
		{ "IncludePath", "OnsetVoipLocalPlayerSubsystem.h" },
		{ "ModuleRelativePath", "Public/OnsetVoipLocalPlayerSubsystem.h" },
		{ "ToolTip", "Subsystem based on a local player. Handles our own local voice capturing and processing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnVoipTalkingStateChange_MetaData[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "// Called when we start or stop talking.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipLocalPlayerSubsystem.h" },
		{ "ToolTip", "Called when we start or stop talking." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopbackAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OnsetVoipLocalPlayerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopbackSoundWave_MetaData[] = {
		{ "ModuleRelativePath", "Public/OnsetVoipLocalPlayerSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoipTalkingStateChange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoopbackAudioComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoopbackSoundWave;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ChangeVoiceCaptureDevice, "ChangeVoiceCaptureDevice" }, // 3730877262
		{ &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetCurrentAmplitude, "GetCurrentAmplitude" }, // 1091108961
		{ &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_GetRecordingFile, "GetRecordingFile" }, // 3113772547
		{ &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsCapturingVoice, "IsCapturingVoice" }, // 3823791831
		{ &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsRecording, "IsRecording" }, // 3868156271
		{ &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_IsTalking, "IsTalking" }, // 3945364451
		{ &Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature, "OnVoipTalkingStateChange__DelegateSignature" }, // 314372602
		{ &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StartRecording, "StartRecording" }, // 3455007903
		{ &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_StopRecording, "StopRecording" }, // 2476871124
		{ &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleLoopback, "ToggleLoopback" }, // 2968630014
		{ &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCapture, "ToggleVoiceCapture" }, // 861872768
		{ &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannel, "ToggleVoiceCaptureWithChannel" }, // 242726267
		{ &Z_Construct_UFunction_UOnsetVoipLocalPlayerSubsystem_ToggleVoiceCaptureWithChannels, "ToggleVoiceCaptureWithChannels" }, // 1535451741
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnsetVoipLocalPlayerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_Statics::NewProp_OnVoipTalkingStateChange = { "OnVoipTalkingStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipLocalPlayerSubsystem, OnVoipTalkingStateChange), Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnVoipTalkingStateChange_MetaData), NewProp_OnVoipTalkingStateChange_MetaData) }; // 314372602
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_Statics::NewProp_LoopbackAudioComponent = { "LoopbackAudioComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipLocalPlayerSubsystem, LoopbackAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopbackAudioComponent_MetaData), NewProp_LoopbackAudioComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_Statics::NewProp_LoopbackSoundWave = { "LoopbackSoundWave", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipLocalPlayerSubsystem, LoopbackSoundWave), Z_Construct_UClass_UOnsetVoipSoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopbackSoundWave_MetaData), NewProp_LoopbackSoundWave_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_Statics::NewProp_OnVoipTalkingStateChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_Statics::NewProp_LoopbackAudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_Statics::NewProp_LoopbackSoundWave,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnsetVoip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_Statics::ClassParams = {
	&UOnsetVoipLocalPlayerSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem()
{
	if (!Z_Registration_Info_UClass_UOnsetVoipLocalPlayerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnsetVoipLocalPlayerSubsystem.OuterSingleton, Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnsetVoipLocalPlayerSubsystem.OuterSingleton;
}
template<> ONSETVOIP_API UClass* StaticClass<UOnsetVoipLocalPlayerSubsystem>()
{
	return UOnsetVoipLocalPlayerSubsystem::StaticClass();
}
UOnsetVoipLocalPlayerSubsystem::UOnsetVoipLocalPlayerSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnsetVoipLocalPlayerSubsystem);
UOnsetVoipLocalPlayerSubsystem::~UOnsetVoipLocalPlayerSubsystem() {}
// End Class UOnsetVoipLocalPlayerSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipLocalPlayerSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnsetVoipLocalPlayerSubsystem, UOnsetVoipLocalPlayerSubsystem::StaticClass, TEXT("UOnsetVoipLocalPlayerSubsystem"), &Z_Registration_Info_UClass_UOnsetVoipLocalPlayerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnsetVoipLocalPlayerSubsystem), 2815225926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipLocalPlayerSubsystem_h_2115119969(TEXT("/Script/OnsetVoip"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipLocalPlayerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipLocalPlayerSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
