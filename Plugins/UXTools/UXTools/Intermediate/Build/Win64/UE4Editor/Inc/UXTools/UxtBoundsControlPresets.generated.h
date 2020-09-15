// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UXTOOLS_UxtBoundsControlPresets_generated_h
#error "UxtBoundsControlPresets.generated.h already included, missing '#pragma once' in UxtBoundsControlPresets.h"
#endif
#define UXTOOLS_UxtBoundsControlPresets_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UXTools_Source_UXTools_Public_Controls_UxtBoundsControlPresets_h


#define FOREACH_ENUM_EUXTBOUNDSCONTROLPRESET(op) \
	op(EUxtBoundsControlPreset::Default) \
	op(EUxtBoundsControlPreset::Slate2D) \
	op(EUxtBoundsControlPreset::AllResize) \
	op(EUxtBoundsControlPreset::AllTranslate) \
	op(EUxtBoundsControlPreset::AllScale) \
	op(EUxtBoundsControlPreset::AllRotate) 

enum class EUxtBoundsControlPreset : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtBoundsControlPreset>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
