// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtBoundsControlComponent;
struct FUxtBoundsControlAffordanceInfo;
class UUxtGrabTargetComponent;
struct FUxtGrabPointerData;
enum class EUxtBoundsControlAffordanceKind : uint8;
class AActor;
struct FBox;
enum class EUxtBoundsControlPreset : uint8;
#ifdef UXTOOLS_UxtBoundsControlComponent_generated_h
#error "UxtBoundsControlComponent.generated.h already included, missing '#pragma once' in UxtBoundsControlComponent.h"
#endif
#define UXTOOLS_UxtBoundsControlComponent_generated_h

#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUxtBoundsControlAffordanceInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UXTOOLS_API UScriptStruct* StaticStruct<struct FUxtBoundsControlAffordanceInfo>();

#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_95_DELEGATE \
struct _Script_UXTools_eventUxtBoundsControlManipulationEndedDelegate_Parms \
{ \
	UUxtBoundsControlComponent* Manipulator; \
	FUxtBoundsControlAffordanceInfo AffordanceInfo; \
	UUxtGrabTargetComponent* GrabbedComponent; \
}; \
static inline void FUxtBoundsControlManipulationEndedDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtBoundsControlManipulationEndedDelegate, UUxtBoundsControlComponent* Manipulator, FUxtBoundsControlAffordanceInfo const& AffordanceInfo, UUxtGrabTargetComponent* GrabbedComponent) \
{ \
	_Script_UXTools_eventUxtBoundsControlManipulationEndedDelegate_Parms Parms; \
	Parms.Manipulator=Manipulator; \
	Parms.AffordanceInfo=AffordanceInfo; \
	Parms.GrabbedComponent=GrabbedComponent; \
	UxtBoundsControlManipulationEndedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_89_DELEGATE \
struct _Script_UXTools_eventUxtBoundsControlManipulationStartedDelegate_Parms \
{ \
	UUxtBoundsControlComponent* Manipulator; \
	FUxtBoundsControlAffordanceInfo AffordanceInfo; \
	UUxtGrabTargetComponent* GrabbedComponent; \
}; \
static inline void FUxtBoundsControlManipulationStartedDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtBoundsControlManipulationStartedDelegate, UUxtBoundsControlComponent* Manipulator, FUxtBoundsControlAffordanceInfo const& AffordanceInfo, UUxtGrabTargetComponent* GrabbedComponent) \
{ \
	_Script_UXTools_eventUxtBoundsControlManipulationStartedDelegate_Parms Parms; \
	Parms.Manipulator=Manipulator; \
	Parms.AffordanceInfo=AffordanceInfo; \
	Parms.GrabbedComponent=GrabbedComponent; \
	UxtBoundsControlManipulationStartedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_SPARSE_DATA
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPointerEndGrab); \
	DECLARE_FUNCTION(execOnPointerUpdateGrab); \
	DECLARE_FUNCTION(execOnPointerBeginGrab); \
	DECLARE_FUNCTION(execComputeBoundsFromComponents); \
	DECLARE_FUNCTION(execGetAffordanceKindActorClass); \
	DECLARE_FUNCTION(execGetUsedAffordances); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetInitBoundsFromActor); \
	DECLARE_FUNCTION(execGetPreset); \
	DECLARE_FUNCTION(execUseCustomAffordances); \
	DECLARE_FUNCTION(execGetCornerAffordanceClass); \
	DECLARE_FUNCTION(execGetEdgeAffordanceClass); \
	DECLARE_FUNCTION(execGetFaceAffordanceClass); \
	DECLARE_FUNCTION(execGetCenterAffordanceClass); \
	DECLARE_FUNCTION(execGetCustomAffordances);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPointerEndGrab); \
	DECLARE_FUNCTION(execOnPointerUpdateGrab); \
	DECLARE_FUNCTION(execOnPointerBeginGrab); \
	DECLARE_FUNCTION(execComputeBoundsFromComponents); \
	DECLARE_FUNCTION(execGetAffordanceKindActorClass); \
	DECLARE_FUNCTION(execGetUsedAffordances); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetInitBoundsFromActor); \
	DECLARE_FUNCTION(execGetPreset); \
	DECLARE_FUNCTION(execUseCustomAffordances); \
	DECLARE_FUNCTION(execGetCornerAffordanceClass); \
	DECLARE_FUNCTION(execGetEdgeAffordanceClass); \
	DECLARE_FUNCTION(execGetFaceAffordanceClass); \
	DECLARE_FUNCTION(execGetCenterAffordanceClass); \
	DECLARE_FUNCTION(execGetCustomAffordances);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtBoundsControlComponent(); \
	friend struct Z_Construct_UClass_UUxtBoundsControlComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtBoundsControlComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtBoundsControlComponent)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_INCLASS \
