// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/HandTracking/IUxtHandTracker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIUxtHandTracker() {}
// Cross Module References
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtHandJoint();
	UPackage* Z_Construct_UPackage__Script_UXTools();
// End Cross Module References
	static UEnum* EUxtHandJoint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtHandJoint, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtHandJoint"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtHandJoint>()
	{
		return EUxtHandJoint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtHandJoint(EUxtHandJoint_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtHandJoint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtHandJoint_Hash() { return 443223599U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtHandJoint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtHandJoint"), 0, Get_Z_Construct_UEnum_UXTools_EUxtHandJoint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtHandJoint::Palm", (int64)EUxtHandJoint::Palm },
				{ "EUxtHandJoint::Wrist", (int64)EUxtHandJoint::Wrist },
				{ "EUxtHandJoint::ThumbMetacarpal", (int64)EUxtHandJoint::ThumbMetacarpal },
				{ "EUxtHandJoint::ThumbProximal", (int64)EUxtHandJoint::ThumbProximal },
				{ "EUxtHandJoint::ThumbDistal", (int64)EUxtHandJoint::ThumbDistal },
				{ "EUxtHandJoint::ThumbTip", (int64)EUxtHandJoint::ThumbTip },
				{ "EUxtHandJoint::IndexMetacarpal", (int64)EUxtHandJoint::IndexMetacarpal },
				{ "EUxtHandJoint::IndexProximal", (int64)EUxtHandJoint::IndexProximal },
				{ "EUxtHandJoint::IndexIntermediate", (int64)EUxtHandJoint::IndexIntermediate },
				{ "EUxtHandJoint::IndexDistal", (int64)EUxtHandJoint::IndexDistal },
				{ "EUxtHandJoint::IndexTip", (int64)EUxtHandJoint::IndexTip },
				{ "EUxtHandJoint::MiddleMetacarpal", (int64)EUxtHandJoint::MiddleMetacarpal },
				{ "EUxtHandJoint::MiddleProximal", (int64)EUxtHandJoint::MiddleProximal },
				{ "EUxtHandJoint::MiddleIntermediate", (int64)EUxtHandJoint::MiddleIntermediate },
				{ "EUxtHandJoint::MiddleDistal", (int64)EUxtHandJoint::MiddleDistal },
				{ "EUxtHandJoint::MiddleTip", (int64)EUxtHandJoint::MiddleTip },
				{ "EUxtHandJoint::RingMetacarpal", (int64)EUxtHandJoint::RingMetacarpal },
				{ "EUxtHandJoint::RingProximal", (int64)EUxtHandJoint::RingProximal },
				{ "EUxtHandJoint::RingIntermediate", (int64)EUxtHandJoint::RingIntermediate },
				{ "EUxtHandJoint::RingDistal", (int64)EUxtHandJoint::RingDistal },
				{ "EUxtHandJoint::RingTip", (int64)EUxtHandJoint::RingTip },
				{ "EUxtHandJoint::LittleMetacarpal", (int64)EUxtHandJoint::LittleMetacarpal },
				{ "EUxtHandJoint::LittleProximal", (int64)EUxtHandJoint::LittleProximal },
				{ "EUxtHandJoint::LittleIntermediate", (int64)EUxtHandJoint::LittleIntermediate },
				{ "EUxtHandJoint::LittleDistal", (int64)EUxtHandJoint::LittleDistal },
				{ "EUxtHandJoint::LittleTip", (int64)EUxtHandJoint::LittleTip },
				{ "EUxtHandJoint::Count", (int64)EUxtHandJoint::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * Enum for hand joints. \n */" },
				{ "Count.DisplayName", "<INVALID>" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "EUxtHandJoint::Count" },
				{ "IndexDistal.Name", "EUxtHandJoint::IndexDistal" },
				{ "IndexIntermediate.Name", "EUxtHandJoint::IndexIntermediate" },
				{ "IndexMetacarpal.Name", "EUxtHandJoint::IndexMetacarpal" },
				{ "IndexProximal.Name", "EUxtHandJoint::IndexProximal" },
				{ "IndexTip.Name", "EUxtHandJoint::IndexTip" },
				{ "LittleDistal.Name", "EUxtHandJoint::LittleDistal" },
				{ "LittleIntermediate.Name", "EUxtHandJoint::LittleIntermediate" },
				{ "LittleMetacarpal.Name", "EUxtHandJoint::LittleMetacarpal" },
				{ "LittleProximal.Name", "EUxtHandJoint::LittleProximal" },
				{ "LittleTip.Name", "EUxtHandJoint::LittleTip" },
				{ "MiddleDistal.Name", "EUxtHandJoint::MiddleDistal" },
				{ "MiddleIntermediate.Name", "EUxtHandJoint::MiddleIntermediate" },
				{ "MiddleMetacarpal.Name", "EUxtHandJoint::MiddleMetacarpal" },
				{ "MiddleProximal.Name", "EUxtHandJoint::MiddleProximal" },
				{ "MiddleTip.Name", "EUxtHandJoint::MiddleTip" },
				{ "ModuleRelativePath", "Public/HandTracking/IUxtHandTracker.h" },
				{ "Palm.Name", "EUxtHandJoint::Palm" },
				{ "RingDistal.Name", "EUxtHandJoint::RingDistal" },
				{ "RingIntermediate.Name", "EUxtHandJoint::RingIntermediate" },
				{ "RingMetacarpal.Name", "EUxtHandJoint::RingMetacarpal" },
				{ "RingProximal.Name", "EUxtHandJoint::RingProximal" },
				{ "RingTip.Name", "EUxtHandJoint::RingTip" },
				{ "ThumbDistal.Name", "EUxtHandJoint::ThumbDistal" },
				{ "ThumbMetacarpal.Name", "EUxtHandJoint::ThumbMetacarpal" },
				{ "ThumbProximal.Name", "EUxtHandJoint::ThumbProximal" },
				{ "ThumbTip.Name", "EUxtHandJoint::ThumbTip" },
				{ "ToolTip", "Enum for hand joints." },
				{ "Wrist.Name", "EUxtHandJoint::Wrist" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtHandJoint",
				"EUxtHandJoint",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
