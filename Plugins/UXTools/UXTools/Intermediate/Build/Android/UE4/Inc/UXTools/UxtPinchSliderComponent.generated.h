// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtPinchSliderComponent;
enum class EUxtSliderState : uint8;
class UUxtPointerComponent;
struct FVector;
class UInstancedStaticMeshComponent;
class UStaticMeshComponent;
#ifdef UXTOOLS_UxtPinchSliderComponent_generated_h
#error "UxtPinchSliderComponent.generated.h already included, missing '#pragma once' in UxtPinchSliderComponent.h"
#endif
#define UXTOOLS_UxtPinchSliderComponent_generated_h

#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_36_DELEGATE \
struct _Script_UXTools_eventUxtPinchSliderDisabledDelegate_Parms \
{ \
	UUxtPinchSliderComponent* Slider; \
}; \
static inline void FUxtPinchSliderDisabledDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtPinchSliderDisabledDelegate, UUxtPinchSliderComponent* Slider) \
{ \
	_Script_UXTools_eventUxtPinchSliderDisabledDelegate_Parms Parms; \
	Parms.Slider=Slider; \
	UxtPinchSliderDisabledDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_35_DELEGATE \
struct _Script_UXTools_eventUxtPinchSliderEnabledDelegate_Parms \
{ \
	UUxtPinchSliderComponent* Slider; \
}; \
static inline void FUxtPinchSliderEnabledDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtPinchSliderEnabledDelegate, UUxtPinchSliderComponent* Slider) \
{ \
	_Script_UXTools_eventUxtPinchSliderEnabledDelegate_Parms Parms; \
	Parms.Slider=Slider; \
	UxtPinchSliderEnabledDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_34_DELEGATE \
struct _Script_UXTools_eventUxtPinchSliderUpdateStateDelegate_Parms \
{ \
	EUxtSliderState NewState; \
}; \
static inline void FUxtPinchSliderUpdateStateDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtPinchSliderUpdateStateDelegate, EUxtSliderState NewState) \
{ \
	_Script_UXTools_eventUxtPinchSliderUpdateStateDelegate_Parms Parms; \
	Parms.NewState=NewState; \
	UxtPinchSliderUpdateStateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_33_DELEGATE \
struct _Script_UXTools_eventUxtPinchSliderEndFocusDelegate_Parms \
{ \
	UUxtPinchSliderComponent* Slider; \
	UUxtPointerComponent* Pointer; \
	bool bIsStillFocused; \
}; \
static inline void FUxtPinchSliderEndFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtPinchSliderEndFocusDelegate, UUxtPinchSliderComponent* Slider, UUxtPointerComponent* Pointer, bool bIsStillFocused) \
{ \
	_Script_UXTools_eventUxtPinchSliderEndFocusDelegate_Parms Parms; \
	Parms.Slider=Slider; \
	Parms.Pointer=Pointer; \
	Parms.bIsStillFocused=bIsStillFocused ? true : false; \
	UxtPinchSliderEndFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_32_DELEGATE \
struct _Script_UXTools_eventUxtPinchSliderUpdateFocusDelegate_Parms \
{ \
	UUxtPinchSliderComponent* Slider; \
	UUxtPointerComponent* Pointer; \
}; \
static inline void FUxtPinchSliderUpdateFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtPinchSliderUpdateFocusDelegate, UUxtPinchSliderComponent* Slider, UUxtPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtPinchSliderUpdateFocusDelegate_Parms Parms; \
	Parms.Slider=Slider; \
	Parms.Pointer=Pointer; \
	UxtPinchSliderUpdateFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_31_DELEGATE \
struct _Script_UXTools_eventUxtPinchSliderBeginFocusDelegate_Parms \
{ \
	UUxtPinchSliderComponent* Slider; \
	UUxtPointerComponent* Pointer; \
	bool bWasAlreadyFocused; \
}; \
static inline void FUxtPinchSliderBeginFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtPinchSliderBeginFocusDelegate, UUxtPinchSliderComponent* Slider, UUxtPointerComponent* Pointer, bool bWasAlreadyFocused) \
{ \
	_Script_UXTools_eventUxtPinchSliderBeginFocusDelegate_Parms Parms; \
	Parms.Slider=Slider; \
	Parms.Pointer=Pointer; \
	Parms.bWasAlreadyFocused=bWasAlreadyFocused ? true : false; \
	UxtPinchSliderBeginFocusDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_30_DELEGATE \
struct _Script_UXTools_eventUxtPinchSliderEndInteractionDelegate_Parms \
{ \
	UUxtPinchSliderComponent* Slider; \
	UUxtPointerComponent* Pointer; \
}; \
static inline void FUxtPinchSliderEndInteractionDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtPinchSliderEndInteractionDelegate, UUxtPinchSliderComponent* Slider, UUxtPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtPinchSliderEndInteractionDelegate_Parms Parms; \
	Parms.Slider=Slider; \
	Parms.Pointer=Pointer; \
	UxtPinchSliderEndInteractionDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_29_DELEGATE \
struct _Script_UXTools_eventUxtPinchSliderBeginInteractionDelegate_Parms \
{ \
	UUxtPinchSliderComponent* Slider; \
	UUxtPointerComponent* Pointer; \
}; \
static inline void FUxtPinchSliderBeginInteractionDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtPinchSliderBeginInteractionDelegate, UUxtPinchSliderComponent* Slider, UUxtPointerComponent* Pointer) \
{ \
	_Script_UXTools_eventUxtPinchSliderBeginInteractionDelegate_Parms Parms; \
	Parms.Slider=Slider; \
	Parms.Pointer=Pointer; \
	UxtPinchSliderBeginInteractionDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_28_DELEGATE \
struct _Script_UXTools_eventUxtPinchSliderUpdateValueDelegate_Parms \
{ \
	UUxtPinchSliderComponent* Slider; \
	float NewValue; \
}; \
static inline void FUxtPinchSliderUpdateValueDelegate_DelegateWrapper(const FMulticastScriptDelegate& UxtPinchSliderUpdateValueDelegate, UUxtPinchSliderComponent* Slider, float NewValue) \
{ \
	_Script_UXTools_eventUxtPinchSliderUpdateValueDelegate_Parms Parms; \
	Parms.Slider=Slider; \
	Parms.NewValue=NewValue; \
	UxtPinchSliderUpdateValueDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_SPARSE_DATA
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSmoothing); \
	DECLARE_FUNCTION(execGetSmoothing); \
	DECLARE_FUNCTION(execSetTickMarkScale); \
	DECLARE_FUNCTION(execGetTickMarkScale); \
	DECLARE_FUNCTION(execSetSliderEndDistance); \
	DECLARE_FUNCTION(execGetSliderEndDistance); \
	DECLARE_FUNCTION(execSetSliderStartDistance); \
	DECLARE_FUNCTION(execGetSliderStartDistance); \
	DECLARE_FUNCTION(execSetNumTickMarks); \
	DECLARE_FUNCTION(execGetNumTickMarks); \
	DECLARE_FUNCTION(execSetSliderValue); \
	DECLARE_FUNCTION(execGetSliderValue); \
	DECLARE_FUNCTION(execSetTickMarkVisuals); \
	DECLARE_FUNCTION(execSetTrackVisuals); \
	DECLARE_FUNCTION(execSetThumbVisuals); \
	DECLARE_FUNCTION(execGetTickMarkVisuals); \
	DECLARE_FUNCTION(execGetTrackVisuals); \
	DECLARE_FUNCTION(execGetThumbVisuals); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execIsFocused); \
	DECLARE_FUNCTION(execIsGrabbed); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetCollisionProfile);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSmoothing); \
	DECLARE_FUNCTION(execGetSmoothing); \
	DECLARE_FUNCTION(execSetTickMarkScale); \
	DECLARE_FUNCTION(execGetTickMarkScale); \
	DECLARE_FUNCTION(execSetSliderEndDistance); \
	DECLARE_FUNCTION(execGetSliderEndDistance); \
	DECLARE_FUNCTION(execSetSliderStartDistance); \
	DECLARE_FUNCTION(execGetSliderStartDistance); \
	DECLARE_FUNCTION(execSetNumTickMarks); \
	DECLARE_FUNCTION(execGetNumTickMarks); \
	DECLARE_FUNCTION(execSetSliderValue); \
	DECLARE_FUNCTION(execGetSliderValue); \
	DECLARE_FUNCTION(execSetTickMarkVisuals); \
	DECLARE_FUNCTION(execSetTrackVisuals); \
	DECLARE_FUNCTION(execSetThumbVisuals); \
	DECLARE_FUNCTION(execGetTickMarkVisuals); \
	DECLARE_FUNCTION(execGetTrackVisuals); \
	DECLARE_FUNCTION(execGetThumbVisuals); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execIsFocused); \
	DECLARE_FUNCTION(execIsGrabbed); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetCollisionProfile);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtPinchSliderComponent(); \
	friend struct Z_Construct_UClass_UUxtPinchSliderComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtPinchSliderComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtPinchSliderComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtPinchSliderComponent*>(this); }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUUxtPinchSliderComponent(); \
	friend struct Z_Construct_UClass_UUxtPinchSliderComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtPinchSliderComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtPinchSliderComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UUxtPinchSliderComponent*>(this); }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtPinchSliderComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtPinchSliderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtPinchSliderComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtPinchSliderComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtPinchSliderComponent(UUxtPinchSliderComponent&&); \
	NO_API UUxtPinchSliderComponent(const UUxtPinchSliderComponent&); \
