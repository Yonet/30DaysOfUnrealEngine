// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EControllerHand : uint8;
#ifdef UXTOOLS_UxtHandInteractionActor_generated_h
#error "UxtHandInteractionActor.generated.h already included, missing '#pragma once' in UxtHandInteractionActor.h"
#endif
#define UXTOOLS_UxtHandInteractionActor_generated_h

#define HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_SPARSE_DATA
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRayLength); \
	DECLARE_FUNCTION(execGetRayLength); \
	DECLARE_FUNCTION(execSetRayStartOffset); \
	DECLARE_FUNCTION(execGetRayStartOffset); \
	DECLARE_FUNCTION(execSetPokeRadius); \
	DECLARE_FUNCTION(execGetPokeRadius); \
	DECLARE_FUNCTION(execSetTraceChannel); \
	DECLARE_FUNCTION(execGetTraceChannel); \
	DECLARE_FUNCTION(execSetHand); \
	DECLARE_FUNCTION(execGetHand);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRayLength); \
	DECLARE_FUNCTION(execGetRayLength); \
	DECLARE_FUNCTION(execSetRayStartOffset); \
	DECLARE_FUNCTION(execGetRayStartOffset); \
	DECLARE_FUNCTION(execSetPokeRadius); \
	DECLARE_FUNCTION(execGetPokeRadius); \
	DECLARE_FUNCTION(execSetTraceChannel); \
	DECLARE_FUNCTION(execGetTraceChannel); \
	DECLARE_FUNCTION(execSetHand); \
	DECLARE_FUNCTION(execGetHand);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUxtHandInteractionActor(); \
	friend struct Z_Construct_UClass_AUxtHandInteractionActor_Statics; \
public: \
	DECLARE_CLASS(AUxtHandInteractionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(AUxtHandInteractionActor)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAUxtHandInteractionActor(); \
	friend struct Z_Construct_UClass_AUxtHandInteractionActor_Statics; \
public: \
	DECLARE_CLASS(AUxtHandInteractionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(AUxtHandInteractionActor)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUxtHandInteractionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUxtHandInteractionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUxtHandInteractionActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUxtHandInteractionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUxtHandInteractionActor(AUxtHandInteractionActor&&); \
	NO_API AUxtHandInteractionActor(const AUxtHandInteractionActor&); \
public:


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUxtHandInteractionActor(AUxtHandInteractionActor&&); \
	NO_API AUxtHandInteractionActor(const AUxtHandInteractionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUxtHandInteractionActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUxtHandInteractionActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUxtHandInteractionActor)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Hand() { return STRUCT_OFFSET(AUxtHandInteractionActor, Hand); } \
	FORCEINLINE static uint32 __PPO__RayStartOffset() { return STRUCT_OFFSET(AUxtHandInteractionActor, RayStartOffset); } \
	FORCEINLINE static uint32 __PPO__RayLength() { return STRUCT_OFFSET(AUxtHandInteractionActor, RayLength); } \
	FORCEINLINE static uint32 __PPO__PokeRadius() { return STRUCT_OFFSET(AUxtHandInteractionActor, PokeRadius); } \
	FORCEINLINE static uint32 __PPO__TraceChannel() { return STRUCT_OFFSET(AUxtHandInteractionActor, TraceChannel); } \
	FORCEINLINE static uint32 __PPO__NearPointer() { return STRUCT_OFFSET(AUxtHandInteractionActor, NearPointer); } \
	FORCEINLINE static uint32 __PPO__FarPointer() { return STRUCT_OFFSET(AUxtHandInteractionActor, FarPointer); }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_21_PROLOG
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_RPC_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_INCLASS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class AUxtHandInteractionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UXTools_Source_UXTools_Public_Input_UxtHandInteractionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
