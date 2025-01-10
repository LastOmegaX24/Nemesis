// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnsetVoip/Public/OnsetVoipBlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnsetVoipBlueprintFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipBlueprintLibrary();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipBlueprintLibrary_NoRegister();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipTalker_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnsetVoip();
// End Cross Module References

// Begin Class UOnsetVoipBlueprintLibrary Function GetAllTalkers
struct Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkers_Statics
{
	struct OnsetVoipBlueprintLibrary_eventGetAllTalkers_Parms
	{
		const UObject* WorldContextObject;
		TArray<UOnsetVoipTalker*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Shared" },
		{ "Comment", "// See UOnsetVoipWorldSubsystem::GetAllTalkers\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipBlueprintFunctionLibrary.h" },
		{ "ToolTip", "See UOnsetVoipWorldSubsystem::GetAllTalkers" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkers_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventGetAllTalkers_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventGetAllTalkers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkers_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipBlueprintLibrary, nullptr, "GetAllTalkers", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkers_Statics::OnsetVoipBlueprintLibrary_eventGetAllTalkers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkers_Statics::OnsetVoipBlueprintLibrary_eventGetAllTalkers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipBlueprintLibrary::execGetAllTalkers)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UOnsetVoipTalker*>*)Z_Param__Result=UOnsetVoipBlueprintLibrary::GetAllTalkers(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UOnsetVoipBlueprintLibrary Function GetAllTalkers

// Begin Class UOnsetVoipBlueprintLibrary Function GetAllTalkersInVoiceChannel
struct Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel_Statics
{
	struct OnsetVoipBlueprintLibrary_eventGetAllTalkersInVoiceChannel_Parms
	{
		int32 ChannelId;
		const UObject* WorldContextObject;
		TArray<UOnsetVoipTalker*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "// See UOnsetVoipWorldSubsystem::GetAllTalkersInVoiceChannel\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipBlueprintFunctionLibrary.h" },
		{ "ToolTip", "See UOnsetVoipWorldSubsystem::GetAllTalkersInVoiceChannel" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventGetAllTalkersInVoiceChannel_Parms, ChannelId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventGetAllTalkersInVoiceChannel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventGetAllTalkersInVoiceChannel_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel_Statics::NewProp_ChannelId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipBlueprintLibrary, nullptr, "GetAllTalkersInVoiceChannel", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel_Statics::OnsetVoipBlueprintLibrary_eventGetAllTalkersInVoiceChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel_Statics::OnsetVoipBlueprintLibrary_eventGetAllTalkersInVoiceChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipBlueprintLibrary::execGetAllTalkersInVoiceChannel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChannelId);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UOnsetVoipTalker*>*)Z_Param__Result=UOnsetVoipBlueprintLibrary::GetAllTalkersInVoiceChannel(Z_Param_ChannelId,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UOnsetVoipBlueprintLibrary Function GetAllTalkersInVoiceChannel

// Begin Class UOnsetVoipBlueprintLibrary Function GetTalkerByPlayerState
struct Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetTalkerByPlayerState_Statics
{
	struct OnsetVoipBlueprintLibrary_eventGetTalkerByPlayerState_Parms
	{
		APlayerState* PlayerState;
		const UObject* WorldContextObject;
		UOnsetVoipTalker* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Shared" },
		{ "Comment", "// See UOnsetVoipWorldSubsystem::GetVoipTalker\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipBlueprintFunctionLibrary.h" },
		{ "ToolTip", "See UOnsetVoipWorldSubsystem::GetVoipTalker" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetTalkerByPlayerState_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventGetTalkerByPlayerState_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetTalkerByPlayerState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventGetTalkerByPlayerState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetTalkerByPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventGetTalkerByPlayerState_Parms, ReturnValue), Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetTalkerByPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetTalkerByPlayerState_Statics::NewProp_PlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetTalkerByPlayerState_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetTalkerByPlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetTalkerByPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetTalkerByPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipBlueprintLibrary, nullptr, "GetTalkerByPlayerState", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetTalkerByPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetTalkerByPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetTalkerByPlayerState_Statics::OnsetVoipBlueprintLibrary_eventGetTalkerByPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetTalkerByPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetTalkerByPlayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetTalkerByPlayerState_Statics::OnsetVoipBlueprintLibrary_eventGetTalkerByPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetTalkerByPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetTalkerByPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipBlueprintLibrary::execGetTalkerByPlayerState)
{
	P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOnsetVoipTalker**)Z_Param__Result=UOnsetVoipBlueprintLibrary::GetTalkerByPlayerState(Z_Param_PlayerState,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UOnsetVoipBlueprintLibrary Function GetTalkerByPlayerState

// Begin Class UOnsetVoipBlueprintLibrary Function IsTalkerInVoiceChannel
struct Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel_Statics
{
	struct OnsetVoipBlueprintLibrary_eventIsTalkerInVoiceChannel_Parms
	{
		UOnsetVoipTalker* VoipTalker;
		int32 ChannelId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "// See UOnsetVoipTalker::IsInVoiceChannel\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipBlueprintFunctionLibrary.h" },
		{ "ToolTip", "See UOnsetVoipTalker::IsInVoiceChannel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoipTalker;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel_Statics::NewProp_VoipTalker = { "VoipTalker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventIsTalkerInVoiceChannel_Parms, VoipTalker), Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventIsTalkerInVoiceChannel_Parms, ChannelId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipBlueprintLibrary_eventIsTalkerInVoiceChannel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipBlueprintLibrary_eventIsTalkerInVoiceChannel_Parms), &Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel_Statics::NewProp_VoipTalker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel_Statics::NewProp_ChannelId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipBlueprintLibrary, nullptr, "IsTalkerInVoiceChannel", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel_Statics::OnsetVoipBlueprintLibrary_eventIsTalkerInVoiceChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel_Statics::OnsetVoipBlueprintLibrary_eventIsTalkerInVoiceChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipBlueprintLibrary::execIsTalkerInVoiceChannel)
{
	P_GET_OBJECT(UOnsetVoipTalker,Z_Param_VoipTalker);
	P_GET_PROPERTY(FIntProperty,Z_Param_ChannelId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOnsetVoipBlueprintLibrary::IsTalkerInVoiceChannel(Z_Param_VoipTalker,Z_Param_ChannelId);
	P_NATIVE_END;
}
// End Class UOnsetVoipBlueprintLibrary Function IsTalkerInVoiceChannel

// Begin Class UOnsetVoipBlueprintLibrary Function IsTalkerMutedForPlayerState
struct Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState_Statics
{
	struct OnsetVoipBlueprintLibrary_eventIsTalkerMutedForPlayerState_Parms
	{
		UOnsetVoipTalker* VoipTalker;
		APlayerState* PlayerState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "// See UOnsetVoipTalker::IsMutedForPlayerState\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipBlueprintFunctionLibrary.h" },
		{ "ToolTip", "See UOnsetVoipTalker::IsMutedForPlayerState" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoipTalker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState_Statics::NewProp_VoipTalker = { "VoipTalker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventIsTalkerMutedForPlayerState_Parms, VoipTalker), Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventIsTalkerMutedForPlayerState_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipBlueprintLibrary_eventIsTalkerMutedForPlayerState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipBlueprintLibrary_eventIsTalkerMutedForPlayerState_Parms), &Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState_Statics::NewProp_VoipTalker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState_Statics::NewProp_PlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipBlueprintLibrary, nullptr, "IsTalkerMutedForPlayerState", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState_Statics::OnsetVoipBlueprintLibrary_eventIsTalkerMutedForPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState_Statics::OnsetVoipBlueprintLibrary_eventIsTalkerMutedForPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipBlueprintLibrary::execIsTalkerMutedForPlayerState)
{
	P_GET_OBJECT(UOnsetVoipTalker,Z_Param_VoipTalker);
	P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOnsetVoipBlueprintLibrary::IsTalkerMutedForPlayerState(Z_Param_VoipTalker,Z_Param_PlayerState);
	P_NATIVE_END;
}
// End Class UOnsetVoipBlueprintLibrary Function IsTalkerMutedForPlayerState

// Begin Class UOnsetVoipBlueprintLibrary Function IsTalkerMutedForVoipTalker
struct Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker_Statics
{
	struct OnsetVoipBlueprintLibrary_eventIsTalkerMutedForVoipTalker_Parms
	{
		UOnsetVoipTalker* VoipTalker;
		UOnsetVoipTalker* OtherVoipTalker;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "// See UOnsetVoipTalker::IsMutedForVoipTalker\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipBlueprintFunctionLibrary.h" },
		{ "ToolTip", "See UOnsetVoipTalker::IsMutedForVoipTalker" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoipTalker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherVoipTalker;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker_Statics::NewProp_VoipTalker = { "VoipTalker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventIsTalkerMutedForVoipTalker_Parms, VoipTalker), Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker_Statics::NewProp_OtherVoipTalker = { "OtherVoipTalker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventIsTalkerMutedForVoipTalker_Parms, OtherVoipTalker), Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipBlueprintLibrary_eventIsTalkerMutedForVoipTalker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipBlueprintLibrary_eventIsTalkerMutedForVoipTalker_Parms), &Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker_Statics::NewProp_VoipTalker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker_Statics::NewProp_OtherVoipTalker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipBlueprintLibrary, nullptr, "IsTalkerMutedForVoipTalker", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker_Statics::OnsetVoipBlueprintLibrary_eventIsTalkerMutedForVoipTalker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker_Statics::OnsetVoipBlueprintLibrary_eventIsTalkerMutedForVoipTalker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipBlueprintLibrary::execIsTalkerMutedForVoipTalker)
{
	P_GET_OBJECT(UOnsetVoipTalker,Z_Param_VoipTalker);
	P_GET_OBJECT(UOnsetVoipTalker,Z_Param_OtherVoipTalker);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOnsetVoipBlueprintLibrary::IsTalkerMutedForVoipTalker(Z_Param_VoipTalker,Z_Param_OtherVoipTalker);
	P_NATIVE_END;
}
// End Class UOnsetVoipBlueprintLibrary Function IsTalkerMutedForVoipTalker

// Begin Class UOnsetVoipBlueprintLibrary Function IsTalkerMutedOnVoiceChannel
struct Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel_Statics
{
	struct OnsetVoipBlueprintLibrary_eventIsTalkerMutedOnVoiceChannel_Parms
	{
		UOnsetVoipTalker* VoipTalker;
		int32 ChannelId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "// See UOnsetVoipTalker::IsMutedOnVoiceChannel\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipBlueprintFunctionLibrary.h" },
		{ "ToolTip", "See UOnsetVoipTalker::IsMutedOnVoiceChannel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoipTalker;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel_Statics::NewProp_VoipTalker = { "VoipTalker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventIsTalkerMutedOnVoiceChannel_Parms, VoipTalker), Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventIsTalkerMutedOnVoiceChannel_Parms, ChannelId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OnsetVoipBlueprintLibrary_eventIsTalkerMutedOnVoiceChannel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipBlueprintLibrary_eventIsTalkerMutedOnVoiceChannel_Parms), &Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel_Statics::NewProp_VoipTalker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel_Statics::NewProp_ChannelId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipBlueprintLibrary, nullptr, "IsTalkerMutedOnVoiceChannel", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel_Statics::OnsetVoipBlueprintLibrary_eventIsTalkerMutedOnVoiceChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel_Statics::OnsetVoipBlueprintLibrary_eventIsTalkerMutedOnVoiceChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipBlueprintLibrary::execIsTalkerMutedOnVoiceChannel)
{
	P_GET_OBJECT(UOnsetVoipTalker,Z_Param_VoipTalker);
	P_GET_PROPERTY(FIntProperty,Z_Param_ChannelId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOnsetVoipBlueprintLibrary::IsTalkerMutedOnVoiceChannel(Z_Param_VoipTalker,Z_Param_ChannelId);
	P_NATIVE_END;
}
// End Class UOnsetVoipBlueprintLibrary Function IsTalkerMutedOnVoiceChannel

// Begin Class UOnsetVoipBlueprintLibrary Function SetTalkerMutedForPlayerState
struct Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState_Statics
{
	struct OnsetVoipBlueprintLibrary_eventSetTalkerMutedForPlayerState_Parms
	{
		UOnsetVoipTalker* VoipTalker;
		bool bMute;
		APlayerState* PlayerState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "// See UOnsetVoipTalker::SetMutedForPlayerState\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipBlueprintFunctionLibrary.h" },
		{ "ToolTip", "See UOnsetVoipTalker::SetMutedForPlayerState" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoipTalker;
	static void NewProp_bMute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMute;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState_Statics::NewProp_VoipTalker = { "VoipTalker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventSetTalkerMutedForPlayerState_Parms, VoipTalker), Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState_Statics::NewProp_bMute_SetBit(void* Obj)
{
	((OnsetVoipBlueprintLibrary_eventSetTalkerMutedForPlayerState_Parms*)Obj)->bMute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState_Statics::NewProp_bMute = { "bMute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipBlueprintLibrary_eventSetTalkerMutedForPlayerState_Parms), &Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState_Statics::NewProp_bMute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventSetTalkerMutedForPlayerState_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState_Statics::NewProp_VoipTalker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState_Statics::NewProp_bMute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState_Statics::NewProp_PlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipBlueprintLibrary, nullptr, "SetTalkerMutedForPlayerState", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState_Statics::OnsetVoipBlueprintLibrary_eventSetTalkerMutedForPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState_Statics::OnsetVoipBlueprintLibrary_eventSetTalkerMutedForPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipBlueprintLibrary::execSetTalkerMutedForPlayerState)
{
	P_GET_OBJECT(UOnsetVoipTalker,Z_Param_VoipTalker);
	P_GET_UBOOL(Z_Param_bMute);
	P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOnsetVoipBlueprintLibrary::SetTalkerMutedForPlayerState(Z_Param_VoipTalker,Z_Param_bMute,Z_Param_PlayerState);
	P_NATIVE_END;
}
// End Class UOnsetVoipBlueprintLibrary Function SetTalkerMutedForPlayerState

// Begin Class UOnsetVoipBlueprintLibrary Function SetTalkerMutedForVoipTalker
struct Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker_Statics
{
	struct OnsetVoipBlueprintLibrary_eventSetTalkerMutedForVoipTalker_Parms
	{
		UOnsetVoipTalker* VoipTalker;
		bool bMute;
		UOnsetVoipTalker* OtherVoipTalker;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "// See UOnsetVoipTalker::SetMutedForVoipTalker\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipBlueprintFunctionLibrary.h" },
		{ "ToolTip", "See UOnsetVoipTalker::SetMutedForVoipTalker" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoipTalker;
	static void NewProp_bMute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMute;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherVoipTalker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker_Statics::NewProp_VoipTalker = { "VoipTalker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventSetTalkerMutedForVoipTalker_Parms, VoipTalker), Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker_Statics::NewProp_bMute_SetBit(void* Obj)
{
	((OnsetVoipBlueprintLibrary_eventSetTalkerMutedForVoipTalker_Parms*)Obj)->bMute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker_Statics::NewProp_bMute = { "bMute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipBlueprintLibrary_eventSetTalkerMutedForVoipTalker_Parms), &Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker_Statics::NewProp_bMute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker_Statics::NewProp_OtherVoipTalker = { "OtherVoipTalker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventSetTalkerMutedForVoipTalker_Parms, OtherVoipTalker), Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker_Statics::NewProp_VoipTalker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker_Statics::NewProp_bMute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker_Statics::NewProp_OtherVoipTalker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipBlueprintLibrary, nullptr, "SetTalkerMutedForVoipTalker", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker_Statics::OnsetVoipBlueprintLibrary_eventSetTalkerMutedForVoipTalker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker_Statics::OnsetVoipBlueprintLibrary_eventSetTalkerMutedForVoipTalker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipBlueprintLibrary::execSetTalkerMutedForVoipTalker)
{
	P_GET_OBJECT(UOnsetVoipTalker,Z_Param_VoipTalker);
	P_GET_UBOOL(Z_Param_bMute);
	P_GET_OBJECT(UOnsetVoipTalker,Z_Param_OtherVoipTalker);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOnsetVoipBlueprintLibrary::SetTalkerMutedForVoipTalker(Z_Param_VoipTalker,Z_Param_bMute,Z_Param_OtherVoipTalker);
	P_NATIVE_END;
}
// End Class UOnsetVoipBlueprintLibrary Function SetTalkerMutedForVoipTalker

// Begin Class UOnsetVoipBlueprintLibrary Function SetTalkerMutedOnVoiceChannel
struct Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel_Statics
{
	struct OnsetVoipBlueprintLibrary_eventSetTalkerMutedOnVoiceChannel_Parms
	{
		UOnsetVoipTalker* VoipTalker;
		bool bMute;
		int32 ChannelId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "// See UOnsetVoipTalker::SetMutedOnVoiceChannel\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipBlueprintFunctionLibrary.h" },
		{ "ToolTip", "See UOnsetVoipTalker::SetMutedOnVoiceChannel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoipTalker;
	static void NewProp_bMute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel_Statics::NewProp_VoipTalker = { "VoipTalker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventSetTalkerMutedOnVoiceChannel_Parms, VoipTalker), Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel_Statics::NewProp_bMute_SetBit(void* Obj)
{
	((OnsetVoipBlueprintLibrary_eventSetTalkerMutedOnVoiceChannel_Parms*)Obj)->bMute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel_Statics::NewProp_bMute = { "bMute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipBlueprintLibrary_eventSetTalkerMutedOnVoiceChannel_Parms), &Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel_Statics::NewProp_bMute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventSetTalkerMutedOnVoiceChannel_Parms, ChannelId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel_Statics::NewProp_VoipTalker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel_Statics::NewProp_bMute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel_Statics::NewProp_ChannelId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipBlueprintLibrary, nullptr, "SetTalkerMutedOnVoiceChannel", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel_Statics::OnsetVoipBlueprintLibrary_eventSetTalkerMutedOnVoiceChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel_Statics::OnsetVoipBlueprintLibrary_eventSetTalkerMutedOnVoiceChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipBlueprintLibrary::execSetTalkerMutedOnVoiceChannel)
{
	P_GET_OBJECT(UOnsetVoipTalker,Z_Param_VoipTalker);
	P_GET_UBOOL(Z_Param_bMute);
	P_GET_PROPERTY(FIntProperty,Z_Param_ChannelId);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOnsetVoipBlueprintLibrary::SetTalkerMutedOnVoiceChannel(Z_Param_VoipTalker,Z_Param_bMute,Z_Param_ChannelId);
	P_NATIVE_END;
}
// End Class UOnsetVoipBlueprintLibrary Function SetTalkerMutedOnVoiceChannel

// Begin Class UOnsetVoipBlueprintLibrary Function SetTalkerVoiceChannel
struct Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel_Statics
{
	struct OnsetVoipBlueprintLibrary_eventSetTalkerVoiceChannel_Parms
	{
		UOnsetVoipTalker* VoipTalker;
		int32 ChannelId;
		bool bAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip|Server" },
		{ "Comment", "// See UOnsetVoipTalker::SetVoiceChannel\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipBlueprintFunctionLibrary.h" },
		{ "ToolTip", "See UOnsetVoipTalker::SetVoiceChannel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoipTalker;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelId;
	static void NewProp_bAdd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel_Statics::NewProp_VoipTalker = { "VoipTalker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventSetTalkerVoiceChannel_Parms, VoipTalker), Z_Construct_UClass_UOnsetVoipTalker_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipBlueprintLibrary_eventSetTalkerVoiceChannel_Parms, ChannelId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel_Statics::NewProp_bAdd_SetBit(void* Obj)
{
	((OnsetVoipBlueprintLibrary_eventSetTalkerVoiceChannel_Parms*)Obj)->bAdd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel_Statics::NewProp_bAdd = { "bAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OnsetVoipBlueprintLibrary_eventSetTalkerVoiceChannel_Parms), &Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel_Statics::NewProp_bAdd_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel_Statics::NewProp_VoipTalker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel_Statics::NewProp_ChannelId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel_Statics::NewProp_bAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipBlueprintLibrary, nullptr, "SetTalkerVoiceChannel", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel_Statics::OnsetVoipBlueprintLibrary_eventSetTalkerVoiceChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel_Statics::OnsetVoipBlueprintLibrary_eventSetTalkerVoiceChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipBlueprintLibrary::execSetTalkerVoiceChannel)
{
	P_GET_OBJECT(UOnsetVoipTalker,Z_Param_VoipTalker);
	P_GET_PROPERTY(FIntProperty,Z_Param_ChannelId);
	P_GET_UBOOL(Z_Param_bAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOnsetVoipBlueprintLibrary::SetTalkerVoiceChannel(Z_Param_VoipTalker,Z_Param_ChannelId,Z_Param_bAdd);
	P_NATIVE_END;
}
// End Class UOnsetVoipBlueprintLibrary Function SetTalkerVoiceChannel

// Begin Class UOnsetVoipBlueprintLibrary
void UOnsetVoipBlueprintLibrary::StaticRegisterNativesUOnsetVoipBlueprintLibrary()
{
	UClass* Class = UOnsetVoipBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllTalkers", &UOnsetVoipBlueprintLibrary::execGetAllTalkers },
		{ "GetAllTalkersInVoiceChannel", &UOnsetVoipBlueprintLibrary::execGetAllTalkersInVoiceChannel },
		{ "GetTalkerByPlayerState", &UOnsetVoipBlueprintLibrary::execGetTalkerByPlayerState },
		{ "IsTalkerInVoiceChannel", &UOnsetVoipBlueprintLibrary::execIsTalkerInVoiceChannel },
		{ "IsTalkerMutedForPlayerState", &UOnsetVoipBlueprintLibrary::execIsTalkerMutedForPlayerState },
		{ "IsTalkerMutedForVoipTalker", &UOnsetVoipBlueprintLibrary::execIsTalkerMutedForVoipTalker },
		{ "IsTalkerMutedOnVoiceChannel", &UOnsetVoipBlueprintLibrary::execIsTalkerMutedOnVoiceChannel },
		{ "SetTalkerMutedForPlayerState", &UOnsetVoipBlueprintLibrary::execSetTalkerMutedForPlayerState },
		{ "SetTalkerMutedForVoipTalker", &UOnsetVoipBlueprintLibrary::execSetTalkerMutedForVoipTalker },
		{ "SetTalkerMutedOnVoiceChannel", &UOnsetVoipBlueprintLibrary::execSetTalkerMutedOnVoiceChannel },
		{ "SetTalkerVoiceChannel", &UOnsetVoipBlueprintLibrary::execSetTalkerVoiceChannel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnsetVoipBlueprintLibrary);
UClass* Z_Construct_UClass_UOnsetVoipBlueprintLibrary_NoRegister()
{
	return UOnsetVoipBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UOnsetVoipBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This is a wrapper/helper around the most common plugin functions.\n * Users requested this to have a faster or more direct access to the functions.\n */" },
		{ "IncludePath", "OnsetVoipBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OnsetVoipBlueprintFunctionLibrary.h" },
		{ "ScriptName", "OnsetVoipLibrary" },
		{ "ToolTip", "This is a wrapper/helper around the most common plugin functions.\nUsers requested this to have a faster or more direct access to the functions." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkers, "GetAllTalkers" }, // 3023394326
		{ &Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetAllTalkersInVoiceChannel, "GetAllTalkersInVoiceChannel" }, // 2155082271
		{ &Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_GetTalkerByPlayerState, "GetTalkerByPlayerState" }, // 2769661801
		{ &Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerInVoiceChannel, "IsTalkerInVoiceChannel" }, // 2850732678
		{ &Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForPlayerState, "IsTalkerMutedForPlayerState" }, // 2009245192
		{ &Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedForVoipTalker, "IsTalkerMutedForVoipTalker" }, // 1372564383
		{ &Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_IsTalkerMutedOnVoiceChannel, "IsTalkerMutedOnVoiceChannel" }, // 808674559
		{ &Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForPlayerState, "SetTalkerMutedForPlayerState" }, // 787113403
		{ &Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedForVoipTalker, "SetTalkerMutedForVoipTalker" }, // 774743044
		{ &Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerMutedOnVoiceChannel, "SetTalkerMutedOnVoiceChannel" }, // 2558274730
		{ &Z_Construct_UFunction_UOnsetVoipBlueprintLibrary_SetTalkerVoiceChannel, "SetTalkerVoiceChannel" }, // 2433911647
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnsetVoipBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOnsetVoipBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OnsetVoip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnsetVoipBlueprintLibrary_Statics::ClassParams = {
	&UOnsetVoipBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnsetVoipBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnsetVoipBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UOnsetVoipBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnsetVoipBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UOnsetVoipBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnsetVoipBlueprintLibrary.OuterSingleton;
}
template<> ONSETVOIP_API UClass* StaticClass<UOnsetVoipBlueprintLibrary>()
{
	return UOnsetVoipBlueprintLibrary::StaticClass();
}
UOnsetVoipBlueprintLibrary::UOnsetVoipBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnsetVoipBlueprintLibrary);
UOnsetVoipBlueprintLibrary::~UOnsetVoipBlueprintLibrary() {}
// End Class UOnsetVoipBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipBlueprintFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnsetVoipBlueprintLibrary, UOnsetVoipBlueprintLibrary::StaticClass, TEXT("UOnsetVoipBlueprintLibrary"), &Z_Registration_Info_UClass_UOnsetVoipBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnsetVoipBlueprintLibrary), 2144182423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipBlueprintFunctionLibrary_h_1862242453(TEXT("/Script/OnsetVoip"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipBlueprintFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
