// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeleeTraceShape.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMeleeTraceShape_Box;
class UMeleeTraceShape_Capsule;
class UMeleeTraceShape_Line;
class UMeleeTraceShape_Sphere;
#ifdef MELEETRACE_MeleeTraceShape_generated_h
#error "MeleeTraceShape.generated.h already included, missing '#pragma once' in MeleeTraceShape.h"
#endif
#define MELEETRACE_MeleeTraceShape_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeleeTraceShape(); \
	friend struct Z_Construct_UClass_UMeleeTraceShape_Statics; \
public: \
	DECLARE_CLASS(UMeleeTraceShape, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MeleeTrace"), NO_API) \
	DECLARE_SERIALIZER(UMeleeTraceShape)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeleeTraceShape(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeleeTraceShape(UMeleeTraceShape&&); \
	UMeleeTraceShape(const UMeleeTraceShape&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeleeTraceShape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeleeTraceShape); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeleeTraceShape) \
	NO_API virtual ~UMeleeTraceShape();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_10_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_13_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MELEETRACE_API UClass* StaticClass<class UMeleeTraceShape>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeLineShape);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeleeTraceShape_Line(); \
	friend struct Z_Construct_UClass_UMeleeTraceShape_Line_Statics; \
public: \
	DECLARE_CLASS(UMeleeTraceShape_Line, UMeleeTraceShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeleeTrace"), NO_API) \
	DECLARE_SERIALIZER(UMeleeTraceShape_Line)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeleeTraceShape_Line(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeleeTraceShape_Line(UMeleeTraceShape_Line&&); \
	UMeleeTraceShape_Line(const UMeleeTraceShape_Line&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeleeTraceShape_Line); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeleeTraceShape_Line); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeleeTraceShape_Line) \
	NO_API virtual ~UMeleeTraceShape_Line();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_19_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MELEETRACE_API UClass* StaticClass<class UMeleeTraceShape_Line>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeSphereShape);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeleeTraceShape_Sphere(); \
	friend struct Z_Construct_UClass_UMeleeTraceShape_Sphere_Statics; \
public: \
	DECLARE_CLASS(UMeleeTraceShape_Sphere, UMeleeTraceShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeleeTrace"), NO_API) \
	DECLARE_SERIALIZER(UMeleeTraceShape_Sphere)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeleeTraceShape_Sphere(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeleeTraceShape_Sphere(UMeleeTraceShape_Sphere&&); \
	UMeleeTraceShape_Sphere(const UMeleeTraceShape_Sphere&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeleeTraceShape_Sphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeleeTraceShape_Sphere); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeleeTraceShape_Sphere) \
	NO_API virtual ~UMeleeTraceShape_Sphere();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_30_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_33_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MELEETRACE_API UClass* StaticClass<class UMeleeTraceShape_Sphere>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeCapsuleShape);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeleeTraceShape_Capsule(); \
	friend struct Z_Construct_UClass_UMeleeTraceShape_Capsule_Statics; \
public: \
	DECLARE_CLASS(UMeleeTraceShape_Capsule, UMeleeTraceShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeleeTrace"), NO_API) \
	DECLARE_SERIALIZER(UMeleeTraceShape_Capsule)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeleeTraceShape_Capsule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeleeTraceShape_Capsule(UMeleeTraceShape_Capsule&&); \
	UMeleeTraceShape_Capsule(const UMeleeTraceShape_Capsule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeleeTraceShape_Capsule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeleeTraceShape_Capsule); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeleeTraceShape_Capsule) \
	NO_API virtual ~UMeleeTraceShape_Capsule();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_44_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_47_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MELEETRACE_API UClass* StaticClass<class UMeleeTraceShape_Capsule>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeBoxShape);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeleeTraceShape_Box(); \
	friend struct Z_Construct_UClass_UMeleeTraceShape_Box_Statics; \
public: \
	DECLARE_CLASS(UMeleeTraceShape_Box, UMeleeTraceShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeleeTrace"), NO_API) \
	DECLARE_SERIALIZER(UMeleeTraceShape_Box)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeleeTraceShape_Box(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeleeTraceShape_Box(UMeleeTraceShape_Box&&); \
	UMeleeTraceShape_Box(const UMeleeTraceShape_Box&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeleeTraceShape_Box); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeleeTraceShape_Box); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeleeTraceShape_Box) \
	NO_API virtual ~UMeleeTraceShape_Box();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_65_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_68_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MELEETRACE_API UClass* StaticClass<class UMeleeTraceShape_Box>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceShape_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