public:


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtPinchSliderComponent(UUxtPinchSliderComponent&&); \
	NO_API UUxtPinchSliderComponent(const UUxtPinchSliderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtPinchSliderComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtPinchSliderComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtPinchSliderComponent)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SliderValue() { return STRUCT_OFFSET(UUxtPinchSliderComponent, SliderValue); } \
	FORCEINLINE static uint32 __PPO__SliderStartDistance() { return STRUCT_OFFSET(UUxtPinchSliderComponent, SliderStartDistance); } \
	FORCEINLINE static uint32 __PPO__SliderEndDistance() { return STRUCT_OFFSET(UUxtPinchSliderComponent, SliderEndDistance); } \
	FORCEINLINE static uint32 __PPO__NumTickMarks() { return STRUCT_OFFSET(UUxtPinchSliderComponent, NumTickMarks); } \
	FORCEINLINE static uint32 __PPO__TickMarkScale() { return STRUCT_OFFSET(UUxtPinchSliderComponent, TickMarkScale); } \
	FORCEINLINE static uint32 __PPO__ThumbVisuals() { return STRUCT_OFFSET(UUxtPinchSliderComponent, ThumbVisuals); } \
	FORCEINLINE static uint32 __PPO__TrackVisuals() { return STRUCT_OFFSET(UUxtPinchSliderComponent, TrackVisuals); } \
	FORCEINLINE static uint32 __PPO__TickMarkVisuals() { return STRUCT_OFFSET(UUxtPinchSliderComponent, TickMarkVisuals); } \
	FORCEINLINE static uint32 __PPO__CollisionProfile() { return STRUCT_OFFSET(UUxtPinchSliderComponent, CollisionProfile); } \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(UUxtPinchSliderComponent, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__Smoothing() { return STRUCT_OFFSET(UUxtPinchSliderComponent, Smoothing); }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_43_PROLOG
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_RPC_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_INCLASS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtPinchSliderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtPinchSliderComponent_h


#define FOREACH_ENUM_EUXTSLIDERSTATE(op) \
	op(EUxtSliderState::Default) \
	op(EUxtSliderState::Focus) \
	op(EUxtSliderState::Grab) \
	op(EUxtSliderState::Disabled) 

enum class EUxtSliderState : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtSliderState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
