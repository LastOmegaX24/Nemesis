// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeleeTrace/Public/MeleeTraceShape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeTraceShape() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MELEETRACE_API UClass* Z_Construct_UClass_UMeleeTraceShape();
MELEETRACE_API UClass* Z_Construct_UClass_UMeleeTraceShape_Box();
MELEETRACE_API UClass* Z_Construct_UClass_UMeleeTraceShape_Box_NoRegister();
MELEETRACE_API UClass* Z_Construct_UClass_UMeleeTraceShape_Capsule();
MELEETRACE_API UClass* Z_Construct_UClass_UMeleeTraceShape_Capsule_NoRegister();
MELEETRACE_API UClass* Z_Construct_UClass_UMeleeTraceShape_Line();
MELEETRACE_API UClass* Z_Construct_UClass_UMeleeTraceShape_Line_NoRegister();
MELEETRACE_API UClass* Z_Construct_UClass_UMeleeTraceShape_NoRegister();
MELEETRACE_API UClass* Z_Construct_UClass_UMeleeTraceShape_Sphere();
MELEETRACE_API UClass* Z_Construct_UClass_UMeleeTraceShape_Sphere_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeleeTrace();
// End Cross Module References

// Begin Class UMeleeTraceShape
void UMeleeTraceShape::StaticRegisterNativesUMeleeTraceShape()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeleeTraceShape);
UClass* Z_Construct_UClass_UMeleeTraceShape_NoRegister()
{
	return UMeleeTraceShape::StaticClass();
}
struct Z_Construct_UClass_UMeleeTraceShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MeleeTraceShape.h" },
		{ "ModuleRelativePath", "Public/MeleeTraceShape.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeTraceShape>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeleeTraceShape_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MeleeTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceShape_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeleeTraceShape_Statics::ClassParams = {
	&UMeleeTraceShape::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceShape_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeleeTraceShape_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeleeTraceShape()
{
	if (!Z_Registration_Info_UClass_UMeleeTraceShape.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeleeTraceShape.OuterSingleton, Z_Construct_UClass_UMeleeTraceShape_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeleeTraceShape.OuterSingleton;
}
template<> MELEETRACE_API UClass* StaticClass<UMeleeTraceShape>()
{
	return UMeleeTraceShape::StaticClass();
}
UMeleeTraceShape::UMeleeTraceShape(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeTraceShape);
UMeleeTraceShape::~UMeleeTraceShape() {}
// End Class UMeleeTraceShape

// Begin Class UMeleeTraceShape_Line Function MakeLineShape
struct Z_Construct_UFunction_UMeleeTraceShape_Line_MakeLineShape_Statics
{
	struct MeleeTraceShape_Line_eventMakeLineShape_Parms
	{
		UMeleeTraceShape_Line* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeleeTraceShape_Line_MakeLineShape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceShape_Line_eventMakeLineShape_Parms, ReturnValue), Z_Construct_UClass_UMeleeTraceShape_Line_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeTraceShape_Line_MakeLineShape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceShape_Line_MakeLineShape_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceShape_Line_MakeLineShape_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeTraceShape_Line_MakeLineShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeTraceShape_Line, nullptr, "MakeLineShape", nullptr, nullptr, Z_Construct_UFunction_UMeleeTraceShape_Line_MakeLineShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceShape_Line_MakeLineShape_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeleeTraceShape_Line_MakeLineShape_Statics::MeleeTraceShape_Line_eventMakeLineShape_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceShape_Line_MakeLineShape_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeTraceShape_Line_MakeLineShape_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeleeTraceShape_Line_MakeLineShape_Statics::MeleeTraceShape_Line_eventMakeLineShape_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeleeTraceShape_Line_MakeLineShape()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeTraceShape_Line_MakeLineShape_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeleeTraceShape_Line::execMakeLineShape)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMeleeTraceShape_Line**)Z_Param__Result=UMeleeTraceShape_Line::MakeLineShape();
	P_NATIVE_END;
}
// End Class UMeleeTraceShape_Line Function MakeLineShape

