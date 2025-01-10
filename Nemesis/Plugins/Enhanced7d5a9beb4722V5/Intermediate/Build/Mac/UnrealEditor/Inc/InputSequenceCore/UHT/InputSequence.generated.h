// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputSequence.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction; enum class ETriggerEvent : uint8;
class UInputSequenceRequestKey;
class UInputSequenceState_Base;
class UObject;
struct FInputSequenceEventRequest;
struct FInputSequenceResetRequest;
#ifdef INPUTSEQUENCECORE_InputSequence_generated_h
#error "InputSequence.generated.h already included, missing '#pragma once' in InputSequence.h"
#endif
#define INPUTSEQUENCECORE_InputSequence_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputSequenceRequestKey(); \
	friend struct Z_Construct_UClass_UInputSequenceRequestKey_Statics; \
public: \
	DECLARE_CLASS(UInputSequenceRequestKey, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InputSequenceCore"), NO_API) \
	DECLARE_SERIALIZER(UInputSequenceRequestKey)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputSequenceRequestKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputSequenceRequestKey(UInputSequenceRequestKey&&); \
	UInputSequenceRequestKey(const UInputSequenceRequestKey&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputSequenceRequestKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputSequenceRequestKey); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputSequenceRequestKey) \
	NO_API virtual ~UInputSequenceRequestKey();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_25_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_28_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INPUTSEQUENCECORE_API UClass* StaticClass<class UInputSequenceRequestKey>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputSequenceResetRequest_Statics; \
	static class UScriptStruct* StaticStruct();


template<> INPUTSEQUENCECORE_API UScriptStruct* StaticStruct<struct FInputSequenceResetRequest>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputSequenceEventRequest_Statics; \
	static class UScriptStruct* StaticStruct();


template<> INPUTSEQUENCECORE_API UScriptStruct* StaticStruct<struct FInputSequenceEventRequest>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExecute);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_100_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputSequenceEvent_Base(); \
	friend struct Z_Construct_UClass_UInputSequenceEvent_Base_Statics; \
public: \
	DECLARE_CLASS(UInputSequenceEvent_Base, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InputSequenceCore"), NO_API) \
	DECLARE_SERIALIZER(UInputSequenceEvent_Base)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputSequenceEvent_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputSequenceEvent_Base(UInputSequenceEvent_Base&&); \
	UInputSequenceEvent_Base(const UInputSequenceEvent_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputSequenceEvent_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputSequenceEvent_Base); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputSequenceEvent_Base) \
	NO_API virtual ~UInputSequenceEvent_Base();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_97_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_100_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_100_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INPUTSEQUENCECORE_API UClass* StaticClass<class UInputSequenceEvent_Base>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputActionInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> INPUTSEQUENCECORE_API UScriptStruct* StaticStruct<struct FInputActionInfo>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_156_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputSequenceState_Base(); \
	friend struct Z_Construct_UClass_UInputSequenceState_Base_Statics; \
public: \
	DECLARE_CLASS(UInputSequenceState_Base, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InputSequenceCore"), NO_API) \
	DECLARE_SERIALIZER(UInputSequenceState_Base)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_156_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputSequenceState_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputSequenceState_Base(UInputSequenceState_Base&&); \
	UInputSequenceState_Base(const UInputSequenceState_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputSequenceState_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputSequenceState_Base); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputSequenceState_Base) \
	NO_API virtual ~UInputSequenceState_Base();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_153_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_156_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_156_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_156_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INPUTSEQUENCECORE_API UClass* StaticClass<class UInputSequenceState_Base>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_172_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputSequenceState_Hub(); \
	friend struct Z_Construct_UClass_UInputSequenceState_Hub_Statics; \
public: \
	DECLARE_CLASS(UInputSequenceState_Hub, UInputSequenceState_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InputSequenceCore"), NO_API) \
	DECLARE_SERIALIZER(UInputSequenceState_Hub)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_172_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputSequenceState_Hub(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputSequenceState_Hub(UInputSequenceState_Hub&&); \
	UInputSequenceState_Hub(const UInputSequenceState_Hub&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputSequenceState_Hub); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputSequenceState_Hub); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputSequenceState_Hub) \
	NO_API virtual ~UInputSequenceState_Hub();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_169_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_172_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_172_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_172_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INPUTSEQUENCECORE_API UClass* StaticClass<class UInputSequenceState_Hub>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_182_INCLASS \
private: \
	static void StaticRegisterNativesUInputSequenceState_Reset(); \
	friend struct Z_Construct_UClass_UInputSequenceState_Reset_Statics; \
public: \
	DECLARE_CLASS(UInputSequenceState_Reset, UInputSequenceState_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InputSequenceCore"), NO_API) \
	DECLARE_SERIALIZER(UInputSequenceState_Reset)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_182_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputSequenceState_Reset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputSequenceState_Reset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputSequenceState_Reset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputSequenceState_Reset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputSequenceState_Reset(UInputSequenceState_Reset&&); \
	UInputSequenceState_Reset(const UInputSequenceState_Reset&); \
public: \
	NO_API virtual ~UInputSequenceState_Reset();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_179_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_182_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_182_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_182_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INPUTSEQUENCECORE_API UClass* StaticClass<class UInputSequenceState_Reset>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_202_INCLASS \
private: \
	static void StaticRegisterNativesUInputSequenceState_Input(); \
	friend struct Z_Construct_UClass_UInputSequenceState_Input_Statics; \
public: \
	DECLARE_CLASS(UInputSequenceState_Input, UInputSequenceState_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InputSequenceCore"), NO_API) \
	DECLARE_SERIALIZER(UInputSequenceState_Input)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_202_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputSequenceState_Input(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputSequenceState_Input) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputSequenceState_Input); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputSequenceState_Input); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputSequenceState_Input(UInputSequenceState_Input&&); \
	UInputSequenceState_Input(const UInputSequenceState_Input&); \
public: \
	NO_API virtual ~UInputSequenceState_Input();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_199_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_202_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_202_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_202_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INPUTSEQUENCECORE_API UClass* StaticClass<class UInputSequenceState_Input>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_266_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputSequenceStateCollection_Statics; \
	static class UScriptStruct* StaticStruct();


template<> INPUTSEQUENCECORE_API UScriptStruct* StaticStruct<struct FInputSequenceStateCollection>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_281_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetWorldContext); \
	DECLARE_FUNCTION(execRequestReset); \
	DECLARE_FUNCTION(execOnInput);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_281_INCLASS \
private: \
	static void StaticRegisterNativesUInputSequence(); \
	friend struct Z_Construct_UClass_UInputSequence_Statics; \
public: \
	DECLARE_CLASS(UInputSequence, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InputSequenceCore"), NO_API) \
	DECLARE_SERIALIZER(UInputSequence)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_281_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputSequence); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputSequence(UInputSequence&&); \
	UInputSequence(const UInputSequence&); \
public: \
	NO_API virtual ~UInputSequence();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_278_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_281_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_281_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_281_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h_281_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INPUTSEQUENCECORE_API UClass* StaticClass<class UInputSequence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_InputSequence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
