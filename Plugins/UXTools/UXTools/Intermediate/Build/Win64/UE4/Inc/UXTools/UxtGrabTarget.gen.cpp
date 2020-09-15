// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtGrabTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtGrabTarget() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtGrabTarget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtNearPointerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IUxtGrabTarget::execOnEndGrab)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndGrab_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtGrabTarget::execOnUpdateGrab)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateGrab_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtGrabTarget::execOnBeginGrab)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginGrab_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtGrabTarget::execOnExitGrabFocus)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitGrabFocus_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtGrabTarget::execOnUpdateGrabFocus)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateGrabFocus_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtGrabTarget::execOnEnterGrabFocus)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnterGrabFocus_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtGrabTarget::execIsGrabFocusable)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Primitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGrabFocusable_Implementation(Z_Param_Primitive);
		P_NATIVE_END;
	}
	bool IUxtGrabTarget::IsGrabFocusable(const UPrimitiveComponent* Primitive)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsGrabFocusable instead.");
		UxtGrabTarget_eventIsGrabFocusable_Parms Parms;
		return Parms.ReturnValue;
	}
	void IUxtGrabTarget::OnBeginGrab(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnBeginGrab instead.");
	}
	void IUxtGrabTarget::OnEndGrab(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEndGrab instead.");
	}
	void IUxtGrabTarget::OnEnterGrabFocus(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEnterGrabFocus instead.");
	}
	void IUxtGrabTarget::OnExitGrabFocus(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnExitGrabFocus instead.");
	}
	void IUxtGrabTarget::OnUpdateGrab(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUpdateGrab instead.");
	}
	void IUxtGrabTarget::OnUpdateGrabFocus(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUpdateGrabFocus instead.");
	}
	void UUxtGrabTarget::StaticRegisterNativesUUxtGrabTarget()
	{
		UClass* Class = UUxtGrabTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsGrabFocusable", &IUxtGrabTarget::execIsGrabFocusable },
			{ "OnBeginGrab", &IUxtGrabTarget::execOnBeginGrab },
			{ "OnEndGrab", &IUxtGrabTarget::execOnEndGrab },
			{ "OnEnterGrabFocus", &IUxtGrabTarget::execOnEnterGrabFocus },
			{ "OnExitGrabFocus", &IUxtGrabTarget::execOnExitGrabFocus },
			{ "OnUpdateGrab", &IUxtGrabTarget::execOnUpdateGrab },
			{ "OnUpdateGrabFocus", &IUxtGrabTarget::execOnUpdateGrabFocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics
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
	void Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtGrabTarget_eventIsGrabFocusable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtGrabTarget_eventIsGrabFocusable_Parms), &Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_Primitive_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_Primitive = { "Primitive", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabTarget_eventIsGrabFocusable_Parms, Primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_Primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_Primitive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::NewProp_Primitive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns true if the given primitive should be considerered a valid focus target. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTarget.h" },
		{ "ToolTip", "Returns true if the given primitive should be considerered a valid focus target." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabTarget, nullptr, "IsGrabFocusable", nullptr, nullptr, sizeof(UxtGrabTarget_eventIsGrabFocusable_Parms), Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabTarget_OnBeginGrab_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTarget_OnBeginGrab_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGrabTarget_OnBeginGrab_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabTarget_eventOnBeginGrab_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTarget_OnBeginGrab_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_OnBeginGrab_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabTarget_OnBeginGrab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTarget_OnBeginGrab_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTarget_OnBeginGrab_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Raised when a pointer starts grabbing while overlapping the actor. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTarget.h" },
		{ "ToolTip", "Raised when a pointer starts grabbing while overlapping the actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabTarget_OnBeginGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabTarget, nullptr, "OnBeginGrab", nullptr, nullptr, sizeof(UxtGrabTarget_eventOnBeginGrab_Parms), Z_Construct_UFunction_UUxtGrabTarget_OnBeginGrab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_OnBeginGrab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTarget_OnBeginGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_OnBeginGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabTarget_OnBeginGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtGrabTarget_OnBeginGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabTarget_OnEndGrab_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTarget_OnEndGrab_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGrabTarget_OnEndGrab_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabTarget_eventOnEndGrab_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTarget_OnEndGrab_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_OnEndGrab_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabTarget_OnEndGrab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTarget_OnEndGrab_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTarget_OnEndGrab_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Raised when a pointer stops grabbing or stops overlapping the actor while grabbing. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTarget.h" },
		{ "ToolTip", "Raised when a pointer stops grabbing or stops overlapping the actor while grabbing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabTarget_OnEndGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabTarget, nullptr, "OnEndGrab", nullptr, nullptr, sizeof(UxtGrabTarget_eventOnEndGrab_Parms), Z_Construct_UFunction_UUxtGrabTarget_OnEndGrab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_OnEndGrab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTarget_OnEndGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_OnEndGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabTarget_OnEndGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtGrabTarget_OnEndGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabTarget_OnEnterGrabFocus_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTarget_OnEnterGrabFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGrabTarget_OnEnterGrabFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabTarget_eventOnEnterGrabFocus_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTarget_OnEnterGrabFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_OnEnterGrabFocus_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabTarget_OnEnterGrabFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTarget_OnEnterGrabFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTarget_OnEnterGrabFocus_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Raised when a pointer focuses the actor. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTarget.h" },
		{ "ToolTip", "Raised when a pointer focuses the actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabTarget_OnEnterGrabFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabTarget, nullptr, "OnEnterGrabFocus", nullptr, nullptr, sizeof(UxtGrabTarget_eventOnEnterGrabFocus_Parms), Z_Construct_UFunction_UUxtGrabTarget_OnEnterGrabFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_OnEnterGrabFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTarget_OnEnterGrabFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_OnEnterGrabFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabTarget_OnEnterGrabFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtGrabTarget_OnEnterGrabFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabTarget_OnExitGrabFocus_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTarget_OnExitGrabFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGrabTarget_OnExitGrabFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabTarget_eventOnExitGrabFocus_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTarget_OnExitGrabFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_OnExitGrabFocus_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabTarget_OnExitGrabFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTarget_OnExitGrabFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTarget_OnExitGrabFocus_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Raised when a pointer stops focusing the actor. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTarget.h" },
		{ "ToolTip", "Raised when a pointer stops focusing the actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabTarget_OnExitGrabFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabTarget, nullptr, "OnExitGrabFocus", nullptr, nullptr, sizeof(UxtGrabTarget_eventOnExitGrabFocus_Parms), Z_Construct_UFunction_UUxtGrabTarget_OnExitGrabFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_OnExitGrabFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTarget_OnExitGrabFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_OnExitGrabFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabTarget_OnExitGrabFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtGrabTarget_OnExitGrabFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrab_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrab_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrab_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabTarget_eventOnUpdateGrab_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrab_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrab_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrab_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrab_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Raised when a pointer has been updated while grabbing. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTarget.h" },
		{ "ToolTip", "Raised when a pointer has been updated while grabbing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabTarget, nullptr, "OnUpdateGrab", nullptr, nullptr, sizeof(UxtGrabTarget_eventOnUpdateGrab_Parms), Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrabFocus_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrabFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrabFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtGrabTarget_eventOnUpdateGrabFocus_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrabFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrabFocus_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrabFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrabFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrabFocus_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Raised when a pointer has been updated while focused. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTarget.h" },
		{ "ToolTip", "Raised when a pointer has been updated while focused." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrabFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtGrabTarget, nullptr, "OnUpdateGrabFocus", nullptr, nullptr, sizeof(UxtGrabTarget_eventOnUpdateGrabFocus_Parms), Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrabFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrabFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrabFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrabFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrabFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrabFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtGrabTarget_NoRegister()
	{
		return UUxtGrabTarget::StaticClass();
	}
	struct Z_Construct_UClass_UUxtGrabTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtGrabTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtGrabTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtGrabTarget_IsGrabFocusable, "IsGrabFocusable" }, // 921764589
		{ &Z_Construct_UFunction_UUxtGrabTarget_OnBeginGrab, "OnBeginGrab" }, // 1891818639
		{ &Z_Construct_UFunction_UUxtGrabTarget_OnEndGrab, "OnEndGrab" }, // 1947280369
		{ &Z_Construct_UFunction_UUxtGrabTarget_OnEnterGrabFocus, "OnEnterGrabFocus" }, // 2493860171
		{ &Z_Construct_UFunction_UUxtGrabTarget_OnExitGrabFocus, "OnExitGrabFocus" }, // 2888139186
		{ &Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrab, "OnUpdateGrab" }, // 557492428
		{ &Z_Construct_UFunction_UUxtGrabTarget_OnUpdateGrabFocus, "OnUpdateGrabFocus" }, // 427673188
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtGrabTarget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interactions/UxtGrabTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtGrabTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUxtGrabTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtGrabTarget_Statics::ClassParams = {
		&UUxtGrabTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUxtGrabTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtGrabTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtGrabTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtGrabTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtGrabTarget, 1981339733);
	template<> UXTOOLS_API UClass* StaticClass<UUxtGrabTarget>()
	{
		return UUxtGrabTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtGrabTarget(Z_Construct_UClass_UUxtGrabTarget, &UUxtGrabTarget::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtGrabTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtGrabTarget);
	static FName NAME_UUxtGrabTarget_IsGrabFocusable = FName(TEXT("IsGrabFocusable"));
	bool IUxtGrabTarget::Execute_IsGrabFocusable(UObject* O, const UPrimitiveComponent* Primitive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtGrabTarget::StaticClass()));
		UxtGrabTarget_eventIsGrabFocusable_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtGrabTarget_IsGrabFocusable);
		if (Func)
		{
			Parms.Primitive=Primitive;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtGrabTarget*)(O->GetNativeInterfaceAddress(UUxtGrabTarget::StaticClass())))
		{
			Parms.ReturnValue = I->IsGrabFocusable_Implementation(Primitive);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UUxtGrabTarget_OnBeginGrab = FName(TEXT("OnBeginGrab"));
	void IUxtGrabTarget::Execute_OnBeginGrab(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtGrabTarget::StaticClass()));
		UxtGrabTarget_eventOnBeginGrab_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtGrabTarget_OnBeginGrab);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtGrabTarget*)(O->GetNativeInterfaceAddress(UUxtGrabTarget::StaticClass())))
		{
			I->OnBeginGrab_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtGrabTarget_OnEndGrab = FName(TEXT("OnEndGrab"));
	void IUxtGrabTarget::Execute_OnEndGrab(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtGrabTarget::StaticClass()));
		UxtGrabTarget_eventOnEndGrab_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtGrabTarget_OnEndGrab);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtGrabTarget*)(O->GetNativeInterfaceAddress(UUxtGrabTarget::StaticClass())))
		{
			I->OnEndGrab_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtGrabTarget_OnEnterGrabFocus = FName(TEXT("OnEnterGrabFocus"));
	void IUxtGrabTarget::Execute_OnEnterGrabFocus(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtGrabTarget::StaticClass()));
		UxtGrabTarget_eventOnEnterGrabFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtGrabTarget_OnEnterGrabFocus);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtGrabTarget*)(O->GetNativeInterfaceAddress(UUxtGrabTarget::StaticClass())))
		{
			I->OnEnterGrabFocus_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtGrabTarget_OnExitGrabFocus = FName(TEXT("OnExitGrabFocus"));
	void IUxtGrabTarget::Execute_OnExitGrabFocus(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtGrabTarget::StaticClass()));
		UxtGrabTarget_eventOnExitGrabFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtGrabTarget_OnExitGrabFocus);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtGrabTarget*)(O->GetNativeInterfaceAddress(UUxtGrabTarget::StaticClass())))
		{
			I->OnExitGrabFocus_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtGrabTarget_OnUpdateGrab = FName(TEXT("OnUpdateGrab"));
	void IUxtGrabTarget::Execute_OnUpdateGrab(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtGrabTarget::StaticClass()));
		UxtGrabTarget_eventOnUpdateGrab_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtGrabTarget_OnUpdateGrab);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtGrabTarget*)(O->GetNativeInterfaceAddress(UUxtGrabTarget::StaticClass())))
		{
			I->OnUpdateGrab_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtGrabTarget_OnUpdateGrabFocus = FName(TEXT("OnUpdateGrabFocus"));
	void IUxtGrabTarget::Execute_OnUpdateGrabFocus(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtGrabTarget::StaticClass()));
		UxtGrabTarget_eventOnUpdateGrabFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtGrabTarget_OnUpdateGrabFocus);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtGrabTarget*)(O->GetNativeInterfaceAddress(UUxtGrabTarget::StaticClass())))
		{
			I->OnUpdateGrabFocus_Implementation(Pointer);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