// Begin Class UMeleeTraceShape_Line
void UMeleeTraceShape_Line::StaticRegisterNativesUMeleeTraceShape_Line()
{
	UClass* Class = UMeleeTraceShape_Line::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MakeLineShape", &UMeleeTraceShape_Line::execMakeLineShape },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeleeTraceShape_Line);
UClass* Z_Construct_UClass_UMeleeTraceShape_Line_NoRegister()
{
	return UMeleeTraceShape_Line::StaticClass();
}
struct Z_Construct_UClass_UMeleeTraceShape_Line_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeleeTraceShape.h" },
		{ "ModuleRelativePath", "Public/MeleeTraceShape.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeleeTraceShape_Line_MakeLineShape, "MakeLineShape" }, // 1766636696
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeTraceShape_Line>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMeleeTraceShape_Line_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeleeTraceShape,
	(UObject* (*)())Z_Construct_UPackage__Script_MeleeTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceShape_Line_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeleeTraceShape_Line_Statics::ClassParams = {
	&UMeleeTraceShape_Line::StaticClass,
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
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceShape_Line_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeleeTraceShape_Line_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeleeTraceShape_Line()
{
	if (!Z_Registration_Info_UClass_UMeleeTraceShape_Line.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeleeTraceShape_Line.OuterSingleton, Z_Construct_UClass_UMeleeTraceShape_Line_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeleeTraceShape_Line.OuterSingleton;
}
template<> MELEETRACE_API UClass* StaticClass<UMeleeTraceShape_Line>()
{
	return UMeleeTraceShape_Line::StaticClass();
}
UMeleeTraceShape_Line::UMeleeTraceShape_Line(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeTraceShape_Line);
UMeleeTraceShape_Line::~UMeleeTraceShape_Line() {}
// End Class UMeleeTraceShape_Line

// Begin Class UMeleeTraceShape_Sphere Function MakeSphereShape
struct Z_Construct_UFunction_UMeleeTraceShape_Sphere_MakeSphereShape_Statics
{
	struct MeleeTraceShape_Sphere_eventMakeSphereShape_Parms
	{
		float Radius;
		UMeleeTraceShape_Sphere* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMeleeTraceShape_Sphere_MakeSphereShape_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceShape_Sphere_eventMakeSphereShape_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeleeTraceShape_Sphere_MakeSphereShape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceShape_Sphere_eventMakeSphereShape_Parms, ReturnValue), Z_Construct_UClass_UMeleeTraceShape_Sphere_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeTraceShape_Sphere_MakeSphereShape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceShape_Sphere_MakeSphereShape_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceShape_Sphere_MakeSphereShape_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceShape_Sphere_MakeSphereShape_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeTraceShape_Sphere_MakeSphereShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeTraceShape_Sphere, nullptr, "MakeSphereShape", nullptr, nullptr, Z_Construct_UFunction_UMeleeTraceShape_Sphere_MakeSphereShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceShape_Sphere_MakeSphereShape_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeleeTraceShape_Sphere_MakeSphereShape_Statics::MeleeTraceShape_Sphere_eventMakeSphereShape_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceShape_Sphere_MakeSphereShape_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeTraceShape_Sphere_MakeSphereShape_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeleeTraceShape_Sphere_MakeSphereShape_Statics::MeleeTraceShape_Sphere_eventMakeSphereShape_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeleeTraceShape_Sphere_MakeSphereShape()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeTraceShape_Sphere_MakeSphereShape_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeleeTraceShape_Sphere::execMakeSphereShape)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMeleeTraceShape_Sphere**)Z_Param__Result=UMeleeTraceShape_Sphere::MakeSphereShape(Z_Param_Radius);
	P_NATIVE_END;
}
// End Class UMeleeTraceShape_Sphere Function MakeSphereShape

// Begin Class UMeleeTraceShape_Sphere
void UMeleeTraceShape_Sphere::StaticRegisterNativesUMeleeTraceShape_Sphere()
{
	UClass* Class = UMeleeTraceShape_Sphere::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MakeSphereShape", &UMeleeTraceShape_Sphere::execMakeSphereShape },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeleeTraceShape_Sphere);
UClass* Z_Construct_UClass_UMeleeTraceShape_Sphere_NoRegister()
{
	return UMeleeTraceShape_Sphere::StaticClass();
}
struct Z_Construct_UClass_UMeleeTraceShape_Sphere_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeleeTraceShape.h" },
		{ "ModuleRelativePath", "Public/MeleeTraceShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceShape.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeleeTraceShape_Sphere_MakeSphereShape, "MakeSphereShape" }, // 3065649993
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeTraceShape_Sphere>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeleeTraceShape_Sphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeleeTraceShape_Sphere, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeleeTraceShape_Sphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeTraceShape_Sphere_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceShape_Sphere_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeleeTraceShape_Sphere_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeleeTraceShape,
	(UObject* (*)())Z_Construct_UPackage__Script_MeleeTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceShape_Sphere_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeleeTraceShape_Sphere_Statics::ClassParams = {
	&UMeleeTraceShape_Sphere::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMeleeTraceShape_Sphere_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceShape_Sphere_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceShape_Sphere_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeleeTraceShape_Sphere_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeleeTraceShape_Sphere()
{
	if (!Z_Registration_Info_UClass_UMeleeTraceShape_Sphere.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeleeTraceShape_Sphere.OuterSingleton, Z_Construct_UClass_UMeleeTraceShape_Sphere_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeleeTraceShape_Sphere.OuterSingleton;
}
template<> MELEETRACE_API UClass* StaticClass<UMeleeTraceShape_Sphere>()
{
	return UMeleeTraceShape_Sphere::StaticClass();
}
UMeleeTraceShape_Sphere::UMeleeTraceShape_Sphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeTraceShape_Sphere);
UMeleeTraceShape_Sphere::~UMeleeTraceShape_Sphere() {}
// End Class UMeleeTraceShape_Sphere

// Begin Class UMeleeTraceShape_Capsule Function MakeCapsuleShape
struct Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape_Statics
{
	struct MeleeTraceShape_Capsule_eventMakeCapsuleShape_Parms
	{
		float Radius;
		float HalfHeight;
		FRotator RotationOffset;
		UMeleeTraceShape_Capsule* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceShape_Capsule_eventMakeCapsuleShape_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceShape_Capsule_eventMakeCapsuleShape_Parms, HalfHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceShape_Capsule_eventMakeCapsuleShape_Parms, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceShape_Capsule_eventMakeCapsuleShape_Parms, ReturnValue), Z_Construct_UClass_UMeleeTraceShape_Capsule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape_Statics::NewProp_HalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeTraceShape_Capsule, nullptr, "MakeCapsuleShape", nullptr, nullptr, Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape_Statics::MeleeTraceShape_Capsule_eventMakeCapsuleShape_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape_Statics::MeleeTraceShape_Capsule_eventMakeCapsuleShape_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeleeTraceShape_Capsule::execMakeCapsuleShape)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_RotationOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMeleeTraceShape_Capsule**)Z_Param__Result=UMeleeTraceShape_Capsule::MakeCapsuleShape(Z_Param_Radius,Z_Param_HalfHeight,Z_Param_Out_RotationOffset);
	P_NATIVE_END;
}
// End Class UMeleeTraceShape_Capsule Function MakeCapsuleShape

// Begin Class UMeleeTraceShape_Capsule
void UMeleeTraceShape_Capsule::StaticRegisterNativesUMeleeTraceShape_Capsule()
{
	UClass* Class = UMeleeTraceShape_Capsule::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MakeCapsuleShape", &UMeleeTraceShape_Capsule::execMakeCapsuleShape },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeleeTraceShape_Capsule);
UClass* Z_Construct_UClass_UMeleeTraceShape_Capsule_NoRegister()
{
	return UMeleeTraceShape_Capsule::StaticClass();
}
struct Z_Construct_UClass_UMeleeTraceShape_Capsule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeleeTraceShape.h" },
		{ "ModuleRelativePath", "Public/MeleeTraceShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfHeight_MetaData[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceShape.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeleeTraceShape_Capsule_MakeCapsuleShape, "MakeCapsuleShape" }, // 104021369
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeTraceShape_Capsule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeleeTraceShape_Capsule_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeleeTraceShape_Capsule, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeleeTraceShape_Capsule_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeleeTraceShape_Capsule, HalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfHeight_MetaData), NewProp_HalfHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeleeTraceShape_Capsule_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeleeTraceShape_Capsule, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeleeTraceShape_Capsule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeTraceShape_Capsule_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeTraceShape_Capsule_Statics::NewProp_HalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeTraceShape_Capsule_Statics::NewProp_RotationOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceShape_Capsule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeleeTraceShape_Capsule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeleeTraceShape,
	(UObject* (*)())Z_Construct_UPackage__Script_MeleeTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceShape_Capsule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeleeTraceShape_Capsule_Statics::ClassParams = {
	&UMeleeTraceShape_Capsule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMeleeTraceShape_Capsule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceShape_Capsule_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceShape_Capsule_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeleeTraceShape_Capsule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeleeTraceShape_Capsule()
{
	if (!Z_Registration_Info_UClass_UMeleeTraceShape_Capsule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeleeTraceShape_Capsule.OuterSingleton, Z_Construct_UClass_UMeleeTraceShape_Capsule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeleeTraceShape_Capsule.OuterSingleton;
}
template<> MELEETRACE_API UClass* StaticClass<UMeleeTraceShape_Capsule>()
{
	return UMeleeTraceShape_Capsule::StaticClass();
}
UMeleeTraceShape_Capsule::UMeleeTraceShape_Capsule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeTraceShape_Capsule);
UMeleeTraceShape_Capsule::~UMeleeTraceShape_Capsule() {}
// End Class UMeleeTraceShape_Capsule

// Begin Class UMeleeTraceShape_Box Function MakeBoxShape
struct Z_Construct_UFunction_UMeleeTraceShape_Box_MakeBoxShape_Statics
{
	struct MeleeTraceShape_Box_eventMakeBoxShape_Parms
	{
		FVector Extent;
		FRotator RotationOffset;
		UMeleeTraceShape_Box* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeleeTraceShape_Box_MakeBoxShape_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceShape_Box_eventMakeBoxShape_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extent_MetaData), NewProp_Extent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeleeTraceShape_Box_MakeBoxShape_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceShape_Box_eventMakeBoxShape_Parms, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeleeTraceShape_Box_MakeBoxShape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeTraceShape_Box_eventMakeBoxShape_Parms, ReturnValue), Z_Construct_UClass_UMeleeTraceShape_Box_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeTraceShape_Box_MakeBoxShape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceShape_Box_MakeBoxShape_Statics::NewProp_Extent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceShape_Box_MakeBoxShape_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeTraceShape_Box_MakeBoxShape_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceShape_Box_MakeBoxShape_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeTraceShape_Box_MakeBoxShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeTraceShape_Box, nullptr, "MakeBoxShape", nullptr, nullptr, Z_Construct_UFunction_UMeleeTraceShape_Box_MakeBoxShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceShape_Box_MakeBoxShape_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeleeTraceShape_Box_MakeBoxShape_Statics::MeleeTraceShape_Box_eventMakeBoxShape_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeTraceShape_Box_MakeBoxShape_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeTraceShape_Box_MakeBoxShape_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMeleeTraceShape_Box_MakeBoxShape_Statics::MeleeTraceShape_Box_eventMakeBoxShape_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeleeTraceShape_Box_MakeBoxShape()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeTraceShape_Box_MakeBoxShape_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeleeTraceShape_Box::execMakeBoxShape)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Extent);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_RotationOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMeleeTraceShape_Box**)Z_Param__Result=UMeleeTraceShape_Box::MakeBoxShape(Z_Param_Out_Extent,Z_Param_Out_RotationOffset);
	P_NATIVE_END;
}
// End Class UMeleeTraceShape_Box Function MakeBoxShape

// Begin Class UMeleeTraceShape_Box
void UMeleeTraceShape_Box::StaticRegisterNativesUMeleeTraceShape_Box()
{
	UClass* Class = UMeleeTraceShape_Box::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MakeBoxShape", &UMeleeTraceShape_Box::execMakeBoxShape },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeleeTraceShape_Box);
UClass* Z_Construct_UClass_UMeleeTraceShape_Box_NoRegister()
{
	return UMeleeTraceShape_Box::StaticClass();
}
struct Z_Construct_UClass_UMeleeTraceShape_Box_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeleeTraceShape.h" },
		{ "ModuleRelativePath", "Public/MeleeTraceShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Melee Trace" },
		{ "ModuleRelativePath", "Public/MeleeTraceShape.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeleeTraceShape_Box_MakeBoxShape, "MakeBoxShape" }, // 1085714230
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeTraceShape_Box>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeleeTraceShape_Box_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeleeTraceShape_Box, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extent_MetaData), NewProp_Extent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeleeTraceShape_Box_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeleeTraceShape_Box, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeleeTraceShape_Box_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeTraceShape_Box_Statics::NewProp_Extent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeTraceShape_Box_Statics::NewProp_RotationOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceShape_Box_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeleeTraceShape_Box_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeleeTraceShape,
	(UObject* (*)())Z_Construct_UPackage__Script_MeleeTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceShape_Box_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeleeTraceShape_Box_Statics::ClassParams = {
	&UMeleeTraceShape_Box::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMeleeTraceShape_Box_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceShape_Box_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceShape_Box_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeleeTraceShape_Box_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeleeTraceShape_Box()
{
	if (!Z_Registration_Info_UClass_UMeleeTraceShape_Box.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeleeTraceShape_Box.OuterSingleton, Z_Construct_UClass_UMeleeTraceShape_Box_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeleeTraceShape_Box.OuterSingleton;
}
template<> MELEETRACE_API UClass* StaticClass<UMeleeTraceShape_Box>()
{
	return UMeleeTraceShape_Box::StaticClass();
}
UMeleeTraceShape_Box::UMeleeTraceShape_Box(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeTraceShape_Box);
UMeleeTraceShape_Box::~UMeleeTraceShape_Box() {}
// End Class UMeleeTraceShape_Box

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeleeTraceShape, UMeleeTraceShape::StaticClass, TEXT("UMeleeTraceShape"), &Z_Registration_Info_UClass_UMeleeTraceShape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeleeTraceShape), 3500840450U) },
		{ Z_Construct_UClass_UMeleeTraceShape_Line, UMeleeTraceShape_Line::StaticClass, TEXT("UMeleeTraceShape_Line"), &Z_Registration_Info_UClass_UMeleeTraceShape_Line, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeleeTraceShape_Line), 606892234U) },
		{ Z_Construct_UClass_UMeleeTraceShape_Sphere, UMeleeTraceShape_Sphere::StaticClass, TEXT("UMeleeTraceShape_Sphere"), &Z_Registration_Info_UClass_UMeleeTraceShape_Sphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeleeTraceShape_Sphere), 3412777738U) },
		{ Z_Construct_UClass_UMeleeTraceShape_Capsule, UMeleeTraceShape_Capsule::StaticClass, TEXT("UMeleeTraceShape_Capsule"), &Z_Registration_Info_UClass_UMeleeTraceShape_Capsule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeleeTraceShape_Capsule), 1379731333U) },
		{ Z_Construct_UClass_UMeleeTraceShape_Box, UMeleeTraceShape_Box::StaticClass, TEXT("UMeleeTraceShape_Box"), &Z_Registration_Info_UClass_UMeleeTraceShape_Box, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeleeTraceShape_Box), 3020075051U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_1836425730(TEXT("/Script/MeleeTrace"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
