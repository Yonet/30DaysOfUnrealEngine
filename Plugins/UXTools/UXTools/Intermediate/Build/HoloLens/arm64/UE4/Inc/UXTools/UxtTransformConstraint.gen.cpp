// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/Constraints/UxtTransformConstraint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtTransformConstraint() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTransformConstraint_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTransformConstraint();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
// End Cross Module References
	void UUxtTransformConstraint::StaticRegisterNativesUUxtTransformConstraint()
	{
	}
	UClass* Z_Construct_UClass_UUxtTransformConstraint_NoRegister()
	{
		return UUxtTransformConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UUxtTransformConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InteractionMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HandType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtTransformConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTransformConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Base class for all constraints\n *\n * Usage:\n * Derive from this component and implement ApplyConstraint and GetConstraintType.\n * Custom constraints will automatically be picked up by a UxtConstraintManager on the same actor\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Interactions/Constraints/UxtTransformConstraint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtTransformConstraint.h" },
		{ "ToolTip", "Base class for all constraints\n\nUsage:\nDerive from this component and implement ApplyConstraint and GetConstraintType.\nCustom constraints will automatically be picked up by a UxtConstraintManager on the same actor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTransformConstraint_Statics::NewProp_InteractionMode_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EUxtInteractionMode" },
		{ "Category", "Constraints" },
		{ "Comment", "/** Whether this constraint applies to near manipulation, far manipulation or both. */" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtTransformConstraint.h" },
		{ "ToolTip", "Whether this constraint applies to near manipulation, far manipulation or both." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUxtTransformConstraint_Statics::NewProp_InteractionMode = { "InteractionMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTransformConstraint, InteractionMode), METADATA_PARAMS(Z_Construct_UClass_UUxtTransformConstraint_Statics::NewProp_InteractionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTransformConstraint_Statics::NewProp_InteractionMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTransformConstraint_Statics::NewProp_HandType_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EUxtGenericManipulationMode" },
		{ "Category", "Constraints" },
		{ "Comment", "/** Whether this constraint applies to one hand manipulation, two hand manipulation or both. */" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtTransformConstraint.h" },
		{ "ToolTip", "Whether this constraint applies to one hand manipulation, two hand manipulation or both." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUxtTransformConstraint_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTransformConstraint, HandType), METADATA_PARAMS(Z_Construct_UClass_UUxtTransformConstraint_Statics::NewProp_HandType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTransformConstraint_Statics::NewProp_HandType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTransformConstraint_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** The component to transform, will default to the root scene component if not specified */" },
		{ "ModuleRelativePath", "Public/Interactions/Constraints/UxtTransformConstraint.h" },
		{ "ToolTip", "The component to transform, will default to the root scene component if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtTransformConstraint_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTransformConstraint, TargetComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_UUxtTransformConstraint_Statics::NewProp_TargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTransformConstraint_Statics::NewProp_TargetComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtTransformConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTransformConstraint_Statics::NewProp_InteractionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTransformConstraint_Statics::NewProp_HandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTransformConstraint_Statics::NewProp_TargetComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtTransformConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtTransformConstraint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtTransformConstraint_Statics::ClassParams = {
		&UUxtTransformConstraint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtTransformConstraint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTransformConstraint_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtTransformConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTransformConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtTransformConstraint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtTransformConstraint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtTransformConstraint, 3626760506);
	template<> UXTOOLS_API UClass* StaticClass<UUxtTransformConstraint>()
	{
		return UUxtTransformConstraint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtTransformConstraint(Z_Construct_UClass_UUxtTransformConstraint, &UUxtTransformConstraint::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtTransformConstraint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtTransformConstraint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
