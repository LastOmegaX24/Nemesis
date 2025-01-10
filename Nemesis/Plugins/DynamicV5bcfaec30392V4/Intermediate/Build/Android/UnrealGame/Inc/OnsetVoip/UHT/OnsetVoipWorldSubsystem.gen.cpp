// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnsetVoip/Public/OnsetVoipWorldSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnsetVoipWorldSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipTalker_NoRegister();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipWorldSubsystem();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipWorldSubsystem_NoRegister();
ONSETVOIP_API UEnum* Z_Construct_UEnum_OnsetVoip_EOnsetAudioRecordingFormat();
ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature();
ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature();
ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnsetVoip();
// End Cross Module References

// Begin Delegate FOnVoipTalkerCreatedOrDestroyed
struct Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature_Statics
{
	struct OnsetVoipWorldSubsystem_eventOnVoipTalkerCreatedOrDestroyed_Parms
	{
		UOnsetVoipTalker* VoipTalker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnsetVoipWorldSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoipTalker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature_Statics::NewProp_VoipTalker = { "VoipTalker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipWorldSubsystem_eventOnVoipTalkerCreatedOrDestroyed_Parms, VoipTalker), Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature_Statics::NewProp_VoipTalker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipWorldSubsystem, nullptr, "OnVoipTalkerCreatedOrDestroyed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature_Statics::OnsetVoipWorldSubsystem_eventOnVoipTalkerCreatedOrDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature_Statics::OnsetVoipWorldSubsystem_eventOnVoipTalkerCreatedOrDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UOnsetVoipWorldSubsystem::FOnVoipTalkerCreatedOrDestroyed_DelegateWrapper(const FMulticastScriptDelegate& OnVoipTalkerCreatedOrDestroyed, UOnsetVoipTalker* VoipTalker)
{
	struct OnsetVoipWorldSubsystem_eventOnVoipTalkerCreatedOrDestroyed_Parms
	{
		UOnsetVoipTalker* VoipTalker;
	};
	OnsetVoipWorldSubsystem_eventOnVoipTalkerCreatedOrDestroyed_Parms Parms;
	Parms.VoipTalker=VoipTalker;
	OnVoipTalkerCreatedOrDestroyed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnVoipTalkerCreatedOrDestroyed

// Begin Class UOnsetVoipWorldSubsystem Function GetAllTalkers
struct Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkers_Statics
{
	struct OnsetVoipWorldSubsystem_eventGetAllTalkers_Parms
	{
		TArray<UOnsetVoipTalker*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Shared" },
		{ "Comment", "// Gets an array of all voip talkers.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipWorldSubsystem.h" },
		{ "ToolTip", "Gets an array of all voip talkers." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipWorldSubsystem_eventGetAllTalkers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipWorldSubsystem, nullptr, "GetAllTalkers", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkers_Statics::OnsetVoipWorldSubsystem_eventGetAllTalkers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkers_Statics::OnsetVoipWorldSubsystem_eventGetAllTalkers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipWorldSubsystem::execGetAllTalkers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UOnsetVoipTalker*>*)Z_Param__Result=P_THIS->GetAllTalkers();
	P_NATIVE_END;
}
// End Class UOnsetVoipWorldSubsystem Function GetAllTalkers

// Begin Class UOnsetVoipWorldSubsystem Function GetAllTalkersInVoiceChannel
struct Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkersInVoiceChannel_Statics
{
	struct OnsetVoipWorldSubsystem_eventGetAllTalkersInVoiceChannel_Parms
	{
		int32 ChannelId;
		TArray<UOnsetVoipTalker*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "// Gets an array of all voip talkers in a specific voice channel.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipWorldSubsystem.h" },
		{ "ToolTip", "Gets an array of all voip talkers in a specific voice channel." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkersInVoiceChannel_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipWorldSubsystem_eventGetAllTalkersInVoiceChannel_Parms, ChannelId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkersInVoiceChannel_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkersInVoiceChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipWorldSubsystem_eventGetAllTalkersInVoiceChannel_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkersInVoiceChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkersInVoiceChannel_Statics::NewProp_ChannelId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkersInVoiceChannel_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkersInVoiceChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkersInVoiceChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkersInVoiceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipWorldSubsystem, nullptr, "GetAllTalkersInVoiceChannel", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkersInVoiceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkersInVoiceChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkersInVoiceChannel_Statics::OnsetVoipWorldSubsystem_eventGetAllTalkersInVoiceChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkersInVoiceChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkersInVoiceChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkersInVoiceChannel_Statics::OnsetVoipWorldSubsystem_eventGetAllTalkersInVoiceChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkersInVoiceChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkersInVoiceChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipWorldSubsystem::execGetAllTalkersInVoiceChannel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChannelId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UOnsetVoipTalker*>*)Z_Param__Result=P_THIS->GetAllTalkersInVoiceChannel(Z_Param_ChannelId);
	P_NATIVE_END;
}
// End Class UOnsetVoipWorldSubsystem Function GetAllTalkersInVoiceChannel

// Begin Class UOnsetVoipWorldSubsystem Function GetRecordingFile
struct Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetRecordingFile_Statics
{
	struct OnsetVoipWorldSubsystem_eventGetRecordingFile_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Shared" },
		{ "Comment", "// Returns the directory we are recording to. If this is a single file recording then it will return the directory + filename.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipWorldSubsystem.h" },
		{ "ToolTip", "Returns the directory we are recording to. If this is a single file recording then it will return the directory + filename." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetRecordingFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipWorldSubsystem_eventGetRecordingFile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetRecordingFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetRecordingFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetRecordingFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetRecordingFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipWorldSubsystem, nullptr, "GetRecordingFile", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetRecordingFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetRecordingFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetRecordingFile_Statics::OnsetVoipWorldSubsystem_eventGetRecordingFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetRecordingFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetRecordingFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetRecordingFile_Statics::OnsetVoipWorldSubsystem_eventGetRecordingFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetRecordingFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetRecordingFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipWorldSubsystem::execGetRecordingFile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetRecordingFile();
	P_NATIVE_END;
}
// End Class UOnsetVoipWorldSubsystem Function GetRecordingFile

// Begin Class UOnsetVoipWorldSubsystem Function GetVoipTalker
struct Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetVoipTalker_Statics
{
	struct OnsetVoipWorldSubsystem_eventGetVoipTalker_Parms
	{
		APlayerState* PlayerState;
		UOnsetVoipTalker* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Shared" },
		{ "Comment", "// Gets the voip talker for a specific player state.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipWorldSubsystem.h" },
		{ "ToolTip", "Gets the voip talker for a specific player state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetVoipTalker_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipWorldSubsystem_eventGetVoipTalker_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetVoipTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipWorldSubsystem_eventGetVoipTalker_Parms, ReturnValue), Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetVoipTalker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetVoipTalker_Statics::NewProp_PlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetVoipTalker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetVoipTalker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetVoipTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipWorldSubsystem, nullptr, "GetVoipTalker", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetVoipTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetVoipTalker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetVoipTalker_Statics::OnsetVoipWorldSubsystem_eventGetVoipTalker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetVoipTalker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetVoipTalker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetVoipTalker_Statics::OnsetVoipWorldSubsystem_eventGetVoipTalker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetVoipTalker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetVoipTalker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipWorldSubsystem::execGetVoipTalker)
{
	P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOnsetVoipTalker**)Z_Param__Result=P_THIS->GetVoipTalker(Z_Param_PlayerState);
	P_NATIVE_END;
}
// End Class UOnsetVoipWorldSubsystem Function GetVoipTalker

// Begin Class UOnsetVoipWorldSubsystem Function IsRecording
struct Z_Construct_UFunction_UOnsetVoipWorldSubsystem_IsRecording_Statics
{
	struct OnsetVoipWorldSubsystem_eventIsRecording_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Shared" },
		{ "Comment", "// Returns true if currently recording.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipWorldSubsystem.h" },
		{ "ToolTip", "Returns true if currently recording." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipWorldSubsystem_IsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipWorldSubsystem_eventIsRecording_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_IsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipWorldSubsystem_eventIsRecording_Parms), &Z_Construct_UFunction_UOnsetVoipWorldSubsystem_IsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipWorldSubsystem_IsRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipWorldSubsystem_IsRecording_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_IsRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_IsRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipWorldSubsystem, nullptr, "IsRecording", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipWorldSubsystem_IsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_IsRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_IsRecording_Statics::OnsetVoipWorldSubsystem_eventIsRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_IsRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipWorldSubsystem_IsRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_IsRecording_Statics::OnsetVoipWorldSubsystem_eventIsRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipWorldSubsystem_IsRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipWorldSubsystem_IsRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipWorldSubsystem::execIsRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRecording();
	P_NATIVE_END;
}
// End Class UOnsetVoipWorldSubsystem Function IsRecording

// Begin Class UOnsetVoipWorldSubsystem Function StartRecording
struct Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics
{
	struct OnsetVoipWorldSubsystem_eventStartRecording_Parms
	{
		FString Filename;
		EOnsetAudioRecordingFormat RecordingFormat;
		bool bMixToSingleFile;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Shared" },
		{ "Comment", "/* Start recording remote talkers to an audio file.\n\x09 * Filename: If empty a file will be generated.\n\x09 * bMixToSingleFile: If true will mix all audio data to a single file instead of recording each remote talker to a separate file.\n\x09 * Return false if recording is already running or failed to start recording.\n\x09 * To enable this on a dedicated server see OnsetVoip.Build.cs file.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OnsetVoipWorldSubsystem.h" },
		{ "ToolTip", "Start recording remote talkers to an audio file.\n       * Filename: If empty a file will be generated.\n       * bMixToSingleFile: If true will mix all audio data to a single file instead of recording each remote talker to a separate file.\n       * Return false if recording is already running or failed to start recording.\n       * To enable this on a dedicated server see OnsetVoip.Build.cs file." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RecordingFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RecordingFormat;
	static void NewProp_bMixToSingleFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMixToSingleFile;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipWorldSubsystem_eventStartRecording_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::NewProp_RecordingFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::NewProp_RecordingFormat = { "RecordingFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipWorldSubsystem_eventStartRecording_Parms, RecordingFormat), Z_Construct_UEnum_OnsetVoip_EOnsetAudioRecordingFormat, METADATA_PARAMS(0, nullptr) }; // 2346605622
void Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::NewProp_bMixToSingleFile_SetBit(void* Obj)
{
	((OnsetVoipWorldSubsystem_eventStartRecording_Parms*)Obj)->bMixToSingleFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::NewProp_bMixToSingleFile = { "bMixToSingleFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipWorldSubsystem_eventStartRecording_Parms), &Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::NewProp_bMixToSingleFile_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipWorldSubsystem_eventStartRecording_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipWorldSubsystem_eventStartRecording_Parms), &Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::NewProp_RecordingFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::NewProp_RecordingFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::NewProp_bMixToSingleFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipWorldSubsystem, nullptr, "StartRecording", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::OnsetVoipWorldSubsystem_eventStartRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::OnsetVoipWorldSubsystem_eventStartRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipWorldSubsystem::execStartRecording)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_GET_ENUM(EOnsetAudioRecordingFormat,Z_Param_RecordingFormat);
	P_GET_UBOOL(Z_Param_bMixToSingleFile);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartRecording(Z_Param_Filename,EOnsetAudioRecordingFormat(Z_Param_RecordingFormat),Z_Param_bMixToSingleFile);
	P_NATIVE_END;
}
// End Class UOnsetVoipWorldSubsystem Function StartRecording

// Begin Class UOnsetVoipWorldSubsystem Function StopRecording
struct Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StopRecording_Statics
{
	struct OnsetVoipWorldSubsystem_eventStopRecording_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Shared" },
		{ "Comment", "// Stop recording. Returns false if not recording.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipWorldSubsystem.h" },
		{ "ToolTip", "Stop recording. Returns false if not recording." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StopRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipWorldSubsystem_eventStopRecording_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StopRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipWorldSubsystem_eventStopRecording_Parms), &Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StopRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StopRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StopRecording_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StopRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StopRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipWorldSubsystem, nullptr, "StopRecording", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StopRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StopRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StopRecording_Statics::OnsetVoipWorldSubsystem_eventStopRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StopRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StopRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StopRecording_Statics::OnsetVoipWorldSubsystem_eventStopRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StopRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StopRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipWorldSubsystem::execStopRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StopRecording();
	P_NATIVE_END;
}
// End Class UOnsetVoipWorldSubsystem Function StopRecording

// Begin Class UOnsetVoipWorldSubsystem Function UpdateVoipTalkers
struct Z_Construct_UFunction_UOnsetVoipWorldSubsystem_UpdateVoipTalkers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Called by the timer to update all voip talkers.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipWorldSubsystem.h" },
		{ "ToolTip", "Called by the timer to update all voip talkers." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipWorldSubsystem_UpdateVoipTalkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipWorldSubsystem, nullptr, "UpdateVoipTalkers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipWorldSubsystem_UpdateVoipTalkers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipWorldSubsystem_UpdateVoipTalkers_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOnsetVoipWorldSubsystem_UpdateVoipTalkers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipWorldSubsystem_UpdateVoipTalkers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipWorldSubsystem::execUpdateVoipTalkers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateVoipTalkers();
	P_NATIVE_END;
}
// End Class UOnsetVoipWorldSubsystem Function UpdateVoipTalkers

// Begin Class UOnsetVoipWorldSubsystem
void UOnsetVoipWorldSubsystem::StaticRegisterNativesUOnsetVoipWorldSubsystem()
{
	UClass* Class = UOnsetVoipWorldSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllTalkers", &UOnsetVoipWorldSubsystem::execGetAllTalkers },
		{ "GetAllTalkersInVoiceChannel", &UOnsetVoipWorldSubsystem::execGetAllTalkersInVoiceChannel },
		{ "GetRecordingFile", &UOnsetVoipWorldSubsystem::execGetRecordingFile },
		{ "GetVoipTalker", &UOnsetVoipWorldSubsystem::execGetVoipTalker },
		{ "IsRecording", &UOnsetVoipWorldSubsystem::execIsRecording },
		{ "StartRecording", &UOnsetVoipWorldSubsystem::execStartRecording },
		{ "StopRecording", &UOnsetVoipWorldSubsystem::execStopRecording },
		{ "UpdateVoipTalkers", &UOnsetVoipWorldSubsystem::execUpdateVoipTalkers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnsetVoipWorldSubsystem);
UClass* Z_Construct_UClass_UOnsetVoipWorldSubsystem_NoRegister()
{
	return UOnsetVoipWorldSubsystem::StaticClass();
}
struct Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Subsystem managing UOnsetVoipTalker which are remote players.\n */" },
		{ "IncludePath", "OnsetVoipWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/OnsetVoipWorldSubsystem.h" },
		{ "ToolTip", "Subsystem managing UOnsetVoipTalker which are remote players." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnVoipTalkingStateChange_MetaData[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "// Called when any voip talker starts or stops talking.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipWorldSubsystem.h" },
		{ "ToolTip", "Called when any voip talker starts or stops talking." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnVoipTalkerCreated_MetaData[] = {
		{ "Category", "OnsetVoip|Shared" },
		{ "Comment", "// Called when a new instance of OnsetVoipTalker is created. (Player joined)\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipWorldSubsystem.h" },
		{ "ToolTip", "Called when a new instance of OnsetVoipTalker is created. (Player joined)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnVoipTalkerDestroyed_MetaData[] = {
		{ "Category", "OnsetVoip|Shared" },
		{ "Comment", "// Called when an instance of OnsetVoipTalker is destroyed. (Player left)\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipWorldSubsystem.h" },
		{ "ToolTip", "Called when an instance of OnsetVoipTalker is destroyed. (Player left)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnVoipAudioDataReceived_MetaData[] = {
		{ "Category", "OnsetVoip|Client" },
		{ "Comment", "// See UOnsetVoipTalker::OnVoipAudioDataReceived.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipWorldSubsystem.h" },
		{ "ToolTip", "See UOnsetVoipTalker::OnVoipAudioDataReceived." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoipTalkers_MetaData[] = {
		{ "Comment", "// Map holding the voip talker for each corresponding player state. Player state is a strong reference here.\n// Upon actor destroy of the player state the voip talker will be destroyed as well.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipWorldSubsystem.h" },
		{ "ToolTip", "Map holding the voip talker for each corresponding player state. Player state is a strong reference here.\nUpon actor destroy of the player state the voip talker will be destroyed as well." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoipTalkingStateChange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoipTalkerCreated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoipTalkerDestroyed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVoipAudioDataReceived;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoipTalkers_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoipTalkers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_VoipTalkers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkers, "GetAllTalkers" }, // 2413124863
		{ &Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetAllTalkersInVoiceChannel, "GetAllTalkersInVoiceChannel" }, // 2481501148
		{ &Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetRecordingFile, "GetRecordingFile" }, // 1201336006
		{ &Z_Construct_UFunction_UOnsetVoipWorldSubsystem_GetVoipTalker, "GetVoipTalker" }, // 443620587
		{ &Z_Construct_UFunction_UOnsetVoipWorldSubsystem_IsRecording, "IsRecording" }, // 3675818697
		{ &Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature, "OnVoipTalkerCreatedOrDestroyed__DelegateSignature" }, // 3106571817
		{ &Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StartRecording, "StartRecording" }, // 3814610416
		{ &Z_Construct_UFunction_UOnsetVoipWorldSubsystem_StopRecording, "StopRecording" }, // 1729772591
		{ &Z_Construct_UFunction_UOnsetVoipWorldSubsystem_UpdateVoipTalkers, "UpdateVoipTalkers" }, // 1616579275
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnsetVoipWorldSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::NewProp_OnVoipTalkingStateChange = { "OnVoipTalkingStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipWorldSubsystem, OnVoipTalkingStateChange), Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnVoipTalkingStateChange_MetaData), NewProp_OnVoipTalkingStateChange_MetaData) }; // 2881827757
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::NewProp_OnVoipTalkerCreated = { "OnVoipTalkerCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipWorldSubsystem, OnVoipTalkerCreated), Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnVoipTalkerCreated_MetaData), NewProp_OnVoipTalkerCreated_MetaData) }; // 3106571817
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::NewProp_OnVoipTalkerDestroyed = { "OnVoipTalkerDestroyed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipWorldSubsystem, OnVoipTalkerDestroyed), Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnVoipTalkerDestroyed_MetaData), NewProp_OnVoipTalkerDestroyed_MetaData) }; // 3106571817
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::NewProp_OnVoipAudioDataReceived = { "OnVoipAudioDataReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipWorldSubsystem, OnVoipAudioDataReceived), Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnVoipAudioDataReceived_MetaData), NewProp_OnVoipAudioDataReceived_MetaData) }; // 476628096
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::NewProp_VoipTalkers_ValueProp = { "VoipTalkers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::NewProp_VoipTalkers_Key_KeyProp = { "VoipTalkers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::NewProp_VoipTalkers = { "VoipTalkers", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetVoipWorldSubsystem, VoipTalkers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoipTalkers_MetaData), NewProp_VoipTalkers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::NewProp_OnVoipTalkingStateChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::NewProp_OnVoipTalkerCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::NewProp_OnVoipTalkerDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::NewProp_OnVoipAudioDataReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::NewProp_VoipTalkers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::NewProp_VoipTalkers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::NewProp_VoipTalkers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnsetVoip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::ClassParams = {
	&UOnsetVoipWorldSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnsetVoipWorldSubsystem()
{
	if (!Z_Registration_Info_UClass_UOnsetVoipWorldSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnsetVoipWorldSubsystem.OuterSingleton, Z_Construct_UClass_UOnsetVoipWorldSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnsetVoipWorldSubsystem.OuterSingleton;
}
template<> ONSETVOIP_API UClass* StaticClass<UOnsetVoipWorldSubsystem>()
{
	return UOnsetVoipWorldSubsystem::StaticClass();
}
UOnsetVoipWorldSubsystem::UOnsetVoipWorldSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnsetVoipWorldSubsystem);
UOnsetVoipWorldSubsystem::~UOnsetVoipWorldSubsystem() {}
// End Class UOnsetVoipWorldSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipWorldSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnsetVoipWorldSubsystem, UOnsetVoipWorldSubsystem::StaticClass, TEXT("UOnsetVoipWorldSubsystem"), &Z_Registration_Info_UClass_UOnsetVoipWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnsetVoipWorldSubsystem), 2530892242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipWorldSubsystem_h_627130275(TEXT("/Script/OnsetVoip"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipWorldSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipWorldSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
