// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
#ifdef UXTOOLS_UxtRingCursorComponent_generated_h
#error "UxtRingCursorComponent.generated.h already included, missing '#pragma once' in UxtRingCursorComponent.h"
#endif
#define UXTOOLS_UxtRingCursorComponent_generated_h

#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_SPARSE_DATA
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBorderColor); \
	DECLARE_FUNCTION(execGetBorderColor); \
	DECLARE_FUNCTION(execSetRingColor); \
	DECLARE_FUNCTION(execGetRingColor); \
	DECLARE_FUNCTION(execSetUseAbsoluteThickness); \
	DECLARE_FUNCTION(execGetUseAbsoluteThickness); \
	DECLARE_FUNCTION(execSetBorderThickness); \
	DECLARE_FUNCTION(execGetBorderThickness); \
	DECLARE_FUNCTION(execSetRingThickness); \
	DECLARE_FUNCTION(execGetRingThickness); \
	DECLARE_FUNCTION(execSetRadius); \
	DECLARE_FUNCTION(execGetRadius);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBorderColor); \
	DECLARE_FUNCTION(execGetBorderColor); \
	DECLARE_FUNCTION(execSetRingColor); \
	DECLARE_FUNCTION(execGetRingColor); \
	DECLARE_FUNCTION(execSetUseAbsoluteThickness); \
	DECLARE_FUNCTION(execGetUseAbsoluteThickness); \
	DECLARE_FUNCTION(execSetBorderThickness); \
	DECLARE_FUNCTION(execGetBorderThickness); \
	DECLARE_FUNCTION(execSetRingThickness); \
	DECLARE_FUNCTION(execGetRingThickness); \
	DECLARE_FUNCTION(execSetRadius); \
	DECLARE_FUNCTION(execGetRadius);


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUxtRingCursorComponent(); \
	friend struct Z_Construct_UClass_UUxtRingCursorComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtRingCursorComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtRingCursorComponent)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUUxtRingCursorComponent(); \
	friend struct Z_Construct_UClass_UUxtRingCursorComponent_Statics; \
public: \
	DECLARE_CLASS(UUxtRingCursorComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UXTools"), NO_API) \
	DECLARE_SERIALIZER(UUxtRingCursorComponent)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUxtRingCursorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUxtRingCursorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtRingCursorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtRingCursorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtRingCursorComponent(UUxtRingCursorComponent&&); \
	NO_API UUxtRingCursorComponent(const UUxtRingCursorComponent&); \
public:


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUxtRingCursorComponent(UUxtRingCursorComponent&&); \
	NO_API UUxtRingCursorComponent(const UUxtRingCursorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUxtRingCursorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUxtRingCursorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUxtRingCursorComponent)


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RingThickness() { return STRUCT_OFFSET(UUxtRingCursorComponent, RingThickness); } \
	FORCEINLINE static uint32 __PPO__BorderThickness() { return STRUCT_OFFSET(UUxtRingCursorComponent, BorderThickness); } \
	FORCEINLINE static uint32 __PPO__bUseAbsoluteThickness() { return STRUCT_OFFSET(UUxtRingCursorComponent, bUseAbsoluteThickness); } \
	FORCEINLINE static uint32 __PPO__RingColor() { return STRUCT_OFFSET(UUxtRingCursorComponent, RingColor); } \
	FORCEINLINE static uint32 __PPO__BorderColor() { return STRUCT_OFFSET(UUxtRingCursorComponent, BorderColor); } \
	FORCEINLINE static uint32 __PPO__MaterialInstance() { return STRUCT_OFFSET(UUxtRingCursorComponent, MaterialInstance); } \
	FORCEINLINE static uint32 __PPO__Radius() { return STRUCT_OFFSET(UUxtRingCursorComponent, Radius); }


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_15_PROLOG
#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_RPC_WRAPPERS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_INCLASS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_SPARSE_DATA \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UXTOOLS_API UClass* StaticClass<class UUxtRingCursorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtRingCursorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
