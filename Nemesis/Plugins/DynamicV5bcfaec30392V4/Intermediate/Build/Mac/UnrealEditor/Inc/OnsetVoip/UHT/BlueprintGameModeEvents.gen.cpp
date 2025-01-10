// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnsetVoip/Public/BlueprintGameModeEvents.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintGameModeEvents() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
ONSETVOIP_API UClass* Z_Construct_UClass_UBlueprintGameModeEvents();
ONSETVOIP_API UClass* Z_Construct_UClass_UBlueprintGameModeEvents_NoRegister();
ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature();
ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature();
ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnsetVoip();
// End Cross Module References

// Begin Delegate FBlueprintGameModePreLoginEvent
struct Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature_Statics
{
	struct _Script_OnsetVoip_eventBlueprintGameModePreLoginEvent_Parms
	{
		AGameModeBase* GameMode;
		FUniqueNetIdRepl NewPlayer;
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintGameModeEvents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPlayer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnsetVoip_eventBlueprintGameModePreLoginEvent_Parms, GameMode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnsetVoip_eventBlueprintGameModePreLoginEvent_Parms, NewPlayer), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPlayer_MetaData), NewProp_NewPlayer_MetaData) }; // 3410776867
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnsetVoip_eventBlueprintGameModePreLoginEvent_Parms, ErrorMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature_Statics::NewProp_NewPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnsetVoip, nullptr, "BlueprintGameModePreLoginEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature_Statics::_Script_OnsetVoip_eventBlueprintGameModePreLoginEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature_Statics::_Script_OnsetVoip_eventBlueprintGameModePreLoginEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBlueprintGameModePreLoginEvent_DelegateWrapper(const FScriptDelegate& BlueprintGameModePreLoginEvent, AGameModeBase* GameMode, FUniqueNetIdRepl const& NewPlayer, FString& ErrorMessage)
{
	struct _Script_OnsetVoip_eventBlueprintGameModePreLoginEvent_Parms
	{
		AGameModeBase* GameMode;
		FUniqueNetIdRepl NewPlayer;
		FString ErrorMessage;
	};
	_Script_OnsetVoip_eventBlueprintGameModePreLoginEvent_Parms Parms;
	Parms.GameMode=GameMode;
	Parms.NewPlayer=NewPlayer;
	Parms.ErrorMessage=ErrorMessage;
	BlueprintGameModePreLoginEvent.ProcessDelegate<UObject>(&Parms);
	ErrorMessage=Parms.ErrorMessage;
}
// End Delegate FBlueprintGameModePreLoginEvent

