// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnsetVoip/Public/Recording/OnsetFFmpegConverter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnsetFFmpegConverter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetFFmpegAudioConverter();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetFFmpegAudioConverter_NoRegister();
ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_OnsetVoip_OnOnsetFFmpegComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OnsetVoip();
// End Cross Module References

// Begin Delegate FOnOnsetFFmpegComplete
struct Z_Construct_UDelegateFunction_OnsetVoip_OnOnsetFFmpegComplete__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Recording/OnsetFFmpegConverter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnsetVoip_OnOnsetFFmpegComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnsetVoip, nullptr, "OnOnsetFFmpegComplete__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnsetVoip_OnOnsetFFmpegComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnsetVoip_OnOnsetFFmpegComplete__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OnsetVoip_OnOnsetFFmpegComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnsetVoip_OnOnsetFFmpegComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnOnsetFFmpegComplete_DelegateWrapper(const FMulticastScriptDelegate& OnOnsetFFmpegComplete)
{
	OnOnsetFFmpegComplete.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnOnsetFFmpegComplete

// Begin Class UOnsetFFmpegAudioConverter Function ConvertAudioFile
struct Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics
{
	struct OnsetFFmpegAudioConverter_eventConvertAudioFile_Parms
	{
		FString InputFile;
		FString OutputFile;
		int32 SampleRate;
		int32 AudioChannels;
		int32 BitRate;
		UOnsetFFmpegAudioConverter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Utility|FFmpeg" },
		{ "Comment", "/*\n\x09* Converts an audio file to a different audio format. Requires FFmpeg, see OnsetVoip projects settings.\n\x09*\n\x09* InputFile: The full path to source file. (Example: C:/MyWavFile.wav)\n\x09* OutputFile: The new file to save to. (Example: C:/MyConvertedFile.mp3)\n\x09* SampleRate: New sample rate to convert to. (Example: 44100)\n\x09* AudioChannels: Number of audio channels to convert to. (Example: 1 (mono), 2 (stereo))\n\x09* BitRate: Bitrate to convert to. (Example: 128000 for 128k)\n\x09* \n\x09* FFmpeg cmdline parameters: -y -i \\\"%s\\\" -vn -ar %d -ac %d -b:a %d \\\"%s\\\"\n\x09* Please refer to the FFmpeg documentation for valid parameters and formats.\n\x09* \n\x09* On error the output of ffmpeg will be printed to the game log.\n\x09*/" },
		{ "KeyWords", "ffmpeg,mp3,wav" },
		{ "ModuleRelativePath", "Public/Recording/OnsetFFmpegConverter.h" },
		{ "ToolTip", "* Converts an audio file to a different audio format. Requires FFmpeg, see OnsetVoip projects settings.\n*\n* InputFile: The full path to source file. (Example: C:/MyWavFile.wav)\n* OutputFile: The new file to save to. (Example: C:/MyConvertedFile.mp3)\n* SampleRate: New sample rate to convert to. (Example: 44100)\n* AudioChannels: Number of audio channels to convert to. (Example: 1 (mono), 2 (stereo))\n* BitRate: Bitrate to convert to. (Example: 128000 for 128k)\n*\n* FFmpeg cmdline parameters: -y -i \\\"%s\\\" -vn -ar %d -ac %d -b:a %d \\\"%s\\\"\n* Please refer to the FFmpeg documentation for valid parameters and formats.\n*\n* On error the output of ffmpeg will be printed to the game log." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputFile_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputFile;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputFile;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AudioChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BitRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::NewProp_InputFile = { "InputFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetFFmpegAudioConverter_eventConvertAudioFile_Parms, InputFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputFile_MetaData), NewProp_InputFile_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::NewProp_OutputFile = { "OutputFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetFFmpegAudioConverter_eventConvertAudioFile_Parms, OutputFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputFile_MetaData), NewProp_OutputFile_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetFFmpegAudioConverter_eventConvertAudioFile_Parms, SampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::NewProp_AudioChannels = { "AudioChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetFFmpegAudioConverter_eventConvertAudioFile_Parms, AudioChannels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::NewProp_BitRate = { "BitRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetFFmpegAudioConverter_eventConvertAudioFile_Parms, BitRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OnsetFFmpegAudioConverter_eventConvertAudioFile_Parms, ReturnValue), Z_Construct_UClass_UOnsetFFmpegAudioConverter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::NewProp_InputFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::NewProp_OutputFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::NewProp_SampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::NewProp_AudioChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::NewProp_BitRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnsetFFmpegAudioConverter, nullptr, "ConvertAudioFile", nullptr, nullptr, Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::OnsetFFmpegAudioConverter_eventConvertAudioFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::OnsetFFmpegAudioConverter_eventConvertAudioFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOnsetFFmpegAudioConverter::execConvertAudioFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputFile);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputFile);
	P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
	P_GET_PROPERTY(FIntProperty,Z_Param_AudioChannels);
	P_GET_PROPERTY(FIntProperty,Z_Param_BitRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOnsetFFmpegAudioConverter**)Z_Param__Result=UOnsetFFmpegAudioConverter::ConvertAudioFile(Z_Param_InputFile,Z_Param_OutputFile,Z_Param_SampleRate,Z_Param_AudioChannels,Z_Param_BitRate);
	P_NATIVE_END;
}
// End Class UOnsetFFmpegAudioConverter Function ConvertAudioFile

// Begin Class UOnsetFFmpegAudioConverter
void UOnsetFFmpegAudioConverter::StaticRegisterNativesUOnsetFFmpegAudioConverter()
{
	UClass* Class = UOnsetFFmpegAudioConverter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertAudioFile", &UOnsetFFmpegAudioConverter::execConvertAudioFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnsetFFmpegAudioConverter);
UClass* Z_Construct_UClass_UOnsetFFmpegAudioConverter_NoRegister()
{
	return UOnsetFFmpegAudioConverter::StaticClass();
}
struct Z_Construct_UClass_UOnsetFFmpegAudioConverter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Recording/OnsetFFmpegConverter.h" },
		{ "ModuleRelativePath", "Public/Recording/OnsetFFmpegConverter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Recording/OnsetFFmpegConverter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/Recording/OnsetFFmpegConverter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnsetFFmpegAudioConverter_ConvertAudioFile, "ConvertAudioFile" }, // 323693225
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnsetFFmpegAudioConverter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnsetFFmpegAudioConverter_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetFFmpegAudioConverter, OnSuccess), Z_Construct_UDelegateFunction_OnsetVoip_OnOnsetFFmpegComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 563751860
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOnsetFFmpegAudioConverter_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOnsetFFmpegAudioConverter, OnFail), Z_Construct_UDelegateFunction_OnsetVoip_OnOnsetFFmpegComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFail_MetaData), NewProp_OnFail_MetaData) }; // 563751860
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnsetFFmpegAudioConverter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetFFmpegAudioConverter_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnsetFFmpegAudioConverter_Statics::NewProp_OnFail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetFFmpegAudioConverter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOnsetFFmpegAudioConverter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnsetVoip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetFFmpegAudioConverter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnsetFFmpegAudioConverter_Statics::ClassParams = {
	&UOnsetFFmpegAudioConverter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOnsetFFmpegAudioConverter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetFFmpegAudioConverter_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetFFmpegAudioConverter_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnsetFFmpegAudioConverter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnsetFFmpegAudioConverter()
{
	if (!Z_Registration_Info_UClass_UOnsetFFmpegAudioConverter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnsetFFmpegAudioConverter.OuterSingleton, Z_Construct_UClass_UOnsetFFmpegAudioConverter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnsetFFmpegAudioConverter.OuterSingleton;
}
template<> ONSETVOIP_API UClass* StaticClass<UOnsetFFmpegAudioConverter>()
{
	return UOnsetFFmpegAudioConverter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnsetFFmpegAudioConverter);
UOnsetFFmpegAudioConverter::~UOnsetFFmpegAudioConverter() {}
// End Class UOnsetFFmpegAudioConverter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_Recording_OnsetFFmpegConverter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnsetFFmpegAudioConverter, UOnsetFFmpegAudioConverter::StaticClass, TEXT("UOnsetFFmpegAudioConverter"), &Z_Registration_Info_UClass_UOnsetFFmpegAudioConverter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnsetFFmpegAudioConverter), 3662343399U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_Recording_OnsetFFmpegConverter_h_486148675(TEXT("/Script/OnsetVoip"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_Recording_OnsetFFmpegConverter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_Recording_OnsetFFmpegConverter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
