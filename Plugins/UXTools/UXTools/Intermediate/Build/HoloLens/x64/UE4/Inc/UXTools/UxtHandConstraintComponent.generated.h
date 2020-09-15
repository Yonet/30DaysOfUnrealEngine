// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EControllerHand : uint8;
struct FQuat;
struct FVector;
struct FBox;
#ifdef UXTOOLS_UxtHandConstraintComponent_generated_h
#error "UxtHandConstraintComponent.generated.h already included, missing '#pragma once' in UxtHandConstraintComponent.h"
#endif
#define UXTOOLS_UxtHandConstraintComponent_generated_h

#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_52_DELEGATE \
struct _Script_UXTools_eventUxtHandConstraintEndTrackingDelegate_Parms \
{ \
	EControllerHand TrackedHand; \
}; \
static inline void FUxtHandConstraintEndTrackingDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtHandConstraintEndTrackingDelegate, EControllerHand TrackedHand) \
{ \
	_Script_UXTools_eventUxtHandConstraintEndTrackingDelegate_Parms Parms; \
	Parms.TrackedHand=TrackedHand; \
	UxtHandConstraintEndTrackingDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_51_DELEGATE \
struct _Script_UXTools_eventUxtHandConstraintBeginTrackingDelegate_Parms \
{ \
	EControllerHand TrackedHand; \
}; \
static inline void FUxtHandConstraintBeginTrackingDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtHandConstraintBeginTrackingDelegate, EControllerHand TrackedHand) \
{ \
	_Script_UXTools_eventUxtHandConstraintBeginTrackingDelegate_Parms Parms; \
	Parms.TrackedHand=TrackedHand; \
	UxtHandConstraintBeginTrackingDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_50_DELEGATE \
static inline void FUxtHandConstraintDeactivatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtHandConstraintDeactivatedDelegate) \
{ \
	UxtHandConstraintDeactivatedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_49_DELEGATE \
static inline void FUxtHandConstraintActivatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtHandConstraintActivatedDelegate) \
{ \
	UxtHandConstraintActivatedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_SPARSE_DATA
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsHandUsableForConstraint); \
	DECLARE_FUNCTION(execGetGoalRotation); \
	DECLARE_FUNCTION(execGetGoalLocation); \
	DECLARE_FUNCTION(execIsConstraintActive); \
	DECLARE_FUNCTION(execGetHandBounds); \
	DECLARE_FUNCTION(execGetTrackedHand);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsHandUsableForConstraint); \
	DECLARE_FUNCTION(execGetGoalRotation); \
	DECLARE_FUNCTION(execGetGoalLocation); \
	DECLARE_FUNCTION(execIsConstraintActive); \
	DECLARE_FUNCTION(execGetHandBounds); \
	DECLARE_FUNCTION(execGetTrackedHand);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtHandConstraintComponent(); \
	friend struct Z_Construct_UClass_UUxtHandConstraintComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtHandConstraintComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtHandConstraintComponent)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUUxtHandConstraintComponent(); \
	friend struct Z_Construct_UClass_UUxtHandConstraintComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtHandConstraintComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtHandConstraintComponent)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtHandConstraintComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtHandConstraintComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtHandConstraintComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtHandConstraintComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtHandConstraintComponent(UUxtHandConstraintComponent&&); \
	NO_API UUxtHandConstraintComponent(const UUxtHandConstraintComponent&); \
public:


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtHandConstraintComponent(UUxtHandConstraintComponent&&); \
	NO_API UUxtHandConstraintComponent(const UUxtHandConstraintComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtHandConstraintComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtHandConstraintComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtHandConstraintComponent)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TrackedHand() { return STRUCT_OFFSET(UUxtHandConstraintComponent, TrackedHand); } \
	FORCEINLINE static uint32 __PPO__HandBounds() { return STRUCT_OFFSET(UUxtHandConstraintComponent, HandBounds); } \
	FORCEINLINE static uint32 __PPO__bIsConstraintActive() { return STRUCT_OFFSET(UUxtHandConstraintComponent, bIsConstraintActive); } \
	FORCEINLINE static uint32 __PPO__GoalLocation() { return STRUCT_OFFSET(UUxtHandConstraintComponent, GoalLocation); } \
	FORCEINLINE static uint32 __PPO__GoalRotation() { return STRUCT_OFFSET(UUxtHandConstraintComponent, GoalRotation); }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_63_PROLOG
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_RPC_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_INCLASS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtHandConstraintComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UXTools_Source_UXTools_Public_Behaviors_UxtHandConstraintComponent_h


#define FOREACH_ENUM_EUXTHANDCONSTRAINTROTATIONMODE(op) \
	op(EUxtHandConstraintRotationMode::None) \
	op(EUxtHandConstraintRotationMode::LookAtCamera) \
	op(EUxtHandConstraintRotationMode::HandRotation) 

enum class EUxtHandConstraintRotationMode : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtHandConstraintRotationMode>();

#define FOREACH_ENUM_EUXTHANDCONSTRAINTOFFSETMODE(op) \
	op(EUxtHandConstraintOffsetMode::LookAtCamera) \
	op(EUxtHandConstraintOffsetMode::HandRotation) 

enum class EUxtHandConstraintOffsetMode : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtHandConstraintOffsetMode>();

#define FOREACH_ENUM_EUXTHANDCONSTRAINTZONE(op) \
	op(EUxtHandConstraintZone::UlnarSide) \
	op(EUxtHandConstraintZone::RadialSide) \
	op(EUxtHandConstraintZone::AboveFingerTips) \
	op(EUxtHandConstraintZone::BelowWrist) 

enum class EUxtHandConstraintZone : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtHandConstraintZone>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
