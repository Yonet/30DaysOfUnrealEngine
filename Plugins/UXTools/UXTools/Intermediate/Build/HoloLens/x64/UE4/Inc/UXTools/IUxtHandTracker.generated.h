// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UXTOOLS_IUxtHandTracker_generated_h
#error "IUxtHandTracker.generated.h already included, missing '#pragma once' in IUxtHandTracker.h"
#endif
#define UXTOOLS_IUxtHandTracker_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UXTools_Source_UXTools_Public_HandTracking_IUxtHandTracker_h


#define FOREACH_ENUM_EUXTHANDJOINT(op) \
	op(EUxtHandJoint::Palm) \
	op(EUxtHandJoint::Wrist) \
	op(EUxtHandJoint::ThumbMetacarpal) \
	op(EUxtHandJoint::ThumbProximal) \
	op(EUxtHandJoint::ThumbDistal) \
	op(EUxtHandJoint::ThumbTip) \
	op(EUxtHandJoint::IndexMetacarpal) \
	op(EUxtHandJoint::IndexProximal) \
	op(EUxtHandJoint::IndexIntermediate) \
	op(EUxtHandJoint::IndexDistal) \
	op(EUxtHandJoint::IndexTip) \
	op(EUxtHandJoint::MiddleMetacarpal) \
	op(EUxtHandJoint::MiddleProximal) \
	op(EUxtHandJoint::MiddleIntermediate) \
	op(EUxtHandJoint::MiddleDistal) \
	op(EUxtHandJoint::MiddleTip) \
	op(EUxtHandJoint::RingMetacarpal) \
	op(EUxtHandJoint::RingProximal) \
	op(EUxtHandJoint::RingIntermediate) \
	op(EUxtHandJoint::RingDistal) \
	op(EUxtHandJoint::RingTip) \
	op(EUxtHandJoint::LittleMetacarpal) \
	op(EUxtHandJoint::LittleProximal) \
	op(EUxtHandJoint::LittleIntermediate) \
	op(EUxtHandJoint::LittleDistal) \
	op(EUxtHandJoint::LittleTip) \
	op(EUxtHandJoint::Count) 

enum class EUxtHandJoint : uint8;
template<> UXTOOLS_API UEnum* StaticEnum<EUxtHandJoint>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
