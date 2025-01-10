// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnsetVoip/Public/AudioCaptureBlueprintLibrary2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioCaptureBlueprintLibrary2() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ONSETVOIP_API UClass* Z_Construct_UClass_UAudioCaptureBlueprintLibrary2();
ONSETVOIP_API UClass* Z_Construct_UClass_UAudioCaptureBlueprintLibrary2_NoRegister();
ONSETVOIP_API UFunction* Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature();
ONSETVOIP_API UScriptStruct* Z_Construct_UScriptStruct_FAudioInputDeviceInfo2();
UPackage* Z_Construct_UPackage__Script_OnsetVoip();
// End Cross Module References

// Begin ScriptStruct FAudioInputDeviceInfo2
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioInputDeviceInfo2;
class UScriptStruct* FAudioInputDeviceInfo2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioInputDeviceInfo2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioInputDeviceInfo2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioInputDeviceInfo2, (UObject*)Z_Construct_UPackage__Script_OnsetVoip(), TEXT("AudioInputDeviceInfo2"));
	}
	return Z_Registration_Info_UScriptStruct_AudioInputDeviceInfo2.OuterSingleton;
}
template<> ONSETVOIP_API UScriptStruct* StaticStruct<FAudioInputDeviceInfo2>()
{
	return FAudioInputDeviceInfo2::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Copied from AudioCaptureBlueprintLibrary.h to avoid linkage to AudioCapture module.\n * \n * Platform audio input device info, in a Blueprint-readable format\n */" },
		{ "ModuleRelativePath", "Public/AudioCaptureBlueprintLibrary2.h" },
		{ "ToolTip", "Copied from AudioCaptureBlueprintLibrary.h to avoid linkage to AudioCapture module.\n\nPlatform audio input device info, in a Blueprint-readable format" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The name of the audio device */" },
		{ "ModuleRelativePath", "Public/AudioCaptureBlueprintLibrary2.h" },
		{ "ToolTip", "The name of the audio device" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceId_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** ID of the device. */" },
		{ "ModuleRelativePath", "Public/AudioCaptureBlueprintLibrary2.h" },
		{ "ToolTip", "ID of the device." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputChannels_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The number of channels supported by the audio device */" },
		{ "ModuleRelativePath", "Public/AudioCaptureBlueprintLibrary2.h" },
		{ "ToolTip", "The number of channels supported by the audio device" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredSampleRate_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The preferred sample rate of the audio device */" },
		{ "ModuleRelativePath", "Public/AudioCaptureBlueprintLibrary2.h" },
		{ "ToolTip", "The preferred sample rate of the audio device" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsHardwareAEC_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Whether or not the device supports Acoustic Echo Canceling */" },
		{ "ModuleRelativePath", "Public/AudioCaptureBlueprintLibrary2.h" },
		{ "ToolTip", "Whether or not the device supports Acoustic Echo Canceling" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreferredSampleRate;
	static void NewProp_bSupportsHardwareAEC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsHardwareAEC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioInputDeviceInfo2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioInputDeviceInfo2, DeviceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceName_MetaData), NewProp_DeviceName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::NewProp_DeviceId = { "DeviceId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioInputDeviceInfo2, DeviceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceId_MetaData), NewProp_DeviceId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::NewProp_InputChannels = { "InputChannels", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioInputDeviceInfo2, InputChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputChannels_MetaData), NewProp_InputChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::NewProp_PreferredSampleRate = { "PreferredSampleRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioInputDeviceInfo2, PreferredSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredSampleRate_MetaData), NewProp_PreferredSampleRate_MetaData) };
void Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::NewProp_bSupportsHardwareAEC_SetBit(void* Obj)
{
	((FAudioInputDeviceInfo2*)Obj)->bSupportsHardwareAEC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::NewProp_bSupportsHardwareAEC = { "bSupportsHardwareAEC", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FAudioInputDeviceInfo2), &Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::NewProp_bSupportsHardwareAEC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsHardwareAEC_MetaData), NewProp_bSupportsHardwareAEC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::NewProp_DeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::NewProp_DeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::NewProp_InputChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::NewProp_PreferredSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::NewProp_bSupportsHardwareAEC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnsetVoip,
	nullptr,
	&NewStructOps,
	"AudioInputDeviceInfo2",
	Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::PropPointers),
	sizeof(FAudioInputDeviceInfo2),
	alignof(FAudioInputDeviceInfo2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioInputDeviceInfo2()
{
	if (!Z_Registration_Info_UScriptStruct_AudioInputDeviceInfo2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioInputDeviceInfo2.InnerSingleton, Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioInputDeviceInfo2.InnerSingleton;
}
// End ScriptStruct FAudioInputDeviceInfo2

// Begin Delegate FOnAudioInputDevicesObtained2
struct Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature_Statics
{
	struct _Script_OnsetVoip_eventOnAudioInputDevicesObtained2_Parms
	{
		TArray<FAudioInputDeviceInfo2> AvailableDevices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioCaptureBlueprintLibrary2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableDevices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableDevices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableDevices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature_Statics::NewProp_AvailableDevices_Inner = { "AvailableDevices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAudioInputDeviceInfo2, METADATA_PARAMS(0, nullptr) }; // 535790001
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature_Statics::NewProp_AvailableDevices = { "AvailableDevices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnsetVoip_eventOnAudioInputDevicesObtained2_Parms, AvailableDevices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableDevices_MetaData), NewProp_AvailableDevices_MetaData) }; // 535790001
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature_Statics::NewProp_AvailableDevices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature_Statics::NewProp_AvailableDevices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnsetVoip, nullptr, "OnAudioInputDevicesObtained2__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature_Statics::_Script_OnsetVoip_eventOnAudioInputDevicesObtained2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature_Statics::_Script_OnsetVoip_eventOnAudioInputDevicesObtained2_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAudioInputDevicesObtained2_DelegateWrapper(const FScriptDelegate& OnAudioInputDevicesObtained2, TArray<FAudioInputDeviceInfo2> const& AvailableDevices)
{
	struct _Script_OnsetVoip_eventOnAudioInputDevicesObtained2_Parms
	{
		TArray<FAudioInputDeviceInfo2> AvailableDevices;
	};
	_Script_OnsetVoip_eventOnAudioInputDevicesObtained2_Parms Parms;
	Parms.AvailableDevices=AvailableDevices;
	OnAudioInputDevicesObtained2.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnAudioInputDevicesObtained2

// Begin Class UAudioCaptureBlueprintLibrary2 Function GetAvailableAudioInputDevicesFixed
struct Z_Construct_UFunction_UAudioCaptureBlueprintLibrary2_GetAvailableAudioInputDevicesFixed_Statics
{
	struct AudioCaptureBlueprintLibrary2_eventGetAvailableAudioInputDevicesFixed_Parms
	{
		const UObject* WorldContextObject;
		FScriptDelegate OnObtainDevicesEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OnsetVoip" },
		{ "Comment", "// Copied from engine because original function wrongly calls back from non gamethread resulting in a crash.\n" },
		{ "ModuleRelativePath", "Public/AudioCaptureBlueprintLibrary2.h" },
		{ "ToolTip", "Copied from engine because original function wrongly calls back from non gamethread resulting in a crash." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnObtainDevicesEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnObtainDevicesEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioCaptureBlueprintLibrary2_GetAvailableAudioInputDevicesFixed_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioCaptureBlueprintLibrary2_eventGetAvailableAudioInputDevicesFixed_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAudioCaptureBlueprintLibrary2_GetAvailableAudioInputDevicesFixed_Statics::NewProp_OnObtainDevicesEvent = { "OnObtainDevicesEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioCaptureBlueprintLibrary2_eventGetAvailableAudioInputDevicesFixed_Parms, OnObtainDevicesEvent), Z_Construct_UDelegateFunction_OnsetVoip_OnAudioInputDevicesObtained2__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnObtainDevicesEvent_MetaData), NewProp_OnObtainDevicesEvent_MetaData) }; // 3814551700
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioCaptureBlueprintLibrary2_GetAvailableAudioInputDevicesFixed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioCaptureBlueprintLibrary2_GetAvailableAudioInputDevicesFixed_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioCaptureBlueprintLibrary2_GetAvailableAudioInputDevicesFixed_Statics::NewProp_OnObtainDevicesEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureBlueprintLibrary2_GetAvailableAudioInputDevicesFixed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioCaptureBlueprintLibrary2_GetAvailableAudioInputDevicesFixed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioCaptureBlueprintLibrary2, nullptr, "GetAvailableAudioInputDevicesFixed", nullptr, nullptr, Z_Construct_UFunction_UAudioCaptureBlueprintLibrary2_GetAvailableAudioInputDevicesFixed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureBlueprintLibrary2_GetAvailableAudioInputDevicesFixed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioCaptureBlueprintLibrary2_GetAvailableAudioInputDevicesFixed_Statics::AudioCaptureBlueprintLibrary2_eventGetAvailableAudioInputDevicesFixed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioCaptureBlueprintLibrary2_GetAvailableAudioInputDevicesFixed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioCaptureBlueprintLibrary2_GetAvailableAudioInputDevicesFixed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioCaptureBlueprintLibrary2_GetAvailableAudioInputDevicesFixed_Statics::AudioCaptureBlueprintLibrary2_eventGetAvailableAudioInputDevicesFixed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioCaptureBlueprintLibrary2_GetAvailableAudioInputDevicesFixed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioCaptureBlueprintLibrary2_GetAvailableAudioInputDevicesFixed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioCaptureBlueprintLibrary2::execGetAvailableAudioInputDevicesFixed)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnObtainDevicesEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAudioCaptureBlueprintLibrary2::GetAvailableAudioInputDevicesFixed(Z_Param_WorldContextObject,FOnAudioInputDevicesObtained2(Z_Param_Out_OnObtainDevicesEvent));
	P_NATIVE_END;
}
// End Class UAudioCaptureBlueprintLibrary2 Function GetAvailableAudioInputDevicesFixed

// Begin Class UAudioCaptureBlueprintLibrary2
void UAudioCaptureBlueprintLibrary2::StaticRegisterNativesUAudioCaptureBlueprintLibrary2()
{
	UClass* Class = UAudioCaptureBlueprintLibrary2::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAvailableAudioInputDevicesFixed", &UAudioCaptureBlueprintLibrary2::execGetAvailableAudioInputDevicesFixed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioCaptureBlueprintLibrary2);
UClass* Z_Construct_UClass_UAudioCaptureBlueprintLibrary2_NoRegister()
{
	return UAudioCaptureBlueprintLibrary2::StaticClass();
}
struct Z_Construct_UClass_UAudioCaptureBlueprintLibrary2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Class contains a fixed version of the GetAvailableAudioInputDevices in UAudioCaptureBlueprintLibrary.\n * Should be removed once fixed in Unreal.\n */" },
		{ "IncludePath", "AudioCaptureBlueprintLibrary2.h" },
		{ "ModuleRelativePath", "Public/AudioCaptureBlueprintLibrary2.h" },
		{ "ToolTip", "Class contains a fixed version of the GetAvailableAudioInputDevices in UAudioCaptureBlueprintLibrary.\nShould be removed once fixed in Unreal." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioCaptureBlueprintLibrary2_GetAvailableAudioInputDevicesFixed, "GetAvailableAudioInputDevicesFixed" }, // 1834692353
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioCaptureBlueprintLibrary2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioCaptureBlueprintLibrary2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OnsetVoip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureBlueprintLibrary2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioCaptureBlueprintLibrary2_Statics::ClassParams = {
	&UAudioCaptureBlueprintLibrary2::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureBlueprintLibrary2_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioCaptureBlueprintLibrary2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioCaptureBlueprintLibrary2()
{
	if (!Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary2.OuterSingleton, Z_Construct_UClass_UAudioCaptureBlueprintLibrary2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary2.OuterSingleton;
}
template<> ONSETVOIP_API UClass* StaticClass<UAudioCaptureBlueprintLibrary2>()
{
	return UAudioCaptureBlueprintLibrary2::StaticClass();
}
UAudioCaptureBlueprintLibrary2::UAudioCaptureBlueprintLibrary2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioCaptureBlueprintLibrary2);
UAudioCaptureBlueprintLibrary2::~UAudioCaptureBlueprintLibrary2() {}
// End Class UAudioCaptureBlueprintLibrary2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_AudioCaptureBlueprintLibrary2_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAudioInputDeviceInfo2::StaticStruct, Z_Construct_UScriptStruct_FAudioInputDeviceInfo2_Statics::NewStructOps, TEXT("AudioInputDeviceInfo2"), &Z_Registration_Info_UScriptStruct_AudioInputDeviceInfo2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioInputDeviceInfo2), 535790001U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioCaptureBlueprintLibrary2, UAudioCaptureBlueprintLibrary2::StaticClass, TEXT("UAudioCaptureBlueprintLibrary2"), &Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioCaptureBlueprintLibrary2), 1905324437U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_AudioCaptureBlueprintLibrary2_h_1134360703(TEXT("/Script/OnsetVoip"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_AudioCaptureBlueprintLibrary2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_AudioCaptureBlueprintLibrary2_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_AudioCaptureBlueprintLibrary2_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_AudioCaptureBlueprintLibrary2_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