private: \
	static void StaticRegisterNativesUUxtBoundsControlComponent(); \
	friend struct Z_Construct_UClass_UUxtBoundsControlComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtBoundsControlComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtBoundsControlComponent)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtBoundsControlComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtBoundsControlComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtBoundsControlComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtBoundsControlComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtBoundsControlComponent(UUxtBoundsControlComponent&&); \
	NO_API UUxtBoundsControlComponent(const UUxtBoundsControlComponent&); \
public:


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtBoundsControlComponent(UUxtBoundsControlComponent&&); \
	NO_API UUxtBoundsControlComponent(const UUxtBoundsControlComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtBoundsControlComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtBoundsControlComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtBoundsControlComponent)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CenterAffordanceClass() { return STRUCT_OFFSET(UUxtBoundsControlComponent, CenterAffordanceClass); } \
	FORCEINLINE static uint32 __PPO__FaceAffordanceClass() { return STRUCT_OFFSET(UUxtBoundsControlComponent, FaceAffordanceClass); } \
	FORCEINLINE static uint32 __PPO__EdgeAffordanceClass() { return STRUCT_OFFSET(UUxtBoundsControlComponent, EdgeAffordanceClass); } \
	FORCEINLINE static uint32 __PPO__CornerAffordanceClass() { return STRUCT_OFFSET(UUxtBoundsControlComponent, CornerAffordanceClass); } \
	FORCEINLINE static uint32 __PPO__bUseCustomAffordances() { return STRUCT_OFFSET(UUxtBoundsControlComponent, bUseCustomAffordances); } \
	FORCEINLINE static uint32 __PPO__Preset() { return STRUCT_OFFSET(UUxtBoundsControlComponent, Preset); } \
	FORCEINLINE static uint32 __PPO__CustomAffordances() { return STRUCT_OFFSET(UUxtBoundsControlComponent, CustomAffordances); } \
	FORCEINLINE static uint32 __PPO__bInitBoundsFromActor() { return STRUCT_OFFSET(UUxtBoundsControlComponent, bInitBoundsFromActor); } \
	FORCEINLINE static uint32 __PPO__Bounds() { return STRUCT_OFFSET(UUxtBoundsControlComponent, Bounds); }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_101_PROLOG
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_RPC_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_INCLASS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtBoundsControlComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlComponent_h


#define FOREACH_ENUM_EUXTBOUNDSCONTROLAFFORDANCEACTION(op) \
	op(EUxtBoundsControlAffordanceAction::Resize) \
	op(EUxtBoundsControlAffordanceAction::Translate) \
	op(EUxtBoundsControlAffordanceAction::Scale) \
	op(EUxtBoundsControlAffordanceAction::Rotate) 

enum class EUxtBoundsControlAffordanceAction : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtBoundsControlAffordanceAction>();

#define FOREACH_ENUM_EUXTBOUNDSCONTROLAFFORDANCEKIND(op) \
	op(EUxtBoundsControlAffordanceKind::Center) \
	op(EUxtBoundsControlAffordanceKind::Face) \
	op(EUxtBoundsControlAffordanceKind::Edge) \
	op(EUxtBoundsControlAffordanceKind::Corner) 

enum class EUxtBoundsControlAffordanceKind : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtBoundsControlAffordanceKind>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
