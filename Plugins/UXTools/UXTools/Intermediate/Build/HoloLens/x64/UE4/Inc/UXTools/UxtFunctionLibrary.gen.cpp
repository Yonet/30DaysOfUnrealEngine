// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Utils/UxtFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtFunctionLibrary() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFunctionLibrary_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUxtFunctionLibrary::execIsInEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUxtFunctionLibrary::IsInEditor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtFunctionLibrary::execGetHeadPose)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UUxtFunctionLibrary::GetHeadPose(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UUxtFunctionLibrary::StaticRegisterNativesUUxtFunctionLibrary()
	{
		UClass* Class = UUxtFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeadPose", &UUxtFunctionLibrary::execGetHeadPose },
			{ "IsInEditor", &UUxtFunctionLibrary::execIsInEditor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtFunctionLibrary_GetHeadPose_Statics
	{
		struct UxtFunctionLibrary_eventGetHeadPose_Parms
		{
			UObject* WorldContextObject;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtFunctionLibrary_GetHeadPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFunctionLibrary_eventGetHeadPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtFunctionLibrary_GetHeadPose_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtFunctionLibrary_eventGetHeadPose_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFunctionLibrary_GetHeadPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFunctionLibrary_GetHeadPose_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFunctionLibrary_GetHeadPose_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFunctionLibrary_GetHeadPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools" },
		{ "Comment", "/** Returns the world space position and orientation of the head. */" },
		{ "ModuleRelativePath", "Public/Utils/UxtFunctionLibrary.h" },
		{ "ToolTip", "Returns the world space position and orientation of the head." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFunctionLibrary_GetHeadPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFunctionLibrary, nullptr, "GetHeadPose", nullptr, nullptr, sizeof(UxtFunctionLibrary_eventGetHeadPose_Parms), Z_Construct_UFunction_UUxtFunctionLibrary_GetHeadPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFunctionLibrary_GetHeadPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFunctionLibrary_GetHeadPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFunctionLibrary_GetHeadPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFunctionLibrary_GetHeadPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFunctionLibrary_GetHeadPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtFunctionLibrary_IsInEditor_Statics
	{
		struct UxtFunctionLibrary_eventIsInEditor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtFunctionLibrary_IsInEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtFunctionLibrary_eventIsInEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtFunctionLibrary_IsInEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtFunctionLibrary_eventIsInEditor_Parms), &Z_Construct_UFunction_UUxtFunctionLibrary_IsInEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtFunctionLibrary_IsInEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtFunctionLibrary_IsInEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtFunctionLibrary_IsInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools" },
		{ "Comment", "/** Returns true if we are running in editor (not game mode or VR preview). */" },
		{ "ModuleRelativePath", "Public/Utils/UxtFunctionLibrary.h" },
		{ "ToolTip", "Returns true if we are running in editor (not game mode or VR preview)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtFunctionLibrary_IsInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtFunctionLibrary, nullptr, "IsInEditor", nullptr, nullptr, sizeof(UxtFunctionLibrary_eventIsInEditor_Parms), Z_Construct_UFunction_UUxtFunctionLibrary_IsInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFunctionLibrary_IsInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtFunctionLibrary_IsInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtFunctionLibrary_IsInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtFunctionLibrary_IsInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtFunctionLibrary_IsInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtFunctionLibrary_NoRegister()
	{
		return UUxtFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUxtFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtFunctionLibrary_GetHeadPose, "GetHeadPose" }, // 646477914
		{ &Z_Construct_UFunction_UUxtFunctionLibrary_IsInEditor, "IsInEditor" }, // 1512018642
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Library of utility functions for UX Tools.\n */" },
		{ "IncludePath", "Utils/UxtFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Utils/UxtFunctionLibrary.h" },
		{ "ToolTip", "Library of utility functions for UX Tools." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtFunctionLibrary_Statics::ClassParams = {
		&UUxtFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUxtFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtFunctionLibrary, 4293184697);
	template<> UXTOOLS_API UClass* StaticClass<UUxtFunctionLibrary>()
	{
		return UUxtFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtFunctionLibrary(Z_Construct_UClass_UUxtFunctionLibrary, &UUxtFunctionLibrary::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
