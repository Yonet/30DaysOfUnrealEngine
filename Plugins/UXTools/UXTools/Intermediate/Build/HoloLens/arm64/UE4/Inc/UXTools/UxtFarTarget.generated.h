// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtFarPointerComponent;
class UPrimitiveComponent;
#ifdef UXTOOLS_UxtFarTarget_generated_h
#error "UxtFarTarget.generated.h already included, missing '#pragma once' in UxtFarTarget.h"
#endif
#define UXTOOLS_UxtFarTarget_generated_h

#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_SPARSE_DATA
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_RPC_WRAPPERS \
	virtual void OnFarReleased_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnFarDragged_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnFarPressed_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnExitFarFocus_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnUpdatedFarFocus_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnEnterFarFocus_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual bool IsFarFocusable_Implementation(const UPrimitiveComponent* Primitive) { return false; }; \
 \
	DECLARE_FUNCTION(execOnFarReleased); \
	DECLARE_FUNCTION(execOnFarDragged); \
	DECLARE_FUNCTION(execOnFarPressed); \
	DECLARE_FUNCTION(execOnExitFarFocus); \
	DECLARE_FUNCTION(execOnUpdatedFarFocus); \
	DECLARE_FUNCTION(execOnEnterFarFocus); \
	DECLARE_FUNCTION(execIsFarFocusable);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnFarReleased_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnFarDragged_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnFarPressed_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnExitFarFocus_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnUpdatedFarFocus_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual void OnEnterFarFocus_Implementation(UUxtFarPointerComponent* Pointer) {}; \
	virtual bool IsFarFocusable_Implementation(const UPrimitiveComponent* Primitive) { return false; }; \
 \
	DECLARE_FUNCTION(execOnFarReleased); \
	DECLARE_FUNCTION(execOnFarDragged); \
	DECLARE_FUNCTION(execOnFarPressed); \
	DECLARE_FUNCTION(execOnExitFarFocus); \
	DECLARE_FUNCTION(execOnUpdatedFarFocus); \
	DECLARE_FUNCTION(execOnEnterFarFocus); \
	DECLARE_FUNCTION(execIsFarFocusable);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_EVENT_PARMS \
	struct UxtFarTarget_eventIsFarFocusable_Parms \
	{ \
		const UPrimitiveComponent* Primitive; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UxtFarTarget_eventIsFarFocusable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UxtFarTarget_eventOnEnterFarFocus_Parms \
	{ \
		UUxtFarPointerComponent* Pointer; \
	}; \
	struct UxtFarTarget_eventOnExitFarFocus_Parms \
	{ \
		UUxtFarPointerComponent* Pointer; \
	}; \
	struct UxtFarTarget_eventOnFarDragged_Parms \
	{ \
		UUxtFarPointerComponent* Pointer; \
	}; \
	struct UxtFarTarget_eventOnFarPressed_Parms \
	{ \
		UUxtFarPointerComponent* Pointer; \
	}; \
	struct UxtFarTarget_eventOnFarReleased_Parms \
	{ \
		UUxtFarPointerComponent* Pointer; \
	}; \
	struct UxtFarTarget_eventOnUpdatedFarFocus_Parms \
	{ \
		UUxtFarPointerComponent* Pointer; \
	};


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_CALLBACK_WRAPPERS
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtFarTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtFarTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtFarTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtFarTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtFarTarget(UUxtFarTarget&&); \
	NO_API UUxtFarTarget(const UUxtFarTarget&); \
public:


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtFarTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtFarTarget(UUxtFarTarget&&); \
	NO_API UUxtFarTarget(const UUxtFarTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtFarTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtFarTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtFarTarget)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUxtFarTarget(); \
	friend struct Z_Construct_UClass_UUxtFarTarget_Statics; \
public: \
	DECLARE_CLASS(UUxtFarTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtFarTarget)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUxtFarTarget() {} \
public: \
	typedef UUxtFarTarget UClassType; \
	typedef IUxtFarTarget ThisClass; \
	static bool Execute_IsFarFocusable(UObject* O, const UPrimitiveComponent* Primitive); \
	static void Execute_OnEnterFarFocus(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnExitFarFocus(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnFarDragged(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnFarPressed(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnFarReleased(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnUpdatedFarFocus(UObject* O, UUxtFarPointerComponent* Pointer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IUxtFarTarget() {} \
public: \
	typedef UUxtFarTarget UClassType; \
	typedef IUxtFarTarget ThisClass; \
	static bool Execute_IsFarFocusable(UObject* O, const UPrimitiveComponent* Primitive); \
	static void Execute_OnEnterFarFocus(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnExitFarFocus(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnFarDragged(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnFarPressed(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnFarReleased(UObject* O, UUxtFarPointerComponent* Pointer); \
	static void Execute_OnUpdatedFarFocus(UObject* O, UUxtFarPointerComponent* Pointer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_11_PROLOG \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_EVENT_PARMS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_RPC_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_CALLBACK_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_CALLBACK_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtFarTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtFarTarget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
