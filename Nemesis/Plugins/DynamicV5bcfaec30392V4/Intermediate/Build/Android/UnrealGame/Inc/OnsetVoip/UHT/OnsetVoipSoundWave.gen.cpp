// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnsetVoip/Public/OnsetVoipSoundWave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnsetVoipSoundWave() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipSoundWave();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipSoundWave_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnsetVoip();
// End Cross Module References

// Begin Class UOnsetVoipSoundWave Function AddAudioData
struct Z_Construct_UFunction_UOnsetVoipSoundWave_AddAudioData_Statics
{
	struct OnsetVoipSoundWave_eventAddAudioData_Parms
	{
		TArray<uint8> InAudioData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip" },
		{ "Comment", "// Blueprint version for adding new audio data to this procedural audio wave.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSoundWave.h" },
		{ "ToolTip", "Blueprint version for adding new audio data to this procedural audio wave." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAudioData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InAudioData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InAudioData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnsetVoipSoundWave_AddAudioData_Statics::NewProp_InAudioData_Inner = { "InAudioData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOnsetVoipSoundWave_AddAudioData_Statics::NewProp_InAudioData = { "InAudioData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipSoundWave_eventAddAudioData_Parms, InAudioData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAudioData_MetaData), NewProp_InAudioData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipSoundWave_AddAudioData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipSoundWave_AddAudioData_Statics::NewProp_InAudioData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipSoundWave_AddAudioData_Statics::NewProp_InAudioData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipSoundWave_AddAudioData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipSoundWave_AddAudioData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipSoundWave, nullptr, "AddAudioData", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipSoundWave_AddAudioData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipSoundWave_AddAudioData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipSoundWave_AddAudioData_Statics::OnsetVoipSoundWave_eventAddAudioData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipSoundWave_AddAudioData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipSoundWave_AddAudioData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipSoundWave_AddAudioData_Statics::OnsetVoipSoundWave_eventAddAudioData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipSoundWave_AddAudioData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipSoundWave_AddAudioData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipSoundWave::execAddAudioData)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_InAudioData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAudioData(Z_Param_Out_InAudioData);
	P_NATIVE_END;
}
// End Class UOnsetVoipSoundWave Function AddAudioData

// Begin Class UOnsetVoipSoundWave Function GetAttenuation
struct Z_Construct_UFunction_UOnsetVoipSoundWave_GetAttenuation_Statics
{
	struct OnsetVoipSoundWave_eventGetAttenuation_Parms
	{
		USoundAttenuation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip" },
		{ "Comment", "// Get sound attenuation.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSoundWave.h" },
		{ "ToolTip", "Get sound attenuation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipSoundWave_GetAttenuation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipSoundWave_eventGetAttenuation_Parms, ReturnValue), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipSoundWave_GetAttenuation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipSoundWave_GetAttenuation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipSoundWave_GetAttenuation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipSoundWave_GetAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipSoundWave, nullptr, "GetAttenuation", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipSoundWave_GetAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipSoundWave_GetAttenuation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipSoundWave_GetAttenuation_Statics::OnsetVoipSoundWave_eventGetAttenuation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipSoundWave_GetAttenuation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipSoundWave_GetAttenuation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipSoundWave_GetAttenuation_Statics::OnsetVoipSoundWave_eventGetAttenuation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipSoundWave_GetAttenuation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipSoundWave_GetAttenuation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipSoundWave::execGetAttenuation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USoundAttenuation**)Z_Param__Result=P_THIS->GetAttenuation();
	P_NATIVE_END;
}
// End Class UOnsetVoipSoundWave Function GetAttenuation

// Begin Class UOnsetVoipSoundWave Function GetAudioBufferSize
struct Z_Construct_UFunction_UOnsetVoipSoundWave_GetAudioBufferSize_Statics
{
	struct OnsetVoipSoundWave_eventGetAudioBufferSize_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip" },
		{ "Comment", "// Current size of the audio buffer pending to be queued.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSoundWave.h" },
		{ "ToolTip", "Current size of the audio buffer pending to be queued." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetVoipSoundWave_GetAudioBufferSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipSoundWave_eventGetAudioBufferSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipSoundWave_GetAudioBufferSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipSoundWave_GetAudioBufferSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipSoundWave_GetAudioBufferSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipSoundWave_GetAudioBufferSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipSoundWave, nullptr, "GetAudioBufferSize", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipSoundWave_GetAudioBufferSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipSoundWave_GetAudioBufferSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipSoundWave_GetAudioBufferSize_Statics::OnsetVoipSoundWave_eventGetAudioBufferSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipSoundWave_GetAudioBufferSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipSoundWave_GetAudioBufferSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipSoundWave_GetAudioBufferSize_Statics::OnsetVoipSoundWave_eventGetAudioBufferSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipSoundWave_GetAudioBufferSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipSoundWave_GetAudioBufferSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipSoundWave::execGetAudioBufferSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAudioBufferSize();
	P_NATIVE_END;
}
// End Class UOnsetVoipSoundWave Function GetAudioBufferSize

// Begin Class UOnsetVoipSoundWave Function ResetAudioBuffer
struct Z_Construct_UFunction_UOnsetVoipSoundWave_ResetAudioBuffer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip" },
		{ "Comment", "// Resets audio data that is queued to be sent to the procedural sound wave.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSoundWave.h" },
		{ "ToolTip", "Resets audio data that is queued to be sent to the procedural sound wave." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipSoundWave_ResetAudioBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipSoundWave, nullptr, "ResetAudioBuffer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipSoundWave_ResetAudioBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipSoundWave_ResetAudioBuffer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOnsetVoipSoundWave_ResetAudioBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipSoundWave_ResetAudioBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipSoundWave::execResetAudioBuffer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAudioBuffer();
	P_NATIVE_END;
}
// End Class UOnsetVoipSoundWave Function ResetAudioBuffer

// Begin Class UOnsetVoipSoundWave Function SetAttenuation
struct Z_Construct_UFunction_UOnsetVoipSoundWave_SetAttenuation_Statics
{
	struct OnsetVoipSoundWave_eventSetAttenuation_Parms
	{
		USoundAttenuation* Attenuation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip" },
		{ "Comment", "// Set sound attenuation.\n" },
		{ "ModuleRelativePath", "Public/OnsetVoipSoundWave.h" },
		{ "ToolTip", "Set sound attenuation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attenuation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetVoipSoundWave_SetAttenuation_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetVoipSoundWave_eventSetAttenuation_Parms, Attenuation), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetVoipSoundWave_SetAttenuation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetVoipSoundWave_SetAttenuation_Statics::NewProp_Attenuation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipSoundWave_SetAttenuation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetVoipSoundWave_SetAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetVoipSoundWave, nullptr, "SetAttenuation", nullptr, nullptr, Z_Construct_UFunction_UOnsetVoipSoundWave_SetAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipSoundWave_SetAttenuation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetVoipSoundWave_SetAttenuation_Statics::OnsetVoipSoundWave_eventSetAttenuation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetVoipSoundWave_SetAttenuation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetVoipSoundWave_SetAttenuation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetVoipSoundWave_SetAttenuation_Statics::OnsetVoipSoundWave_eventSetAttenuation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetVoipSoundWave_SetAttenuation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetVoipSoundWave_SetAttenuation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetVoipSoundWave::execSetAttenuation)
{
	P_GET_OBJECT(USoundAttenuation,Z_Param_Attenuation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAttenuation(Z_Param_Attenuation);
	P_NATIVE_END;
}
// End Class UOnsetVoipSoundWave Function SetAttenuation

// Begin Class UOnsetVoipSoundWave
void UOnsetVoipSoundWave::StaticRegisterNativesUOnsetVoipSoundWave()
{
	UClass* Class = UOnsetVoipSoundWave::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddAudioData", &UOnsetVoipSoundWave::execAddAudioData },
		{ "GetAttenuation", &UOnsetVoipSoundWave::execGetAttenuation },
		{ "GetAudioBufferSize", &UOnsetVoipSoundWave::execGetAudioBufferSize },
		{ "ResetAudioBuffer", &UOnsetVoipSoundWave::execResetAudioBuffer },
		{ "SetAttenuation", &UOnsetVoipSoundWave::execSetAttenuation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnsetVoipSoundWave);
UClass* Z_Construct_UClass_UOnsetVoipSoundWave_NoRegister()
{
	return UOnsetVoipSoundWave::StaticClass();
}
struct Z_Construct_UClass_UOnsetVoipSoundWave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A procedural sound wave which is used to play voice data for a UOnsetVoipAudioComponent.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "OnsetVoipSoundWave.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnsetVoipSoundWave.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A procedural sound wave which is used to play voice data for a UOnsetVoipAudioComponent." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnsetVoipSoundWave_AddAudioData, "AddAudioData" }, // 1741274428
		{ &Z_Construct_UFunction_UOnsetVoipSoundWave_GetAttenuation, "GetAttenuation" }, // 4135640661
		{ &Z_Construct_UFunction_UOnsetVoipSoundWave_GetAudioBufferSize, "GetAudioBufferSize" }, // 890109534
		{ &Z_Construct_UFunction_UOnsetVoipSoundWave_ResetAudioBuffer, "ResetAudioBuffer" }, // 3491843013
		{ &Z_Construct_UFunction_UOnsetVoipSoundWave_SetAttenuation, "SetAttenuation" }, // 59577436
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnsetVoipSoundWave>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOnsetVoipSoundWave_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
	(UObject* (*)())Z_Construct_UPackage__Script_OnsetVoip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipSoundWave_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnsetVoipSoundWave_Statics::ClassParams = {
	&UOnsetVoipSoundWave::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipSoundWave_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnsetVoipSoundWave_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnsetVoipSoundWave()
{
	if (!Z_Registration_Info_UClass_UOnsetVoipSoundWave.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnsetVoipSoundWave.OuterSingleton, Z_Construct_UClass_UOnsetVoipSoundWave_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnsetVoipSoundWave.OuterSingleton;
}
template<> ONSETVOIP_API UClass* StaticClass<UOnsetVoipSoundWave>()
{
	return UOnsetVoipSoundWave::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnsetVoipSoundWave);
UOnsetVoipSoundWave::~UOnsetVoipSoundWave() {}
// End Class UOnsetVoipSoundWave

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSoundWave_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnsetVoipSoundWave, UOnsetVoipSoundWave::StaticClass, TEXT("UOnsetVoipSoundWave"), &Z_Registration_Info_UClass_UOnsetVoipSoundWave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnsetVoipSoundWave), 1343480317U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSoundWave_h_2373762134(TEXT("/Script/OnsetVoip"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSoundWave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipSoundWave_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
