// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Behaviors/UxtPalmUpConstraintComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtPalmUpConstraintComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPalmUpConstraintComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPalmUpConstraintComponent();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtHandConstraintComponent();
	UPackage* Z_Construct_UPackage__Script_UXTools();
// End Cross Module References
	void UUxtPalmUpConstraintComponent::StaticRegisterNativesUUxtPalmUpConstraintComponent()
	{
	}
	UClass* Z_Construct_UClass_UUxtPalmUpConstraintComponent_NoRegister()
	{
		return UUxtPalmUpConstraintComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFlatHandAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFlatHandAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequireFlatHand_MetaData[];
#endif
		static void NewProp_bRequireFlatHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequireFlatHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPalmAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPalmAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtHandConstraintComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Hand constraint component that becomes active if the hand is facing the player camera.\n * \n * The palm must be facing the camera for the constraint to be active.\n * Optionally the hand can also be rejected if it isn't flat.\n */" },
		{ "IncludePath", "Behaviors/UxtPalmUpConstraintComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtPalmUpConstraintComponent.h" },
		{ "ToolTip", "Hand constraint component that becomes active if the hand is facing the player camera.\n\nThe palm must be facing the camera for the constraint to be active.\nOptionally the hand can also be rejected if it isn't flat." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxFlatHandAngle_MetaData[] = {
		{ "Category", "PalmUp Constraint" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Maximum allowed angle between palm and index/ring finger/palm triangle to be considered a flat hand. */" },
		{ "EditCondition", "bRequireFlatHand" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtPalmUpConstraintComponent.h" },
		{ "ToolTip", "Maximum allowed angle between palm and index/ring finger/palm triangle to be considered a flat hand." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxFlatHandAngle = { "MaxFlatHandAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPalmUpConstraintComponent, MaxFlatHandAngle), METADATA_PARAMS(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxFlatHandAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxFlatHandAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireFlatHand_MetaData[] = {
		{ "Category", "PalmUp Constraint" },
		{ "Comment", "/**\n\x09 * If true then the hand needs to be flat to be accepted.\n\x09 * The triangle between index, ring finger, and palm needs to be aligned with the palm within MaxFlatHandAngle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtPalmUpConstraintComponent.h" },
		{ "ToolTip", "If true then the hand needs to be flat to be accepted.\nThe triangle between index, ring finger, and palm needs to be aligned with the palm within MaxFlatHandAngle." },
	};
#endif
	void Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireFlatHand_SetBit(void* Obj)
	{
		((UUxtPalmUpConstraintComponent*)Obj)->bRequireFlatHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireFlatHand = { "bRequireFlatHand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtPalmUpConstraintComponent), &Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireFlatHand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireFlatHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireFlatHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxPalmAngle_MetaData[] = {
		{ "Category", "PalmUp Constraint" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Maximum allowed angle between the negative palm normal and view vector.\n\x09 * If the angle exceeds the limit the hand is not used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Behaviors/UxtPalmUpConstraintComponent.h" },
		{ "ToolTip", "Maximum allowed angle between the negative palm normal and view vector.\nIf the angle exceeds the limit the hand is not used." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxPalmAngle = { "MaxPalmAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtPalmUpConstraintComponent, MaxPalmAngle), METADATA_PARAMS(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxPalmAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxPalmAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxFlatHandAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_bRequireFlatHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::NewProp_MaxPalmAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtPalmUpConstraintComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::ClassParams = {
		&UUxtPalmUpConstraintComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtPalmUpConstraintComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtPalmUpConstraintComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtPalmUpConstraintComponent, 2342992456);
	template<> UXTOOLS_API UClass* StaticClass<UUxtPalmUpConstraintComponent>()
	{
		return UUxtPalmUpConstraintComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtPalmUpConstraintComponent(Z_Construct_UClass_UUxtPalmUpConstraintComponent, &UUxtPalmUpConstraintComponent::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtPalmUpConstraintComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtPalmUpConstraintComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
