// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Input/UxtHandInteractionActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtHandInteractionActor() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtHandInteractionActor_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_AUxtHandInteractionActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtFarPointerComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtNearPointerComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AUxtHandInteractionActor::execSetRayLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRayLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRayLength(Z_Param_NewRayLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execGetRayLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRayLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execSetRayStartOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRayStartOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRayStartOffset(Z_Param_NewRayStartOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execGetRayStartOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRayStartOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execSetPokeRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPokeRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPokeRadius(Z_Param_NewPokeRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execGetPokeRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPokeRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execSetTraceChannel)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewTraceChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTraceChannel(ECollisionChannel(Z_Param_NewTraceChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execGetTraceChannel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=P_THIS->GetTraceChannel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execSetHand)
	{
		P_GET_ENUM(EControllerHand,Z_Param_NewHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHand(EControllerHand(Z_Param_NewHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUxtHandInteractionActor::execGetHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EControllerHand*)Z_Param__Result=P_THIS->GetHand();
		P_NATIVE_END;
	}
	void AUxtHandInteractionActor::StaticRegisterNativesAUxtHandInteractionActor()
	{
		UClass* Class = AUxtHandInteractionActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHand", &AUxtHandInteractionActor::execGetHand },
			{ "GetPokeRadius", &AUxtHandInteractionActor::execGetPokeRadius },
			{ "GetRayLength", &AUxtHandInteractionActor::execGetRayLength },
			{ "GetRayStartOffset", &AUxtHandInteractionActor::execGetRayStartOffset },
			{ "GetTraceChannel", &AUxtHandInteractionActor::execGetTraceChannel },
			{ "SetHand", &AUxtHandInteractionActor::execSetHand },
			{ "SetPokeRadius", &AUxtHandInteractionActor::execSetPokeRadius },
			{ "SetRayLength", &AUxtHandInteractionActor::execSetRayLength },
			{ "SetRayStartOffset", &AUxtHandInteractionActor::execSetRayStartOffset },
			{ "SetTraceChannel", &AUxtHandInteractionActor::execSetTraceChannel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics
	{
		struct UxtHandInteractionActor_eventGetHand_Parms
		{
			EControllerHand ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventGetHand_Parms, ReturnValue), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "GetHand", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventGetHand_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_GetHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_GetHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics
	{
		struct UxtHandInteractionActor_eventGetPokeRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventGetPokeRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "GetPokeRadius", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventGetPokeRadius_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics
	{
		struct UxtHandInteractionActor_eventGetRayLength_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventGetRayLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "GetRayLength", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventGetRayLength_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics
	{
		struct UxtHandInteractionActor_eventGetRayStartOffset_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventGetRayStartOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "GetRayStartOffset", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventGetRayStartOffset_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics
	{
		struct UxtHandInteractionActor_eventGetTraceChannel_Parms
		{
			TEnumAsByte<ECollisionChannel> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventGetTraceChannel_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "GetTraceChannel", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventGetTraceChannel_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics
	{
		struct UxtHandInteractionActor_eventSetHand_Parms
		{
			EControllerHand NewHand;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewHand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::NewProp_NewHand = { "NewHand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventSetHand_Parms, NewHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::NewProp_NewHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::NewProp_NewHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::NewProp_NewHand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "SetHand", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventSetHand_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_SetHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_SetHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics
	{
		struct UxtHandInteractionActor_eventSetPokeRadius_Parms
		{
			float NewPokeRadius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPokeRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::NewProp_NewPokeRadius = { "NewPokeRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventSetPokeRadius_Parms, NewPokeRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::NewProp_NewPokeRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "SetPokeRadius", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventSetPokeRadius_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics
	{
		struct UxtHandInteractionActor_eventSetRayLength_Parms
		{
			float NewRayLength;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRayLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::NewProp_NewRayLength = { "NewRayLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventSetRayLength_Parms, NewRayLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::NewProp_NewRayLength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "SetRayLength", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventSetRayLength_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics
	{
		struct UxtHandInteractionActor_eventSetRayStartOffset_Parms
		{
			float NewRayStartOffset;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRayStartOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::NewProp_NewRayStartOffset = { "NewRayStartOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventSetRayStartOffset_Parms, NewRayStartOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::NewProp_NewRayStartOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "SetRayStartOffset", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventSetRayStartOffset_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics
	{
		struct UxtHandInteractionActor_eventSetTraceChannel_Parms
		{
			TEnumAsByte<ECollisionChannel> NewTraceChannel;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewTraceChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::NewProp_NewTraceChannel = { "NewTraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtHandInteractionActor_eventSetTraceChannel_Parms, NewTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::NewProp_NewTraceChannel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUxtHandInteractionActor, nullptr, "SetTraceChannel", nullptr, nullptr, sizeof(UxtHandInteractionActor_eventSetTraceChannel_Parms), Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUxtHandInteractionActor_NoRegister()
	{
		return AUxtHandInteractionActor::StaticClass();
	}
	struct Z_Construct_UClass_AUxtHandInteractionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FarPointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FarPointer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NearPointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NearPointer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PokeRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PokeRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayStartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayStartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowNearCursorOnGrabTargets_MetaData[];
#endif
		static void NewProp_bShowNearCursorOnGrabTargets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowNearCursorOnGrabTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultFarBeam_MetaData[];
#endif
		static void NewProp_bUseDefaultFarBeam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultFarBeam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultFarCursor_MetaData[];
#endif
		static void NewProp_bUseDefaultFarCursor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultFarCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultNearCursor_MetaData[];
#endif
		static void NewProp_bUseDefaultNearCursor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultNearCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NearActivationDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NearActivationDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUxtHandInteractionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUxtHandInteractionActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_GetHand, "GetHand" }, // 3496396320
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_GetPokeRadius, "GetPokeRadius" }, // 671302813
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_GetRayLength, "GetRayLength" }, // 1551825915
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_GetRayStartOffset, "GetRayStartOffset" }, // 976466516
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_GetTraceChannel, "GetTraceChannel" }, // 2715641371
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_SetHand, "SetHand" }, // 2044927683
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_SetPokeRadius, "SetPokeRadius" }, // 1706170509
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_SetRayLength, "SetRayLength" }, // 3882311486
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_SetRayStartOffset, "SetRayStartOffset" }, // 2931936961
		{ &Z_Construct_UFunction_AUxtHandInteractionActor_SetTraceChannel, "SetTraceChannel" }, // 2924981350
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Actor that drives hand interactions with components that implement the far, grab and poke target interfaces.\n * A hand has two interaction modes:\n * - Near: interactions performed by poking or grabbing targets directly.\n * - Far: interactions performed by pointing at far targets from a distance via a hand ray.\n * The actor transitions between modes depending on whether there is a grab or poke target within the near activation distance.\n */" },
		{ "IncludePath", "Input/UxtHandInteractionActor.h" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Actor that drives hand interactions with components that implement the far, grab and poke target interfaces.\nA hand has two interaction modes:\n- Near: interactions performed by poking or grabbing targets directly.\n- Far: interactions performed by pointing at far targets from a distance via a hand ray.\nThe actor transitions between modes depending on whether there is a grab or poke target within the near activation distance." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_FarPointer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_FarPointer = { "FarPointer", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, FarPointer), Z_Construct_UClass_UUxtFarPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_FarPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_FarPointer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_NearPointer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_NearPointer = { "NearPointer", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, NearPointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_NearPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_NearPointer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "BlueprintGetter", "GetTraceChannel" },
		{ "BlueprintSetter", "SetTraceChannel" },
		{ "Category", "Hand Interaction" },
		{ "Comment", "/** Trace channel used for targeting queries. */" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Trace channel used for targeting queries." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_TraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_PokeRadius_MetaData[] = {
		{ "BlueprintGetter", "GetPokeRadius" },
		{ "BlueprintSetter", "SetPokeRadius" },
		{ "Category", "Hand Interaction" },
		{ "Comment", "/** Maximum distance around the finger tip at which we look for poke targets. */" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Maximum distance around the finger tip at which we look for poke targets." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_PokeRadius = { "PokeRadius", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, PokeRadius), METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_PokeRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_PokeRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayLength_MetaData[] = {
		{ "BlueprintGetter", "GetRayLength" },
		{ "BlueprintSetter", "SetRayLength" },
		{ "Category", "Hand Interaction" },
		{ "Comment", "/** Length of the far ray */" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Length of the far ray" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayLength = { "RayLength", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, RayLength), METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayStartOffset_MetaData[] = {
		{ "BlueprintGetter", "GetRayStartOffset" },
		{ "BlueprintSetter", "SetRayStartOffset" },
		{ "Category", "Hand Interaction" },
		{ "Comment", "/** Offset from the hand ray origin at which the far ray used for far target selection starts. */" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Offset from the hand ray origin at which the far ray used for far target selection starts." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayStartOffset = { "RayStartOffset", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, RayStartOffset), METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayStartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayStartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_Hand_MetaData[] = {
		{ "BlueprintGetter", "GetHand" },
		{ "BlueprintSetter", "SetHand" },
		{ "Category", "Hand Interaction" },
		{ "Comment", "/** Articulated hand used to drive interactions. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Articulated hand used to drive interactions." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0041000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_Hand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bShowNearCursorOnGrabTargets_MetaData[] = {
		{ "Category", "Hand Interaction" },
		{ "Comment", "/** Show the near cursor on grab targets. Changes to this value after BeginPlay have no effect. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Show the near cursor on grab targets. Changes to this value after BeginPlay have no effect." },
	};
#endif
	void Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bShowNearCursorOnGrabTargets_SetBit(void* Obj)
	{
		((AUxtHandInteractionActor*)Obj)->bShowNearCursorOnGrabTargets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bShowNearCursorOnGrabTargets = { "bShowNearCursorOnGrabTargets", nullptr, (EPropertyFlags)0x0011040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUxtHandInteractionActor), &Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bShowNearCursorOnGrabTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bShowNearCursorOnGrabTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bShowNearCursorOnGrabTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarBeam_MetaData[] = {
		{ "Category", "Hand Interaction" },
		{ "Comment", "/** Create default visuals for the far beam. Changes to this value after BeginPlay have no effect. */" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Create default visuals for the far beam. Changes to this value after BeginPlay have no effect." },
	};
#endif
	void Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarBeam_SetBit(void* Obj)
	{
		((AUxtHandInteractionActor*)Obj)->bUseDefaultFarBeam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarBeam = { "bUseDefaultFarBeam", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUxtHandInteractionActor), &Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarBeam_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarBeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarBeam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarCursor_MetaData[] = {
		{ "Category", "Hand Interaction" },
		{ "Comment", "/** Create default visuals for the far cursor. Changes to this value after BeginPlay have no effect. */" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Create default visuals for the far cursor. Changes to this value after BeginPlay have no effect." },
	};
#endif
	void Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarCursor_SetBit(void* Obj)
	{
		((AUxtHandInteractionActor*)Obj)->bUseDefaultFarCursor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarCursor = { "bUseDefaultFarCursor", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUxtHandInteractionActor), &Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarCursor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultNearCursor_MetaData[] = {
		{ "Category", "Hand Interaction" },
		{ "Comment", "/** Create default visuals for the near cursor. Changes to this value after BeginPlay have no effect. */" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Create default visuals for the near cursor. Changes to this value after BeginPlay have no effect." },
	};
#endif
	void Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultNearCursor_SetBit(void* Obj)
	{
		((AUxtHandInteractionActor*)Obj)->bUseDefaultNearCursor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultNearCursor = { "bUseDefaultNearCursor", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUxtHandInteractionActor), &Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultNearCursor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultNearCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultNearCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_NearActivationDistance_MetaData[] = {
		{ "Category", "Hand Interaction" },
		{ "Comment", "/** Distance from the hand to the closest grab or poke target at which near interaction activates. */" },
		{ "DisplayAfter", "PokeRadius" },
		{ "ModuleRelativePath", "Public/Input/UxtHandInteractionActor.h" },
		{ "ToolTip", "Distance from the hand to the closest grab or poke target at which near interaction activates." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_NearActivationDistance = { "NearActivationDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUxtHandInteractionActor, NearActivationDistance), METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_NearActivationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_NearActivationDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUxtHandInteractionActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_FarPointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_NearPointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_PokeRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_RayStartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_Hand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bShowNearCursorOnGrabTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarBeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultFarCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_bUseDefaultNearCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUxtHandInteractionActor_Statics::NewProp_NearActivationDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUxtHandInteractionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUxtHandInteractionActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUxtHandInteractionActor_Statics::ClassParams = {
		&AUxtHandInteractionActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUxtHandInteractionActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUxtHandInteractionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUxtHandInteractionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUxtHandInteractionActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUxtHandInteractionActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUxtHandInteractionActor, 1250971560);
	template<> UXTOOLS_API UClass* StaticClass<AUxtHandInteractionActor>()
	{
		return AUxtHandInteractionActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUxtHandInteractionActor(Z_Construct_UClass_AUxtHandInteractionActor, &AUxtHandInteractionActor::StaticClass, TEXT("/Script/UXTools"), TEXT("AUxtHandInteractionActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUxtHandInteractionActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
