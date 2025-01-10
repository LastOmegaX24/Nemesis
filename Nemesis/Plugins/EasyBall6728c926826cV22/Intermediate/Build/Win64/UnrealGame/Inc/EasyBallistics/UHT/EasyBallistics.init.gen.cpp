// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyBallistics_init() {}
	EASYBALLISTICS_API UFunction* Z_Construct_UDelegateFunction_UEBBarrel_AmmoDepleted__DelegateSignature();
	EASYBALLISTICS_API UFunction* Z_Construct_UDelegateFunction_UEBBarrel_BeforeShotFired__DelegateSignature();
	EASYBALLISTICS_API UFunction* Z_Construct_UDelegateFunction_UEBBarrel_ReadyToShoot__DelegateSignature();
	EASYBALLISTICS_API UFunction* Z_Construct_UDelegateFunction_UEBBarrel_ShotFired__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EasyBallistics;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EasyBallistics()
	{
		if (!Z_Registration_Info_UPackage__Script_EasyBallistics.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UEBBarrel_AmmoDepleted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UEBBarrel_BeforeShotFired__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UEBBarrel_ReadyToShoot__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UEBBarrel_ShotFired__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EasyBallistics",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x620C7B68,
				0x31781867,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EasyBallistics.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EasyBallistics.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EasyBallistics(Z_Construct_UPackage__Script_EasyBallistics, TEXT("/Script/EasyBallistics"), Z_Registration_Info_UPackage__Script_EasyBallistics, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x620C7B68, 0x31781867));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
