// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtFingerCursorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtFingerCursorComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFingerCursorComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFingerCursorComponent();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtRingCursorComponent();
	UPackage* Z_Construct_UPackage__Script_UXTools();
// End Cross Module References
	void UUxtFingerCursorComponent::StaticRegisterNativesUUxtFingerCursorComponent()
	{
	}
	UClass* Z_Construct_UClass_UUxtFingerCursorComponent_NoRegister()
	{
		return UUxtFingerCursorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtFingerCursorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignWithSurfaceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlignWithSurfaceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowOnGrabTargets_MetaData[];
#endif
		static void NewProp_bShowOnGrabTargets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowOnGrabTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceToTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceToTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtFingerCursorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtRingCursorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFingerCursorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * When added to an actor with a near pointer, this component displays a ring cursor oriented towards the current poke target and \n * scaled according to the distance.\n */" },
		{ "HideCategories", "StaticMesh Materials Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Controls/UxtFingerCursorComponent.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtFingerCursorComponent.h" },
		{ "ToolTip", "When added to an actor with a near pointer, this component displays a ring cursor oriented towards the current poke target and\nscaled according to the distance." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_AlignWithSurfaceDistance_MetaData[] = {
		{ "Category", "Finger Cursor" },
		{ "Comment", "/** Distance at which the cursor starts to align with pokable surfaces. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtFingerCursorComponent.h" },
		{ "ToolTip", "Distance at which the cursor starts to align with pokable surfaces." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_AlignWithSurfaceDistance = { "AlignWithSurfaceDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFingerCursorComponent, AlignWithSurfaceDistance), METADATA_PARAMS(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_AlignWithSurfaceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_AlignWithSurfaceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_bShowOnGrabTargets_MetaData[] = {
		{ "Category", "Finger Cursor" },
		{ "Comment", "/** Show the finger cursor on grab targets. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtFingerCursorComponent.h" },
		{ "ToolTip", "Show the finger cursor on grab targets." },
	};
#endif
	void Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_bShowOnGrabTargets_SetBit(void* Obj)
	{
		((UUxtFingerCursorComponent*)Obj)->bShowOnGrabTargets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_bShowOnGrabTargets = { "bShowOnGrabTargets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtFingerCursorComponent), &Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_bShowOnGrabTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_bShowOnGrabTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_bShowOnGrabTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_MinRadius_MetaData[] = {
		{ "Category", "Finger Cursor" },
		{ "Comment", "/** Cursor radius when in contact with the target. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtFingerCursorComponent.h" },
		{ "ToolTip", "Cursor radius when in contact with the target." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_MinRadius = { "MinRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFingerCursorComponent, MinRadius), METADATA_PARAMS(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_MinRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_MinRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_MaxRadius_MetaData[] = {
		{ "Category", "Finger Cursor" },
		{ "Comment", "/** Cursor radius at the maximum distance to the target. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtFingerCursorComponent.h" },
		{ "ToolTip", "Cursor radius at the maximum distance to the target." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_MaxRadius = { "MaxRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFingerCursorComponent, MaxRadius), METADATA_PARAMS(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_MaxRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_MaxRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_MaxDistanceToTarget_MetaData[] = {
		{ "Category", "Finger Cursor" },
		{ "Comment", "/** Maximum distance to the pointer target at which the cursor should be displayed. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtFingerCursorComponent.h" },
		{ "ToolTip", "Maximum distance to the pointer target at which the cursor should be displayed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_MaxDistanceToTarget = { "MaxDistanceToTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFingerCursorComponent, MaxDistanceToTarget), METADATA_PARAMS(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_MaxDistanceToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_MaxDistanceToTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtFingerCursorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_AlignWithSurfaceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_bShowOnGrabTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_MinRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_MaxRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFingerCursorComponent_Statics::NewProp_MaxDistanceToTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtFingerCursorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtFingerCursorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtFingerCursorComponent_Statics::ClassParams = {
		&UUxtFingerCursorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtFingerCursorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFingerCursorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtFingerCursorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtFingerCursorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtFingerCursorComponent, 1795536249);
	template<> UXTOOLS_API UClass* StaticClass<UUxtFingerCursorComponent>()
	{
		return UUxtFingerCursorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtFingerCursorComponent(Z_Construct_UClass_UUxtFingerCursorComponent, &UUxtFingerCursorComponent::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtFingerCursorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtFingerCursorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
