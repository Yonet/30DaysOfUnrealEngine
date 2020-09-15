// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtPressableButtonComponent;
class UUxtPointerComponent;
class UUxtNearPointerComponent;
enum class EUxtPushBehavior : uint8;
enum class EUxtButtonState : uint8;
class USceneComponent;
#ifdef UXTOOLS_UxtPressableButtonComponent_generated_h
#error "UxtPressableButtonComponent.generated.h already included, missing '#pragma once' in UxtPressableButtonComponent.h"
#endif
#define UXTOOLS_UxtPressableButtonComponent_generated_h

#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_66_DELEGATE \
struct _Script_UXTools_eventUxtButtonDisabledDelegate_Parms \
{ \
	UUxtPressableButtonComponent* Button; \
}; \
static inline void FUxtButtonDisabledDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtButtonDisabledDelegate, UUxtPressableButtonComponent* Button) \
{ \
	_Script_UXTools_eventUxtButtonDisabledDelegate_Parms Parms; \
	Parms.Button=Button; \
	UxtButtonDisabledDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_65_DELEGATE \
struct _Script_UXTools_eventUxtButtonEnabledDelegate_Parms \
{ \
	UUxtPressableButtonComponent* Button; \
}; \
static inline void FUxtButtonEnabledDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtButtonEnabledDelegate, UUxtPressableButtonComponent* Button) \
{ \
	_Script_UXTools_eventUxtButtonEnabledDelegate_Parms Parms; \
	Parms.Button=Button; \
	UxtButtonEnabledDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_64_DELEGATE \
struct _Script_UXTools_eventUxtButtonReleasedDelegate_Parms \
{ \
	UUxtPressableButtonComponent* Button; \
	UUxtPointerComponent* Pointer; \
}; \
static inline void FUxtButtonReleasedDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtButtonReleasedDelegate, UUxtPressableButtonComponent* Button, UUxtPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtButtonReleasedDelegate_Parms Parms; \
	Parms.Button=Button; \
	Parms.Pointer=Pointer; \
	UxtButtonReleasedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_63_DELEGATE \
struct _Script_UXTools_eventUxtButtonPressedDelegate_Parms \
{ \
	UUxtPressableButtonComponent* Button; \
	UUxtPointerComponent* Pointer; \
}; \
static inline void FUxtButtonPressedDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtButtonPressedDelegate, UUxtPressableButtonComponent* Button, UUxtPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtButtonPressedDelegate_Parms Parms; \
	Parms.Button=Button; \
	Parms.Pointer=Pointer; \
	UxtButtonPressedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_62_DELEGATE \
struct _Script_UXTools_eventUxtButtonEndPokeDelegate_Parms \
{ \
	UUxtPressableButtonComponent* Button; \
	UUxtNearPointerComponent* Pointer; \
}; \
static inline void FUxtButtonEndPokeDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtButtonEndPokeDelegate, UUxtPressableButtonComponent* Button, UUxtNearPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtButtonEndPokeDelegate_Parms Parms; \
	Parms.Button=Button; \
	Parms.Pointer=Pointer; \
	UxtButtonEndPokeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_61_DELEGATE \
struct _Script_UXTools_eventUxtButtonUpdatePokeDelegate_Parms \
{ \
	UUxtPressableButtonComponent* Button; \
	UUxtNearPointerComponent* Pointer; \
}; \
static inline void FUxtButtonUpdatePokeDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtButtonUpdatePokeDelegate, UUxtPressableButtonComponent* Button, UUxtNearPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtButtonUpdatePokeDelegate_Parms Parms; \
	Parms.Button=Button; \
	Parms.Pointer=Pointer; \
	UxtButtonUpdatePokeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_60_DELEGATE \
struct _Script_UXTools_eventUxtButtonBeginPokeDelegate_Parms \
{ \
	UUxtPressableButtonComponent* Button; \
	UUxtNearPointerComponent* Pointer; \
}; \
static inline void FUxtButtonBeginPokeDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtButtonBeginPokeDelegate, UUxtPressableButtonComponent* Button, UUxtNearPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtButtonBeginPokeDelegate_Parms Parms; \
	Parms.Button=Button; \
	Parms.Pointer=Pointer; \
	UxtButtonBeginPokeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_59_DELEGATE \
struct _Script_UXTools_eventUxtButtonEndFocusDelegate_Parms \
{ \
	UUxtPressableButtonComponent* Button; \
	UUxtPointerComponent* Pointer; \
	bool bIsStillFocused; \
}; \
static inline void FUxtButtonEndFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtButtonEndFocusDelegate, UUxtPressableButtonComponent* Button, UUxtPointerComponent* Pointer, bool bIsStillFocused) \
{ \
	_Script_UXTools_eventUxtButtonEndFocusDelegate_Parms Parms; \
	Parms.Button=Button; \
	Parms.Pointer=Pointer; \
	Parms.bIsStillFocused=bIsStillFocused ? true : false; \
	UxtButtonEndFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_58_DELEGATE \
struct _Script_UXTools_eventUxtButtonUpdateFocusDelegate_Parms \
{ \
	UUxtPressableButtonComponent* Button; \
	UUxtPointerComponent* Pointer; \
}; \
static inline void FUxtButtonUpdateFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtButtonUpdateFocusDelegate, UUxtPressableButtonComponent* Button, UUxtPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtButtonUpdateFocusDelegate_Parms Parms; \
	Parms.Button=Button; \
	Parms.Pointer=Pointer; \
	UxtButtonUpdateFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_57_DELEGATE \
struct _Script_UXTools_eventUxtButtonBeginFocusDelegate_Parms \
{ \
	UUxtPressableButtonComponent* Button; \
	UUxtPointerComponent* Pointer; \
	bool bWasAlreadyFocused; \
}; \
static inline void FUxtButtonBeginFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtButtonBeginFocusDelegate, UUxtPressableButtonComponent* Button, UUxtPointerComponent* Pointer, bool bWasAlreadyFocused) \
{ \
	_Script_UXTools_eventUxtButtonBeginFocusDelegate_Parms Parms; \
	Parms.Button=Button; \
	Parms.Pointer=Pointer; \
	Parms.bWasAlreadyFocused=bWasAlreadyFocused ? true : false; \
	UxtButtonBeginFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_SPARSE_DATA
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMaxPushDistance); \
	DECLARE_FUNCTION(execGetMaxPushDistance); \
	DECLARE_FUNCTION(execSetPushBehavior); \
	DECLARE_FUNCTION(execGetPushBehavior); \
	DECLARE_FUNCTION(execGetScaleAdjustedMaxPushDistance); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetUseAbsolutePushDistance); \
	DECLARE_FUNCTION(execSetCollisionProfile); \
	DECLARE_FUNCTION(execSetVisuals); \
	DECLARE_FUNCTION(execGetVisuals); \
	DECLARE_FUNCTION(execSetFrontFaceCollisionFraction); \
	DECLARE_FUNCTION(execGetFrontFaceCollisionFraction);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMaxPushDistance); \
	DECLARE_FUNCTION(execGetMaxPushDistance); \
	DECLARE_FUNCTION(execSetPushBehavior); \
	DECLARE_FUNCTION(execGetPushBehavior); \
	DECLARE_FUNCTION(execGetScaleAdjustedMaxPushDistance); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetUseAbsolutePushDistance); \
	DECLARE_FUNCTION(execSetCollisionProfile); \
	DECLARE_FUNCTION(execSetVisuals); \
	DECLARE_FUNCTION(execGetVisuals); \
	DECLARE_FUNCTION(execSetFrontFaceCollisionFraction); \
	DECLARE_FUNCTION(execGetFrontFaceCollisionFraction);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtPressableButtonComponent(); \
	friend struct Z_Construct_UClass_UUxtPressableButtonComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtPressableButtonComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtPressableButtonComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtPressableButtonComponent*>(this); }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUUxtPressableButtonComponent(); \
	friend struct Z_Construct_UClass_UUxtPressableButtonComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtPressableButtonComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtPressableButtonComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtPressableButtonComponent*>(this); }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtPressableButtonComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtPressableButtonComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtPressableButtonComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtPressableButtonComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtPressableButtonComponent(UUxtPressableButtonComponent&&); \
	NO_API UUxtPressableButtonComponent(const UUxtPressableButtonComponent&); \
