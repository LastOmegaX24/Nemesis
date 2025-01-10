// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputSequenceCoreEditor/Private/InputSequenceCoreEditor_private.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputSequenceCoreEditor_private() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_UInputSequence_NoRegister();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputSequenceGraph();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputSequenceGraph_NoRegister();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base_NoRegister();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Dynamic();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Dynamic_NoRegister();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Entry();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Entry_NoRegister();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Hub();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Hub_NoRegister();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Input();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Input_NoRegister();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Reset();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Reset_NoRegister();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphSchema();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphSchema_NoRegister();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UFactory_InputSequence();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UFactory_InputSequence_NoRegister();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UFactory_InputSequenceRequestKey();
INPUTSEQUENCECOREEDITOR_API UClass* Z_Construct_UClass_UFactory_InputSequenceRequestKey_NoRegister();
INPUTSEQUENCECOREEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_AddPin();
INPUTSEQUENCECOREEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_NewComment();
INPUTSEQUENCECOREEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_NewNode();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_InputSequenceCoreEditor();
// End Cross Module References

// Begin Class UFactory_InputSequence
void UFactory_InputSequence::StaticRegisterNativesUFactory_InputSequence()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactory_InputSequence);
UClass* Z_Construct_UClass_UFactory_InputSequence_NoRegister()
{
	return UFactory_InputSequence::StaticClass();
}
struct Z_Construct_UClass_UFactory_InputSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------\n// UFactory_InputSequence\n//------------------------------------------------------\n" },
		{ "IncludePath", "InputSequenceCoreEditor_private.h" },
		{ "ModuleRelativePath", "Private/InputSequenceCoreEditor_private.h" },
		{ "ToolTip", "UFactory_InputSequence" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactory_InputSequence>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFactory_InputSequence_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCoreEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_InputSequence_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactory_InputSequence_Statics::ClassParams = {
	&UFactory_InputSequence::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_InputSequence_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactory_InputSequence_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactory_InputSequence()
{
	if (!Z_Registration_Info_UClass_UFactory_InputSequence.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactory_InputSequence.OuterSingleton, Z_Construct_UClass_UFactory_InputSequence_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactory_InputSequence.OuterSingleton;
}
template<> INPUTSEQUENCECOREEDITOR_API UClass* StaticClass<UFactory_InputSequence>()
{
	return UFactory_InputSequence::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactory_InputSequence);
UFactory_InputSequence::~UFactory_InputSequence() {}
// End Class UFactory_InputSequence

// Begin Class UFactory_InputSequenceRequestKey
void UFactory_InputSequenceRequestKey::StaticRegisterNativesUFactory_InputSequenceRequestKey()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactory_InputSequenceRequestKey);
UClass* Z_Construct_UClass_UFactory_InputSequenceRequestKey_NoRegister()
{
	return UFactory_InputSequenceRequestKey::StaticClass();
}
struct Z_Construct_UClass_UFactory_InputSequenceRequestKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------\n// UFactory_InputSequenceRequestKey\n//------------------------------------------------------\n" },
		{ "IncludePath", "InputSequenceCoreEditor_private.h" },
		{ "ModuleRelativePath", "Private/InputSequenceCoreEditor_private.h" },
		{ "ToolTip", "UFactory_InputSequenceRequestKey" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactory_InputSequenceRequestKey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFactory_InputSequenceRequestKey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCoreEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_InputSequenceRequestKey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactory_InputSequenceRequestKey_Statics::ClassParams = {
	&UFactory_InputSequenceRequestKey::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_InputSequenceRequestKey_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactory_InputSequenceRequestKey_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactory_InputSequenceRequestKey()
{
	if (!Z_Registration_Info_UClass_UFactory_InputSequenceRequestKey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactory_InputSequenceRequestKey.OuterSingleton, Z_Construct_UClass_UFactory_InputSequenceRequestKey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactory_InputSequenceRequestKey.OuterSingleton;
}
template<> INPUTSEQUENCECOREEDITOR_API UClass* StaticClass<UFactory_InputSequenceRequestKey>()
{
	return UFactory_InputSequenceRequestKey::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactory_InputSequenceRequestKey);
UFactory_InputSequenceRequestKey::~UFactory_InputSequenceRequestKey() {}
// End Class UFactory_InputSequenceRequestKey

// Begin Class UEnhancedInputSequenceGraphNode_Entry
void UEnhancedInputSequenceGraphNode_Entry::StaticRegisterNativesUEnhancedInputSequenceGraphNode_Entry()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputSequenceGraphNode_Entry);
UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Entry_NoRegister()
{
	return UEnhancedInputSequenceGraphNode_Entry::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Entry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------\n// UEnhancedInputSequenceGraphNode_Entry\n//------------------------------------------------------\n" },
		{ "IncludePath", "InputSequenceCoreEditor_private.h" },
		{ "ModuleRelativePath", "Private/InputSequenceCoreEditor_private.h" },
		{ "ToolTip", "UEnhancedInputSequenceGraphNode_Entry" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputSequenceGraphNode_Entry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Entry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCoreEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Entry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Entry_Statics::ClassParams = {
	&UEnhancedInputSequenceGraphNode_Entry::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Entry_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Entry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Entry()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Entry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Entry.OuterSingleton, Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Entry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Entry.OuterSingleton;
}
template<> INPUTSEQUENCECOREEDITOR_API UClass* StaticClass<UEnhancedInputSequenceGraphNode_Entry>()
{
	return UEnhancedInputSequenceGraphNode_Entry::StaticClass();
}
UEnhancedInputSequenceGraphNode_Entry::UEnhancedInputSequenceGraphNode_Entry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputSequenceGraphNode_Entry);
UEnhancedInputSequenceGraphNode_Entry::~UEnhancedInputSequenceGraphNode_Entry() {}
// End Class UEnhancedInputSequenceGraphNode_Entry

// Begin Class UEnhancedInputSequenceGraphNode_Base
void UEnhancedInputSequenceGraphNode_Base::StaticRegisterNativesUEnhancedInputSequenceGraphNode_Base()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputSequenceGraphNode_Base);
UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base_NoRegister()
{
	return UEnhancedInputSequenceGraphNode_Base::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------\n// UEnhancedInputSequenceGraphNode_Base\n//------------------------------------------------------\n" },
		{ "IncludePath", "InputSequenceCoreEditor_private.h" },
		{ "ModuleRelativePath", "Private/InputSequenceCoreEditor_private.h" },
		{ "ToolTip", "UEnhancedInputSequenceGraphNode_Base" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevOwningAsset_MetaData[] = {
		{ "ModuleRelativePath", "Private/InputSequenceCoreEditor_private.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrevOwningAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputSequenceGraphNode_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base_Statics::NewProp_PrevOwningAsset = { "PrevOwningAsset", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputSequenceGraphNode_Base, PrevOwningAsset), Z_Construct_UClass_UInputSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevOwningAsset_MetaData), NewProp_PrevOwningAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base_Statics::NewProp_PrevOwningAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCoreEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base_Statics::ClassParams = {
	&UEnhancedInputSequenceGraphNode_Base::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Base.OuterSingleton, Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Base.OuterSingleton;
}
template<> INPUTSEQUENCECOREEDITOR_API UClass* StaticClass<UEnhancedInputSequenceGraphNode_Base>()
{
	return UEnhancedInputSequenceGraphNode_Base::StaticClass();
}
UEnhancedInputSequenceGraphNode_Base::UEnhancedInputSequenceGraphNode_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputSequenceGraphNode_Base);
UEnhancedInputSequenceGraphNode_Base::~UEnhancedInputSequenceGraphNode_Base() {}
// End Class UEnhancedInputSequenceGraphNode_Base

// Begin Class UEnhancedInputSequenceGraphNode_Dynamic
void UEnhancedInputSequenceGraphNode_Dynamic::StaticRegisterNativesUEnhancedInputSequenceGraphNode_Dynamic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputSequenceGraphNode_Dynamic);
UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Dynamic_NoRegister()
{
	return UEnhancedInputSequenceGraphNode_Dynamic::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Dynamic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------\n// UEnhancedInputSequenceGraphNode_Dynamic\n//------------------------------------------------------\n" },
		{ "IncludePath", "InputSequenceCoreEditor_private.h" },
		{ "ModuleRelativePath", "Private/InputSequenceCoreEditor_private.h" },
		{ "ToolTip", "UEnhancedInputSequenceGraphNode_Dynamic" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputSequenceGraphNode_Dynamic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Dynamic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCoreEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Dynamic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Dynamic_Statics::ClassParams = {
	&UEnhancedInputSequenceGraphNode_Dynamic::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Dynamic_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Dynamic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Dynamic()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Dynamic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Dynamic.OuterSingleton, Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Dynamic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Dynamic.OuterSingleton;
}
template<> INPUTSEQUENCECOREEDITOR_API UClass* StaticClass<UEnhancedInputSequenceGraphNode_Dynamic>()
{
	return UEnhancedInputSequenceGraphNode_Dynamic::StaticClass();
}
UEnhancedInputSequenceGraphNode_Dynamic::UEnhancedInputSequenceGraphNode_Dynamic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputSequenceGraphNode_Dynamic);
UEnhancedInputSequenceGraphNode_Dynamic::~UEnhancedInputSequenceGraphNode_Dynamic() {}
// End Class UEnhancedInputSequenceGraphNode_Dynamic

// Begin Class UEnhancedInputSequenceGraphNode_Input
void UEnhancedInputSequenceGraphNode_Input::StaticRegisterNativesUEnhancedInputSequenceGraphNode_Input()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputSequenceGraphNode_Input);
UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Input_NoRegister()
{
	return UEnhancedInputSequenceGraphNode_Input::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Input_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------\n// UEnhancedInputSequenceGraphNode_Input\n//------------------------------------------------------\n" },
		{ "IncludePath", "InputSequenceCoreEditor_private.h" },
		{ "ModuleRelativePath", "Private/InputSequenceCoreEditor_private.h" },
		{ "ToolTip", "UEnhancedInputSequenceGraphNode_Input" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputSequenceGraphNode_Input>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Input_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Dynamic,
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCoreEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Input_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Input_Statics::ClassParams = {
	&UEnhancedInputSequenceGraphNode_Input::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Input_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Input_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Input()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Input.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Input.OuterSingleton, Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Input_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Input.OuterSingleton;
}
template<> INPUTSEQUENCECOREEDITOR_API UClass* StaticClass<UEnhancedInputSequenceGraphNode_Input>()
{
	return UEnhancedInputSequenceGraphNode_Input::StaticClass();
}
UEnhancedInputSequenceGraphNode_Input::UEnhancedInputSequenceGraphNode_Input(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputSequenceGraphNode_Input);
UEnhancedInputSequenceGraphNode_Input::~UEnhancedInputSequenceGraphNode_Input() {}
// End Class UEnhancedInputSequenceGraphNode_Input

// Begin Class UEnhancedInputSequenceGraphNode_Hub
void UEnhancedInputSequenceGraphNode_Hub::StaticRegisterNativesUEnhancedInputSequenceGraphNode_Hub()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputSequenceGraphNode_Hub);
UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Hub_NoRegister()
{
	return UEnhancedInputSequenceGraphNode_Hub::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Hub_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------\n// UEnhancedInputSequenceGraphNode_Hub\n//------------------------------------------------------\n" },
		{ "IncludePath", "InputSequenceCoreEditor_private.h" },
		{ "ModuleRelativePath", "Private/InputSequenceCoreEditor_private.h" },
		{ "ToolTip", "UEnhancedInputSequenceGraphNode_Hub" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputSequenceGraphNode_Hub>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Hub_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Dynamic,
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCoreEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Hub_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Hub_Statics::ClassParams = {
	&UEnhancedInputSequenceGraphNode_Hub::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Hub_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Hub_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Hub()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Hub.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Hub.OuterSingleton, Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Hub_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Hub.OuterSingleton;
}
template<> INPUTSEQUENCECOREEDITOR_API UClass* StaticClass<UEnhancedInputSequenceGraphNode_Hub>()
{
	return UEnhancedInputSequenceGraphNode_Hub::StaticClass();
}
UEnhancedInputSequenceGraphNode_Hub::UEnhancedInputSequenceGraphNode_Hub(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputSequenceGraphNode_Hub);
UEnhancedInputSequenceGraphNode_Hub::~UEnhancedInputSequenceGraphNode_Hub() {}
// End Class UEnhancedInputSequenceGraphNode_Hub

// Begin Class UEnhancedInputSequenceGraphNode_Reset
void UEnhancedInputSequenceGraphNode_Reset::StaticRegisterNativesUEnhancedInputSequenceGraphNode_Reset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputSequenceGraphNode_Reset);
UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Reset_NoRegister()
{
	return UEnhancedInputSequenceGraphNode_Reset::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------\n// UEnhancedInputSequenceGraphNode_Reset\n//------------------------------------------------------\n" },
		{ "IncludePath", "InputSequenceCoreEditor_private.h" },
		{ "ModuleRelativePath", "Private/InputSequenceCoreEditor_private.h" },
		{ "ToolTip", "UEnhancedInputSequenceGraphNode_Reset" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputSequenceGraphNode_Reset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Reset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCoreEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Reset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Reset_Statics::ClassParams = {
	&UEnhancedInputSequenceGraphNode_Reset::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Reset_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Reset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Reset()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Reset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Reset.OuterSingleton, Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Reset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Reset.OuterSingleton;
}
template<> INPUTSEQUENCECOREEDITOR_API UClass* StaticClass<UEnhancedInputSequenceGraphNode_Reset>()
{
	return UEnhancedInputSequenceGraphNode_Reset::StaticClass();
}
UEnhancedInputSequenceGraphNode_Reset::UEnhancedInputSequenceGraphNode_Reset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputSequenceGraphNode_Reset);
UEnhancedInputSequenceGraphNode_Reset::~UEnhancedInputSequenceGraphNode_Reset() {}
// End Class UEnhancedInputSequenceGraphNode_Reset

// Begin Class UEnhancedInputSequenceGraph
void UEnhancedInputSequenceGraph::StaticRegisterNativesUEnhancedInputSequenceGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputSequenceGraph);
UClass* Z_Construct_UClass_UEnhancedInputSequenceGraph_NoRegister()
{
	return UEnhancedInputSequenceGraph::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputSequenceGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------\n// UEnhancedInputSequenceGraph\n//------------------------------------------------------\n" },
		{ "IncludePath", "InputSequenceCoreEditor_private.h" },
		{ "ModuleRelativePath", "Private/InputSequenceCoreEditor_private.h" },
		{ "ToolTip", "UEnhancedInputSequenceGraph" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputSequenceGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnhancedInputSequenceGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCoreEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSequenceGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputSequenceGraph_Statics::ClassParams = {
	&UEnhancedInputSequenceGraph::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSequenceGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputSequenceGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputSequenceGraph()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputSequenceGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputSequenceGraph.OuterSingleton, Z_Construct_UClass_UEnhancedInputSequenceGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputSequenceGraph.OuterSingleton;
}
template<> INPUTSEQUENCECOREEDITOR_API UClass* StaticClass<UEnhancedInputSequenceGraph>()
{
	return UEnhancedInputSequenceGraph::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputSequenceGraph);
UEnhancedInputSequenceGraph::~UEnhancedInputSequenceGraph() {}
// End Class UEnhancedInputSequenceGraph

// Begin ScriptStruct FEnhancedInputSequenceGraphSchemaAction_NewComment
static_assert(std::is_polymorphic<FEnhancedInputSequenceGraphSchemaAction_NewComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FEnhancedInputSequenceGraphSchemaAction_NewComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_NewComment;
class UScriptStruct* FEnhancedInputSequenceGraphSchemaAction_NewComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_NewComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_NewComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_NewComment, (UObject*)Z_Construct_UPackage__Script_InputSequenceCoreEditor(), TEXT("EnhancedInputSequenceGraphSchemaAction_NewComment"));
	}
	return Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_NewComment.OuterSingleton;
}
template<> INPUTSEQUENCECOREEDITOR_API UScriptStruct* StaticStruct<FEnhancedInputSequenceGraphSchemaAction_NewComment>()
{
	return FEnhancedInputSequenceGraphSchemaAction_NewComment::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_NewComment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------\n// FEnhancedInputSequenceGraphSchemaAction_NewComment\n//------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Private/InputSequenceCoreEditor_private.h" },
		{ "ToolTip", "FEnhancedInputSequenceGraphSchemaAction_NewComment" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnhancedInputSequenceGraphSchemaAction_NewComment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_NewComment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCoreEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"EnhancedInputSequenceGraphSchemaAction_NewComment",
	nullptr,
	0,
	sizeof(FEnhancedInputSequenceGraphSchemaAction_NewComment),
	alignof(FEnhancedInputSequenceGraphSchemaAction_NewComment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_NewComment()
{
	if (!Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_NewComment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_NewComment.InnerSingleton, Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_NewComment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_NewComment.InnerSingleton;
}
// End ScriptStruct FEnhancedInputSequenceGraphSchemaAction_NewComment

// Begin ScriptStruct FEnhancedInputSequenceGraphSchemaAction_NewNode
static_assert(std::is_polymorphic<FEnhancedInputSequenceGraphSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FEnhancedInputSequenceGraphSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_NewNode;
class UScriptStruct* FEnhancedInputSequenceGraphSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_InputSequenceCoreEditor(), TEXT("EnhancedInputSequenceGraphSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_NewNode.OuterSingleton;
}
template<> INPUTSEQUENCECOREEDITOR_API UScriptStruct* StaticStruct<FEnhancedInputSequenceGraphSchemaAction_NewNode>()
{
	return FEnhancedInputSequenceGraphSchemaAction_NewNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_NewNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------\n// FEnhancedInputSequenceGraphSchemaAction_NewNode\n//------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Private/InputSequenceCoreEditor_private.h" },
		{ "ToolTip", "FEnhancedInputSequenceGraphSchemaAction_NewNode" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnhancedInputSequenceGraphSchemaAction_NewNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_NewNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCoreEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"EnhancedInputSequenceGraphSchemaAction_NewNode",
	nullptr,
	0,
	sizeof(FEnhancedInputSequenceGraphSchemaAction_NewNode),
	alignof(FEnhancedInputSequenceGraphSchemaAction_NewNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_NewNode()
{
	if (!Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_NewNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_NewNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_NewNode.InnerSingleton;
}
// End ScriptStruct FEnhancedInputSequenceGraphSchemaAction_NewNode

// Begin ScriptStruct FEnhancedInputSequenceGraphSchemaAction_AddPin
static_assert(std::is_polymorphic<FEnhancedInputSequenceGraphSchemaAction_AddPin>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FEnhancedInputSequenceGraphSchemaAction_AddPin cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_AddPin;
class UScriptStruct* FEnhancedInputSequenceGraphSchemaAction_AddPin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_AddPin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_AddPin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_AddPin, (UObject*)Z_Construct_UPackage__Script_InputSequenceCoreEditor(), TEXT("EnhancedInputSequenceGraphSchemaAction_AddPin"));
	}
	return Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_AddPin.OuterSingleton;
}
template<> INPUTSEQUENCECOREEDITOR_API UScriptStruct* StaticStruct<FEnhancedInputSequenceGraphSchemaAction_AddPin>()
{
	return FEnhancedInputSequenceGraphSchemaAction_AddPin::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_AddPin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------\n// FEnhancedInputSequenceGraphSchemaAction_AddPin\n//------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Private/InputSequenceCoreEditor_private.h" },
		{ "ToolTip", "FEnhancedInputSequenceGraphSchemaAction_AddPin" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnhancedInputSequenceGraphSchemaAction_AddPin>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_AddPin_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCoreEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"EnhancedInputSequenceGraphSchemaAction_AddPin",
	nullptr,
	0,
	sizeof(FEnhancedInputSequenceGraphSchemaAction_AddPin),
	alignof(FEnhancedInputSequenceGraphSchemaAction_AddPin),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_AddPin_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_AddPin_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_AddPin()
{
	if (!Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_AddPin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_AddPin.InnerSingleton, Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_AddPin_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_AddPin.InnerSingleton;
}
// End ScriptStruct FEnhancedInputSequenceGraphSchemaAction_AddPin

// Begin Class UEnhancedInputSequenceGraphSchema
void UEnhancedInputSequenceGraphSchema::StaticRegisterNativesUEnhancedInputSequenceGraphSchema()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputSequenceGraphSchema);
UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphSchema_NoRegister()
{
	return UEnhancedInputSequenceGraphSchema::StaticClass();
}
struct Z_Construct_UClass_UEnhancedInputSequenceGraphSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------\n// UEnhancedInputSequenceGraphSchema\n//------------------------------------------------------\n" },
		{ "IncludePath", "InputSequenceCoreEditor_private.h" },
		{ "ModuleRelativePath", "Private/InputSequenceCoreEditor_private.h" },
		{ "ToolTip", "UEnhancedInputSequenceGraphSchema" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputSequenceGraphSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnhancedInputSequenceGraphSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCoreEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSequenceGraphSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputSequenceGraphSchema_Statics::ClassParams = {
	&UEnhancedInputSequenceGraphSchema::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputSequenceGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputSequenceGraphSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputSequenceGraphSchema()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputSequenceGraphSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputSequenceGraphSchema.OuterSingleton, Z_Construct_UClass_UEnhancedInputSequenceGraphSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputSequenceGraphSchema.OuterSingleton;
}
template<> INPUTSEQUENCECOREEDITOR_API UClass* StaticClass<UEnhancedInputSequenceGraphSchema>()
{
	return UEnhancedInputSequenceGraphSchema::StaticClass();
}
UEnhancedInputSequenceGraphSchema::UEnhancedInputSequenceGraphSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputSequenceGraphSchema);
UEnhancedInputSequenceGraphSchema::~UEnhancedInputSequenceGraphSchema() {}
// End Class UEnhancedInputSequenceGraphSchema

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCoreEditor_Private_InputSequenceCoreEditor_private_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEnhancedInputSequenceGraphSchemaAction_NewComment::StaticStruct, Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_NewComment_Statics::NewStructOps, TEXT("EnhancedInputSequenceGraphSchemaAction_NewComment"), &Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_NewComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnhancedInputSequenceGraphSchemaAction_NewComment), 2767244201U) },
		{ FEnhancedInputSequenceGraphSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_NewNode_Statics::NewStructOps, TEXT("EnhancedInputSequenceGraphSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnhancedInputSequenceGraphSchemaAction_NewNode), 3610488695U) },
		{ FEnhancedInputSequenceGraphSchemaAction_AddPin::StaticStruct, Z_Construct_UScriptStruct_FEnhancedInputSequenceGraphSchemaAction_AddPin_Statics::NewStructOps, TEXT("EnhancedInputSequenceGraphSchemaAction_AddPin"), &Z_Registration_Info_UScriptStruct_EnhancedInputSequenceGraphSchemaAction_AddPin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnhancedInputSequenceGraphSchemaAction_AddPin), 2486428382U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFactory_InputSequence, UFactory_InputSequence::StaticClass, TEXT("UFactory_InputSequence"), &Z_Registration_Info_UClass_UFactory_InputSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactory_InputSequence), 820055779U) },
		{ Z_Construct_UClass_UFactory_InputSequenceRequestKey, UFactory_InputSequenceRequestKey::StaticClass, TEXT("UFactory_InputSequenceRequestKey"), &Z_Registration_Info_UClass_UFactory_InputSequenceRequestKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactory_InputSequenceRequestKey), 3613216852U) },
		{ Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Entry, UEnhancedInputSequenceGraphNode_Entry::StaticClass, TEXT("UEnhancedInputSequenceGraphNode_Entry"), &Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Entry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputSequenceGraphNode_Entry), 2826737138U) },
		{ Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Base, UEnhancedInputSequenceGraphNode_Base::StaticClass, TEXT("UEnhancedInputSequenceGraphNode_Base"), &Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputSequenceGraphNode_Base), 577286738U) },
		{ Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Dynamic, UEnhancedInputSequenceGraphNode_Dynamic::StaticClass, TEXT("UEnhancedInputSequenceGraphNode_Dynamic"), &Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Dynamic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputSequenceGraphNode_Dynamic), 4121275677U) },
		{ Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Input, UEnhancedInputSequenceGraphNode_Input::StaticClass, TEXT("UEnhancedInputSequenceGraphNode_Input"), &Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Input, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputSequenceGraphNode_Input), 3999330239U) },
		{ Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Hub, UEnhancedInputSequenceGraphNode_Hub::StaticClass, TEXT("UEnhancedInputSequenceGraphNode_Hub"), &Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Hub, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputSequenceGraphNode_Hub), 1115687651U) },
		{ Z_Construct_UClass_UEnhancedInputSequenceGraphNode_Reset, UEnhancedInputSequenceGraphNode_Reset::StaticClass, TEXT("UEnhancedInputSequenceGraphNode_Reset"), &Z_Registration_Info_UClass_UEnhancedInputSequenceGraphNode_Reset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputSequenceGraphNode_Reset), 2180970610U) },
		{ Z_Construct_UClass_UEnhancedInputSequenceGraph, UEnhancedInputSequenceGraph::StaticClass, TEXT("UEnhancedInputSequenceGraph"), &Z_Registration_Info_UClass_UEnhancedInputSequenceGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputSequenceGraph), 2171753415U) },
		{ Z_Construct_UClass_UEnhancedInputSequenceGraphSchema, UEnhancedInputSequenceGraphSchema::StaticClass, TEXT("UEnhancedInputSequenceGraphSchema"), &Z_Registration_Info_UClass_UEnhancedInputSequenceGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputSequenceGraphSchema), 2452807502U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCoreEditor_Private_InputSequenceCoreEditor_private_h_3233050661(TEXT("/Script/InputSequenceCoreEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCoreEditor_Private_InputSequenceCoreEditor_private_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCoreEditor_Private_InputSequenceCoreEditor_private_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCoreEditor_Private_InputSequenceCoreEditor_private_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCoreEditor_Private_InputSequenceCoreEditor_private_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
