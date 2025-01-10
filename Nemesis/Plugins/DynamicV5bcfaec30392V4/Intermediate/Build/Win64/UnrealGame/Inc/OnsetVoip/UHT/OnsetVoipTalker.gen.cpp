// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnsetVoip/Public/OnsetVoipTalker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnsetVoipTalker() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetNameplateComponent_NoRegister();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipAudioComponent_NoRegister();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipTalker();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipTalker_NoRegister();
ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature();
ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnsetVoip();
// End Cross Module References

// Begin Delegate FOnVoipTalkingStateChange
struct Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics
{
	struct OnsetVoipTalker_eventOnVoipTalkingStateChange_Parms
	{
		UOnsetVoipTalker* VoipTalker;
		bool bIsTalking;
		bool bIs2D;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//~ End UObject Interface\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoipTalker;
	static void NewProp_bIsTalking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTalking;
	static void NewProp_bIs2D_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIs2D;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::NewProp_VoipTalker = { "VoipTalker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipTalker_eventOnVoipTalkingStateChange_Parms, VoipTalker), Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::NewProp_bIsTalking_SetBit(void* Obj)
{
	((OnsetVoipTalker_eventOnVoipTalkingStateChange_Parms*)Obj)->bIsTalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::NewProp_bIsTalking = { "bIsTalking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipTalker_eventOnVoipTalkingStateChange_Parms), &Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::NewProp_bIsTalking_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::NewProp_bIs2D_SetBit(void* Obj)
{
	((OnsetVoipTalker_eventOnVoipTalkingStateChange_Parms*)Obj)->bIs2D = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::NewProp_bIs2D = { "bIs2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipTalker_eventOnVoipTalkingStateChange_Parms), &Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::NewProp_bIs2D_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::NewProp_VoipTalker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::NewProp_bIsTalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::NewProp_bIs2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "OnVoipTalkingStateChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::OnsetVoipTalker_eventOnVoipTalkingStateChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::OnsetVoipTalker_eventOnVoipTalkingStateChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UOnsetVoipTalker::FOnVoipTalkingStateChange_DelegateWrapper(const FMulticastScriptDelegate& OnVoipTalkingStateChange, UOnsetVoipTalker* VoipTalker, bool bIsTalking, bool bIs2D)
{
	struct OnsetVoipTalker_eventOnVoipTalkingStateChange_Parms
	{
		UOnsetVoipTalker* VoipTalker;
		bool bIsTalking;
		bool bIs2D;
	};
	OnsetVoipTalker_eventOnVoipTalkingStateChange_Parms Parms;
	Parms.VoipTalker=VoipTalker;
	Parms.bIsTalking=bIsTalking ? true : false;
	Parms.bIs2D=bIs2D ? true : false;
	OnVoipTalkingStateChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnVoipTalkingStateChange

// Begin Delegate FOnVoipAudioDataReceived
struct Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics
{
	struct OnsetVoipTalker_eventOnVoipAudioDataReceived_Parms
	{
		UOnsetVoipTalker* VoipTalker;
		TArray<uint8> AudioData;
		bool bIs2D;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoipTalker;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioData;
	static void NewProp_bIs2D_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIs2D;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::NewProp_VoipTalker = { "VoipTalker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipTalker_eventOnVoipAudioDataReceived_Parms, VoipTalker), Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::NewProp_AudioData_Inner = { "AudioData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipTalker_eventOnVoipAudioDataReceived_Parms, AudioData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioData_MetaData), NewProp_AudioData_MetaData) };
void Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::NewProp_bIs2D_SetBit(void* Obj)
{
	((OnsetVoipTalker_eventOnVoipAudioDataReceived_Parms*)Obj)->bIs2D = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::NewProp_bIs2D = { "bIs2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipTalker_eventOnVoipAudioDataReceived_Parms), &Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::NewProp_bIs2D_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::NewProp_VoipTalker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::NewProp_AudioData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::NewProp_AudioData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::NewProp_bIs2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "OnVoipAudioDataReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::OnsetVoipTalker_eventOnVoipAudioDataReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::OnsetVoipTalker_eventOnVoipAudioDataReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UOnsetVoipTalker::FOnVoipAudioDataReceived_DelegateWrapper(const FMulticastScriptDelegate& OnVoipAudioDataReceived, UOnsetVoipTalker* VoipTalker, TArray<uint8> const& AudioData, bool bIs2D)
{
	struct OnsetVoipTalker_eventOnVoipAudioDataReceived_Parms
	{
		UOnsetVoipTalker* VoipTalker;
		TArray<uint8> AudioData;
		bool bIs2D;
	};
	OnsetVoipTalker_eventOnVoipAudioDataReceived_Parms Parms;
	Parms.VoipTalker=VoipTalker;
	Parms.AudioData=AudioData;
	Parms.bIs2D=bIs2D ? true : false;
	OnVoipAudioDataReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnVoipAudioDataReceived

// Begin Class UOnsetVoipTalker Function CancelReceivedAudioData
struct Z_Construct_UFunction_UOnsetVoipTalker_CancelReceivedAudioData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Shared" },
		{ "Comment", "// Client/listen server only: Call this function inside any OnVoipAudioDataReceived delegate to stop the audio from being played by the plugin.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Client/listen server only: Call this function inside any OnVoipAudioDataReceived delegate to stop the audio from being played by the plugin." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipTalker_CancelReceivedAudioData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "CancelReceivedAudioData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_CancelReceivedAudioData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipTalker_CancelReceivedAudioData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOnsetVoipTalker_CancelReceivedAudioData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipTalker_CancelReceivedAudioData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipTalker::execCancelReceivedAudioData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelReceivedAudioData();
	P_NATIVE_END;
}
// End Class UOnsetVoipTalker Function CancelReceivedAudioData

// Begin Class UOnsetVoipTalker Function GetCurrentAmplitude
struct Z_Construct_UFunction_UOnsetVoipTalker_GetCurrentAmplitude_Statics
{
	struct OnsetVoipTalker_eventGetCurrentAmplitude_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Shared" },
		{ "Comment", "// Returns the amplitude like UOnsetVoipLocalPlayerSubsystem::GetCurrentAmplitude().\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Returns the amplitude like UOnsetVoipLocalPlayerSubsystem::GetCurrentAmplitude()." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_GetCurrentAmplitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipTalker_eventGetCurrentAmplitude_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipTalker_GetCurrentAmplitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_GetCurrentAmplitude_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_GetCurrentAmplitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipTalker_GetCurrentAmplitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "GetCurrentAmplitude", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipTalker_GetCurrentAmplitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_GetCurrentAmplitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipTalker_GetCurrentAmplitude_Statics::OnsetVoipTalker_eventGetCurrentAmplitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_GetCurrentAmplitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipTalker_GetCurrentAmplitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipTalker_GetCurrentAmplitude_Statics::OnsetVoipTalker_eventGetCurrentAmplitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipTalker_GetCurrentAmplitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipTalker_GetCurrentAmplitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipTalker::execGetCurrentAmplitude)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentAmplitude();
	P_NATIVE_END;
}
// End Class UOnsetVoipTalker Function GetCurrentAmplitude

// Begin Class UOnsetVoipTalker Function GetPlayerState
struct Z_Construct_UFunction_UOnsetVoipTalker_GetPlayerState_Statics
{
	struct OnsetVoipTalker_eventGetPlayerState_Parms
	{
		APlayerState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Shared" },
		{ "Comment", "// Gets the owning player state of this talker.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Gets the owning player state of this talker." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_GetPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipTalker_eventGetPlayerState_Parms, ReturnValue), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipTalker_GetPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_GetPlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_GetPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipTalker_GetPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "GetPlayerState", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipTalker_GetPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_GetPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipTalker_GetPlayerState_Statics::OnsetVoipTalker_eventGetPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_GetPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipTalker_GetPlayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipTalker_GetPlayerState_Statics::OnsetVoipTalker_eventGetPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipTalker_GetPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipTalker_GetPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipTalker::execGetPlayerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerState**)Z_Param__Result=P_THIS->GetPlayerState();
	P_NATIVE_END;
}
// End Class UOnsetVoipTalker Function GetPlayerState

// Begin Class UOnsetVoipTalker Function GetVoiceAudioComponent
struct Z_Construct_UFunction_UOnsetVoipTalker_GetVoiceAudioComponent_Statics
{
	struct OnsetVoipTalker_eventGetVoiceAudioComponent_Parms
	{
		bool bAudio2D;
		UOnsetVoipAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "// Get the audio component used for talking. Either 2D or 3D. Can be null if this talker has not spoken yet/did not receive any voip data yet.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Get the audio component used for talking. Either 2D or 3D. Can be null if this talker has not spoken yet/did not receive any voip data yet." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static void NewProp_bAudio2D_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAudio2D;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipTalker_GetVoiceAudioComponent_Statics::NewProp_bAudio2D_SetBit(void* Obj)
{
	((OnsetVoipTalker_eventGetVoiceAudioComponent_Parms*)Obj)->bAudio2D = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_GetVoiceAudioComponent_Statics::NewProp_bAudio2D = { "bAudio2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipTalker_eventGetVoiceAudioComponent_Parms), &Z_Construct_UFunction_UOnsetVoipTalker_GetVoiceAudioComponent_Statics::NewProp_bAudio2D_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_GetVoiceAudioComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipTalker_eventGetVoiceAudioComponent_Parms, ReturnValue), Z_Construct_UClass_UOnsetVoipAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipTalker_GetVoiceAudioComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_GetVoiceAudioComponent_Statics::NewProp_bAudio2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_GetVoiceAudioComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_GetVoiceAudioComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipTalker_GetVoiceAudioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "GetVoiceAudioComponent", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipTalker_GetVoiceAudioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_GetVoiceAudioComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipTalker_GetVoiceAudioComponent_Statics::OnsetVoipTalker_eventGetVoiceAudioComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_GetVoiceAudioComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipTalker_GetVoiceAudioComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipTalker_GetVoiceAudioComponent_Statics::OnsetVoipTalker_eventGetVoiceAudioComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipTalker_GetVoiceAudioComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipTalker_GetVoiceAudioComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipTalker::execGetVoiceAudioComponent)
{
	P_GET_UBOOL(Z_Param_bAudio2D);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOnsetVoipAudioComponent**)Z_Param__Result=P_THIS->GetVoiceAudioComponent(Z_Param_bAudio2D);
	P_NATIVE_END;
}
// End Class UOnsetVoipTalker Function GetVoiceAudioComponent

// Begin Class UOnsetVoipTalker Function IsInVoiceChannel
struct Z_Construct_UFunction_UOnsetVoipTalker_IsInVoiceChannel_Statics
{
	struct OnsetVoipTalker_eventIsInVoiceChannel_Parms
	{
		int32 ChannelId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "/*\n\x09* **SERVER ONLY, do not call on client**\n\x09* \n\x09* Test if a player is in a specific voice channel. This only works when called on the server. Voice channel 0 is the world / 3d channel.\n\x09* See SetVoiceChannel for more information.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "* **SERVER ONLY, do not call on client**\n*\n* Test if a player is in a specific voice channel. This only works when called on the server. Voice channel 0 is the world / 3d channel.\n* See SetVoiceChannel for more information." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_IsInVoiceChannel_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipTalker_eventIsInVoiceChannel_Parms, ChannelId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOnsetVoipTalker_IsInVoiceChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipTalker_eventIsInVoiceChannel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_IsInVoiceChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipTalker_eventIsInVoiceChannel_Parms), &Z_Construct_UFunction_UOnsetVoipTalker_IsInVoiceChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipTalker_IsInVoiceChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_IsInVoiceChannel_Statics::NewProp_ChannelId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_IsInVoiceChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsInVoiceChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipTalker_IsInVoiceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "IsInVoiceChannel", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipTalker_IsInVoiceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsInVoiceChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipTalker_IsInVoiceChannel_Statics::OnsetVoipTalker_eventIsInVoiceChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsInVoiceChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipTalker_IsInVoiceChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipTalker_IsInVoiceChannel_Statics::OnsetVoipTalker_eventIsInVoiceChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipTalker_IsInVoiceChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipTalker_IsInVoiceChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipTalker::execIsInVoiceChannel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChannelId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInVoiceChannel(Z_Param_ChannelId);
	P_NATIVE_END;
}
// End Class UOnsetVoipTalker Function IsInVoiceChannel

// Begin Class UOnsetVoipTalker Function IsLastReceivedTalkingState2D
struct Z_Construct_UFunction_UOnsetVoipTalker_IsLastReceivedTalkingState2D_Statics
{
	struct OnsetVoipTalker_eventIsLastReceivedTalkingState2D_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Shared" },
		{ "Comment", "// Returns true if the last received voip packet was a 2D voice. This means that we heard this talker through a voice channel we share with them.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Returns true if the last received voip packet was a 2D voice. This means that we heard this talker through a voice channel we share with them." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipTalker_IsLastReceivedTalkingState2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipTalker_eventIsLastReceivedTalkingState2D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_IsLastReceivedTalkingState2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipTalker_eventIsLastReceivedTalkingState2D_Parms), &Z_Construct_UFunction_UOnsetVoipTalker_IsLastReceivedTalkingState2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipTalker_IsLastReceivedTalkingState2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_IsLastReceivedTalkingState2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsLastReceivedTalkingState2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipTalker_IsLastReceivedTalkingState2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "IsLastReceivedTalkingState2D", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipTalker_IsLastReceivedTalkingState2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsLastReceivedTalkingState2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipTalker_IsLastReceivedTalkingState2D_Statics::OnsetVoipTalker_eventIsLastReceivedTalkingState2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsLastReceivedTalkingState2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipTalker_IsLastReceivedTalkingState2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipTalker_IsLastReceivedTalkingState2D_Statics::OnsetVoipTalker_eventIsLastReceivedTalkingState2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipTalker_IsLastReceivedTalkingState2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipTalker_IsLastReceivedTalkingState2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipTalker::execIsLastReceivedTalkingState2D)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLastReceivedTalkingState2D();
	P_NATIVE_END;
}
// End Class UOnsetVoipTalker Function IsLastReceivedTalkingState2D

// Begin Class UOnsetVoipTalker Function IsMuted
struct Z_Construct_UFunction_UOnsetVoipTalker_IsMuted_Statics
{
	struct OnsetVoipTalker_eventIsMuted_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "// Returns true if this talker is muted.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Returns true if this talker is muted." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipTalker_IsMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipTalker_eventIsMuted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_IsMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipTalker_eventIsMuted_Parms), &Z_Construct_UFunction_UOnsetVoipTalker_IsMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipTalker_IsMuted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_IsMuted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsMuted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipTalker_IsMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "IsMuted", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipTalker_IsMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsMuted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipTalker_IsMuted_Statics::OnsetVoipTalker_eventIsMuted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsMuted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipTalker_IsMuted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipTalker_IsMuted_Statics::OnsetVoipTalker_eventIsMuted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipTalker_IsMuted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipTalker_IsMuted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipTalker::execIsMuted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMuted();
	P_NATIVE_END;
}
// End Class UOnsetVoipTalker Function IsMuted

// Begin Class UOnsetVoipTalker Function IsMutedForPlayerState
struct Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForPlayerState_Statics
{
	struct OnsetVoipTalker_eventIsMutedForPlayerState_Parms
	{
		APlayerState* PlayerState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "// Server only: Same as IsMutedForVoipTalker but with a player state.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Server only: Same as IsMutedForVoipTalker but with a player state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForPlayerState_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipTalker_eventIsMutedForPlayerState_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForPlayerState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipTalker_eventIsMutedForPlayerState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipTalker_eventIsMutedForPlayerState_Parms), &Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForPlayerState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForPlayerState_Statics::NewProp_PlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForPlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "IsMutedForPlayerState", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForPlayerState_Statics::OnsetVoipTalker_eventIsMutedForPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForPlayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForPlayerState_Statics::OnsetVoipTalker_eventIsMutedForPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipTalker::execIsMutedForPlayerState)
{
	P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMutedForPlayerState(Z_Param_PlayerState);
	P_NATIVE_END;
}
// End Class UOnsetVoipTalker Function IsMutedForPlayerState

// Begin Class UOnsetVoipTalker Function IsMutedForVoipTalker
struct Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForVoipTalker_Statics
{
	struct OnsetVoipTalker_eventIsMutedForVoipTalker_Parms
	{
		UOnsetVoipTalker* OtherVoipTalker;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "// Server only: Returns true if this talker is muted for another talker.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Server only: Returns true if this talker is muted for another talker." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherVoipTalker;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForVoipTalker_Statics::NewProp_OtherVoipTalker = { "OtherVoipTalker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipTalker_eventIsMutedForVoipTalker_Parms, OtherVoipTalker), Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForVoipTalker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipTalker_eventIsMutedForVoipTalker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForVoipTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipTalker_eventIsMutedForVoipTalker_Parms), &Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForVoipTalker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForVoipTalker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForVoipTalker_Statics::NewProp_OtherVoipTalker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForVoipTalker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForVoipTalker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForVoipTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "IsMutedForVoipTalker", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForVoipTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForVoipTalker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForVoipTalker_Statics::OnsetVoipTalker_eventIsMutedForVoipTalker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForVoipTalker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForVoipTalker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForVoipTalker_Statics::OnsetVoipTalker_eventIsMutedForVoipTalker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForVoipTalker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForVoipTalker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipTalker::execIsMutedForVoipTalker)
{
	P_GET_OBJECT(UOnsetVoipTalker,Z_Param_OtherVoipTalker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMutedForVoipTalker(Z_Param_OtherVoipTalker);
	P_NATIVE_END;
}
// End Class UOnsetVoipTalker Function IsMutedForVoipTalker

// Begin Class UOnsetVoipTalker Function IsMutedOnVoiceChannel
struct Z_Construct_UFunction_UOnsetVoipTalker_IsMutedOnVoiceChannel_Statics
{
	struct OnsetVoipTalker_eventIsMutedOnVoiceChannel_Parms
	{
		int32 ChannelId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "// Server only: Check if this talker is muted on a voice channel id. This only works when called on the server.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Server only: Check if this talker is muted on a voice channel id. This only works when called on the server." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_IsMutedOnVoiceChannel_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipTalker_eventIsMutedOnVoiceChannel_Parms, ChannelId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOnsetVoipTalker_IsMutedOnVoiceChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipTalker_eventIsMutedOnVoiceChannel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_IsMutedOnVoiceChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipTalker_eventIsMutedOnVoiceChannel_Parms), &Z_Construct_UFunction_UOnsetVoipTalker_IsMutedOnVoiceChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipTalker_IsMutedOnVoiceChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_IsMutedOnVoiceChannel_Statics::NewProp_ChannelId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_IsMutedOnVoiceChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsMutedOnVoiceChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipTalker_IsMutedOnVoiceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "IsMutedOnVoiceChannel", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipTalker_IsMutedOnVoiceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsMutedOnVoiceChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipTalker_IsMutedOnVoiceChannel_Statics::OnsetVoipTalker_eventIsMutedOnVoiceChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsMutedOnVoiceChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipTalker_IsMutedOnVoiceChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipTalker_IsMutedOnVoiceChannel_Statics::OnsetVoipTalker_eventIsMutedOnVoiceChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipTalker_IsMutedOnVoiceChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipTalker_IsMutedOnVoiceChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipTalker::execIsMutedOnVoiceChannel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChannelId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMutedOnVoiceChannel(Z_Param_ChannelId);
	P_NATIVE_END;
}
// End Class UOnsetVoipTalker Function IsMutedOnVoiceChannel

// Begin Class UOnsetVoipTalker Function IsTalking
struct Z_Construct_UFunction_UOnsetVoipTalker_IsTalking_Statics
{
	struct OnsetVoipTalker_eventIsTalking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Shared" },
		{ "Comment", "// Returns true if currently speaking.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Returns true if currently speaking." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipTalker_IsTalking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipTalker_eventIsTalking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_IsTalking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipTalker_eventIsTalking_Parms), &Z_Construct_UFunction_UOnsetVoipTalker_IsTalking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipTalker_IsTalking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_IsTalking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsTalking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipTalker_IsTalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "IsTalking", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipTalker_IsTalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsTalking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipTalker_IsTalking_Statics::OnsetVoipTalker_eventIsTalking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsTalking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipTalker_IsTalking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipTalker_IsTalking_Statics::OnsetVoipTalker_eventIsTalking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipTalker_IsTalking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipTalker_IsTalking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipTalker::execIsTalking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTalking();
	P_NATIVE_END;
}
// End Class UOnsetVoipTalker Function IsTalking

// Begin Class UOnsetVoipTalker Function IsVoipEnabled
struct Z_Construct_UFunction_UOnsetVoipTalker_IsVoipEnabled_Statics
{
	struct OnsetVoipTalker_eventIsVoipEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Shared" },
		{ "Comment", "// Returns true if talker is enabled. See SetVoipEnabled for more information.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Returns true if talker is enabled. See SetVoipEnabled for more information." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipTalker_IsVoipEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipTalker_eventIsVoipEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_IsVoipEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipTalker_eventIsVoipEnabled_Parms), &Z_Construct_UFunction_UOnsetVoipTalker_IsVoipEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipTalker_IsVoipEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_IsVoipEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsVoipEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipTalker_IsVoipEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "IsVoipEnabled", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipTalker_IsVoipEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsVoipEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipTalker_IsVoipEnabled_Statics::OnsetVoipTalker_eventIsVoipEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_IsVoipEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipTalker_IsVoipEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipTalker_IsVoipEnabled_Statics::OnsetVoipTalker_eventIsVoipEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipTalker_IsVoipEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipTalker_IsVoipEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipTalker::execIsVoipEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVoipEnabled();
	P_NATIVE_END;
}
// End Class UOnsetVoipTalker Function IsVoipEnabled

// Begin Class UOnsetVoipTalker Function OnPlayerStatePawnSet
struct Z_Construct_UFunction_UOnsetVoipTalker_OnPlayerStatePawnSet_Statics
{
	struct OnsetVoipTalker_eventOnPlayerStatePawnSet_Parms
	{
		APlayerState* ChangedPlayerState;
		APawn* NewPlayerPawn;
		APawn* OldPlayerPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Called by the engine when the player state pawn changes.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Called by the engine when the player state pawn changes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChangedPlayerState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayerPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldPlayerPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_OnPlayerStatePawnSet_Statics::NewProp_ChangedPlayerState = { "ChangedPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipTalker_eventOnPlayerStatePawnSet_Parms, ChangedPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_OnPlayerStatePawnSet_Statics::NewProp_NewPlayerPawn = { "NewPlayerPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipTalker_eventOnPlayerStatePawnSet_Parms, NewPlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_OnPlayerStatePawnSet_Statics::NewProp_OldPlayerPawn = { "OldPlayerPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipTalker_eventOnPlayerStatePawnSet_Parms, OldPlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipTalker_OnPlayerStatePawnSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_OnPlayerStatePawnSet_Statics::NewProp_ChangedPlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_OnPlayerStatePawnSet_Statics::NewProp_NewPlayerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_OnPlayerStatePawnSet_Statics::NewProp_OldPlayerPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_OnPlayerStatePawnSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipTalker_OnPlayerStatePawnSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "OnPlayerStatePawnSet", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipTalker_OnPlayerStatePawnSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_OnPlayerStatePawnSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipTalker_OnPlayerStatePawnSet_Statics::OnsetVoipTalker_eventOnPlayerStatePawnSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_OnPlayerStatePawnSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipTalker_OnPlayerStatePawnSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipTalker_OnPlayerStatePawnSet_Statics::OnsetVoipTalker_eventOnPlayerStatePawnSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipTalker_OnPlayerStatePawnSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipTalker_OnPlayerStatePawnSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipTalker::execOnPlayerStatePawnSet)
{
	P_GET_OBJECT(APlayerState,Z_Param_ChangedPlayerState);
	P_GET_OBJECT(APawn,Z_Param_NewPlayerPawn);
	P_GET_OBJECT(APawn,Z_Param_OldPlayerPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerStatePawnSet(Z_Param_ChangedPlayerState,Z_Param_NewPlayerPawn,Z_Param_OldPlayerPawn);
	P_NATIVE_END;
}
// End Class UOnsetVoipTalker Function OnPlayerStatePawnSet

// Begin Class UOnsetVoipTalker Function SetMuted
struct Z_Construct_UFunction_UOnsetVoipTalker_SetMuted_Statics
{
	struct OnsetVoipTalker_eventSetMuted_Parms
	{
		bool bMute;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "// Mute this talker audio. Must be called on the client of the player who wants to mute this talker.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Mute this talker audio. Must be called on the client of the player who wants to mute this talker." },
	};
#endif // WITH_METADATA
	static void NewProp_bMute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipTalker_SetMuted_Statics::NewProp_bMute_SetBit(void* Obj)
{
	((OnsetVoipTalker_eventSetMuted_Parms*)Obj)->bMute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_SetMuted_Statics::NewProp_bMute = { "bMute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipTalker_eventSetMuted_Parms), &Z_Construct_UFunction_UOnsetVoipTalker_SetMuted_Statics::NewProp_bMute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipTalker_SetMuted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_SetMuted_Statics::NewProp_bMute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_SetMuted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipTalker_SetMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "SetMuted", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipTalker_SetMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_SetMuted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipTalker_SetMuted_Statics::OnsetVoipTalker_eventSetMuted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_SetMuted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipTalker_SetMuted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipTalker_SetMuted_Statics::OnsetVoipTalker_eventSetMuted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipTalker_SetMuted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipTalker_SetMuted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipTalker::execSetMuted)
{
	P_GET_UBOOL(Z_Param_bMute);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMuted(Z_Param_bMute);
	P_NATIVE_END;
}
// End Class UOnsetVoipTalker Function SetMuted

// Begin Class UOnsetVoipTalker Function SetMutedForPlayerState
struct Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForPlayerState_Statics
{
	struct OnsetVoipTalker_eventSetMutedForPlayerState_Parms
	{
		bool bMute;
		APlayerState* PlayerState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "// Server only: Same as SetMutedForVoipTalker but with a player state.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Server only: Same as SetMutedForVoipTalker but with a player state." },
	};
#endif // WITH_METADATA
	static void NewProp_bMute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMute;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForPlayerState_Statics::NewProp_bMute_SetBit(void* Obj)
{
	((OnsetVoipTalker_eventSetMutedForPlayerState_Parms*)Obj)->bMute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForPlayerState_Statics::NewProp_bMute = { "bMute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipTalker_eventSetMutedForPlayerState_Parms), &Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForPlayerState_Statics::NewProp_bMute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForPlayerState_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipTalker_eventSetMutedForPlayerState_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForPlayerState_Statics::NewProp_bMute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForPlayerState_Statics::NewProp_PlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "SetMutedForPlayerState", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForPlayerState_Statics::OnsetVoipTalker_eventSetMutedForPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForPlayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForPlayerState_Statics::OnsetVoipTalker_eventSetMutedForPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipTalker::execSetMutedForPlayerState)
{
	P_GET_UBOOL(Z_Param_bMute);
	P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMutedForPlayerState(Z_Param_bMute,Z_Param_PlayerState);
	P_NATIVE_END;
}
// End Class UOnsetVoipTalker Function SetMutedForPlayerState

// Begin Class UOnsetVoipTalker Function SetMutedForVoipTalker
struct Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForVoipTalker_Statics
{
	struct OnsetVoipTalker_eventSetMutedForVoipTalker_Parms
	{
		bool bMute;
		UOnsetVoipTalker* OtherVoipTalker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "// Server only: You can mute this talker for another voip talker.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Server only: You can mute this talker for another voip talker." },
	};
#endif // WITH_METADATA
	static void NewProp_bMute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMute;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherVoipTalker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForVoipTalker_Statics::NewProp_bMute_SetBit(void* Obj)
{
	((OnsetVoipTalker_eventSetMutedForVoipTalker_Parms*)Obj)->bMute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForVoipTalker_Statics::NewProp_bMute = { "bMute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipTalker_eventSetMutedForVoipTalker_Parms), &Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForVoipTalker_Statics::NewProp_bMute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForVoipTalker_Statics::NewProp_OtherVoipTalker = { "OtherVoipTalker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipTalker_eventSetMutedForVoipTalker_Parms, OtherVoipTalker), Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForVoipTalker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForVoipTalker_Statics::NewProp_bMute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForVoipTalker_Statics::NewProp_OtherVoipTalker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForVoipTalker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForVoipTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "SetMutedForVoipTalker", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForVoipTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForVoipTalker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForVoipTalker_Statics::OnsetVoipTalker_eventSetMutedForVoipTalker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForVoipTalker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForVoipTalker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForVoipTalker_Statics::OnsetVoipTalker_eventSetMutedForVoipTalker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForVoipTalker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForVoipTalker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipTalker::execSetMutedForVoipTalker)
{
	P_GET_UBOOL(Z_Param_bMute);
	P_GET_OBJECT(UOnsetVoipTalker,Z_Param_OtherVoipTalker);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMutedForVoipTalker(Z_Param_bMute,Z_Param_OtherVoipTalker);
	P_NATIVE_END;
}
// End Class UOnsetVoipTalker Function SetMutedForVoipTalker

// Begin Class UOnsetVoipTalker Function SetMutedOnVoiceChannel
struct Z_Construct_UFunction_UOnsetVoipTalker_SetMutedOnVoiceChannel_Statics
{
	struct OnsetVoipTalker_eventSetMutedOnVoiceChannel_Parms
	{
		bool bMute;
		int32 ChannelId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "// Server only: Mute this talker on a specific voice channel id. This only works when called on the server.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Server only: Mute this talker on a specific voice channel id. This only works when called on the server." },
	};
#endif // WITH_METADATA
	static void NewProp_bMute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipTalker_SetMutedOnVoiceChannel_Statics::NewProp_bMute_SetBit(void* Obj)
{
	((OnsetVoipTalker_eventSetMutedOnVoiceChannel_Parms*)Obj)->bMute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_SetMutedOnVoiceChannel_Statics::NewProp_bMute = { "bMute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipTalker_eventSetMutedOnVoiceChannel_Parms), &Z_Construct_UFunction_UOnsetVoipTalker_SetMutedOnVoiceChannel_Statics::NewProp_bMute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_SetMutedOnVoiceChannel_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipTalker_eventSetMutedOnVoiceChannel_Parms, ChannelId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipTalker_SetMutedOnVoiceChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_SetMutedOnVoiceChannel_Statics::NewProp_bMute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_SetMutedOnVoiceChannel_Statics::NewProp_ChannelId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_SetMutedOnVoiceChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipTalker_SetMutedOnVoiceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "SetMutedOnVoiceChannel", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipTalker_SetMutedOnVoiceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_SetMutedOnVoiceChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipTalker_SetMutedOnVoiceChannel_Statics::OnsetVoipTalker_eventSetMutedOnVoiceChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_SetMutedOnVoiceChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipTalker_SetMutedOnVoiceChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipTalker_SetMutedOnVoiceChannel_Statics::OnsetVoipTalker_eventSetMutedOnVoiceChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipTalker_SetMutedOnVoiceChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipTalker_SetMutedOnVoiceChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipTalker::execSetMutedOnVoiceChannel)
{
	P_GET_UBOOL(Z_Param_bMute);
	P_GET_PROPERTY(FIntProperty,Z_Param_ChannelId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMutedOnVoiceChannel(Z_Param_bMute,Z_Param_ChannelId);
	P_NATIVE_END;
}
// End Class UOnsetVoipTalker Function SetMutedOnVoiceChannel

// Begin Class UOnsetVoipTalker Function SetVoiceChannel
struct Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics
{
	struct OnsetVoipTalker_eventSetVoiceChannel_Parms
	{
		int32 ChannelId;
		bool bAdd;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "/*\n\x09* **SERVER ONLY, do not call on client**\n\x09* \n\x09* This function adds a player/talker to a voice channel or removes them. Voice channels are a server side concept. Meaning only the server knows what channels a talker is part of.\n\x09* \n\x09* The ChannelId is an integer used to determine what players share the same channel. This can be any positive integer you like and is used purely for you to manage the channel ids.\n\x09* If two talkers are in the same channel they are able to hear each other as a 2D voice.\n\x09* ChannelId 0 is the world/3d/proximity channel. All talkers are automatically in channel 0. If you remove someone from channel 0 they will no longer participate in world/3d/proximity voice.\n\x09* \n\x09* Set bAdd to false to remove them from a channel. No further cleanup is required.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "* **SERVER ONLY, do not call on client**\n*\n* This function adds a player/talker to a voice channel or removes them. Voice channels are a server side concept. Meaning only the server knows what channels a talker is part of.\n*\n* The ChannelId is an integer used to determine what players share the same channel. This can be any positive integer you like and is used purely for you to manage the channel ids.\n* If two talkers are in the same channel they are able to hear each other as a 2D voice.\n* ChannelId 0 is the world/3d/proximity channel. All talkers are automatically in channel 0. If you remove someone from channel 0 they will no longer participate in world/3d/proximity voice.\n*\n* Set bAdd to false to remove them from a channel. No further cleanup is required." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelId;
	static void NewProp_bAdd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdd;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipTalker_eventSetVoiceChannel_Parms, ChannelId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::NewProp_bAdd_SetBit(void* Obj)
{
	((OnsetVoipTalker_eventSetVoiceChannel_Parms*)Obj)->bAdd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::NewProp_bAdd = { "bAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipTalker_eventSetVoiceChannel_Parms), &Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::NewProp_bAdd_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipTalker_eventSetVoiceChannel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipTalker_eventSetVoiceChannel_Parms), &Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::NewProp_ChannelId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::NewProp_bAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "SetVoiceChannel", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::OnsetVoipTalker_eventSetVoiceChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::OnsetVoipTalker_eventSetVoiceChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipTalker::execSetVoiceChannel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChannelId);
	P_GET_UBOOL(Z_Param_bAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetVoiceChannel(Z_Param_ChannelId,Z_Param_bAdd);
	P_NATIVE_END;
}
// End Class UOnsetVoipTalker Function SetVoiceChannel

// Begin Class UOnsetVoipTalker Function SetVoipEnabled
struct Z_Construct_UFunction_UOnsetVoipTalker_SetVoipEnabled_Statics
{
	struct OnsetVoipTalker_eventSetVoipEnabled_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Shared" },
		{ "Comment", "/*\n\x09* This function can enable or disable the operation of a voip talker.\n\x09* Calling this on a **server** will stop this talker from sending voice data to anyone.\n\x09* Calling this on a **client** will stop this talker from playing/processing any of their audio data.\n\x09*\n\x09* This function is not the same as SetMuted. You probably just want to use SetMuted for muting audio. Especially on a listen server.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "* This function can enable or disable the operation of a voip talker.\n* Calling this on a **server** will stop this talker from sending voice data to anyone.\n* Calling this on a **client** will stop this talker from playing/processing any of their audio data.\n*\n* This function is not the same as SetMuted. You probably just want to use SetMuted for muting audio. Especially on a listen server." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipTalker_SetVoipEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((OnsetVoipTalker_eventSetVoipEnabled_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipTalker_SetVoipEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipTalker_eventSetVoipEnabled_Parms), &Z_Construct_UFunction_UOnsetVoipTalker_SetVoipEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipTalker_SetVoipEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipTalker_SetVoipEnabled_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_SetVoipEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipTalker_SetVoipEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipTalker, nullptr, "SetVoipEnabled", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipTalker_SetVoipEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_SetVoipEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipTalker_SetVoipEnabled_Statics::OnsetVoipTalker_eventSetVoipEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipTalker_SetVoipEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipTalker_SetVoipEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipTalker_SetVoipEnabled_Statics::OnsetVoipTalker_eventSetVoipEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipTalker_SetVoipEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipTalker_SetVoipEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipTalker::execSetVoipEnabled)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVoipEnabled(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UOnsetVoipTalker Function SetVoipEnabled

// Begin Class UOnsetVoipTalker
void UOnsetVoipTalker::StaticRegisterNativesUOnsetVoipTalker()
{
	UClass* Class = UOnsetVoipTalker::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelReceivedAudioData", &UOnsetVoipTalker::execCancelReceivedAudioData },
		{ "GetCurrentAmplitude", &UOnsetVoipTalker::execGetCurrentAmplitude },
		{ "GetPlayerState", &UOnsetVoipTalker::execGetPlayerState },
		{ "GetVoiceAudioComponent", &UOnsetVoipTalker::execGetVoiceAudioComponent },
		{ "IsInVoiceChannel", &UOnsetVoipTalker::execIsInVoiceChannel },
		{ "IsLastReceivedTalkingState2D", &UOnsetVoipTalker::execIsLastReceivedTalkingState2D },
		{ "IsMuted", &UOnsetVoipTalker::execIsMuted },
		{ "IsMutedForPlayerState", &UOnsetVoipTalker::execIsMutedForPlayerState },
		{ "IsMutedForVoipTalker", &UOnsetVoipTalker::execIsMutedForVoipTalker },
		{ "IsMutedOnVoiceChannel", &UOnsetVoipTalker::execIsMutedOnVoiceChannel },
		{ "IsTalking", &UOnsetVoipTalker::execIsTalking },
		{ "IsVoipEnabled", &UOnsetVoipTalker::execIsVoipEnabled },
		{ "OnPlayerStatePawnSet", &UOnsetVoipTalker::execOnPlayerStatePawnSet },
		{ "SetMuted", &UOnsetVoipTalker::execSetMuted },
		{ "SetMutedForPlayerState", &UOnsetVoipTalker::execSetMutedForPlayerState },
		{ "SetMutedForVoipTalker", &UOnsetVoipTalker::execSetMutedForVoipTalker },
		{ "SetMutedOnVoiceChannel", &UOnsetVoipTalker::execSetMutedOnVoiceChannel },
		{ "SetVoiceChannel", &UOnsetVoipTalker::execSetVoiceChannel },
		{ "SetVoipEnabled", &UOnsetVoipTalker::execSetVoipEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnsetVoipTalker);
UClass* Z_Construct_UClass_UOnsetVoipTalker_NoRegister()
{
	return UOnsetVoipTalker::StaticClass();
}
struct Z_Construct_UClass_UOnsetVoipTalker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A UOnsetVoipTalker is automatically created and destroyed for each APlayerState.\n * It handles the voice for that specific player.\n */" },
		{ "IncludePath", "OnsetVoipTalker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "A UOnsetVoipTalker is automatically created and destroyed for each APlayerState.\nIt handles the voice for that specific player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnVoipTalkingStateChange_MetaData[] = {
		{ "Category", "OnsetVoip|Shared" },
		{ "Comment", "// Called when this voip talker starts or stops talking.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Called when this voip talker starts or stops talking." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnVoipAudioDataReceived_MetaData[] = {
		{ "Category", "OnsetVoip|Shared" },
		{ "Comment", "/*\n\x09* Called when this voip talker received new audio data. Format is raw signed 16-bit PCM.\n\x09* Number of channels and sample rate are defined in UOnsetVoipSettings::VoiceCaptureChannels and VoiceCaptureSampleRate.\n\x09* To cancel the audio from being played use CancelReceivedAudioData() inside this delegate.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "* Called when this voip talker received new audio data. Format is raw signed 16-bit PCM.\n* Number of channels and sample rate are defined in UOnsetVoipSettings::VoiceCaptureChannels and VoiceCaptureSampleRate.\n* To cancel the audio from being played use CancelReceivedAudioData() inside this delegate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MutedVoipTalkers_MetaData[] = {
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceChannelIds_MetaData[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "// Server only: Voice channel ids of this talker. Only used on the server not on the client. Use helper functions above to add/remove voice channels.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Server only: Voice channel ids of this talker. Only used on the server not on the client. Use helper functions above to add/remove voice channels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MutedVoiceChannelIds_MetaData[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "// Server only: Voice channel ids that his talker is muted on and cannot speak but listen. Only used on the server not on the client. Use helper functions above to mute on voice channels.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Server only: Voice channel ids that his talker is muted on and cannot speak but listen. Only used on the server not on the client. Use helper functions above to mute on voice channels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOnsetVoipAudioComponentClass2D_MetaData[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "// Used to override the audio component class for 2D voice.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Used to override the audio component class for 2D voice." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOnsetVoipAudioComponentClass3D_MetaData[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "// Used to override the audio component class for 3D voice.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Used to override the audio component class for 3D voice." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedNameplateComponent_MetaData[] = {
		{ "Comment", "// Reference to the nameplate component.\n// Attached and owned by the pawn, therefore the \"Cached\" prefix.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Reference to the nameplate component.\nAttached and owned by the pawn, therefore the \"Cached\" prefix." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedAudioComponent3D_MetaData[] = {
		{ "Comment", "// Reference to the audio component of this players pawn. Used for 3d playback, created and attached to the pawn on demand.\n// Attached and owned by the pawn, therefore the \"Cached\" prefix.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Reference to the audio component of this players pawn. Used for 3d playback, created and attached to the pawn on demand.\nAttached and owned by the pawn, therefore the \"Cached\" prefix." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent2D_MetaData[] = {
		{ "Comment", "// Reference to the audio component, used for 2d playback in voice channels.\n// Managed and own by this voip talker object.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OnsetVoipTalker.h" },
		{ "ToolTip", "Reference to the audio component, used for 2d playback in voice channels.\nManaged and own by this voip talker object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoipTalkingStateChange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoipAudioDataReceived;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_MutedVoipTalkers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MutedVoipTalkers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VoiceChannelIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VoiceChannelIds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MutedVoiceChannelIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MutedVoiceChannelIds;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultOnsetVoipAudioComponentClass2D;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultOnsetVoipAudioComponentClass3D;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedNameplateComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedAudioComponent3D;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent2D;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnsetVoipTalker_CancelReceivedAudioData, "CancelReceivedAudioData" }, // 524100096
		{ &Z_Construct_UFunction_UOnsetVoipTalker_GetCurrentAmplitude, "GetCurrentAmplitude" }, // 2678962668
		{ &Z_Construct_UFunction_UOnsetVoipTalker_GetPlayerState, "GetPlayerState" }, // 447493362
		{ &Z_Construct_UFunction_UOnsetVoipTalker_GetVoiceAudioComponent, "GetVoiceAudioComponent" }, // 3935098484
		{ &Z_Construct_UFunction_UOnsetVoipTalker_IsInVoiceChannel, "IsInVoiceChannel" }, // 1095308758
		{ &Z_Construct_UFunction_UOnsetVoipTalker_IsLastReceivedTalkingState2D, "IsLastReceivedTalkingState2D" }, // 3896796740
		{ &Z_Construct_UFunction_UOnsetVoipTalker_IsMuted, "IsMuted" }, // 2977408608
		{ &Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForPlayerState, "IsMutedForPlayerState" }, // 2538975878
		{ &Z_Construct_UFunction_UOnsetVoipTalker_IsMutedForVoipTalker, "IsMutedForVoipTalker" }, // 4239342162
		{ &Z_Construct_UFunction_UOnsetVoipTalker_IsMutedOnVoiceChannel, "IsMutedOnVoiceChannel" }, // 2005083432
		{ &Z_Construct_UFunction_UOnsetVoipTalker_IsTalking, "IsTalking" }, // 2960421286
		{ &Z_Construct_UFunction_UOnsetVoipTalker_IsVoipEnabled, "IsVoipEnabled" }, // 798037858
		{ &Z_Construct_UFunction_UOnsetVoipTalker_OnPlayerStatePawnSet, "OnPlayerStatePawnSet" }, // 138394483
		{ &Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature, "OnVoipAudioDataReceived__DelegateSignature" }, // 476628096
		{ &Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature, "OnVoipTalkingStateChange__DelegateSignature" }, // 2881827757
		{ &Z_Construct_UFunction_UOnsetVoipTalker_SetMuted, "SetMuted" }, // 4088136068
		{ &Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForPlayerState, "SetMutedForPlayerState" }, // 1202507542
		{ &Z_Construct_UFunction_UOnsetVoipTalker_SetMutedForVoipTalker, "SetMutedForVoipTalker" }, // 1456273779
		{ &Z_Construct_UFunction_UOnsetVoipTalker_SetMutedOnVoiceChannel, "SetMutedOnVoiceChannel" }, // 3713317432
		{ &Z_Construct_UFunction_UOnsetVoipTalker_SetVoiceChannel, "SetVoiceChannel" }, // 59869137
		{ &Z_Construct_UFunction_UOnsetVoipTalker_SetVoipEnabled, "SetVoipEnabled" }, // 743050925
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnsetVoipTalker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_OnVoipTalkingStateChange = { "OnVoipTalkingStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipTalker, OnVoipTalkingStateChange), Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnVoipTalkingStateChange_MetaData), NewProp_OnVoipTalkingStateChange_MetaData) }; // 2881827757
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_OnVoipAudioDataReceived = { "OnVoipAudioDataReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipTalker, OnVoipAudioDataReceived), Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnVoipAudioDataReceived_MetaData), NewProp_OnVoipAudioDataReceived_MetaData) }; // 476628096
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_MutedVoipTalkers_Inner = { "MutedVoipTalkers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_MutedVoipTalkers = { "MutedVoipTalkers", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipTalker, MutedVoipTalkers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MutedVoipTalkers_MetaData), NewProp_MutedVoipTalkers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_VoiceChannelIds_Inner = { "VoiceChannelIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_VoiceChannelIds = { "VoiceChannelIds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipTalker, VoiceChannelIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceChannelIds_MetaData), NewProp_VoiceChannelIds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_MutedVoiceChannelIds_Inner = { "MutedVoiceChannelIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_MutedVoiceChannelIds = { "MutedVoiceChannelIds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipTalker, MutedVoiceChannelIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MutedVoiceChannelIds_MetaData), NewProp_MutedVoiceChannelIds_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_DefaultOnsetVoipAudioComponentClass2D = { "DefaultOnsetVoipAudioComponentClass2D", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipTalker, DefaultOnsetVoipAudioComponentClass2D), Z_Construct_UClass_UClass, Z_Construct_UClass_UOnsetVoipAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultOnsetVoipAudioComponentClass2D_MetaData), NewProp_DefaultOnsetVoipAudioComponentClass2D_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_DefaultOnsetVoipAudioComponentClass3D = { "DefaultOnsetVoipAudioComponentClass3D", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipTalker, DefaultOnsetVoipAudioComponentClass3D), Z_Construct_UClass_UClass, Z_Construct_UClass_UOnsetVoipAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultOnsetVoipAudioComponentClass3D_MetaData), NewProp_DefaultOnsetVoipAudioComponentClass3D_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_CachedNameplateComponent = { "CachedNameplateComponent", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipTalker, CachedNameplateComponent), Z_Construct_UClass_UOnsetNameplateComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedNameplateComponent_MetaData), NewProp_CachedNameplateComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_CachedAudioComponent3D = { "CachedAudioComponent3D", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipTalker, CachedAudioComponent3D), Z_Construct_UClass_UOnsetVoipAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedAudioComponent3D_MetaData), NewProp_CachedAudioComponent3D_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_AudioComponent2D = { "AudioComponent2D", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipTalker, AudioComponent2D), Z_Construct_UClass_UOnsetVoipAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent2D_MetaData), NewProp_AudioComponent2D_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnsetVoipTalker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_OnVoipTalkingStateChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_OnVoipAudioDataReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_MutedVoipTalkers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_MutedVoipTalkers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_VoiceChannelIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_VoiceChannelIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_MutedVoiceChannelIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_MutedVoiceChannelIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_DefaultOnsetVoipAudioComponentClass2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_DefaultOnsetVoipAudioComponentClass3D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_CachedNameplateComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_CachedAudioComponent3D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipTalker_Statics::NewProp_AudioComponent2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipTalker_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOnsetVoipTalker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OnsetVoip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipTalker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnsetVoipTalker_Statics::ClassParams = {
	&UOnsetVoipTalker::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOnsetVoipTalker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipTalker_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipTalker_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnsetVoipTalker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnsetVoipTalker()
{
	if (!Z_Registration_Info_UClass_UOnsetVoipTalker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnsetVoipTalker.OuterSingleton, Z_Construct_UClass_UOnsetVoipTalker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnsetVoipTalker.OuterSingleton;
}
template<> ONSETVOIP_API UClass* StaticClass<UOnsetVoipTalker>()
{
	return UOnsetVoipTalker::StaticClass();
}
UOnsetVoipTalker::UOnsetVoipTalker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnsetVoipTalker);
UOnsetVoipTalker::~UOnsetVoipTalker() {}
// End Class UOnsetVoipTalker

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipTalker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnsetVoipTalker, UOnsetVoipTalker::StaticClass, TEXT("UOnsetVoipTalker"), &Z_Registration_Info_UClass_UOnsetVoipTalker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnsetVoipTalker), 3575532929U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipTalker_h_2181938873(TEXT("/Script/OnsetVoip"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipTalker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipTalker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
