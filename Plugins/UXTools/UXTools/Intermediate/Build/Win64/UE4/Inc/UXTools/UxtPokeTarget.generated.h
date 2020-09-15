// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUxtNearPointerComponent;
enum class EUxtPokeBehaviour : uint8;
class UPrimitiveComponent;
#ifdef UXTOOLS_UxtPokeTarget_generated_h
#error "UxtPokeTarget.generated.h already included, missing '#pragma once' in UxtPokeTarget.h"
#endif
#define UXTOOLS_UxtPokeTarget_generated_h

#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_SPARSE_DATA
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_RPC_WRAPPERS \
	virtual void OnEndPoke_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnUpdatePoke_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnBeginPoke_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual EUxtPokeBehaviour GetPokeBehaviour_Implementation() const { return (EUxtPokeBehaviour)0; }; \
	virtual void OnExitPokeFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnUpdatePokeFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnEnterPokeFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual bool IsPokeFocusable_Implementation(const UPrimitiveComponent* Primitive) { return false; }; \
 \
	DECLARE_FUNCTION(execOnEndPoke); \
	DECLARE_FUNCTION(execOnUpdatePoke); \
	DECLARE_FUNCTION(execOnBeginPoke); \
	DECLARE_FUNCTION(execGetPokeBehaviour); \
	DECLARE_FUNCTION(execOnExitPokeFocus); \
	DECLARE_FUNCTION(execOnUpdatePokeFocus); \
	DECLARE_FUNCTION(execOnEnterPokeFocus); \
	DECLARE_FUNCTION(execIsPokeFocusable);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnEndPoke_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnUpdatePoke_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnBeginPoke_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual EUxtPokeBehaviour GetPokeBehaviour_Implementation() const { return (EUxtPokeBehaviour)0; }; \
	virtual void OnExitPokeFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnUpdatePokeFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual void OnEnterPokeFocus_Implementation(UUxtNearPointerComponent* Pointer) {}; \
	virtual bool IsPokeFocusable_Implementation(const UPrimitiveComponent* Primitive) { return false; }; \
 \
	DECLARE_FUNCTION(execOnEndPoke); \
	DECLARE_FUNCTION(execOnUpdatePoke); \
	DECLARE_FUNCTION(execOnBeginPoke); \
	DECLARE_FUNCTION(execGetPokeBehaviour); \
	DECLARE_FUNCTION(execOnExitPokeFocus); \
	DECLARE_FUNCTION(execOnUpdatePokeFocus); \
	DECLARE_FUNCTION(execOnEnterPokeFocus); \
	DECLARE_FUNCTION(execIsPokeFocusable);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_EVENT_PARMS \
	struct UxtPokeTarget_eventGetPokeBehaviour_Parms \
	{ \
		EUxtPokeBehaviour ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UxtPokeTarget_eventGetPokeBehaviour_Parms() \
			: ReturnValue((EUxtPokeBehaviour)0) \
		{ \
		} \
	}; \
	struct UxtPokeTarget_eventIsPokeFocusable_Parms \
	{ \
		const UPrimitiveComponent* Primitive; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UxtPokeTarget_eventIsPokeFocusable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UxtPokeTarget_eventOnBeginPoke_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtPokeTarget_eventOnEndPoke_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtPokeTarget_eventOnEnterPokeFocus_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtPokeTarget_eventOnExitPokeFocus_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtPokeTarget_eventOnUpdatePoke_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	}; \
	struct UxtPokeTarget_eventOnUpdatePokeFocus_Parms \
	{ \
		UUxtNearPointerComponent* Pointer; \
	};


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_CALLBACK_WRAPPERS
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtPokeTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtPokeTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtPokeTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtPokeTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtPokeTarget(UUxtPokeTarget&&); \
	NO_API UUxtPokeTarget(const UUxtPokeTarget&); \
public:


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtPokeTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtPokeTarget(UUxtPokeTarget&&); \
	NO_API UUxtPokeTarget(const UUxtPokeTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtPokeTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtPokeTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtPokeTarget)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUxtPokeTarget(); \
	friend struct Z_Construct_UClass_UUxtPokeTarget_Statics; \
public: \
	DECLARE_CLASS(UUxtPokeTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtPokeTarget)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUxtPokeTarget() {} \
public: \
	typedef UUxtPokeTarget UClassType; \
	typedef IUxtPokeTarget ThisClass; \
	static EUxtPokeBehaviour Execute_GetPokeBehaviour(const UObject* O); \
	static bool Execute_IsPokeFocusable(UObject* O, const UPrimitiveComponent* Primitive); \
	static void Execute_OnBeginPoke(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnEndPoke(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnEnterPokeFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnExitPokeFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnUpdatePoke(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnUpdatePokeFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_INCLASS_IINTERFACE \
protected: \
	virtual ~IUxtPokeTarget() {} \
public: \
	typedef UUxtPokeTarget UClassType; \
	typedef IUxtPokeTarget ThisClass; \
	static EUxtPokeBehaviour Execute_GetPokeBehaviour(const UObject* O); \
	static bool Execute_IsPokeFocusable(UObject* O, const UPrimitiveComponent* Primitive); \
	static void Execute_OnBeginPoke(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnEndPoke(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnEnterPokeFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnExitPokeFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnUpdatePoke(UObject* O, UUxtNearPointerComponent* Pointer); \
	static void Execute_OnUpdatePokeFocus(UObject* O, UUxtNearPointerComponent* Pointer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_22_PROLOG \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_EVENT_PARMS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_RPC_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_CALLBACK_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_CALLBACK_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h_25_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtPokeTarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UXTools_Source_UXTools_Public_Interactions_UxtPokeTarget_h


#define FOREACH_ENUM_EUXTPOKEBEHAVIOUR(op) \
	op(EUxtPokeBehaviour::FrontFace) \
	op(EUxtPokeBehaviour::Volume) 

enum class EUxtPokeBehaviour : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtPokeBehaviour>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
