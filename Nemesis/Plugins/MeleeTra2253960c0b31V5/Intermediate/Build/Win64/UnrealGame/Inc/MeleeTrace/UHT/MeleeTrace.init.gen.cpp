// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeTrace_init() {}
	MELEETRACE_API UFunction* Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature();
	MELEETRACE_API UFunction* Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature();
	MELEETRACE_API UFunction* Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature();
	MELEETRACE_API UFunction* Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature();
	MELEETRACE_API UFunction* Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceEnded__DelegateSignature();
	MELEETRACE_API UFunction* Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceStarted__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MeleeTrace;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MeleeTrace()
	{
		if (!Z_Registration_Info_UPackage__Script_MeleeTrace.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceEnd__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceHit__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MeleeTrace_MeleeTraceStart__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeHitDetected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceEnded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UAsync_WaitForMeleeTraceEvent_AsyncWaitForMeleeTraceStarted__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MeleeTrace",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA1ADE79C,
				0xA3FBC1D8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MeleeTrace.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MeleeTrace.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MeleeTrace(Z_Construct_UPackage__Script_MeleeTrace, TEXT("/Script/MeleeTrace"), Z_Registration_Info_UPackage__Script_MeleeTrace, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA1ADE79C, 0xA3FBC1D8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
