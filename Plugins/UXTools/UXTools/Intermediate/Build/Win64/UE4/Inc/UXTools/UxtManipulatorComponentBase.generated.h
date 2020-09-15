// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
struct FTransform;
class UUxtGrabTargetComponent;
struct FUxtGrabPointerData;
struct FVector;
#ifdef UXTOOLS_UxtManipulatorComponentBase_generated_h
#error "UxtManipulatorComponentBase.generated.h already included, missing '#pragma once' in UxtManipulatorComponentBase.h"
#endif
#define UXTOOLS_UxtManipulatorComponentBase_generated_h

#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_16_DELEGATE \
struct _Script_UXTools_eventUxtUpdateTransformDelegate_Parms \
{ \
	USceneComponent* TargetComponent; \
	FTransform Transform; \
}; \
static inline void FUxtUpdateTransformDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtUpdateTransformDelegate, USceneComponent* TargetComponent, FTransform Transform) \
{ \
	_Script_UXTools_eventUxtUpdateTransformDelegate_Parms Parms; \
	Parms.TargetComponent=TargetComponent; \
	Parms.Transform=Transform; \
	UxtUpdateTransformDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_SPARSE_DATA
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnManipulationEnd); \
	DECLARE_FUNCTION(execOnManipulationStarted); \
	DECLARE_FUNCTION(execApplyTargetTransform); \
	DECLARE_FUNCTION(execSetInitialTransform); \
	DECLARE_FUNCTION(execSmoothTransform); \
	DECLARE_FUNCTION(execRotateAboutAxis); \
	DECLARE_FUNCTION(execRotateAroundPivot); \
	DECLARE_FUNCTION(execMoveToTargets);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnManipulationEnd); \
	DECLARE_FUNCTION(execOnManipulationStarted); \
	DECLARE_FUNCTION(execApplyTargetTransform); \
	DECLARE_FUNCTION(execSetInitialTransform); \
	DECLARE_FUNCTION(execSmoothTransform); \
	DECLARE_FUNCTION(execRotateAboutAxis); \
	DECLARE_FUNCTION(execRotateAroundPivot); \
	DECLARE_FUNCTION(execMoveToTargets);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtManipulatorComponentBase(); \
	friend struct Z_Construct_UClass_UUxtManipulatorComponentBase_Statics; \
public: \
	DECLARE_CLASS(UUxtManipulatorComponentBase, UUxtGrabTargetComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtManipulatorComponentBase)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUUxtManipulatorComponentBase(); \
	friend struct Z_Construct_UClass_UUxtManipulatorComponentBase_Statics; \
public: \
	DECLARE_CLASS(UUxtManipulatorComponentBase, UUxtGrabTargetComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtManipulatorComponentBase)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtManipulatorComponentBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtManipulatorComponentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtManipulatorComponentBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtManipulatorComponentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtManipulatorComponentBase(UUxtManipulatorComponentBase&&); \
	NO_API UUxtManipulatorComponentBase(const UUxtManipulatorComponentBase&); \
public:


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtManipulatorComponentBase(UUxtManipulatorComponentBase&&); \
	NO_API UUxtManipulatorComponentBase(const UUxtManipulatorComponentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtManipulatorComponentBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtManipulatorComponentBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtManipulatorComponentBase)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_25_PROLOG
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_RPC_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_INCLASS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtManipulatorComponentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtManipulatorComponentBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
