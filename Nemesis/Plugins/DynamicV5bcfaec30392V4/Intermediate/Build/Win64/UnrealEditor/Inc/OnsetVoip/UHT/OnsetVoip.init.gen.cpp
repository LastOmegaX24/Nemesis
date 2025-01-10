// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnsetVoip_init() {}
	ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature();
	ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature();
	ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature();
	ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature();
	ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_OnsetVoip_OnOnsetFFmpegComplete__DelegateSignature();
	ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature();
	ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature();
	ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature();
	ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OnsetVoip;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OnsetVoip()
	{
		if (!Z_Registration_Info_UPackage__Script_OnsetVoip.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModeLogoutEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePostLoginEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OnsetVoip_BlueprintGameModePreLoginEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OnsetVoip_OnOnsetFFmpegComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UOnsetVoipLocalPlayerSubsystem_OnVoipTalkingStateChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipAudioDataReceived__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UOnsetVoipTalker_OnVoipTalkingStateChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UOnsetVoipWorldSubsystem_OnVoipTalkerCreatedOrDestroyed__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OnsetVoip",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4598068C,
				0xE2964A62,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OnsetVoip.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OnsetVoip.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OnsetVoip(Z_Construct_UPackage__Script_OnsetVoip, TEXT("/Script/OnsetVoip"), Z_Registration_Info_UPackage__Script_OnsetVoip, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4598068C, 0xE2964A62));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
