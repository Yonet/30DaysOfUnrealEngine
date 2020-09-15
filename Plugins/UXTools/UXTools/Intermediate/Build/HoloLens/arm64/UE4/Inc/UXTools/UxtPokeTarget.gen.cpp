// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtPokeTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtPokeTarget() {}
// Cross Module References
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtPokeBehaviour();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPokeTarget_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtPokeTarget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtNearPointerComponent_NoRegister();
// End Cross Module References
	static UEnum* EUxtPokeBehaviour_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtPokeBehaviour, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtPokeBehaviour"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtPokeBehaviour>()
	{
		return EUxtPokeBehaviour_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtPokeBehaviour(EUxtPokeBehaviour_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtPokeBehaviour"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtPokeBehaviour_Hash() { return 2841332595U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtPokeBehaviour()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtPokeBehaviour"), 0, Get_Z_Construct_UEnum_UXTools_EUxtPokeBehaviour_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtPokeBehaviour::FrontFace", (int64)EUxtPokeBehaviour::FrontFace },
				{ "EUxtPokeBehaviour::Volume", (int64)EUxtPokeBehaviour::Volume },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FrontFace.Comment", "/** Target represents a plane, only pokable from the front face */" },
				{ "FrontFace.Name", "EUxtPokeBehaviour::FrontFace" },
				{ "FrontFace.ToolTip", "Target represents a plane, only pokable from the front face" },
				{ "ModuleRelativePath", "Public/Interactions/UxtPokeTarget.h" },
				{ "Volume.Comment", "/** Target represents a mesh volume, pokable from all sides */" },
				{ "Volume.Name", "EUxtPokeBehaviour::Volume" },
				{ "Volume.ToolTip", "Target represents a mesh volume, pokable from all sides" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtPokeBehaviour",
				"EUxtPokeBehaviour",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(IUxtPokeTarget::execOnEndPoke)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndPoke_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtPokeTarget::execOnUpdatePoke)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdatePoke_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtPokeTarget::execOnBeginPoke)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginPoke_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtPokeTarget::execGetPokeBehaviour)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUxtPokeBehaviour*)Z_Param__Result=P_THIS->GetPokeBehaviour_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtPokeTarget::execOnExitPokeFocus)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitPokeFocus_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtPokeTarget::execOnUpdatePokeFocus)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdatePokeFocus_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtPokeTarget::execOnEnterPokeFocus)
	{
		P_GET_OBJECT(UUxtNearPointerComponent,Z_Param_Pointer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnterPokeFocus_Implementation(Z_Param_Pointer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IUxtPokeTarget::execIsPokeFocusable)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Primitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPokeFocusable_Implementation(Z_Param_Primitive);
		P_NATIVE_END;
	}
	EUxtPokeBehaviour IUxtPokeTarget::GetPokeBehaviour() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPokeBehaviour instead.");
		UxtPokeTarget_eventGetPokeBehaviour_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IUxtPokeTarget::IsPokeFocusable(const UPrimitiveComponent* Primitive)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsPokeFocusable instead.");
		UxtPokeTarget_eventIsPokeFocusable_Parms Parms;
		return Parms.ReturnValue;
	}
	void IUxtPokeTarget::OnBeginPoke(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnBeginPoke instead.");
	}
	void IUxtPokeTarget::OnEndPoke(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEndPoke instead.");
	}
	void IUxtPokeTarget::OnEnterPokeFocus(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEnterPokeFocus instead.");
	}
	void IUxtPokeTarget::OnExitPokeFocus(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnExitPokeFocus instead.");
	}
	void IUxtPokeTarget::OnUpdatePoke(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUpdatePoke instead.");
	}
	void IUxtPokeTarget::OnUpdatePokeFocus(UUxtNearPointerComponent* Pointer)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUpdatePokeFocus instead.");
	}
	void UUxtPokeTarget::StaticRegisterNativesUUxtPokeTarget()
	{
		UClass* Class = UUxtPokeTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPokeBehaviour", &IUxtPokeTarget::execGetPokeBehaviour },
			{ "IsPokeFocusable", &IUxtPokeTarget::execIsPokeFocusable },
			{ "OnBeginPoke", &IUxtPokeTarget::execOnBeginPoke },
			{ "OnEndPoke", &IUxtPokeTarget::execOnEndPoke },
			{ "OnEnterPokeFocus", &IUxtPokeTarget::execOnEnterPokeFocus },
			{ "OnExitPokeFocus", &IUxtPokeTarget::execOnExitPokeFocus },
			{ "OnUpdatePoke", &IUxtPokeTarget::execOnUpdatePoke },
			{ "OnUpdatePokeFocus", &IUxtPokeTarget::execOnUpdatePokeFocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeTarget_eventGetPokeBehaviour_Parms, ReturnValue), Z_Construct_UEnum_UXTools_EUxtPokeBehaviour, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns which poke behaviour this target supports. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeTarget.h" },
		{ "ToolTip", "Returns which poke behaviour this target supports." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPokeTarget, nullptr, "GetPokeBehaviour", nullptr, nullptr, sizeof(UxtPokeTarget_eventGetPokeBehaviour_Parms), Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics
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
	void Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtPokeTarget_eventIsPokeFocusable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtPokeTarget_eventIsPokeFocusable_Parms), &Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::NewProp_Primitive_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::NewProp_Primitive = { "Primitive", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeTarget_eventIsPokeFocusable_Parms, Primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::NewProp_Primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::NewProp_Primitive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::NewProp_Primitive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns true if the given primitive should be considerered a valid focus target. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeTarget.h" },
		{ "ToolTip", "Returns true if the given primitive should be considerered a valid focus target." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPokeTarget, nullptr, "IsPokeFocusable", nullptr, nullptr, sizeof(UxtPokeTarget_eventIsPokeFocusable_Parms), Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPokeTarget_OnBeginPoke_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_OnBeginPoke_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPokeTarget_OnBeginPoke_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeTarget_eventOnBeginPoke_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_OnBeginPoke_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_OnBeginPoke_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPokeTarget_OnBeginPoke_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeTarget_OnBeginPoke_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_OnBeginPoke_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Raised when a pointer poke volume starts overlapping the actor. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeTarget.h" },
		{ "ToolTip", "Raised when a pointer poke volume starts overlapping the actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPokeTarget_OnBeginPoke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPokeTarget, nullptr, "OnBeginPoke", nullptr, nullptr, sizeof(UxtPokeTarget_eventOnBeginPoke_Parms), Z_Construct_UFunction_UUxtPokeTarget_OnBeginPoke_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_OnBeginPoke_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_OnBeginPoke_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_OnBeginPoke_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPokeTarget_OnBeginPoke()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtPokeTarget_OnBeginPoke_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPokeTarget_OnEndPoke_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_OnEndPoke_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPokeTarget_OnEndPoke_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeTarget_eventOnEndPoke_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_OnEndPoke_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_OnEndPoke_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPokeTarget_OnEndPoke_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeTarget_OnEndPoke_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_OnEndPoke_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Raised when a pointer poke volume stops overlapping the actor. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeTarget.h" },
		{ "ToolTip", "Raised when a pointer poke volume stops overlapping the actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPokeTarget_OnEndPoke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPokeTarget, nullptr, "OnEndPoke", nullptr, nullptr, sizeof(UxtPokeTarget_eventOnEndPoke_Parms), Z_Construct_UFunction_UUxtPokeTarget_OnEndPoke_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_OnEndPoke_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_OnEndPoke_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_OnEndPoke_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPokeTarget_OnEndPoke()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtPokeTarget_OnEndPoke_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPokeTarget_OnEnterPokeFocus_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_OnEnterPokeFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPokeTarget_OnEnterPokeFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeTarget_eventOnEnterPokeFocus_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_OnEnterPokeFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_OnEnterPokeFocus_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPokeTarget_OnEnterPokeFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeTarget_OnEnterPokeFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_OnEnterPokeFocus_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Raised when a pointer focuses the actor. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeTarget.h" },
		{ "ToolTip", "Raised when a pointer focuses the actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPokeTarget_OnEnterPokeFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPokeTarget, nullptr, "OnEnterPokeFocus", nullptr, nullptr, sizeof(UxtPokeTarget_eventOnEnterPokeFocus_Parms), Z_Construct_UFunction_UUxtPokeTarget_OnEnterPokeFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_OnEnterPokeFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_OnEnterPokeFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_OnEnterPokeFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPokeTarget_OnEnterPokeFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtPokeTarget_OnEnterPokeFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPokeTarget_OnExitPokeFocus_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_OnExitPokeFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPokeTarget_OnExitPokeFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeTarget_eventOnExitPokeFocus_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_OnExitPokeFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_OnExitPokeFocus_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPokeTarget_OnExitPokeFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeTarget_OnExitPokeFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_OnExitPokeFocus_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Raised when a pointer stops focusing the actor. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeTarget.h" },
		{ "ToolTip", "Raised when a pointer stops focusing the actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPokeTarget_OnExitPokeFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPokeTarget, nullptr, "OnExitPokeFocus", nullptr, nullptr, sizeof(UxtPokeTarget_eventOnExitPokeFocus_Parms), Z_Construct_UFunction_UUxtPokeTarget_OnExitPokeFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_OnExitPokeFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_OnExitPokeFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_OnExitPokeFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPokeTarget_OnExitPokeFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtPokeTarget_OnExitPokeFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePoke_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePoke_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePoke_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeTarget_eventOnUpdatePoke_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePoke_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePoke_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePoke_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePoke_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePoke_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Raised while a pointer poke volume is overlapping the actor. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeTarget.h" },
		{ "ToolTip", "Raised while a pointer poke volume is overlapping the actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePoke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPokeTarget, nullptr, "OnUpdatePoke", nullptr, nullptr, sizeof(UxtPokeTarget_eventOnUpdatePoke_Parms), Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePoke_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePoke_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePoke_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePoke_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePoke()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePoke_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePokeFocus_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePokeFocus_Statics::NewProp_Pointer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePokeFocus_Statics::NewProp_Pointer = { "Pointer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtPokeTarget_eventOnUpdatePokeFocus_Parms, Pointer), Z_Construct_UClass_UUxtNearPointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePokeFocus_Statics::NewProp_Pointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePokeFocus_Statics::NewProp_Pointer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePokeFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePokeFocus_Statics::NewProp_Pointer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePokeFocus_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Raised when a pointer has been updated while focused. */" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeTarget.h" },
		{ "ToolTip", "Raised when a pointer has been updated while focused." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePokeFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtPokeTarget, nullptr, "OnUpdatePokeFocus", nullptr, nullptr, sizeof(UxtPokeTarget_eventOnUpdatePokeFocus_Parms), Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePokeFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePokeFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePokeFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePokeFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePokeFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePokeFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtPokeTarget_NoRegister()
	{
		return UUxtPokeTarget::StaticClass();
	}
	struct Z_Construct_UClass_UUxtPokeTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtPokeTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtPokeTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtPokeTarget_GetPokeBehaviour, "GetPokeBehaviour" }, // 3647024151
		{ &Z_Construct_UFunction_UUxtPokeTarget_IsPokeFocusable, "IsPokeFocusable" }, // 2143991734
		{ &Z_Construct_UFunction_UUxtPokeTarget_OnBeginPoke, "OnBeginPoke" }, // 4108737543
		{ &Z_Construct_UFunction_UUxtPokeTarget_OnEndPoke, "OnEndPoke" }, // 4049789995
		{ &Z_Construct_UFunction_UUxtPokeTarget_OnEnterPokeFocus, "OnEnterPokeFocus" }, // 3911621534
		{ &Z_Construct_UFunction_UUxtPokeTarget_OnExitPokeFocus, "OnExitPokeFocus" }, // 2200223683
		{ &Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePoke, "OnUpdatePoke" }, // 262022267
		{ &Z_Construct_UFunction_UUxtPokeTarget_OnUpdatePokeFocus, "OnUpdatePokeFocus" }, // 295360962
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtPokeTarget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interactions/UxtPokeTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtPokeTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUxtPokeTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtPokeTarget_Statics::ClassParams = {
		&UUxtPokeTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUxtPokeTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtPokeTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtPokeTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtPokeTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtPokeTarget, 2022702709);
	template<> UXTOOLS_API UClass* StaticClass<UUxtPokeTarget>()
	{
		return UUxtPokeTarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtPokeTarget(Z_Construct_UClass_UUxtPokeTarget, &UUxtPokeTarget::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtPokeTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtPokeTarget);
	static FName NAME_UUxtPokeTarget_GetPokeBehaviour = FName(TEXT("GetPokeBehaviour"));
	EUxtPokeBehaviour IUxtPokeTarget::Execute_GetPokeBehaviour(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtPokeTarget::StaticClass()));
		UxtPokeTarget_eventGetPokeBehaviour_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtPokeTarget_GetPokeBehaviour);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IUxtPokeTarget*)(O->GetNativeInterfaceAddress(UUxtPokeTarget::StaticClass())))
		{
			Parms.ReturnValue = I->GetPokeBehaviour_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UUxtPokeTarget_IsPokeFocusable = FName(TEXT("IsPokeFocusable"));
	bool IUxtPokeTarget::Execute_IsPokeFocusable(UObject* O, const UPrimitiveComponent* Primitive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtPokeTarget::StaticClass()));
		UxtPokeTarget_eventIsPokeFocusable_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtPokeTarget_IsPokeFocusable);
		if (Func)
		{
			Parms.Primitive=Primitive;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtPokeTarget*)(O->GetNativeInterfaceAddress(UUxtPokeTarget::StaticClass())))
		{
			Parms.ReturnValue = I->IsPokeFocusable_Implementation(Primitive);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UUxtPokeTarget_OnBeginPoke = FName(TEXT("OnBeginPoke"));
	void IUxtPokeTarget::Execute_OnBeginPoke(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtPokeTarget::StaticClass()));
		UxtPokeTarget_eventOnBeginPoke_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtPokeTarget_OnBeginPoke);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtPokeTarget*)(O->GetNativeInterfaceAddress(UUxtPokeTarget::StaticClass())))
		{
			I->OnBeginPoke_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtPokeTarget_OnEndPoke = FName(TEXT("OnEndPoke"));
	void IUxtPokeTarget::Execute_OnEndPoke(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtPokeTarget::StaticClass()));
		UxtPokeTarget_eventOnEndPoke_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtPokeTarget_OnEndPoke);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtPokeTarget*)(O->GetNativeInterfaceAddress(UUxtPokeTarget::StaticClass())))
		{
			I->OnEndPoke_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtPokeTarget_OnEnterPokeFocus = FName(TEXT("OnEnterPokeFocus"));
	void IUxtPokeTarget::Execute_OnEnterPokeFocus(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtPokeTarget::StaticClass()));
		UxtPokeTarget_eventOnEnterPokeFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtPokeTarget_OnEnterPokeFocus);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtPokeTarget*)(O->GetNativeInterfaceAddress(UUxtPokeTarget::StaticClass())))
		{
			I->OnEnterPokeFocus_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtPokeTarget_OnExitPokeFocus = FName(TEXT("OnExitPokeFocus"));
	void IUxtPokeTarget::Execute_OnExitPokeFocus(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtPokeTarget::StaticClass()));
		UxtPokeTarget_eventOnExitPokeFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtPokeTarget_OnExitPokeFocus);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtPokeTarget*)(O->GetNativeInterfaceAddress(UUxtPokeTarget::StaticClass())))
		{
			I->OnExitPokeFocus_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtPokeTarget_OnUpdatePoke = FName(TEXT("OnUpdatePoke"));
	void IUxtPokeTarget::Execute_OnUpdatePoke(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtPokeTarget::StaticClass()));
		UxtPokeTarget_eventOnUpdatePoke_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtPokeTarget_OnUpdatePoke);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtPokeTarget*)(O->GetNativeInterfaceAddress(UUxtPokeTarget::StaticClass())))
		{
			I->OnUpdatePoke_Implementation(Pointer);
		}
	}
	static FName NAME_UUxtPokeTarget_OnUpdatePokeFocus = FName(TEXT("OnUpdatePokeFocus"));
	void IUxtPokeTarget::Execute_OnUpdatePokeFocus(UObject* O, UUxtNearPointerComponent* Pointer)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUxtPokeTarget::StaticClass()));
		UxtPokeTarget_eventOnUpdatePokeFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUxtPokeTarget_OnUpdatePokeFocus);
		if (Func)
		{
			Parms.Pointer=Pointer;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IUxtPokeTarget*)(O->GetNativeInterfaceAddress(UUxtPokeTarget::StaticClass())))
		{
			I->OnUpdatePokeFocus_Implementation(Pointer);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
