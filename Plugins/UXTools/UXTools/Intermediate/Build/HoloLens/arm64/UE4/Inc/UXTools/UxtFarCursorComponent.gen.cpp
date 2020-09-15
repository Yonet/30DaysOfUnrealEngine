// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtFarCursorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtFarCursorComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarCursorComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarCursorComponent();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtRingCursorComponent();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarPointerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUxtFarCursorComponent::execOnFarPointerDisabled)
	{
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_FarPointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFarPointerDisabled(Z_Param_FarPointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtFarCursorComponent::execOnFarPointerEnabled)
	{
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_FarPointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFarPointerEnabled(Z_Param_FarPointer);
		P_NATIVE_END;
	}
	void UUxtFarCursorComponent::StaticRegisterNativesUUxtFarCursorComponent()
	{
		UClass* Class = UUxtFarCursorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFarPointerDisabled", &UUxtFarCursorComponent::execOnFarPointerDisabled },
			{ "OnFarPointerEnabled", &UUxtFarCursorComponent::execOnFarPointerEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics
	{
		struct UxtFarCursorComponent_eventOnFarPointerDisabled_Parms
		{
			UUxtFarPointerComponent* FarPointer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FarPointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FarPointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::NewProp_FarPointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::NewProp_FarPointer = { "FarPointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarCursorComponent_eventOnFarPointerDisabled_Parms, FarPointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::NewProp_FarPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::NewProp_FarPointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::NewProp_FarPointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtFarCursorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarCursorComponent, nullptr, "OnFarPointerDisabled", nullptr, nullptr, sizeof(UxtFarCursorComponent_eventOnFarPointerDisabled_Parms), Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics
	{
		struct UxtFarCursorComponent_eventOnFarPointerEnabled_Parms
		{
			UUxtFarPointerComponent* FarPointer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FarPointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FarPointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::NewProp_FarPointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::NewProp_FarPointer = { "FarPointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarCursorComponent_eventOnFarPointerEnabled_Parms, FarPointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::NewProp_FarPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::NewProp_FarPointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::NewProp_FarPointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controls/UxtFarCursorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarCursorComponent, nullptr, "OnFarPointerEnabled", nullptr, nullptr, sizeof(UxtFarCursorComponent_eventOnFarPointerEnabled_Parms), Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtFarCursorComponent_NoRegister()
	{
		return UUxtFarCursorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtFarCursorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressedRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PressedRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IdleRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoverDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HoverDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtFarCursorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtRingCursorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtFarCursorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerDisabled, "OnFarPointerDisabled" }, // 2054691753
		{ &Z_Construct_UFunction_UUxtFarCursorComponent_OnFarPointerEnabled, "OnFarPointerEnabled" }, // 3324457581
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFarCursorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * When added to an actor with a far pointer this component displays a flat ring cursor at the pointer's hit point oriented \n * following the hit normal.\n */" },
		{ "HideCategories", "StaticMesh Materials Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Controls/UxtFarCursorComponent.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtFarCursorComponent.h" },
		{ "ToolTip", "When added to an actor with a far pointer this component displays a flat ring cursor at the pointer's hit point oriented\nfollowing the hit normal." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_PressedRadius_MetaData[] = {
		{ "Category", "Far Cursor" },
		{ "Comment", "/**\n\x09 * Cursor radius when pressed at 1m from the camera.\n\x09 * The actual radius will scale with the distance to the camera to keep a constant screen size.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Controls/UxtFarCursorComponent.h" },
		{ "ToolTip", "Cursor radius when pressed at 1m from the camera.\nThe actual radius will scale with the distance to the camera to keep a constant screen size." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_PressedRadius = { "PressedRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFarCursorComponent, PressedRadius), METADATA_PARAMS(Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_PressedRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_PressedRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_IdleRadius_MetaData[] = {
		{ "Category", "Far Cursor" },
		{ "Comment", "/** \n\x09 * Cursor radius when idle at 1m from the camera. \n\x09 * The actual radius will scale with the distance to the camera to keep a constant screen size. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Controls/UxtFarCursorComponent.h" },
		{ "ToolTip", "Cursor radius when idle at 1m from the camera.\nThe actual radius will scale with the distance to the camera to keep a constant screen size." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_IdleRadius = { "IdleRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFarCursorComponent, IdleRadius), METADATA_PARAMS(Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_IdleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_IdleRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_HoverDistance_MetaData[] = {
		{ "Category", "Far Cursor" },
		{ "Comment", "/** Distance over the hit surface to place the cursor at. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtFarCursorComponent.h" },
		{ "ToolTip", "Distance over the hit surface to place the cursor at." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_HoverDistance = { "HoverDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtFarCursorComponent, HoverDistance), METADATA_PARAMS(Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_HoverDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_HoverDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtFarCursorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_PressedRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_IdleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtFarCursorComponent_Statics::NewProp_HoverDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtFarCursorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtFarCursorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtFarCursorComponent_Statics::ClassParams = {
		&UUxtFarCursorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtFarCursorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFarCursorComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtFarCursorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFarCursorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtFarCursorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtFarCursorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtFarCursorComponent, 1358838552);
	template<> UXTOOLS_API UClass* StaticClass<UUxtFarCursorComponent>()
	{
		return UUxtFarCursorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtFarCursorComponent(Z_Construct_UClass_UUxtFarCursorComponent, &UUxtFarCursorComponent::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtFarCursorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtFarCursorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
