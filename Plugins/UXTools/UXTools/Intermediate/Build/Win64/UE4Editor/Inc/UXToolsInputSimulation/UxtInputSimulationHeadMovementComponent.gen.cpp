// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXToolsInputSimulation/Public/UxtInputSimulationHeadMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtInputSimulationHeadMovementComponent() {}
// Cross Module References
	UXTOOLSINPUTSIMULATION_API UClass* Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_NoRegister();
	UXTOOLSINPUTSIMULATION_API UClass* Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	UPackage* Z_Construct_UPackage__Script_UXToolsInputSimulation();
// End Cross Module References
	DEFINE_FUNCTION(UUxtInputSimulationHeadMovementComponent::execSetHeadMovementEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeadMovementEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInputSimulationHeadMovementComponent::execIsHeadMovementEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHeadMovementEnabled();
		P_NATIVE_END;
	}
	void UUxtInputSimulationHeadMovementComponent::StaticRegisterNativesUUxtInputSimulationHeadMovementComponent()
	{
		UClass* Class = UUxtInputSimulationHeadMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsHeadMovementEnabled", &UUxtInputSimulationHeadMovementComponent::execIsHeadMovementEnabled },
			{ "SetHeadMovementEnabled", &UUxtInputSimulationHeadMovementComponent::execSetHeadMovementEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics
	{
		struct UxtInputSimulationHeadMovementComponent_eventIsHeadMovementEnabled_Parms
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
	void Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtInputSimulationHeadMovementComponent_eventIsHeadMovementEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtInputSimulationHeadMovementComponent_eventIsHeadMovementEnabled_Parms), &Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationHeadMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent, nullptr, "IsHeadMovementEnabled", nullptr, nullptr, sizeof(UxtInputSimulationHeadMovementComponent_eventIsHeadMovementEnabled_Parms), Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_IsHeadMovementEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_IsHeadMovementEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics
	{
		struct UxtInputSimulationHeadMovementComponent_eventSetHeadMovementEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((UxtInputSimulationHeadMovementComponent_eventSetHeadMovementEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtInputSimulationHeadMovementComponent_eventSetHeadMovementEnabled_Parms), &Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationHeadMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent, nullptr, "SetHeadMovementEnabled", nullptr, nullptr, sizeof(UxtInputSimulationHeadMovementComponent_eventSetHeadMovementEnabled_Parms), Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_SetHeadMovementEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_SetHeadMovementEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_NoRegister()
	{
		return UUxtInputSimulationHeadMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHeadMovement_MetaData[];
#endif
		static void NewProp_bEnableHeadMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHeadMovement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXToolsInputSimulation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_IsHeadMovementEnabled, "IsHeadMovementEnabled" }, // 4197831600
		{ &Z_Construct_UFunction_UUxtInputSimulationHeadMovementComponent_SetHeadMovementEnabled, "SetHeadMovementEnabled" }, // 779709710
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/** Movement component that applies user input.\n *  Works similar to UFloatingPawnMovement, but does not require a APawn actor.\n */" },
		{ "IncludePath", "UxtInputSimulationHeadMovementComponent.h" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationHeadMovementComponent.h" },
		{ "ToolTip", "Movement component that applies user input.\nWorks similar to UFloatingPawnMovement, but does not require a APawn actor." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_Statics::NewProp_bEnableHeadMovement_MetaData[] = {
		{ "BlueprintGetter", "IsHeadMovementEnabled" },
		{ "BlueprintSetter", "SetHeadMovementEnabled" },
		{ "Category", "InputSimulation" },
		{ "Comment", "/** Enable linear movement of the head position. */" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationHeadMovementComponent.h" },
		{ "ToolTip", "Enable linear movement of the head position." },
	};
#endif
	void Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_Statics::NewProp_bEnableHeadMovement_SetBit(void* Obj)
	{
		((UUxtInputSimulationHeadMovementComponent*)Obj)->bEnableHeadMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_Statics::NewProp_bEnableHeadMovement = { "bEnableHeadMovement", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtInputSimulationHeadMovementComponent), &Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_Statics::NewProp_bEnableHeadMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_Statics::NewProp_bEnableHeadMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_Statics::NewProp_bEnableHeadMovement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_Statics::NewProp_bEnableHeadMovement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtInputSimulationHeadMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_Statics::ClassParams = {
		&UUxtInputSimulationHeadMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtInputSimulationHeadMovementComponent, 1771790394);
	template<> UXTOOLSINPUTSIMULATION_API UClass* StaticClass<UUxtInputSimulationHeadMovementComponent>()
	{
		return UUxtInputSimulationHeadMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtInputSimulationHeadMovementComponent(Z_Construct_UClass_UUxtInputSimulationHeadMovementComponent, &UUxtInputSimulationHeadMovementComponent::StaticClass, TEXT("/Script/UXToolsInputSimulation"), TEXT("UUxtInputSimulationHeadMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtInputSimulationHeadMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
