// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtManipulatorComponentBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtManipulatorComponentBase() {}
// Cross Module References
	UXTOOLS_API UFunction* Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtManipulatorComponentBase_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtManipulatorComponentBase();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabTargetComponent();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtGrabPointerData();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics
	{
		struct _Script_UXTools_eventUxtUpdateTransformDelegate_Parms
		{
			USceneComponent* TargetComponent;
			FTransform Transform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtUpdateTransformDelegate_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UXTools_eventUxtUpdateTransformDelegate_Parms, TargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::NewProp_TargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::NewProp_TargetComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::NewProp_TargetComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event triggered when the actor's transform is updated. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
		{ "ToolTip", "Event triggered when the actor's transform is updated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UXTools, nullptr, "UxtUpdateTransformDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_UXTools_eventUxtUpdateTransformDelegate_Parms), Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponentBase::execOnManipulationEnd)
	{
		P_GET_OBJECT(UUxtGrabTargetComponent,Z_Param_Grabbable);
		P_GET_STRUCT(FUxtGrabPointerData,Z_Param_GrabPointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnManipulationEnd(Z_Param_Grabbable,Z_Param_GrabPointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponentBase::execOnManipulationStarted)
	{
		P_GET_OBJECT(UUxtGrabTargetComponent,Z_Param_Grabbable);
		P_GET_STRUCT(FUxtGrabPointerData,Z_Param_GrabPointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnManipulationStarted(Z_Param_Grabbable,Z_Param_GrabPointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponentBase::execApplyTargetTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TargetTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyTargetTransform(Z_Param_Out_TargetTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponentBase::execSetInitialTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInitialTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponentBase::execSmoothTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SourceTransform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LocationSmoothing);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotationSmoothing);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TargetTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SmoothTransform(Z_Param_Out_SourceTransform,Z_Param_LocationSmoothing,Z_Param_RotationSmoothing,Z_Param_DeltaSeconds,Z_Param_Out_TargetTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponentBase::execRotateAboutAxis)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SourceTransform);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Pivot);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Axis);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TargetTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateAboutAxis(Z_Param_Out_SourceTransform,Z_Param_Out_Pivot,Z_Param_Out_Axis,Z_Param_Out_TargetTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponentBase::execRotateAroundPivot)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SourceTransform);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Pivot);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TargetTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateAroundPivot(Z_Param_Out_SourceTransform,Z_Param_Out_Pivot,Z_Param_Out_TargetTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtManipulatorComponentBase::execMoveToTargets)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SourceTransform);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TargetTransform);
		P_GET_UBOOL(Z_Param_UsePointerRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToTargets(Z_Param_Out_SourceTransform,Z_Param_Out_TargetTransform,Z_Param_UsePointerRotation);
		P_NATIVE_END;
	}
	void UUxtManipulatorComponentBase::StaticRegisterNativesUUxtManipulatorComponentBase()
	{
		UClass* Class = UUxtManipulatorComponentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyTargetTransform", &UUxtManipulatorComponentBase::execApplyTargetTransform },
			{ "MoveToTargets", &UUxtManipulatorComponentBase::execMoveToTargets },
			{ "OnManipulationEnd", &UUxtManipulatorComponentBase::execOnManipulationEnd },
			{ "OnManipulationStarted", &UUxtManipulatorComponentBase::execOnManipulationStarted },
			{ "RotateAboutAxis", &UUxtManipulatorComponentBase::execRotateAboutAxis },
			{ "RotateAroundPivot", &UUxtManipulatorComponentBase::execRotateAroundPivot },
			{ "SetInitialTransform", &UUxtManipulatorComponentBase::execSetInitialTransform },
			{ "SmoothTransform", &UUxtManipulatorComponentBase::execSmoothTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics
	{
		struct UxtManipulatorComponentBase_eventApplyTargetTransform_Parms
		{
			FTransform TargetTransform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::NewProp_TargetTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventApplyTargetTransform_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::NewProp_TargetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::NewProp_TargetTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::NewProp_TargetTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manipulator Component" },
		{ "Comment", "/**\n\x09 * Apply the transform to the actor root scene component.\n\x09 * Relative transform between the manipulator component and the root scene component is preserved.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
		{ "ToolTip", "Apply the transform to the actor root scene component.\nRelative transform between the manipulator component and the root scene component is preserved." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponentBase, nullptr, "ApplyTargetTransform", nullptr, nullptr, sizeof(UxtManipulatorComponentBase_eventApplyTargetTransform_Parms), Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics
	{
		struct UxtManipulatorComponentBase_eventMoveToTargets_Parms
		{
			FTransform SourceTransform;
			FTransform TargetTransform;
			bool UsePointerRotation;
		};
		static void NewProp_UsePointerRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsePointerRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_UsePointerRotation_SetBit(void* Obj)
	{
		((UxtManipulatorComponentBase_eventMoveToTargets_Parms*)Obj)->UsePointerRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_UsePointerRotation = { "UsePointerRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtManipulatorComponentBase_eventMoveToTargets_Parms), &Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_UsePointerRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventMoveToTargets_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_SourceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_SourceTransform = { "SourceTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventMoveToTargets_Parms, SourceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_SourceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_SourceTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_UsePointerRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_TargetTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::NewProp_SourceTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manipulator Component" },
		{ "Comment", "/**\n\x09 * Translate the source transform such that grab points match targets.\n\x09 * If more than one pointer is used then the centroid of the grab points and targets is used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
		{ "ToolTip", "Translate the source transform such that grab points match targets.\nIf more than one pointer is used then the centroid of the grab points and targets is used." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponentBase, nullptr, "MoveToTargets", nullptr, nullptr, sizeof(UxtManipulatorComponentBase_eventMoveToTargets_Parms), Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics
	{
		struct UxtManipulatorComponentBase_eventOnManipulationEnd_Parms
		{
			UUxtGrabTargetComponent* Grabbable;
			FUxtGrabPointerData GrabPointer;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrabPointer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grabbable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grabbable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::NewProp_GrabPointer = { "GrabPointer", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventOnManipulationEnd_Parms, GrabPointer), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventOnManipulationEnd_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::NewProp_Grabbable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::NewProp_GrabPointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::NewProp_Grabbable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponentBase, nullptr, "OnManipulationEnd", nullptr, nullptr, sizeof(UxtManipulatorComponentBase_eventOnManipulationEnd_Parms), Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics
	{
		struct UxtManipulatorComponentBase_eventOnManipulationStarted_Parms
		{
			UUxtGrabTargetComponent* Grabbable;
			FUxtGrabPointerData GrabPointer;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrabPointer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grabbable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grabbable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::NewProp_GrabPointer = { "GrabPointer", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventOnManipulationStarted_Parms, GrabPointer), Z_Construct_UScriptStruct_FUxtGrabPointerData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventOnManipulationStarted_Parms, Grabbable), Z_Construct_UClass_UUxtGrabTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::NewProp_Grabbable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::NewProp_Grabbable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::NewProp_GrabPointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::NewProp_Grabbable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponentBase, nullptr, "OnManipulationStarted", nullptr, nullptr, sizeof(UxtManipulatorComponentBase_eventOnManipulationStarted_Parms), Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics
	{
		struct UxtManipulatorComponentBase_eventRotateAboutAxis_Parms
		{
			FTransform SourceTransform;
			FVector Pivot;
			FVector Axis;
			FTransform TargetTransform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pivot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pivot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventRotateAboutAxis_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventRotateAboutAxis_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Axis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Pivot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventRotateAboutAxis_Parms, Pivot), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Pivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Pivot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_SourceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_SourceTransform = { "SourceTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventRotateAboutAxis_Parms, SourceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_SourceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_SourceTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_TargetTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_Pivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::NewProp_SourceTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manipulator Component" },
		{ "Comment", "/**\n\x09 * Rotates the source transform around the pivot point on the given axis such that the pointers line up with current targets.\n\x09 * If more than one pointer is used then the resulting rotation will minimize the mean square of target distances.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
		{ "ToolTip", "Rotates the source transform around the pivot point on the given axis such that the pointers line up with current targets.\nIf more than one pointer is used then the resulting rotation will minimize the mean square of target distances." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponentBase, nullptr, "RotateAboutAxis", nullptr, nullptr, sizeof(UxtManipulatorComponentBase_eventRotateAboutAxis_Parms), Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics
	{
		struct UxtManipulatorComponentBase_eventRotateAroundPivot_Parms
		{
			FTransform SourceTransform;
			FVector Pivot;
			FTransform TargetTransform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pivot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pivot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventRotateAroundPivot_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_Pivot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventRotateAroundPivot_Parms, Pivot), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_Pivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_Pivot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_SourceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_SourceTransform = { "SourceTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventRotateAroundPivot_Parms, SourceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_SourceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_SourceTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_TargetTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_Pivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::NewProp_SourceTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manipulator Component" },
		{ "Comment", "/**\n\x09 * Rotates the source transform around the pivot point such that the pointers line up with current targets.\n\x09 * If more than one pointer is used then the resulting rotation will minimize the mean square of target distances.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
		{ "ToolTip", "Rotates the source transform around the pivot point such that the pointers line up with current targets.\nIf more than one pointer is used then the resulting rotation will minimize the mean square of target distances." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponentBase, nullptr, "RotateAroundPivot", nullptr, nullptr, sizeof(UxtManipulatorComponentBase_eventRotateAroundPivot_Parms), Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponentBase_SetInitialTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_SetInitialTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manipulator Component" },
		{ "Comment", "/**\n\x09 * Cache the initial world space and camera space transform.\n\x09 * Manipulation should be based on these initial transform for stable results.\n\x09 * If bAutoSetInitialTransform is true then the initial transform is updated when grabbed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
		{ "ToolTip", "Cache the initial world space and camera space transform.\nManipulation should be based on these initial transform for stable results.\nIf bAutoSetInitialTransform is true then the initial transform is updated when grabbed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponentBase_SetInitialTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponentBase, nullptr, "SetInitialTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_SetInitialTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_SetInitialTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponentBase_SetInitialTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponentBase_SetInitialTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics
	{
		struct UxtManipulatorComponentBase_eventSmoothTransform_Parms
		{
			FTransform SourceTransform;
			float LocationSmoothing;
			float RotationSmoothing;
			float DeltaSeconds;
			FTransform TargetTransform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSmoothing;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationSmoothing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventSmoothTransform_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventSmoothTransform_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_RotationSmoothing = { "RotationSmoothing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventSmoothTransform_Parms, RotationSmoothing), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_LocationSmoothing = { "LocationSmoothing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventSmoothTransform_Parms, LocationSmoothing), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_SourceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_SourceTransform = { "SourceTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtManipulatorComponentBase_eventSmoothTransform_Parms, SourceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_SourceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_SourceTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_TargetTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_DeltaSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_RotationSmoothing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_LocationSmoothing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::NewProp_SourceTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manipulator Component" },
		{ "Comment", "/**\n\x09 * Apply a low-pass filter to the source transform location and rotation to smooth out jittering.\n\x09 * Target transform is a exponentially weighted average of the current component transform and the source transform based on the time step.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
		{ "ToolTip", "Apply a low-pass filter to the source transform location and rotation to smooth out jittering.\nTarget transform is a exponentially weighted average of the current component transform and the source transform based on the time step." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtManipulatorComponentBase, nullptr, "SmoothTransform", nullptr, nullptr, sizeof(UxtManipulatorComponentBase_eventSmoothTransform_Parms), Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtManipulatorComponentBase_NoRegister()
	{
		return UUxtManipulatorComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UUxtManipulatorComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSetInitialTransform_MetaData[];
#endif
		static void NewProp_bAutoSetInitialTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSetInitialTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialCameraSpaceTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialCameraSpaceTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUpdateTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUxtGrabTargetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtManipulatorComponentBase_ApplyTargetTransform, "ApplyTargetTransform" }, // 3003428061
		{ &Z_Construct_UFunction_UUxtManipulatorComponentBase_MoveToTargets, "MoveToTargets" }, // 3032128037
		{ &Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationEnd, "OnManipulationEnd" }, // 3330712459
		{ &Z_Construct_UFunction_UUxtManipulatorComponentBase_OnManipulationStarted, "OnManipulationStarted" }, // 269523452
		{ &Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAboutAxis, "RotateAboutAxis" }, // 3020359735
		{ &Z_Construct_UFunction_UUxtManipulatorComponentBase_RotateAroundPivot, "RotateAroundPivot" }, // 4234184893
		{ &Z_Construct_UFunction_UUxtManipulatorComponentBase_SetInitialTransform, "SetInitialTransform" }, // 4023612073
		{ &Z_Construct_UFunction_UUxtManipulatorComponentBase_SmoothTransform, "SmoothTransform" }, // 3655878630
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Base class for manipulation components that react to pointer interactions.\n *\n * This class does not modify the actor as-is. Implementations should use the provided functions\n * to compute a target transform from grabbing pointers and call the ApplyTargetTransform method\n * to actually modify the actor.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Interactions/UxtManipulatorComponentBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
		{ "ToolTip", "Base class for manipulation components that react to pointer interactions.\n\nThis class does not modify the actor as-is. Implementations should use the provided functions\nto compute a target transform from grabbing pointers and call the ApplyTargetTransform method\nto actually modify the actor." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_bAutoSetInitialTransform_MetaData[] = {
		{ "Category", "Manipulator Component" },
		{ "Comment", "/** If true the initial transform will be set automatically when the component is grabbed. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
		{ "ToolTip", "If true the initial transform will be set automatically when the component is grabbed." },
	};
#endif
	void Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_bAutoSetInitialTransform_SetBit(void* Obj)
	{
		((UUxtManipulatorComponentBase*)Obj)->bAutoSetInitialTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_bAutoSetInitialTransform = { "bAutoSetInitialTransform", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtManipulatorComponentBase), &Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_bAutoSetInitialTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_bAutoSetInitialTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_bAutoSetInitialTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialCameraSpaceTransform_MetaData[] = {
		{ "Category", "Manipulator Component" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialCameraSpaceTransform = { "InitialCameraSpaceTransform", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtManipulatorComponentBase, InitialCameraSpaceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialCameraSpaceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialCameraSpaceTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialTransform_MetaData[] = {
		{ "Category", "Manipulator Component" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtManipulatorComponentBase, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_OnUpdateTransform_MetaData[] = {
		{ "Category", "Manipulator Component" },
		{ "ModuleRelativePath", "Public/Interactions/UxtManipulatorComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_OnUpdateTransform = { "OnUpdateTransform", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtManipulatorComponentBase, OnUpdateTransform), Z_Construct_UDelegateFunction_UXTools_UxtUpdateTransformDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_OnUpdateTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_OnUpdateTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_bAutoSetInitialTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialCameraSpaceTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_InitialTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::NewProp_OnUpdateTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtManipulatorComponentBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::ClassParams = {
		&UUxtManipulatorComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtManipulatorComponentBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtManipulatorComponentBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtManipulatorComponentBase, 2899485543);
	template<> UXTOOLS_API UClass* StaticClass<UUxtManipulatorComponentBase>()
	{
		return UUxtManipulatorComponentBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtManipulatorComponentBase(Z_Construct_UClass_UUxtManipulatorComponentBase, &UUxtManipulatorComponentBase::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtManipulatorComponentBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtManipulatorComponentBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
