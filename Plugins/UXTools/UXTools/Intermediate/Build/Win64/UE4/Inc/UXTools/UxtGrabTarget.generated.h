// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtNearPointerComponent;
class UPrimitiveComponent;
#ifdef UXTOOLS_UxtGrabTarget_generated_h
#error "UxtGrabTarget.generated.h already included, missing '#pragma once' in UxtGrabTarget.h"
#endif
#define UXTOOLS_UxtGrabTarget_generated_h

#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_SPARSE_DATA
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_RPC_WRAPPERS \
	virtual void OnEndGrab_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnUpdateGrab_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnBeginGrab_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnExitGrabFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnUpdateGrabFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnEnterGrabFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual bool IsGrabFocusable_Implementation(const UPrimitiveComponent* Primitive) { return false; }; \
 \
	DECLARE_FUNCTION(execOnEndGrab); \
	DECLARE_FUNCTION(execOnUpdateGrab); \
	DECLARE_FUNCTION(execOnBeginGrab); \
	DECLARE_FUNCTION(execOnExitGrabFocus); \
	DECLARE_FUNCTION(execOnUpdateGrabFocus); \
	DECLARE_FUNCTION(execOnEnterGrabFocus); \
	DECLARE_FUNCTION(execIsGrabFocusable);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnEndGrab_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnUpdateGrab_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnBeginGrab_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnExitGrabFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnUpdateGrabFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnEnterGrabFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual bool IsGrabFocusable_Implementation(const UPrimitiveComponent* Primitive) { return false; }; \
 \
	DECLARE_FUNCTION(execOnEndGrab); \
	DECLARE_FUNCTION(execOnUpdateGrab); \
	DECLARE_FUNCTION(execOnBeginGrab); \
	DECLARE_FUNCTION(execOnExitGrabFocus); \
	DECLARE_FUNCTION(execOnUpdateGrabFocus); \
	DECLARE_FUNCTION(execOnEnterGrabFocus); \
	DECLARE_FUNCTION(execIsGrabFocusable);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_EVENT_PARMS \
	struct UxtGrabTarget_eventIsGrabFocusable_Parms \
	{ \
		const UPrimitiveComponent* Primitive; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UxtGrabTarget_eventIsGrabFocusable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UxtGrabTarget_eventOnBeginGrab_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtGrabTarget_eventOnEndGrab_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtGrabTarget_eventOnEnterGrabFocus_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtGrabTarget_eventOnExitGrabFocus_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtGrabTarget_eventOnUpdateGrab_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtGrabTarget_eventOnUpdateGrabFocus_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	};


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_CALLBACK_WRAPPERS
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtGrabTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtGrabTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtGrabTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtGrabTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtGrabTarget(UUxtGrabTarget&&); \
	NO_API UUxtGrabTarget(const UUxtGrabTarget&); \
public:


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtGrabTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtGrabTarget(UUxtGrabTarget&&); \
	NO_API UUxtGrabTarget(const UUxtGrabTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtGrabTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtGrabTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtGrabTarget)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUxtGrabTarget(); \
	friend struct Z_Construct_UClass_UUxtGrabTarget_Statics; \
public: \
	DECLARE_CLASS(UUxtGrabTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtGrabTarget)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUxtGrabTarget() {} \
public: \
	typedef UUxtGrabTarget UClassType; \
	typedef IUxtGrabTarget ThisClass; \
	static bool Execute_IsGrabFocusable(UObject* O, const UPrimitiveComponent* Primitive); \
	static void Execute_OnBeginGrab(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnEndGrab(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnEnterGrabFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnExitGrabFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnUpdateGrab(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnUpdateGrabFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IUxtGrabTarget() {} \
public: \
	typedef UUxtGrabTarget UClassType; \
	typedef IUxtGrabTarget ThisClass; \
	static bool Execute_IsGrabFocusable(UObject* O, const UPrimitiveComponent* Primitive); \
	static void Execute_OnBeginGrab(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnEndGrab(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnEnterGrabFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnExitGrabFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnUpdateGrab(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnUpdateGrabFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_12_PROLOG \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_EVENT_PARMS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_RPC_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtGrabTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtGrabTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
