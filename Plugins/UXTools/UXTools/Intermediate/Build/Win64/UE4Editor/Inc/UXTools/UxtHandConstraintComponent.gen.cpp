// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Behaviors/UxtHandConstraintComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtHandConstraintComponent() {}
// Cross Module References
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintEndTrackingDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintBeginTrackingDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintDeactivatedDelegate__DelegateSignature();
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintActivatedDelegate__DelegateSignature();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtHandConstraintRotationMode();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtHandConstraintOffsetMode();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtHandConstraintZone();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtHandConstraintComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtHandConstraintComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintEndTrackingDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtHandConstraintEndTrackingDelegate_Parms
		{
			EControllerHand TrackedHand;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackedHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackedHand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintEndTrackingDelegate__DelegateSignature_Statics::NewProp_TrackedHand = { "TrackedHand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtHandConstraintEndTrackingDelegate_Parms, TrackedHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintEndTrackingDelegate__DelegateSignature_Statics::NewProp_TrackedHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintEndTrackingDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintEndTrackingDelegate__DelegateSignature_Statics::NewProp_TrackedHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintEndTrackingDelegate__DelegateSignature_Statics::NewProp_TrackedHand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintEndTrackingDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintEndTrackingDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtHandConstraintEndTrackingDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_UXTools_eventUxtHandConstraintEndTrackingDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintEndTrackingDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintEndTrackingDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintEndTrackingDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintEndTrackingDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintEndTrackingDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintEndTrackingDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintBeginTrackingDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtHandConstraintBeginTrackingDelegate_Parms
		{
			EControllerHand TrackedHand;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackedHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackedHand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintBeginTrackingDelegate__DelegateSignature_Statics::NewProp_TrackedHand = { "TrackedHand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtHandConstraintBeginTrackingDelegate_Parms, TrackedHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintBeginTrackingDelegate__DelegateSignature_Statics::NewProp_TrackedHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintBeginTrackingDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintBeginTrackingDelegate__DelegateSignature_Statics::NewProp_TrackedHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintBeginTrackingDelegate__DelegateSignature_Statics::NewProp_TrackedHand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintBeginTrackingDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintBeginTrackingDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtHandConstraintBeginTrackingDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_UXTools_eventUxtHandConstraintBeginTrackingDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintBeginTrackingDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintBeginTrackingDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintBeginTrackingDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintBeginTrackingDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintBeginTrackingDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintBeginTrackingDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintDeactivatedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintDeactivatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintDeactivatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtHandConstraintDeactivatedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintDeactivatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintDeactivatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintDeactivatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintDeactivatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintActivatedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintActivatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintActivatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtHandConstraintActivatedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintActivatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintActivatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintActivatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintActivatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EUxtHandConstraintRotationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtHandConstraintRotationMode, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtHandConstraintRotationMode"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtHandConstraintRotationMode>()
	{
		return EUxtHandConstraintRotationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtHandConstraintRotationMode(EUxtHandConstraintRotationMode_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtHandConstraintRotationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtHandConstraintRotationMode_Hash() { return 203896408U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtHandConstraintRotationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtHandConstraintRotationMode"), 0, Get_Z_Construct_UEnum_UXTools_EUxtHandConstraintRotationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtHandConstraintRotationMode::None", (int64)EUxtHandConstraintRotationMode::None },
				{ "EUxtHandConstraintRotationMode::LookAtCamera", (int64)EUxtHandConstraintRotationMode::LookAtCamera },
				{ "EUxtHandConstraintRotationMode::HandRotation", (int64)EUxtHandConstraintRotationMode::HandRotation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Goal rotation mode. */" },
				{ "HandRotation.Comment", "/** Uses the hand rotation. */" },
				{ "HandRotation.Name", "EUxtHandConstraintRotationMode::HandRotation" },
				{ "HandRotation.ToolTip", "Uses the hand rotation." },
				{ "LookAtCamera.Comment", "/** Rotate towards the camera. */" },
				{ "LookAtCamera.Name", "EUxtHandConstraintRotationMode::LookAtCamera" },
				{ "LookAtCamera.ToolTip", "Rotate towards the camera." },
				{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
				{ "None.Comment", "/** Do not change the rotation */" },
				{ "None.Name", "EUxtHandConstraintRotationMode::None" },
				{ "None.ToolTip", "Do not change the rotation" },
				{ "ToolTip", "Goal rotation mode." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtHandConstraintRotationMode",
				"EUxtHandConstraintRotationMode",
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
	static UEnum* EUxtHandConstraintOffsetMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtHandConstraintOffsetMode, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtHandConstraintOffsetMode"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtHandConstraintOffsetMode>()
	{
		return EUxtHandConstraintOffsetMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtHandConstraintOffsetMode(EUxtHandConstraintOffsetMode_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtHandConstraintOffsetMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtHandConstraintOffsetMode_Hash() { return 102639974U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtHandConstraintOffsetMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtHandConstraintOffsetMode"), 0, Get_Z_Construct_UEnum_UXTools_EUxtHandConstraintOffsetMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtHandConstraintOffsetMode::LookAtCamera", (int64)EUxtHandConstraintOffsetMode::LookAtCamera },
				{ "EUxtHandConstraintOffsetMode::HandRotation", (int64)EUxtHandConstraintOffsetMode::HandRotation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Frame of reference for placement. */" },
				{ "HandRotation.Comment", "/** Uses the hand rotation to compute the offset. */" },
				{ "HandRotation.Name", "EUxtHandConstraintOffsetMode::HandRotation" },
				{ "HandRotation.ToolTip", "Uses the hand rotation to compute the offset." },
				{ "LookAtCamera.Comment", "/** Uses the camera view to compute the offset. */" },
				{ "LookAtCamera.Name", "EUxtHandConstraintOffsetMode::LookAtCamera" },
				{ "LookAtCamera.ToolTip", "Uses the camera view to compute the offset." },
				{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
				{ "ToolTip", "Frame of reference for placement." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtHandConstraintOffsetMode",
				"EUxtHandConstraintOffsetMode",
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
	static UEnum* EUxtHandConstraintZone_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtHandConstraintZone, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtHandConstraintZone"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtHandConstraintZone>()
	{
		return EUxtHandConstraintZone_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtHandConstraintZone(EUxtHandConstraintZone_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtHandConstraintZone"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtHandConstraintZone_Hash() { return 3353699693U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtHandConstraintZone()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtHandConstraintZone"), 0, Get_Z_Construct_UEnum_UXTools_EUxtHandConstraintZone_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtHandConstraintZone::UlnarSide", (int64)EUxtHandConstraintZone::UlnarSide },
				{ "EUxtHandConstraintZone::RadialSide", (int64)EUxtHandConstraintZone::RadialSide },
				{ "EUxtHandConstraintZone::AboveFingerTips", (int64)EUxtHandConstraintZone::AboveFingerTips },
				{ "EUxtHandConstraintZone::BelowWrist", (int64)EUxtHandConstraintZone::BelowWrist },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AboveFingerTips.Comment", "/** Above the finger tips. */" },
				{ "AboveFingerTips.Name", "EUxtHandConstraintZone::AboveFingerTips" },
				{ "AboveFingerTips.ToolTip", "Above the finger tips." },
				{ "BelowWrist.Comment", "/** Below the wrist. */" },
				{ "BelowWrist.Name", "EUxtHandConstraintZone::BelowWrist" },
				{ "BelowWrist.ToolTip", "Below the wrist." },
				{ "BlueprintType", "true" },
				{ "Comment", "/** Zone relative to the hand in which the object is placed. */" },
				{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
				{ "RadialSide.Comment", "/** Area on the thumb side. */" },
				{ "RadialSide.Name", "EUxtHandConstraintZone::RadialSide" },
				{ "RadialSide.ToolTip", "Area on the thumb side." },
				{ "ToolTip", "Zone relative to the hand in which the object is placed." },
				{ "UlnarSide.Comment", "/** Area opposite the thumb. */" },
				{ "UlnarSide.Name", "EUxtHandConstraintZone::UlnarSide" },
				{ "UlnarSide.ToolTip", "Area opposite the thumb." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtHandConstraintZone",
				"EUxtHandConstraintZone",
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
	DEFINE_FUNCTION(UUxtHandConstraintComponent::execIsHandUsableForConstraint)
	{
		P_GET_ENUM(EControllerHand,Z_Param_NewHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHandUsableForConstraint(EControllerHand(Z_Param_NewHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtHandConstraintComponent::execGetGoalRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=P_THIS->GetGoalRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtHandConstraintComponent::execGetGoalLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetGoalLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtHandConstraintComponent::execIsConstraintActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConstraintActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtHandConstraintComponent::execGetHandBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=P_THIS->GetHandBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtHandConstraintComponent::execGetTrackedHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EControllerHand*)Z_Param__Result=P_THIS->GetTrackedHand();
		P_NATIVE_END;
	}
	void UUxtHandConstraintComponent::StaticRegisterNativesUUxtHandConstraintComponent()
	{
		UClass* Class = UUxtHandConstraintComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGoalLocation", &UUxtHandConstraintComponent::execGetGoalLocation },
			{ "GetGoalRotation", &UUxtHandConstraintComponent::execGetGoalRotation },
			{ "GetHandBounds", &UUxtHandConstraintComponent::execGetHandBounds },
			{ "GetTrackedHand", &UUxtHandConstraintComponent::execGetTrackedHand },
			{ "IsConstraintActive", &UUxtHandConstraintComponent::execIsConstraintActive },
			{ "IsHandUsableForConstraint", &UUxtHandConstraintComponent::execIsHandUsableForConstraint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalLocation_Statics
	{
		struct UxtHandConstraintComponent_eventGetGoalLocation_Parms
		{
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandConstraintComponent_eventGetGoalLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalLocation_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalLocation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtHandConstraintComponent, nullptr, "GetGoalLocation", nullptr, nullptr, sizeof(UxtHandConstraintComponent_eventGetGoalLocation_Parms), Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalRotation_Statics
	{
		struct UxtHandConstraintComponent_eventGetGoalRotation_Parms
		{
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalRotation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandConstraintComponent_eventGetGoalRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalRotation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalRotation_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalRotation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtHandConstraintComponent, nullptr, "GetGoalRotation", nullptr, nullptr, sizeof(UxtHandConstraintComponent_eventGetGoalRotation_Parms), Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtHandConstraintComponent_GetHandBounds_Statics
	{
		struct UxtHandConstraintComponent_eventGetHandBounds_Parms
		{
			FBox ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtHandConstraintComponent_GetHandBounds_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtHandConstraintComponent_GetHandBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandConstraintComponent_eventGetHandBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UUxtHandConstraintComponent_GetHandBounds_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandConstraintComponent_GetHandBounds_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtHandConstraintComponent_GetHandBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandConstraintComponent_GetHandBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtHandConstraintComponent_GetHandBounds_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtHandConstraintComponent_GetHandBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtHandConstraintComponent, nullptr, "GetHandBounds", nullptr, nullptr, sizeof(UxtHandConstraintComponent_eventGetHandBounds_Parms), Z_Construct_UFunction_UUxtHandConstraintComponent_GetHandBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandConstraintComponent_GetHandBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtHandConstraintComponent_GetHandBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandConstraintComponent_GetHandBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtHandConstraintComponent_GetHandBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtHandConstraintComponent_GetHandBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtHandConstraintComponent_GetTrackedHand_Statics
	{
		struct UxtHandConstraintComponent_eventGetTrackedHand_Parms
		{
			EControllerHand ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtHandConstraintComponent_GetTrackedHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandConstraintComponent_eventGetTrackedHand_Parms, ReturnValue), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtHandConstraintComponent_GetTrackedHand_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtHandConstraintComponent_GetTrackedHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandConstraintComponent_GetTrackedHand_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandConstraintComponent_GetTrackedHand_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtHandConstraintComponent_GetTrackedHand_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtHandConstraintComponent_GetTrackedHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtHandConstraintComponent, nullptr, "GetTrackedHand", nullptr, nullptr, sizeof(UxtHandConstraintComponent_eventGetTrackedHand_Parms), Z_Construct_UFunction_UUxtHandConstraintComponent_GetTrackedHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandConstraintComponent_GetTrackedHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtHandConstraintComponent_GetTrackedHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandConstraintComponent_GetTrackedHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtHandConstraintComponent_GetTrackedHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtHandConstraintComponent_GetTrackedHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtHandConstraintComponent_IsConstraintActive_Statics
	{
		struct UxtHandConstraintComponent_eventIsConstraintActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtHandConstraintComponent_IsConstraintActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtHandConstraintComponent_eventIsConstraintActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtHandConstraintComponent_IsConstraintActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtHandConstraintComponent_eventIsConstraintActive_Parms), &Z_Construct_UFunction_UUxtHandConstraintComponent_IsConstraintActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtHandConstraintComponent_IsConstraintActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandConstraintComponent_IsConstraintActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtHandConstraintComponent_IsConstraintActive_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtHandConstraintComponent_IsConstraintActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtHandConstraintComponent, nullptr, "IsConstraintActive", nullptr, nullptr, sizeof(UxtHandConstraintComponent_eventIsConstraintActive_Parms), Z_Construct_UFunction_UUxtHandConstraintComponent_IsConstraintActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandConstraintComponent_IsConstraintActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtHandConstraintComponent_IsConstraintActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandConstraintComponent_IsConstraintActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtHandConstraintComponent_IsConstraintActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtHandConstraintComponent_IsConstraintActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtHandConstraintComponent_IsHandUsableForConstraint_Statics
	{
		struct UxtHandConstraintComponent_eventIsHandUsableForConstraint_Parms
		{
			EControllerHand NewHand;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewHand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtHandConstraintComponent_IsHandUsableForConstraint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtHandConstraintComponent_eventIsHandUsableForConstraint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtHandConstraintComponent_IsHandUsableForConstraint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtHandConstraintComponent_eventIsHandUsableForConstraint_Parms), &Z_Construct_UFunction_UUxtHandConstraintComponent_IsHandUsableForConstraint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtHandConstraintComponent_IsHandUsableForConstraint_Statics::NewProp_NewHand = { "NewHand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandConstraintComponent_eventIsHandUsableForConstraint_Parms, NewHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtHandConstraintComponent_IsHandUsableForConstraint_Statics::NewProp_NewHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtHandConstraintComponent_IsHandUsableForConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandConstraintComponent_IsHandUsableForConstraint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandConstraintComponent_IsHandUsableForConstraint_Statics::NewProp_NewHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandConstraintComponent_IsHandUsableForConstraint_Statics::NewProp_NewHand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtHandConstraintComponent_IsHandUsableForConstraint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hand Constraint" },
		{ "Comment", "/**\n\x09 * Returns true if the given hand is eligible for the constraint.\n\x09 * If the hand is rejected the constraint will be deactivated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
		{ "ToolTip", "Returns true if the given hand is eligible for the constraint.\nIf the hand is rejected the constraint will be deactivated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtHandConstraintComponent_IsHandUsableForConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtHandConstraintComponent, nullptr, "IsHandUsableForConstraint", nullptr, nullptr, sizeof(UxtHandConstraintComponent_eventIsHandUsableForConstraint_Parms), Z_Construct_UFunction_UUxtHandConstraintComponent_IsHandUsableForConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandConstraintComponent_IsHandUsableForConstraint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtHandConstraintComponent_IsHandUsableForConstraint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandConstraintComponent_IsHandUsableForConstraint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtHandConstraintComponent_IsHandUsableForConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtHandConstraintComponent_IsHandUsableForConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtHandConstraintComponent_NoRegister()
	{
		return UUxtHandConstraintComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtHandConstraintComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoalRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoalLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsConstraintActive_MetaData[];
#endif
		static void NewProp_bIsConstraintActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsConstraintActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackedHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackedHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEndTracking_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndTracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBeginTracking_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginTracking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConstraintDeactivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConstraintDeactivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConstraintActivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConstraintActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationLerpTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationLerpTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationLerpTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationLerpTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoveOwningActor_MetaData[];
#endif
		static void NewProp_bMoveOwningActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoveOwningActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GoalMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RotationMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OffsetMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OffsetMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Zone_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Zone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Zone_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtHandConstraintComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtHandConstraintComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalLocation, "GetGoalLocation" }, // 1655731206
		{ &Z_Construct_UFunction_UUxtHandConstraintComponent_GetGoalRotation, "GetGoalRotation" }, // 3683305874
		{ &Z_Construct_UFunction_UUxtHandConstraintComponent_GetHandBounds, "GetHandBounds" }, // 3802845618
		{ &Z_Construct_UFunction_UUxtHandConstraintComponent_GetTrackedHand, "GetTrackedHand" }, // 913744795
		{ &Z_Construct_UFunction_UUxtHandConstraintComponent_IsConstraintActive, "IsConstraintActive" }, // 4029616288
		{ &Z_Construct_UFunction_UUxtHandConstraintComponent_IsHandUsableForConstraint, "IsHandUsableForConstraint" }, // 2773148081
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtHandConstraintComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Component that calculates a goal based on hand tracking and moves the owning actor.\n * \n * Several zones around the hand supported: radial and ulnar for the thumb side and its opposite,\n * as well as above and below the hand. The goal position is computed by casting a ray\n * in the direction of the zone at a bounding box around the hand joints.\n *\n * The constraint can be oriented on either the hand rotation alone or facing the player.\n */" },
		{ "IncludePath", "Behaviors/UxtHandConstraintComponent.h" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
		{ "ToolTip", "Component that calculates a goal based on hand tracking and moves the owning actor.\n\nSeveral zones around the hand supported: radial and ulnar for the thumb side and its opposite,\nas well as above and below the hand. The goal position is computed by casting a ray\nin the direction of the zone at a bounding box around the hand joints.\n\nThe constraint can be oriented on either the hand rotation alone or facing the player." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_GoalRotation_MetaData[] = {
		{ "BlueprintGetter", "GetGoalRotation" },
		{ "Category", "Hand Constraint" },
		{ "Comment", "/** Goal rotation for the constraint. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
		{ "ToolTip", "Goal rotation for the constraint." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_GoalRotation = { "GoalRotation", nullptr, (EPropertyFlags)0x0040000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtHandConstraintComponent, GoalRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_GoalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_GoalRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_GoalLocation_MetaData[] = {
		{ "BlueprintGetter", "GetGoalLocation" },
		{ "Category", "Hand Constraint" },
		{ "Comment", "/** Goal location for the constraint. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
		{ "ToolTip", "Goal location for the constraint." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_GoalLocation = { "GoalLocation", nullptr, (EPropertyFlags)0x0040000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtHandConstraintComponent, GoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_GoalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_GoalLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_bIsConstraintActive_MetaData[] = {
		{ "BlueprintGetter", "IsConstraintActive" },
		{ "Category", "Hand Constraint" },
		{ "Comment", "/**\n\x09 * True if a usable hand was found and the constraint goal is valid.\n\x09 * OnConstraintActivated and OnConstraintDeactivated will be called when the active state changes.\n\x09 * While the constraint is active and the bMoveOwningActor flag is set it will move the actor towards the goal.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
		{ "ToolTip", "True if a usable hand was found and the constraint goal is valid.\nOnConstraintActivated and OnConstraintDeactivated will be called when the active state changes.\nWhile the constraint is active and the bMoveOwningActor flag is set it will move the actor towards the goal." },
	};
#endif
	void Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_bIsConstraintActive_SetBit(void* Obj)
	{
		((UUxtHandConstraintComponent*)Obj)->bIsConstraintActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_bIsConstraintActive = { "bIsConstraintActive", nullptr, (EPropertyFlags)0x0040000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtHandConstraintComponent), &Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_bIsConstraintActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_bIsConstraintActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_bIsConstraintActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_HandBounds_MetaData[] = {
		{ "BlueprintGetter", "GetHandBounds" },
		{ "Category", "Hand Constraint" },
		{ "Comment", "/** Bounding box of hand joints with radii, aligned with the palm bone. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
		{ "ToolTip", "Bounding box of hand joints with radii, aligned with the palm bone." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_HandBounds = { "HandBounds", nullptr, (EPropertyFlags)0x0040000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtHandConstraintComponent, HandBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_HandBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_HandBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_TrackedHand_MetaData[] = {
		{ "BlueprintGetter", "GetTrackedHand" },
		{ "Category", "Hand Constraint" },
		{ "Comment", "/** Actual hand that is currently tracked for the constraint. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
		{ "ToolTip", "Actual hand that is currently tracked for the constraint." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_TrackedHand = { "TrackedHand", nullptr, (EPropertyFlags)0x0040000000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtHandConstraintComponent, TrackedHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_TrackedHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_TrackedHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_TrackedHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnEndTracking_MetaData[] = {
		{ "Category", "Hand Constraint" },
		{ "Comment", "/** Event raised when the constraint ends tracking a hand. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
		{ "ToolTip", "Event raised when the constraint ends tracking a hand." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnEndTracking = { "OnEndTracking", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtHandConstraintComponent, OnEndTracking), Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintEndTrackingDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnEndTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnEndTracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnBeginTracking_MetaData[] = {
		{ "Category", "Hand Constraint" },
		{ "Comment", "/** Event raised when the constraint begins tracking a hand. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
		{ "ToolTip", "Event raised when the constraint begins tracking a hand." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnBeginTracking = { "OnBeginTracking", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtHandConstraintComponent, OnBeginTracking), Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintBeginTrackingDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnBeginTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnBeginTracking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnConstraintDeactivated_MetaData[] = {
		{ "Category", "Hand Constraint" },
		{ "Comment", "/** Event raised when the constraint becomes inactive, as indicated by the bIsConstraintActive property. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
		{ "ToolTip", "Event raised when the constraint becomes inactive, as indicated by the bIsConstraintActive property." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnConstraintDeactivated = { "OnConstraintDeactivated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtHandConstraintComponent, OnConstraintDeactivated), Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintDeactivatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnConstraintDeactivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnConstraintDeactivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnConstraintActivated_MetaData[] = {
		{ "Category", "Hand Constraint" },
		{ "Comment", "/** Event raised when the constraint becomes active, as indicated by the bIsConstraintActive property. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
		{ "ToolTip", "Event raised when the constraint becomes active, as indicated by the bIsConstraintActive property." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnConstraintActivated = { "OnConstraintActivated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtHandConstraintComponent, OnConstraintActivated), Z_Construct_UDelegateFunction_UXTools_UxtHandConstraintActivatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnConstraintActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnConstraintActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_RotationLerpTime_MetaData[] = {
		{ "Category", "Hand Constraint" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Interpolation time for smoothed rotation.\n\x09 * Set to zero to disable smoothing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
		{ "ToolTip", "Interpolation time for smoothed rotation.\nSet to zero to disable smoothing." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_RotationLerpTime = { "RotationLerpTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtHandConstraintComponent, RotationLerpTime), METADATA_PARAMS(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_RotationLerpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_RotationLerpTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_LocationLerpTime_MetaData[] = {
		{ "Category", "Hand Constraint" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Interpolation time for smoothed translation.\n\x09 * Set to zero to disable smoothing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
		{ "ToolTip", "Interpolation time for smoothed translation.\nSet to zero to disable smoothing." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_LocationLerpTime = { "LocationLerpTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtHandConstraintComponent, LocationLerpTime), METADATA_PARAMS(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_LocationLerpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_LocationLerpTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_bMoveOwningActor_MetaData[] = {
		{ "Category", "Hand Constraint" },
		{ "Comment", "/**\n\x09 * Actor transform is moved towards the goal if true.\n\x09 * Disable this to only compute the goal without changing the actor transform.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
		{ "ToolTip", "Actor transform is moved towards the goal if true.\nDisable this to only compute the goal without changing the actor transform." },
	};
#endif
	void Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_bMoveOwningActor_SetBit(void* Obj)
	{
		((UUxtHandConstraintComponent*)Obj)->bMoveOwningActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_bMoveOwningActor = { "bMoveOwningActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtHandConstraintComponent), &Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_bMoveOwningActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_bMoveOwningActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_bMoveOwningActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_GoalMargin_MetaData[] = {
		{ "Category", "Hand Constraint" },
		{ "Comment", "/** Margin between the hand bounding box and the goal location. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
		{ "ToolTip", "Margin between the hand bounding box and the goal location." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_GoalMargin = { "GoalMargin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtHandConstraintComponent, GoalMargin), METADATA_PARAMS(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_GoalMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_GoalMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_RotationMode_MetaData[] = {
		{ "Category", "Hand Constraint" },
		{ "Comment", "/** Determines how the goal rotation is computed. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
		{ "ToolTip", "Determines how the goal rotation is computed." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtHandConstraintComponent, RotationMode), Z_Construct_UEnum_UXTools_EUxtHandConstraintRotationMode, METADATA_PARAMS(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_RotationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_RotationMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_RotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OffsetMode_MetaData[] = {
		{ "Category", "Hand Constraint" },
		{ "Comment", "/** Determines how the offset vector is computed. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
		{ "ToolTip", "Determines how the offset vector is computed." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OffsetMode = { "OffsetMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtHandConstraintComponent, OffsetMode), Z_Construct_UEnum_UXTools_EUxtHandConstraintOffsetMode, METADATA_PARAMS(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OffsetMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OffsetMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OffsetMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_Zone_MetaData[] = {
		{ "Category", "Hand Constraint" },
		{ "Comment", "/** Safe zone that determines the target location of the constraint relative to the hand. */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
		{ "ToolTip", "Safe zone that determines the target location of the constraint relative to the hand." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_Zone = { "Zone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtHandConstraintComponent, Zone), Z_Construct_UEnum_UXTools_EUxtHandConstraintZone, METADATA_PARAMS(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_Zone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_Zone_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_Zone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_Hand_MetaData[] = {
		{ "Category", "Hand Constraint" },
		{ "Comment", "/**\n\x09 * Hand to use for the constraint.\n\x09 * If set to 'Any Hand' the first tracked hand will be used, until tracking is lost.\n\x09 */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtHandConstraintComponent.h" },
		{ "ToolTip", "Hand to use for the constraint.\nIf set to 'Any Hand' the first tracked hand will be used, until tracking is lost." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtHandConstraintComponent, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_Hand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtHandConstraintComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_GoalRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_GoalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_bIsConstraintActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_HandBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_TrackedHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_TrackedHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnEndTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnBeginTracking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnConstraintDeactivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OnConstraintActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_RotationLerpTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_LocationLerpTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_bMoveOwningActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_GoalMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_RotationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_RotationMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OffsetMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_OffsetMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_Zone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_Zone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtHandConstraintComponent_Statics::NewProp_Hand_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtHandConstraintComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtHandConstraintComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtHandConstraintComponent_Statics::ClassParams = {
		&UUxtHandConstraintComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtHandConstraintComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandConstraintComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtHandConstraintComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtHandConstraintComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtHandConstraintComponent, 2837247092);
	template<> UXTOOLS_API UClass* StaticClass<UUxtHandConstraintComponent>()
	{
		return UUxtHandConstraintComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtHandConstraintComponent(Z_Construct_UClass_UUxtHandConstraintComponent, &UUxtHandConstraintComponent::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtHandConstraintComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtHandConstraintComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
