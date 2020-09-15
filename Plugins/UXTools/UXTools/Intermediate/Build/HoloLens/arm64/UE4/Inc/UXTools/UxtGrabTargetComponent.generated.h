// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtGrabTargetComponent;
struct FUxtGrabPointerData;
class UUxtNearPointerComponent;
struct FVector;
struct FTransform;
struct FRotator;
class UUxtFarPointerComponent;
#ifdef UXTOOLS_UxtGrabTargetComponent_generated_h
#error "UxtGrabTargetComponent.generated.h already included, missing '#pragma once' in UxtGrabTargetComponent.h"
#endif
#define UXTOOLS_UxtGrabTargetComponent_generated_h

#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUxtGrabPointerData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UXTOOLS_API UScriptStruct* StaticStruct<struct FUxtGrabPointerData>();

#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_116_DELEGATE \
struct _Script_UXTools_eventUxtEndGrabDelegate_Parms \
{ \
	UUxtGrabTargetComponent* Grabbable; \
	FUxtGrabPointerData GrabPointer; \
}; \
static inline void FUxtEndGrabDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtEndGrabDelegate, UUxtGrabTargetComponent* Grabbable, FUxtGrabPointerData GrabPointer) \
{ \
	_Script_UXTools_eventUxtEndGrabDelegate_Parms Parms; \
	Parms.Grabbable=Grabbable; \
	Parms.GrabPointer=GrabPointer; \
	UxtEndGrabDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_114_DELEGATE \
struct _Script_UXTools_eventUxtUpdateGrabDelegate_Parms \
{ \
	UUxtGrabTargetComponent* Grabbable; \
	FUxtGrabPointerData GrabPointer; \
}; \
static inline void FUxtUpdateGrabDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtUpdateGrabDelegate, UUxtGrabTargetComponent* Grabbable, FUxtGrabPointerData GrabPointer) \
{ \
	_Script_UXTools_eventUxtUpdateGrabDelegate_Parms Parms; \
	Parms.Grabbable=Grabbable; \
	Parms.GrabPointer=GrabPointer; \
	UxtUpdateGrabDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_112_DELEGATE \
struct _Script_UXTools_eventUxtBeginGrabDelegate_Parms \
{ \
	UUxtGrabTargetComponent* Grabbable; \
	FUxtGrabPointerData GrabPointer; \
}; \
static inline void FUxtBeginGrabDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtBeginGrabDelegate, UUxtGrabTargetComponent* Grabbable, FUxtGrabPointerData GrabPointer) \
{ \
	_Script_UXTools_eventUxtBeginGrabDelegate_Parms Parms; \
	Parms.Grabbable=Grabbable; \
	Parms.GrabPointer=GrabPointer; \
	UxtBeginGrabDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_109_DELEGATE \
struct _Script_UXTools_eventUxtExitGrabFocusDelegate_Parms \
{ \
	UUxtGrabTargetComponent* Grabbable; \
	UUxtNearPointerComponent* Pointer; \
}; \
static inline void FUxtExitGrabFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtExitGrabFocusDelegate, UUxtGrabTargetComponent* Grabbable, UUxtNearPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtExitGrabFocusDelegate_Parms Parms; \
	Parms.Grabbable=Grabbable; \
	Parms.Pointer=Pointer; \
	UxtExitGrabFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_107_DELEGATE \
struct _Script_UXTools_eventUxtUpdateGrabFocusDelegate_Parms \
{ \
	UUxtGrabTargetComponent* Grabbable; \
	UUxtNearPointerComponent* Pointer; \
}; \
static inline void FUxtUpdateGrabFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtUpdateGrabFocusDelegate, UUxtGrabTargetComponent* Grabbable, UUxtNearPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtUpdateGrabFocusDelegate_Parms Parms; \
	Parms.Grabbable=Grabbable; \
	Parms.Pointer=Pointer; \
	UxtUpdateGrabFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_105_DELEGATE \
struct _Script_UXTools_eventUxtEnterGrabFocusDelegate_Parms \
{ \
	UUxtGrabTargetComponent* Grabbable; \
	UUxtNearPointerComponent* Pointer; \
}; \
static inline void FUxtEnterGrabFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtEnterGrabFocusDelegate, UUxtGrabTargetComponent* Grabbable, UUxtNearPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtEnterGrabFocusDelegate_Parms Parms; \
	Parms.Grabbable=Grabbable; \
	Parms.Pointer=Pointer; \
	UxtEnterGrabFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_SPARSE_DATA
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPointerLocation); \
	DECLARE_FUNCTION(execGetPointerTransform); \
	DECLARE_FUNCTION(execGetRotationOffset); \
	DECLARE_FUNCTION(execGetLocationOffset); \
	DECLARE_FUNCTION(execGetGrabPointTransform); \
	DECLARE_FUNCTION(execGetTargetRotation); \
	DECLARE_FUNCTION(execGetTargetLocation); \
	DECLARE_FUNCTION(execGetGrabTransform); \
	DECLARE_FUNCTION(execGetGrabRotation); \
	DECLARE_FUNCTION(execGetGrabLocation);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPointerLocation); \
	DECLARE_FUNCTION(execGetPointerTransform); \
	DECLARE_FUNCTION(execGetRotationOffset); \
	DECLARE_FUNCTION(execGetLocationOffset); \
	DECLARE_FUNCTION(execGetGrabPointTransform); \
	DECLARE_FUNCTION(execGetTargetRotation); \
	DECLARE_FUNCTION(execGetTargetLocation); \
	DECLARE_FUNCTION(execGetGrabTransform); \
	DECLARE_FUNCTION(execGetGrabRotation); \
	DECLARE_FUNCTION(execGetGrabLocation);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtGrabPointerDataFunctionLibrary(); \
	friend struct Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UUxtGrabPointerDataFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtGrabPointerDataFunctionLibrary)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUUxtGrabPointerDataFunctionLibrary(); \
	friend struct Z_Construct_UClass_UUxtGrabPointerDataFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UUxtGrabPointerDataFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtGrabPointerDataFunctionLibrary)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtGrabPointerDataFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtGrabPointerDataFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtGrabPointerDataFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtGrabPointerDataFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtGrabPointerDataFunctionLibrary(UUxtGrabPointerDataFunctionLibrary&&); \
	NO_API UUxtGrabPointerDataFunctionLibrary(const UUxtGrabPointerDataFunctionLibrary&); \