public:


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtPressableButtonComponent(UUxtPressableButtonComponent&&); \
	NO_API UUxtPressableButtonComponent(const UUxtPressableButtonComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtPressableButtonComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtPressableButtonComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtPressableButtonComponent)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PushBehavior() { return STRUCT_OFFSET(UUxtPressableButtonComponent, PushBehavior); } \
	FORCEINLINE static uint32 __PPO__MaxPushDistance() { return STRUCT_OFFSET(UUxtPressableButtonComponent, MaxPushDistance); } \
	FORCEINLINE static uint32 __PPO__FrontFaceCollisionFraction() { return STRUCT_OFFSET(UUxtPressableButtonComponent, FrontFaceCollisionFraction); } \
	FORCEINLINE static uint32 __PPO__VisualsReference() { return STRUCT_OFFSET(UUxtPressableButtonComponent, VisualsReference); } \
	FORCEINLINE static uint32 __PPO__CollisionProfile() { return STRUCT_OFFSET(UUxtPressableButtonComponent, CollisionProfile); } \
	FORCEINLINE static uint32 __PPO__bUseAbsolutePushDistance() { return STRUCT_OFFSET(UUxtPressableButtonComponent, bUseAbsolutePushDistance); }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_72_PROLOG
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_RPC_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_INCLASS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtPressableButtonComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPressableButtonComponent_h


#define FOREACH_ENUM_EUXTBUTTONSTATE(op) \
	op(EUxtButtonState::Default) \
	op(EUxtButtonState::Disabled) \
	op(EUxtButtonState::Focused) \
	op(EUxtButtonState::Contacted) \
	op(EUxtButtonState::Pressed) 

enum class EUxtButtonState : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtButtonState>();

#define FOREACH_ENUM_EUXTPUSHBEHAVIOR(op) \
	op(EUxtPushBehavior::Translate) \
	op(EUxtPushBehavior::Compress) 

enum class EUxtPushBehavior : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtPushBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
