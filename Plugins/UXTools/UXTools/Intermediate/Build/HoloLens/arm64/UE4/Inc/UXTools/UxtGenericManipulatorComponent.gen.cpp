// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtGenericManipulatorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtGenericManipulatorComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGenericManipulatorComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGenericManipulatorComponent();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtManipulatorComponentBase();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode();
// End Cross Module References
	DEFINE_FUNCTION(UUxtGenericManipulatorComponent::execSetSmoothing)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSmoothing);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSmoothing(Z_Param_NewSmoothing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtGenericManipulatorComponent::execGetSmoothing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSmoothing();
		P_NATIVE_END;
	}
	void UUxtGenericManipulatorComponent::StaticRegisterNativesUUxtGenericManipulatorComponent()
	{
		UClass* Class = UUxtGenericManipulatorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSmoothing", &UUxtGenericManipulatorComponent::execGetSmoothing },
			{ "SetSmoothing", &UUxtGenericManipulatorComponent::execSetSmoothing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics
	{
		struct UxtGenericManipulatorComponent_eventGetSmoothing_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGenericManipulatorComponent_eventGetSmoothing_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGenericManipulatorComponent, nullptr, "GetSmoothing", nullptr, nullptr, sizeof(UxtGenericManipulatorComponent_eventGetSmoothing_Parms), Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics
	{
		struct UxtGenericManipulatorComponent_eventSetSmoothing_Parms
		{
			float NewSmoothing;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSmoothing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::NewProp_NewSmoothing = { "NewSmoothing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGenericManipulatorComponent_eventSetSmoothing_Parms, NewSmoothing), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::NewProp_NewSmoothing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGenericManipulatorComponent, nullptr, "SetSmoothing", nullptr, nullptr, sizeof(UxtGenericManipulatorComponent_eventSetSmoothing_Parms), Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtGenericManipulatorComponent_NoRegister()
	{
		return UUxtGenericManipulatorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Smoothing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Smoothing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwoHandTransformModes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TwoHandTransformModes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneHandRotationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OneHandRotationMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OneHandRotationMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManipulationModes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ManipulationModes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtManipulatorComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtGenericManipulatorComponent_GetSmoothing, "GetSmoothing" }, // 2484316489
		{ &Z_Construct_UFunction_UUxtGenericManipulatorComponent_SetSmoothing, "SetSmoothing" }, // 2922717413
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Generic manipulator that supports both one- and two-handed interactions.\n * \n * One-handed interaction supports linear movement as well as rotation based on the orientation of the hand.\n * Rotation modes can be selected with different axes and pivot points.\n * \n * Two-handed interaction moves the object based on the center between hands.\n * The actor can be rotated based on the line between both hands and scaled based on the distance.\n */" },
		{ "HideCategories", "Grabbable ManipulatorComponent Trigger PhysicsVolume" },
		{ "IncludePath", "Interactions/UxtGenericManipulatorComponent.h" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
		{ "ToolTip", "Generic manipulator that supports both one- and two-handed interactions.\n\nOne-handed interaction supports linear movement as well as rotation based on the orientation of the hand.\nRotation modes can be selected with different axes and pivot points.\n\nTwo-handed interaction moves the object based on the center between hands.\nThe actor can be rotated based on the line between both hands and scaled based on the distance." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_Smoothing_MetaData[] = {
		{ "BlueprintGetter", "GetSmoothing" },
		{ "BlueprintSetter", "SetSmoothing" },
		{ "Category", "GenericManipulator" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Motion smoothing factor to apply while manipulating the object.\n\x09 *\n\x09 * A low-pass filter is applied to the source transform location and rotation to smooth out jittering.\n\x09 * The new actor transform is a exponentially weighted average of the current transform and the raw target transform based on the time step:\n\x09 *\n\x09 * T_final = Lerp( T_current, T_target, Exp(-Smoothing * DeltaSeconds) )\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
		{ "ToolTip", "Motion smoothing factor to apply while manipulating the object.\n\nA low-pass filter is applied to the source transform location and rotation to smooth out jittering.\nThe new actor transform is a exponentially weighted average of the current transform and the raw target transform based on the time step:\n\nT_final = Lerp( T_current, T_target, Exp(-Smoothing * DeltaSeconds) )" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_Smoothing = { "Smoothing", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGenericManipulatorComponent, Smoothing), METADATA_PARAMS(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_Smoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_Smoothing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "Category", "GenericManipulator" },
		{ "Comment", "/** The component to transform, will default to the root scene component if not specified */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
		{ "ToolTip", "The component to transform, will default to the root scene component if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGenericManipulatorComponent, TargetComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TargetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TwoHandTransformModes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EUxtTransformMode" },
		{ "Category", "GenericManipulator" },
		{ "Comment", "/** Enabled transformations in two-handed manipulation. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
		{ "ToolTip", "Enabled transformations in two-handed manipulation." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TwoHandTransformModes = { "TwoHandTransformModes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGenericManipulatorComponent, TwoHandTransformModes), METADATA_PARAMS(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TwoHandTransformModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TwoHandTransformModes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode_MetaData[] = {
		{ "Category", "GenericManipulator" },
		{ "Comment", "/** Mode of rotation to use while using one hand only. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
		{ "ToolTip", "Mode of rotation to use while using one hand only." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode = { "OneHandRotationMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGenericManipulatorComponent, OneHandRotationMode), Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode, METADATA_PARAMS(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_ManipulationModes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EUxtGenericManipulationMode" },
		{ "Category", "GenericManipulator" },
		{ "Comment", "/** Enabled manipulation modes. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGenericManipulatorComponent.h" },
		{ "ToolTip", "Enabled manipulation modes." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_ManipulationModes = { "ManipulationModes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtGenericManipulatorComponent, ManipulationModes), METADATA_PARAMS(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_ManipulationModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_ManipulationModes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_Smoothing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TargetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_TwoHandTransformModes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_OneHandRotationMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::NewProp_ManipulationModes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtGenericManipulatorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::ClassParams = {
		&UUxtGenericManipulatorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtGenericManipulatorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtGenericManipulatorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtGenericManipulatorComponent, 99201098);
	template<> UXTOOLS_API UClass* StaticClass<UUxtGenericManipulatorComponent>()
	{
		return UUxtGenericManipulatorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtGenericManipulatorComponent(Z_Construct_UClass_UUxtGenericManipulatorComponent, &UUxtGenericManipulatorComponent::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtGenericManipulatorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtGenericManipulatorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