public:


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtGrabPointerDataFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtGrabPointerDataFunctionLibrary(UUxtGrabPointerDataFunctionLibrary&&); \
	NO_API UUxtGrabPointerDataFunctionLibrary(const UUxtGrabPointerDataFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtGrabPointerDataFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtGrabPointerDataFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtGrabPointerDataFunctionLibrary)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_55_PROLOG
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_RPC_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_INCLASS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtGrabPointerDataFunctionLibrary>();

#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_SPARSE_DATA
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGrabPointers); \
	DECLARE_FUNCTION(execSetTickOnlyWhileGrabbed); \
	DECLARE_FUNCTION(execGetTickOnlyWhileGrabbed); \
	DECLARE_FUNCTION(execGetTargetCentroid); \
	DECLARE_FUNCTION(execGetGrabPointCentroid); \
	DECLARE_FUNCTION(execForceEndGrab); \
	DECLARE_FUNCTION(execGetSecondaryGrabPointer); \
	DECLARE_FUNCTION(execGetPrimaryGrabPointer); \
	DECLARE_FUNCTION(execFindGrabPointer);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGrabPointers); \
	DECLARE_FUNCTION(execSetTickOnlyWhileGrabbed); \
	DECLARE_FUNCTION(execGetTickOnlyWhileGrabbed); \
	DECLARE_FUNCTION(execGetTargetCentroid); \
	DECLARE_FUNCTION(execGetGrabPointCentroid); \
	DECLARE_FUNCTION(execForceEndGrab); \
	DECLARE_FUNCTION(execGetSecondaryGrabPointer); \
	DECLARE_FUNCTION(execGetPrimaryGrabPointer); \
	DECLARE_FUNCTION(execFindGrabPointer);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtGrabTargetComponent(); \
	friend struct Z_Construct_UClass_UUxtGrabTargetComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtGrabTargetComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtGrabTargetComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtGrabTargetComponent*>(this); }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_INCLASS \
private: \
	static void StaticRegisterNativesUUxtGrabTargetComponent(); \
	friend struct Z_Construct_UClass_UUxtGrabTargetComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtGrabTargetComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtGrabTargetComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtGrabTargetComponent*>(this); }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtGrabTargetComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtGrabTargetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtGrabTargetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtGrabTargetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtGrabTargetComponent(UUxtGrabTargetComponent&&); \
	NO_API UUxtGrabTargetComponent(const UUxtGrabTargetComponent&); \
public:


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtGrabTargetComponent(UUxtGrabTargetComponent&&); \
	NO_API UUxtGrabTargetComponent(const UUxtGrabTargetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtGrabTargetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtGrabTargetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtGrabTargetComponent)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GrabPointers() { return STRUCT_OFFSET(UUxtGrabTargetComponent, GrabPointers); }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_127_PROLOG
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_RPC_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_INCLASS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h_130_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtGrabTargetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTargetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