// Begin Delegate FBlueprintGameModePostLoginEvent
struct Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature_Statics
{
	struct _Script_OnsetVoip_eventBlueprintGameModePostLoginEvent_Parms
	{
		AGameModeBase* GameMode;
		APlayerController* NewPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintGameModeEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnsetVoip_eventBlueprintGameModePostLoginEvent_Parms, GameMode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnsetVoip_eventBlueprintGameModePostLoginEvent_Parms, NewPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature_Statics::NewProp_NewPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnsetVoip, nullptr, "BlueprintGameModePostLoginEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature_Statics::_Script_OnsetVoip_eventBlueprintGameModePostLoginEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature_Statics::_Script_OnsetVoip_eventBlueprintGameModePostLoginEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBlueprintGameModePostLoginEvent_DelegateWrapper(const FMulticastScriptDelegate& BlueprintGameModePostLoginEvent, AGameModeBase* GameMode, APlayerController* NewPlayer)
{
	struct _Script_OnsetVoip_eventBlueprintGameModePostLoginEvent_Parms
	{
		AGameModeBase* GameMode;
		APlayerController* NewPlayer;
	};
	_Script_OnsetVoip_eventBlueprintGameModePostLoginEvent_Parms Parms;
	Parms.GameMode=GameMode;
	Parms.NewPlayer=NewPlayer;
	BlueprintGameModePostLoginEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FBlueprintGameModePostLoginEvent

// Begin Delegate FBlueprintGameModeLogoutEvent
struct Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature_Statics
{
	struct _Script_OnsetVoip_eventBlueprintGameModeLogoutEvent_Parms
	{
		AGameModeBase* GameMode;
		AController* Exiting;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintGameModeEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Exiting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnsetVoip_eventBlueprintGameModeLogoutEvent_Parms, GameMode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature_Statics::NewProp_Exiting = { "Exiting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnsetVoip_eventBlueprintGameModeLogoutEvent_Parms, Exiting), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature_Statics::NewProp_Exiting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnsetVoip, nullptr, "BlueprintGameModeLogoutEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature_Statics::_Script_OnsetVoip_eventBlueprintGameModeLogoutEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature_Statics::_Script_OnsetVoip_eventBlueprintGameModeLogoutEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBlueprintGameModeLogoutEvent_DelegateWrapper(const FMulticastScriptDelegate& BlueprintGameModeLogoutEvent, AGameModeBase* GameMode, AController* Exiting)
{
	struct _Script_OnsetVoip_eventBlueprintGameModeLogoutEvent_Parms
	{
		AGameModeBase* GameMode;
		AController* Exiting;
	};
	_Script_OnsetVoip_eventBlueprintGameModeLogoutEvent_Parms Parms;
	Parms.GameMode=GameMode;
	Parms.Exiting=Exiting;
	BlueprintGameModeLogoutEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FBlueprintGameModeLogoutEvent

// Begin Class UBlueprintGameModeEvents Function OnGameModePreLoginEvent
struct Z_Construct_UFunction_UBlueprintGameModeEvents_OnGameModePreLoginEvent_Statics
{
	struct BlueprintGameModeEvents_eventOnGameModePreLoginEvent_Parms
	{
		FScriptDelegate EventHandler;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamemode Events" },
		{ "ModuleRelativePath", "Public/BlueprintGameModeEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_EventHandler;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBlueprintGameModeEvents_OnGameModePreLoginEvent_Statics::NewProp_EventHandler = { "EventHandler", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintGameModeEvents_eventOnGameModePreLoginEvent_Parms, EventHandler), Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3776551844
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameModeEvents_OnGameModePreLoginEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameModeEvents_OnGameModePreLoginEvent_Statics::NewProp_EventHandler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameModeEvents_OnGameModePreLoginEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameModeEvents_OnGameModePreLoginEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameModeEvents, nullptr, "OnGameModePreLoginEvent", nullptr, nullptr, Z_Construct_UFunction_UBlueprintGameModeEvents_OnGameModePreLoginEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameModeEvents_OnGameModePreLoginEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintGameModeEvents_OnGameModePreLoginEvent_Statics::BlueprintGameModeEvents_eventOnGameModePreLoginEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameModeEvents_OnGameModePreLoginEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintGameModeEvents_OnGameModePreLoginEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlueprintGameModeEvents_OnGameModePreLoginEvent_Statics::BlueprintGameModeEvents_eventOnGameModePreLoginEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlueprintGameModeEvents_OnGameModePreLoginEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameModeEvents_OnGameModePreLoginEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlueprintGameModeEvents::execOnGameModePreLoginEvent)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_EventHandler);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGameModePreLoginEvent(FBlueprintGameModePreLoginEvent(Z_Param_EventHandler));
	P_NATIVE_END;
}
// End Class UBlueprintGameModeEvents Function OnGameModePreLoginEvent

// Begin Class UBlueprintGameModeEvents
void UBlueprintGameModeEvents::StaticRegisterNativesUBlueprintGameModeEvents()
{
	UClass* Class = UBlueprintGameModeEvents::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnGameModePreLoginEvent", &UBlueprintGameModeEvents::execOnGameModePreLoginEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintGameModeEvents);
UClass* Z_Construct_UClass_UBlueprintGameModeEvents_NoRegister()
{
	return UBlueprintGameModeEvents::StaticClass();
}
struct Z_Construct_UClass_UBlueprintGameModeEvents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Exposes FGameModeEvents to blueprints.\n */" },
		{ "IncludePath", "BlueprintGameModeEvents.h" },
		{ "ModuleRelativePath", "Public/BlueprintGameModeEvents.h" },
		{ "ToolTip", "Exposes FGameModeEvents to blueprints." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameModePostLoginEvent_MetaData[] = {
		{ "Category", "Gamemode Events" },
		{ "ModuleRelativePath", "Public/BlueprintGameModeEvents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameModeLogoutEvent_MetaData[] = {
		{ "Category", "Gamemode Events" },
		{ "ModuleRelativePath", "Public/BlueprintGameModeEvents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintGameModePostLoginEventArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintGameModeEvents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameModePostLoginEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameModeLogoutEvent;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_BlueprintGameModePostLoginEventArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlueprintGameModePostLoginEventArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintGameModeEvents_OnGameModePreLoginEvent, "OnGameModePreLoginEvent" }, // 1585422471
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintGameModeEvents>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlueprintGameModeEvents_Statics::NewProp_OnGameModePostLoginEvent = { "OnGameModePostLoginEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintGameModeEvents, OnGameModePostLoginEvent), Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameModePostLoginEvent_MetaData), NewProp_OnGameModePostLoginEvent_MetaData) }; // 3013118468
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlueprintGameModeEvents_Statics::NewProp_OnGameModeLogoutEvent = { "OnGameModeLogoutEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintGameModeEvents, OnGameModeLogoutEvent), Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameModeLogoutEvent_MetaData), NewProp_OnGameModeLogoutEvent_MetaData) }; // 56045938
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UBlueprintGameModeEvents_Statics::NewProp_BlueprintGameModePostLoginEventArray_Inner = { "BlueprintGameModePostLoginEventArray", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 3776551844
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGameModeEvents_Statics::NewProp_BlueprintGameModePostLoginEventArray = { "BlueprintGameModePostLoginEventArray", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintGameModeEvents, BlueprintGameModePostLoginEventArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintGameModePostLoginEventArray_MetaData), NewProp_BlueprintGameModePostLoginEventArray_MetaData) }; // 3776551844
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintGameModeEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGameModeEvents_Statics::NewProp_OnGameModePostLoginEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGameModeEvents_Statics::NewProp_OnGameModeLogoutEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGameModeEvents_Statics::NewProp_BlueprintGameModePostLoginEventArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGameModeEvents_Statics::NewProp_BlueprintGameModePostLoginEventArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGameModeEvents_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlueprintGameModeEvents_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnsetVoip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGameModeEvents_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintGameModeEvents_Statics::ClassParams = {
	&UBlueprintGameModeEvents::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBlueprintGameModeEvents_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGameModeEvents_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGameModeEvents_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintGameModeEvents_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlueprintGameModeEvents()
{
	if (!Z_Registration_Info_UClass_UBlueprintGameModeEvents.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintGameModeEvents.OuterSingleton, Z_Construct_UClass_UBlueprintGameModeEvents_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintGameModeEvents.OuterSingleton;
}
template<> ONSETVOIP_API UClass* StaticClass<UBlueprintGameModeEvents>()
{
	return UBlueprintGameModeEvents::StaticClass();
}
UBlueprintGameModeEvents::UBlueprintGameModeEvents() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintGameModeEvents);
UBlueprintGameModeEvents::~UBlueprintGameModeEvents() {}
// End Class UBlueprintGameModeEvents

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_BlueprintGameModeEvents_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintGameModeEvents, UBlueprintGameModeEvents::StaticClass, TEXT("UBlueprintGameModeEvents"), &Z_Registration_Info_UClass_UBlueprintGameModeEvents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintGameModeEvents), 4045188387U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_BlueprintGameModeEvents_h_2469271379(TEXT("/Script/OnsetVoip"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_BlueprintGameModeEvents_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_BlueprintGameModeEvents_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
