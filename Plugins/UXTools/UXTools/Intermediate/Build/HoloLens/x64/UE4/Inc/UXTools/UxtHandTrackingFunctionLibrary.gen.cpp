// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/HandTracking/UxtHandTrackingFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtHandTrackingFunctionLibrary() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtHandTrackingFunctionLibrary_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtHandTrackingFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtHandJoint();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
// End Cross Module References
	DEFINE_FUNCTION(UUxtHandTrackingFunctionLibrary::execIsHandTracked)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUxtHandTrackingFunctionLibrary::IsHandTracked(EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtHandTrackingFunctionLibrary::execGetIsHandSelectPressed)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_UBOOL_REF(Z_Param_Out_OutIsSelectPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUxtHandTrackingFunctionLibrary::GetIsHandSelectPressed(EControllerHand(Z_Param_Hand),Z_Param_Out_OutIsSelectPressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtHandTrackingFunctionLibrary::execGetIsHandGrabbing)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_UBOOL_REF(Z_Param_Out_OutIsGrabbing);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUxtHandTrackingFunctionLibrary::GetIsHandGrabbing(EControllerHand(Z_Param_Hand),Z_Param_Out_OutIsGrabbing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtHandTrackingFunctionLibrary::execGetHandPointerPose)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_OutOrientation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUxtHandTrackingFunctionLibrary::GetHandPointerPose(EControllerHand(Z_Param_Hand),Z_Param_Out_OutOrientation,Z_Param_Out_OutPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtHandTrackingFunctionLibrary::execGetHandJointState)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_ENUM(EUxtHandJoint,Z_Param_Joint);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_OutOrientation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUxtHandTrackingFunctionLibrary::GetHandJointState(EControllerHand(Z_Param_Hand),EUxtHandJoint(Z_Param_Joint),Z_Param_Out_OutOrientation,Z_Param_Out_OutPosition,Z_Param_Out_OutRadius);
		P_NATIVE_END;
	}
	void UUxtHandTrackingFunctionLibrary::StaticRegisterNativesUUxtHandTrackingFunctionLibrary()
	{
		UClass* Class = UUxtHandTrackingFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHandJointState", &UUxtHandTrackingFunctionLibrary::execGetHandJointState },
			{ "GetHandPointerPose", &UUxtHandTrackingFunctionLibrary::execGetHandPointerPose },
			{ "GetIsHandGrabbing", &UUxtHandTrackingFunctionLibrary::execGetIsHandGrabbing },
			{ "GetIsHandSelectPressed", &UUxtHandTrackingFunctionLibrary::execGetIsHandSelectPressed },
			{ "IsHandTracked", &UUxtHandTrackingFunctionLibrary::execIsHandTracked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics
	{
		struct UxtHandTrackingFunctionLibrary_eventGetHandJointState_Parms
		{
			EControllerHand Hand;
			EUxtHandJoint Joint;
			FQuat OutOrientation;
			FVector OutPosition;
			float OutRadius;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRadius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutOrientation;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Joint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Joint_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtHandTrackingFunctionLibrary_eventGetHandJointState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtHandTrackingFunctionLibrary_eventGetHandJointState_Parms), &Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::NewProp_OutRadius = { "OutRadius", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandTrackingFunctionLibrary_eventGetHandJointState_Parms, OutRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandTrackingFunctionLibrary_eventGetHandJointState_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::NewProp_OutOrientation = { "OutOrientation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandTrackingFunctionLibrary_eventGetHandJointState_Parms, OutOrientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::NewProp_Joint = { "Joint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandTrackingFunctionLibrary_eventGetHandJointState_Parms, Joint), Z_Construct_UEnum_UXTools_EUxtHandJoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::NewProp_Joint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandTrackingFunctionLibrary_eventGetHandJointState_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::NewProp_OutRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::NewProp_OutPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::NewProp_OutOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::NewProp_Joint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::NewProp_Joint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|UXTools" },
		{ "Comment", "/** Obtain the state of the given joint. Returns false if the hand is not currently tracked, in which case the values of the output parameters are unchanged. */" },
		{ "ModuleRelativePath", "Public/HandTracking/UxtHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Obtain the state of the given joint. Returns false if the hand is not currently tracked, in which case the values of the output parameters are unchanged." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtHandTrackingFunctionLibrary, nullptr, "GetHandJointState", nullptr, nullptr, sizeof(UxtHandTrackingFunctionLibrary_eventGetHandJointState_Parms), Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics
	{
		struct UxtHandTrackingFunctionLibrary_eventGetHandPointerPose_Parms
		{
			EControllerHand Hand;
			FQuat OutOrientation;
			FVector OutPosition;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutOrientation;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtHandTrackingFunctionLibrary_eventGetHandPointerPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtHandTrackingFunctionLibrary_eventGetHandPointerPose_Parms), &Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandTrackingFunctionLibrary_eventGetHandPointerPose_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::NewProp_OutOrientation = { "OutOrientation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandTrackingFunctionLibrary_eventGetHandPointerPose_Parms, OutOrientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandTrackingFunctionLibrary_eventGetHandPointerPose_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::NewProp_OutPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::NewProp_OutOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|UXTools" },
		{ "Comment", "/** Obtain the pointer pose. Returns false if the hand is not tracked this frame, in which case the value of the output parameter is unchanged. */" },
		{ "ModuleRelativePath", "Public/HandTracking/UxtHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Obtain the pointer pose. Returns false if the hand is not tracked this frame, in which case the value of the output parameter is unchanged." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtHandTrackingFunctionLibrary, nullptr, "GetHandPointerPose", nullptr, nullptr, sizeof(UxtHandTrackingFunctionLibrary_eventGetHandPointerPose_Parms), Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics
	{
		struct UxtHandTrackingFunctionLibrary_eventGetIsHandGrabbing_Parms
		{
			EControllerHand Hand;
			bool OutIsGrabbing;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_OutIsGrabbing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OutIsGrabbing;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtHandTrackingFunctionLibrary_eventGetIsHandGrabbing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtHandTrackingFunctionLibrary_eventGetIsHandGrabbing_Parms), &Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::NewProp_OutIsGrabbing_SetBit(void* Obj)
	{
		((UxtHandTrackingFunctionLibrary_eventGetIsHandGrabbing_Parms*)Obj)->OutIsGrabbing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::NewProp_OutIsGrabbing = { "OutIsGrabbing", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtHandTrackingFunctionLibrary_eventGetIsHandGrabbing_Parms), &Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::NewProp_OutIsGrabbing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandTrackingFunctionLibrary_eventGetIsHandGrabbing_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::NewProp_OutIsGrabbing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|UXTools" },
		{ "Comment", "/** Obtain current grabbed state. Returns false if the hand is not currently tracked, in which case the value of the output parameter is unchanged. */" },
		{ "ModuleRelativePath", "Public/HandTracking/UxtHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Obtain current grabbed state. Returns false if the hand is not currently tracked, in which case the value of the output parameter is unchanged." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtHandTrackingFunctionLibrary, nullptr, "GetIsHandGrabbing", nullptr, nullptr, sizeof(UxtHandTrackingFunctionLibrary_eventGetIsHandGrabbing_Parms), Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics
	{
		struct UxtHandTrackingFunctionLibrary_eventGetIsHandSelectPressed_Parms
		{
			EControllerHand Hand;
			bool OutIsSelectPressed;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_OutIsSelectPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OutIsSelectPressed;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtHandTrackingFunctionLibrary_eventGetIsHandSelectPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtHandTrackingFunctionLibrary_eventGetIsHandSelectPressed_Parms), &Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::NewProp_OutIsSelectPressed_SetBit(void* Obj)
	{
		((UxtHandTrackingFunctionLibrary_eventGetIsHandSelectPressed_Parms*)Obj)->OutIsSelectPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::NewProp_OutIsSelectPressed = { "OutIsSelectPressed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtHandTrackingFunctionLibrary_eventGetIsHandSelectPressed_Parms), &Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::NewProp_OutIsSelectPressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandTrackingFunctionLibrary_eventGetIsHandSelectPressed_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::NewProp_OutIsSelectPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|UXTools" },
		{ "Comment", "/** Obtain current selection state. Returns false if the hand is not currently tracked, in which case the value of the output parameter is unchanged. */" },
		{ "ModuleRelativePath", "Public/HandTracking/UxtHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Obtain current selection state. Returns false if the hand is not currently tracked, in which case the value of the output parameter is unchanged." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtHandTrackingFunctionLibrary, nullptr, "GetIsHandSelectPressed", nullptr, nullptr, sizeof(UxtHandTrackingFunctionLibrary_eventGetIsHandSelectPressed_Parms), Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_IsHandTracked_Statics
	{
		struct UxtHandTrackingFunctionLibrary_eventIsHandTracked_Parms
		{
			EControllerHand Hand;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_IsHandTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtHandTrackingFunctionLibrary_eventIsHandTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_IsHandTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtHandTrackingFunctionLibrary_eventIsHandTracked_Parms), &Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_IsHandTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_IsHandTracked_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandTrackingFunctionLibrary_eventIsHandTracked_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_IsHandTracked_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_IsHandTracked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_IsHandTracked_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_IsHandTracked_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_IsHandTracked_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_IsHandTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|UXTools" },
		{ "Comment", "/** Returns whether the given hand is tracked. */" },
		{ "ModuleRelativePath", "Public/HandTracking/UxtHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Returns whether the given hand is tracked." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_IsHandTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtHandTrackingFunctionLibrary, nullptr, "IsHandTracked", nullptr, nullptr, sizeof(UxtHandTrackingFunctionLibrary_eventIsHandTracked_Parms), Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_IsHandTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_IsHandTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_IsHandTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_IsHandTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_IsHandTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_IsHandTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtHandTrackingFunctionLibrary_NoRegister()
	{
		return UUxtHandTrackingFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUxtHandTrackingFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtHandTrackingFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtHandTrackingFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandJointState, "GetHandJointState" }, // 2935679576
		{ &Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetHandPointerPose, "GetHandPointerPose" }, // 712113259
		{ &Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandGrabbing, "GetIsHandGrabbing" }, // 63488174
		{ &Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_GetIsHandSelectPressed, "GetIsHandSelectPressed" }, // 645844334
		{ &Z_Construct_UFunction_UUxtHandTrackingFunctionLibrary_IsHandTracked, "IsHandTracked" }, // 1668075366
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtHandTrackingFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Library of hand tracking functions for UX Tools.\n */" },
		{ "IncludePath", "HandTracking/UxtHandTrackingFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/HandTracking/UxtHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Library of hand tracking functions for UX Tools." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtHandTrackingFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtHandTrackingFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtHandTrackingFunctionLibrary_Statics::ClassParams = {
		&UUxtHandTrackingFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtHandTrackingFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtHandTrackingFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtHandTrackingFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtHandTrackingFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtHandTrackingFunctionLibrary, 3919084569);
	template<> UXTOOLS_API UClass* StaticClass<UUxtHandTrackingFunctionLibrary>()
	{
		return UUxtHandTrackingFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtHandTrackingFunctionLibrary(Z_Construct_UClass_UUxtHandTrackingFunctionLibrary, &UUxtHandTrackingFunctionLibrary::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtHandTrackingFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtHandTrackingFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
