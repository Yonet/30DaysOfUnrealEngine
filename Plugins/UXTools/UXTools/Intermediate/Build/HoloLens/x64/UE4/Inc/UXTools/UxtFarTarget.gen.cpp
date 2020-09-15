// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtFarTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtFarTarget() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarTarget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarPointerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IUxtFarTarget::execOnFarReleased)
	{
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFarReleased_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtFarTarget::execOnFarDragged)
	{
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFarDragged_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtFarTarget::execOnFarPressed)
	{
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFarPressed_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtFarTarget::execOnExitFarFocus)
	{
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitFarFocus_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtFarTarget::execOnUpdatedFarFocus)
	{
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdatedFarFocus_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtFarTarget::execOnEnterFarFocus)
	{
		P_GET_OBJECT(UUxtFarPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnterFarFocus_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtFarTarget::execIsFarFocusable)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Primitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFarFocusable_Implementation(Z_Param_Primitive);
		P_NATIVE_END;
	}
	bool IUxtFarTarget::IsFarFocusable(const UPrimitiveComponent* Primitive)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsFarFocusable instead.");
		UxtFarTarget_eventIsFarFocusable_Parms Parms;
		return Parms.ReturnValue;
	}
	void IUxtFarTarget::OnEnterFarFocus(UUxtFarPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEnterFarFocus instead.");
	}
	void IUxtFarTarget::OnExitFarFocus(UUxtFarPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnExitFarFocus instead.");
	}
	void IUxtFarTarget::OnFarDragged(UUxtFarPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnFarDragged instead.");
	}
	void IUxtFarTarget::OnFarPressed(UUxtFarPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnFarPressed instead.");
	}
	void IUxtFarTarget::OnFarReleased(UUxtFarPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnFarReleased instead.");
	}
	void IUxtFarTarget::OnUpdatedFarFocus(UUxtFarPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUpdatedFarFocus instead.");
	}
	void UUxtFarTarget::StaticRegisterNativesUUxtFarTarget()
	{
		UClass* Class = UUxtFarTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsFarFocusable", &IUxtFarTarget::execIsFarFocusable },
			{ "OnEnterFarFocus", &IUxtFarTarget::execOnEnterFarFocus },
			{ "OnExitFarFocus", &IUxtFarTarget::execOnExitFarFocus },
			{ "OnFarDragged", &IUxtFarTarget::execOnFarDragged },
			{ "OnFarPressed", &IUxtFarTarget::execOnFarPressed },
			{ "OnFarReleased", &IUxtFarTarget::execOnFarReleased },
			{ "OnUpdatedFarFocus", &IUxtFarTarget::execOnUpdatedFarFocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Primitive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Primitive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtFarTarget_eventIsFarFocusable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtFarTarget_eventIsFarFocusable_Parms), &Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::NewProp_Primitive_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::NewProp_Primitive = { "Primitive", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarTarget_eventIsFarFocusable_Parms, Primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::NewProp_Primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::NewProp_Primitive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::NewProp_Primitive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns true if the given primitive should be considerered a valid focus target. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtFarTarget.h" },
		{ "ToolTip", "Returns true if the given primitive should be considerered a valid focus target." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarTarget, nullptr, "IsFarFocusable", nullptr, nullptr, sizeof(UxtFarTarget_eventIsFarFocusable_Parms), Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtFarTarget_OnEnterFarFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarTarget_OnEnterFarFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarTarget_OnEnterFarFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarTarget_eventOnEnterFarFocus_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarTarget_OnEnterFarFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_OnEnterFarFocus_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarTarget_OnEnterFarFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarTarget_OnEnterFarFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarTarget_OnEnterFarFocus_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Raised when a far pointer starts focusing a primitive. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtFarTarget.h" },
		{ "ToolTip", "Raised when a far pointer starts focusing a primitive." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarTarget_OnEnterFarFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarTarget, nullptr, "OnEnterFarFocus", nullptr, nullptr, sizeof(UxtFarTarget_eventOnEnterFarFocus_Parms), Z_Construct_UFunction_UUxtFarTarget_OnEnterFarFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_OnEnterFarFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarTarget_OnEnterFarFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_OnEnterFarFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarTarget_OnEnterFarFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFarTarget_OnEnterFarFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtFarTarget_OnExitFarFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarTarget_OnExitFarFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarTarget_OnExitFarFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarTarget_eventOnExitFarFocus_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarTarget_OnExitFarFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_OnExitFarFocus_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarTarget_OnExitFarFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarTarget_OnExitFarFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarTarget_OnExitFarFocus_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Raised when a far pointer stops focusing a primitive. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtFarTarget.h" },
		{ "ToolTip", "Raised when a far pointer stops focusing a primitive." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarTarget_OnExitFarFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarTarget, nullptr, "OnExitFarFocus", nullptr, nullptr, sizeof(UxtFarTarget_eventOnExitFarFocus_Parms), Z_Construct_UFunction_UUxtFarTarget_OnExitFarFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_OnExitFarFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarTarget_OnExitFarFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_OnExitFarFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarTarget_OnExitFarFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFarTarget_OnExitFarFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtFarTarget_OnFarDragged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarTarget_OnFarDragged_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarTarget_OnFarDragged_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarTarget_eventOnFarDragged_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarTarget_OnFarDragged_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_OnFarDragged_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarTarget_OnFarDragged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarTarget_OnFarDragged_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarTarget_OnFarDragged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Raised when a focusing far pointer is dragged. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtFarTarget.h" },
		{ "ToolTip", "Raised when a focusing far pointer is dragged." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarTarget_OnFarDragged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarTarget, nullptr, "OnFarDragged", nullptr, nullptr, sizeof(UxtFarTarget_eventOnFarDragged_Parms), Z_Construct_UFunction_UUxtFarTarget_OnFarDragged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_OnFarDragged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarTarget_OnFarDragged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_OnFarDragged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarTarget_OnFarDragged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFarTarget_OnFarDragged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtFarTarget_OnFarPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarTarget_OnFarPressed_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarTarget_OnFarPressed_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarTarget_eventOnFarPressed_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarTarget_OnFarPressed_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_OnFarPressed_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarTarget_OnFarPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarTarget_OnFarPressed_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarTarget_OnFarPressed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Raised when a focusing far pointer is pressed. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtFarTarget.h" },
		{ "ToolTip", "Raised when a focusing far pointer is pressed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarTarget_OnFarPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarTarget, nullptr, "OnFarPressed", nullptr, nullptr, sizeof(UxtFarTarget_eventOnFarPressed_Parms), Z_Construct_UFunction_UUxtFarTarget_OnFarPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_OnFarPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarTarget_OnFarPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_OnFarPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarTarget_OnFarPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFarTarget_OnFarPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtFarTarget_OnFarReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarTarget_OnFarReleased_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarTarget_OnFarReleased_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarTarget_eventOnFarReleased_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarTarget_OnFarReleased_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_OnFarReleased_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarTarget_OnFarReleased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarTarget_OnFarReleased_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarTarget_OnFarReleased_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Raised when a focusing far pointer is released. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtFarTarget.h" },
		{ "ToolTip", "Raised when a focusing far pointer is released." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarTarget_OnFarReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarTarget, nullptr, "OnFarReleased", nullptr, nullptr, sizeof(UxtFarTarget_eventOnFarReleased_Parms), Z_Construct_UFunction_UUxtFarTarget_OnFarReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_OnFarReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarTarget_OnFarReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_OnFarReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarTarget_OnFarReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFarTarget_OnFarReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtFarTarget_OnUpdatedFarFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pointer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarTarget_OnUpdatedFarFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFarTarget_OnUpdatedFarFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFarTarget_eventOnUpdatedFarFocus_Parms, Pointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarTarget_OnUpdatedFarFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_OnUpdatedFarFocus_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFarTarget_OnUpdatedFarFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFarTarget_OnUpdatedFarFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFarTarget_OnUpdatedFarFocus_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Raised when a focusing far pointer is updated. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtFarTarget.h" },
		{ "ToolTip", "Raised when a focusing far pointer is updated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFarTarget_OnUpdatedFarFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFarTarget, nullptr, "OnUpdatedFarFocus", nullptr, nullptr, sizeof(UxtFarTarget_eventOnUpdatedFarFocus_Parms), Z_Construct_UFunction_UUxtFarTarget_OnUpdatedFarFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_OnUpdatedFarFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFarTarget_OnUpdatedFarFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFarTarget_OnUpdatedFarFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFarTarget_OnUpdatedFarFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFarTarget_OnUpdatedFarFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtFarTarget_NoRegister()
	{
		return UUxtFarTarget::StaticClass();
	}
	struct Z_Construct_UClass_UUxtFarTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtFarTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtFarTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtFarTarget_IsFarFocusable, "IsFarFocusable" }, // 3099022043
		{ &Z_Construct_UFunction_UUxtFarTarget_OnEnterFarFocus, "OnEnterFarFocus" }, // 4238130898
		{ &Z_Construct_UFunction_UUxtFarTarget_OnExitFarFocus, "OnExitFarFocus" }, // 3517371381
		{ &Z_Construct_UFunction_UUxtFarTarget_OnFarDragged, "OnFarDragged" }, // 1231901249
		{ &Z_Construct_UFunction_UUxtFarTarget_OnFarPressed, "OnFarPressed" }, // 3797402735
		{ &Z_Construct_UFunction_UUxtFarTarget_OnFarReleased, "OnFarReleased" }, // 200625842
		{ &Z_Construct_UFunction_UUxtFarTarget_OnUpdatedFarFocus, "OnUpdatedFarFocus" }, // 447201675
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFarTarget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interactions/UxtFarTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtFarTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUxtFarTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtFarTarget_Statics::ClassParams = {
		&UUxtFarTarget::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtFarTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFarTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtFarTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtFarTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtFarTarget, 3318717694);
	template<> UXTOOLS_API UClass* StaticClass<UUxtFarTarget>()
	{
		return UUxtFarTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtFarTarget(Z_Construct_UClass_UUxtFarTarget, &UUxtFarTarget::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtFarTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtFarTarget);
	static FName NAME_UUxtFarTarget_IsFarFocusable = FName(TEXT("IsFarFocusable"));
	bool IUxtFarTarget::Execute_IsFarFocusable(UObject* O, const UPrimitiveComponent* Primitive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtFarTarget::StaticClass()));
		UxtFarTarget_eventIsFarFocusable_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtFarTarget_IsFarFocusable);
		if (Func)
		{
			Parms.Primitive=Primitive;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtFarTarget*)(O->GetNativeInterfaceAddress(UUxtFarTarget::StaticClass())))
		{
			Parms.ReturnValue = I->IsFarFocusable_Implementation(Primitive);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UUxtFarTarget_OnEnterFarFocus = FName(TEXT("OnEnterFarFocus"));
	void IUxtFarTarget::Execute_OnEnterFarFocus(UObject* O, UUxtFarPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtFarTarget::StaticClass()));
		UxtFarTarget_eventOnEnterFarFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtFarTarget_OnEnterFarFocus);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtFarTarget*)(O->GetNativeInterfaceAddress(UUxtFarTarget::StaticClass())))
		{
			I->OnEnterFarFocus_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtFarTarget_OnExitFarFocus = FName(TEXT("OnExitFarFocus"));
	void IUxtFarTarget::Execute_OnExitFarFocus(UObject* O, UUxtFarPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtFarTarget::StaticClass()));
		UxtFarTarget_eventOnExitFarFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtFarTarget_OnExitFarFocus);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtFarTarget*)(O->GetNativeInterfaceAddress(UUxtFarTarget::StaticClass())))
		{
			I->OnExitFarFocus_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtFarTarget_OnFarDragged = FName(TEXT("OnFarDragged"));
	void IUxtFarTarget::Execute_OnFarDragged(UObject* O, UUxtFarPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtFarTarget::StaticClass()));
		UxtFarTarget_eventOnFarDragged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtFarTarget_OnFarDragged);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtFarTarget*)(O->GetNativeInterfaceAddress(UUxtFarTarget::StaticClass())))
		{
			I->OnFarDragged_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtFarTarget_OnFarPressed = FName(TEXT("OnFarPressed"));
	void IUxtFarTarget::Execute_OnFarPressed(UObject* O, UUxtFarPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtFarTarget::StaticClass()));
		UxtFarTarget_eventOnFarPressed_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtFarTarget_OnFarPressed);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtFarTarget*)(O->GetNativeInterfaceAddress(UUxtFarTarget::StaticClass())))
		{
			I->OnFarPressed_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtFarTarget_OnFarReleased = FName(TEXT("OnFarReleased"));
	void IUxtFarTarget::Execute_OnFarReleased(UObject* O, UUxtFarPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtFarTarget::StaticClass()));
		UxtFarTarget_eventOnFarReleased_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtFarTarget_OnFarReleased);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtFarTarget*)(O->GetNativeInterfaceAddress(UUxtFarTarget::StaticClass())))
		{
			I->OnFarReleased_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtFarTarget_OnUpdatedFarFocus = FName(TEXT("OnUpdatedFarFocus"));
	void IUxtFarTarget::Execute_OnUpdatedFarFocus(UObject* O, UUxtFarPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtFarTarget::StaticClass()));
		UxtFarTarget_eventOnUpdatedFarFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtFarTarget_OnUpdatedFarFocus);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtFarTarget*)(O->GetNativeInterfaceAddress(UUxtFarTarget::StaticClass())))
		{
			I->OnUpdatedFarFocus_Implementation(Pointer);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
