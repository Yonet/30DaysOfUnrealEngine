// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Private/HandTracking/UxtTouchBasedHandTrackerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtTouchBasedHandTrackerComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	void UUxtTouchBasedHandTrackerComponent::StaticRegisterNativesUUxtTouchBasedHandTrackerComponent()
	{
	}
	UClass* Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_NoRegister()
	{
		return UUxtTouchBasedHandTrackerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools Internal" },
		{ "Comment", "/** \n * Component added automatically by UXT to the player controller to enable driving far interactions via touch input.\n * The hand tracker interface is used just to provide the pointer pose and grab/select states, GetJointState() returns \n * that pointer pose for all joints.\n */" },
		{ "IncludePath", "HandTracking/UxtTouchBasedHandTrackerComponent.h" },
		{ "ModuleRelativePath", "Private/HandTracking/UxtTouchBasedHandTrackerComponent.h" },
		{ "ToolTip", "Component added automatically by UXT to the player controller to enable driving far interactions via touch input.\nThe hand tracker interface is used just to provide the pointer pose and grab/select states, GetJointState() returns\nthat pointer pose for all joints." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Private/HandTracking/UxtTouchBasedHandTrackerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtTouchBasedHandTrackerComponent, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::NewProp_PlayerController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::NewProp_PlayerController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtTouchBasedHandTrackerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::ClassParams = {
		&UUxtTouchBasedHandTrackerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtTouchBasedHandTrackerComponent, 1355195528);
	template<> UXTOOLS_API UClass* StaticClass<UUxtTouchBasedHandTrackerComponent>()
	{
		return UUxtTouchBasedHandTrackerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtTouchBasedHandTrackerComponent(Z_Construct_UClass_UUxtTouchBasedHandTrackerComponent, &UUxtTouchBasedHandTrackerComponent::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtTouchBasedHandTrackerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtTouchBasedHandTrackerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
