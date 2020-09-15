// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EControllerHand : uint8;
class USkeletalMeshComponent;
class UUxtInputSimulationHeadMovementComponent;
#ifdef UXTOOLSINPUTSIMULATION_UxtInputSimulationActor_generated_h
#error "UxtInputSimulationActor.generated.h already included, missing '#pragma once' in UxtInputSimulationActor.h"
#endif
#define UXTOOLSINPUTSIMULATION_UxtInputSimulationActor_generated_h

#define HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_SPARSE_DATA
#define HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsHandControlled); \
	DECLARE_FUNCTION(execIsHandVisible); \
	DECLARE_FUNCTION(execGetRightHand); \
	DECLARE_FUNCTION(execGetLeftHand); \
	DECLARE_FUNCTION(execGetHeadMovement); \
	DECLARE_FUNCTION(execResetTargetPose); \
	DECLARE_FUNCTION(execSetTargetPose); \
	DECLARE_FUNCTION(execGetTargetPose);


#define HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsHandControlled); \
	DECLARE_FUNCTION(execIsHandVisible); \
	DECLARE_FUNCTION(execGetRightHand); \
	DECLARE_FUNCTION(execGetLeftHand); \
	DECLARE_FUNCTION(execGetHeadMovement); \
	DECLARE_FUNCTION(execResetTargetPose); \
	DECLARE_FUNCTION(execSetTargetPose); \
	DECLARE_FUNCTION(execGetTargetPose);


#define HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUxtInputSimulationActor(); \
	friend struct Z_Construct_UClass_AUxtInputSimulationActor_Statics; \
public: \
	DECLARE_CLASS(AUxtInputSimulationActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXToolsInputSimulation"), NO_API) \
	DECLARE_SERIALIZER(AUxtInputSimulationActor)


#define HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAUxtInputSimulationActor(); \
	friend struct Z_Construct_UClass_AUxtInputSimulationActor_Statics; \
public: \
	DECLARE_CLASS(AUxtInputSimulationActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXToolsInputSimulation"), NO_API) \
	DECLARE_SERIALIZER(AUxtInputSimulationActor)


#define HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUxtInputSimulationActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUxtInputSimulationActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUxtInputSimulationActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUxtInputSimulationActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUxtInputSimulationActor(AUxtInputSimulationActor&&); \
	NO_API AUxtInputSimulationActor(const AUxtInputSimulationActor&); \
public:


#define HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUxtInputSimulationActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUxtInputSimulationActor(AUxtInputSimulationActor&&); \
	NO_API AUxtInputSimulationActor(const AUxtInputSimulationActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUxtInputSimulationActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUxtInputSimulationActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUxtInputSimulationActor)


#define HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HeadMovement() { return STRUCT_OFFSET(AUxtInputSimulationActor, HeadMovement); } \
	FORCEINLINE static uint32 __PPO__LeftHand() { return STRUCT_OFFSET(AUxtInputSimulationActor, LeftHand); } \
	FORCEINLINE static uint32 __PPO__RightHand() { return STRUCT_OFFSET(AUxtInputSimulationActor, RightHand); }


#define HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_15_PROLOG
#define HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_RPC_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_INCLASS \
	HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UxtInputSimulationActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLSINPUTSIMULATION_API UClass* StaticClass<class AUxtInputSimulationActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UXTools_Source_UXToolsInputSimulation_Public_UxtInputSimulationActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
