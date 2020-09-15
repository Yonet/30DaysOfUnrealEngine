// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UXTOOLS_UxtFollowComponent_generated_h
#error "UxtFollowComponent.generated.h already included, missing '#pragma once' in UxtFollowComponent.h"
#endif
#define UXTOOLS_UxtFollowComponent_generated_h

#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_SPARSE_DATA
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRecenter);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRecenter);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtFollowComponent(); \
	friend struct Z_Construct_UClass_UUxtFollowComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtFollowComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtFollowComponent)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUUxtFollowComponent(); \
	friend struct Z_Construct_UClass_UUxtFollowComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtFollowComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtFollowComponent)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtFollowComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtFollowComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtFollowComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtFollowComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtFollowComponent(UUxtFollowComponent&&); \
	NO_API UUxtFollowComponent(const UUxtFollowComponent&); \
public:


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtFollowComponent(UUxtFollowComponent&&); \
	NO_API UUxtFollowComponent(const UUxtFollowComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtFollowComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtFollowComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtFollowComponent)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_45_PROLOG
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_RPC_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_INCLASS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtFollowComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtFollowComponent_h


#define FOREACH_ENUM_EUXTFOLLOWORIENTBEHAVIOR(op) \
	op(FaceCamera) \
	op(WorldLock) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
