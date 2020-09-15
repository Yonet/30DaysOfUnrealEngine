// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UXTOOLS_UxtIconBrush_generated_h
#error "UxtIconBrush.generated.h already included, missing '#pragma once' in UxtIconBrush.h"
#endif
#define UXTOOLS_UxtIconBrush_generated_h

#define HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtIconBrush_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUxtIconBrush_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UXTOOLS_API UScriptStruct* StaticStruct<struct FUxtIconBrush>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtIconBrush_h


#define FOREACH_ENUM_EUXTICONBRUSHCONTENTTYPE(op) \
	op(EUxtIconBrushContentType::None) \
	op(EUxtIconBrushContentType::UnicodeCharacter) \
	op(EUxtIconBrushContentType::String) 

enum class EUxtIconBrushContentType : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtIconBrushContentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
