// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXToolsEditor/Public/UxtIconBrushEditorUtilityWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtIconBrushEditorUtilityWidget() {}
// Cross Module References
	UXTOOLSEDITOR_API UClass* Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_NoRegister();
	UXTOOLSEDITOR_API UClass* Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	UPackage* Z_Construct_UPackage__Script_UXToolsEditor();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUxtIconBrushEditorUtilityWidget::execSetIconBrushString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IconString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetIconBrushString(Z_Param_IconString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtIconBrushEditorUtilityWidget::execGetIconBrushString)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_IconString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIconBrushString(Z_Param_Out_IconString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtIconBrushEditorUtilityWidget::execSetIconBrushFont)
	{
		P_GET_OBJECT(UFont,Z_Param_Font);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetIconBrushFont(Z_Param_Font);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtIconBrushEditorUtilityWidget::execGetIconBrushFont)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFont**)Z_Param__Result=P_THIS->GetIconBrushFont();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtIconBrushEditorUtilityWidget::execHasValidPropertyHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasValidPropertyHandle();
		P_NATIVE_END;
	}
	static FName NAME_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged = FName(TEXT("OnPropertyHandleChanged"));
	void UUxtIconBrushEditorUtilityWidget::OnPropertyHandleChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged),NULL);
	}
	void UUxtIconBrushEditorUtilityWidget::StaticRegisterNativesUUxtIconBrushEditorUtilityWidget()
	{
		UClass* Class = UUxtIconBrushEditorUtilityWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIconBrushFont", &UUxtIconBrushEditorUtilityWidget::execGetIconBrushFont },
			{ "GetIconBrushString", &UUxtIconBrushEditorUtilityWidget::execGetIconBrushString },
			{ "HasValidPropertyHandle", &UUxtIconBrushEditorUtilityWidget::execHasValidPropertyHandle },
			{ "SetIconBrushFont", &UUxtIconBrushEditorUtilityWidget::execSetIconBrushFont },
			{ "SetIconBrushString", &UUxtIconBrushEditorUtilityWidget::execSetIconBrushString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics
	{
		struct UxtIconBrushEditorUtilityWidget_eventGetIconBrushFont_Parms
		{
			UFont* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtIconBrushEditorUtilityWidget_eventGetIconBrushFont_Parms, ReturnValue), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::Function_MetaDataParams[] = {
		{ "Category", "Icon Brush Editor Utility Widget" },
		{ "Comment", "/** Gets the font associated with the UUxtIconBrush. */" },
		{ "ModuleRelativePath", "Public/UxtIconBrushEditorUtilityWidget.h" },
		{ "ToolTip", "Gets the font associated with the UUxtIconBrush." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget, nullptr, "GetIconBrushFont", nullptr, nullptr, sizeof(UxtIconBrushEditorUtilityWidget_eventGetIconBrushFont_Parms), Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics
	{
		struct UxtIconBrushEditorUtilityWidget_eventGetIconBrushString_Parms
		{
			FString IconString;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtIconBrushEditorUtilityWidget_eventGetIconBrushString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtIconBrushEditorUtilityWidget_eventGetIconBrushString_Parms), &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::NewProp_IconString = { "IconString", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtIconBrushEditorUtilityWidget_eventGetIconBrushString_Parms, IconString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::NewProp_IconString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Icon Brush Editor Utility Widget" },
		{ "Comment", "/** Gets the string associated with the UUxtIconBrush. */" },
		{ "ModuleRelativePath", "Public/UxtIconBrushEditorUtilityWidget.h" },
		{ "ToolTip", "Gets the string associated with the UUxtIconBrush." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget, nullptr, "GetIconBrushString", nullptr, nullptr, sizeof(UxtIconBrushEditorUtilityWidget_eventGetIconBrushString_Parms), Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics
	{
		struct UxtIconBrushEditorUtilityWidget_eventHasValidPropertyHandle_Parms
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
	void Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtIconBrushEditorUtilityWidget_eventHasValidPropertyHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtIconBrushEditorUtilityWidget_eventHasValidPropertyHandle_Parms), &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Icon Brush Editor Utility Widget" },
		{ "Comment", "/** Returns true if a non-null PropertyHandle is set. */" },
		{ "ModuleRelativePath", "Public/UxtIconBrushEditorUtilityWidget.h" },
		{ "ToolTip", "Returns true if a non-null PropertyHandle is set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget, nullptr, "HasValidPropertyHandle", nullptr, nullptr, sizeof(UxtIconBrushEditorUtilityWidget_eventHasValidPropertyHandle_Parms), Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Icon Brush Editor Utility Widget" },
		{ "Comment", "/** Event which triggers when the PropertyHandle is changed. */" },
		{ "ModuleRelativePath", "Public/UxtIconBrushEditorUtilityWidget.h" },
		{ "ToolTip", "Event which triggers when the PropertyHandle is changed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget, nullptr, "OnPropertyHandleChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics
	{
		struct UxtIconBrushEditorUtilityWidget_eventSetIconBrushFont_Parms
		{
			const UFont* Font;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Font;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtIconBrushEditorUtilityWidget_eventSetIconBrushFont_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtIconBrushEditorUtilityWidget_eventSetIconBrushFont_Parms), &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::NewProp_Font_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtIconBrushEditorUtilityWidget_eventSetIconBrushFont_Parms, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::NewProp_Font_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::NewProp_Font,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::Function_MetaDataParams[] = {
		{ "Category", "Icon Brush Editor Utility Widget" },
		{ "Comment", "/** Sets the font associated with the UUxtIconBrush. */" },
		{ "ModuleRelativePath", "Public/UxtIconBrushEditorUtilityWidget.h" },
		{ "ToolTip", "Sets the font associated with the UUxtIconBrush." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget, nullptr, "SetIconBrushFont", nullptr, nullptr, sizeof(UxtIconBrushEditorUtilityWidget_eventSetIconBrushFont_Parms), Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics
	{
		struct UxtIconBrushEditorUtilityWidget_eventSetIconBrushString_Parms
		{
			FString IconString;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtIconBrushEditorUtilityWidget_eventSetIconBrushString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtIconBrushEditorUtilityWidget_eventSetIconBrushString_Parms), &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::NewProp_IconString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::NewProp_IconString = { "IconString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtIconBrushEditorUtilityWidget_eventSetIconBrushString_Parms, IconString), METADATA_PARAMS(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::NewProp_IconString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::NewProp_IconString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::NewProp_IconString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Icon Brush Editor Utility Widget" },
		{ "Comment", "/** Sets the string associated with the UUxtIconBrush. */" },
		{ "ModuleRelativePath", "Public/UxtIconBrushEditorUtilityWidget.h" },
		{ "ToolTip", "Sets the string associated with the UUxtIconBrush." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget, nullptr, "SetIconBrushString", nullptr, nullptr, sizeof(UxtIconBrushEditorUtilityWidget_eventSetIconBrushString_Parms), Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_NoRegister()
	{
		return UUxtIconBrushEditorUtilityWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TabID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UXToolsEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushFont, "GetIconBrushFont" }, // 229584358
		{ &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_GetIconBrushString, "GetIconBrushString" }, // 3930449610
		{ &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_HasValidPropertyHandle, "HasValidPropertyHandle" }, // 3668143278
		{ &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_OnPropertyHandleChanged, "OnPropertyHandleChanged" }, // 342102598
		{ &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushFont, "SetIconBrushFont" }, // 1969022326
		{ &Z_Construct_UFunction_UUxtIconBrushEditorUtilityWidget_SetIconBrushString, "SetIconBrushString" }, // 1273479586
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXToolsEditor" },
		{ "IncludePath", "UxtIconBrushEditorUtilityWidget.h" },
		{ "ModuleRelativePath", "Public/UxtIconBrushEditorUtilityWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::NewProp_TabID_MetaData[] = {
		{ "Category", "Icon Brush Editor Utility Widget" },
		{ "Comment", "/** Gets unique identifier for the tab this EditorUtilityWidget was spawned into. */" },
		{ "ModuleRelativePath", "Public/UxtIconBrushEditorUtilityWidget.h" },
		{ "ToolTip", "Gets unique identifier for the tab this EditorUtilityWidget was spawned into." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::NewProp_TabID = { "TabID", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtIconBrushEditorUtilityWidget, TabID), METADATA_PARAMS(Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::NewProp_TabID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::NewProp_TabID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::NewProp_TabID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtIconBrushEditorUtilityWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::ClassParams = {
		&UUxtIconBrushEditorUtilityWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtIconBrushEditorUtilityWidget, 2031334751);
	template<> UXTOOLSEDITOR_API UClass* StaticClass<UUxtIconBrushEditorUtilityWidget>()
	{
		return UUxtIconBrushEditorUtilityWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtIconBrushEditorUtilityWidget(Z_Construct_UClass_UUxtIconBrushEditorUtilityWidget, &UUxtIconBrushEditorUtilityWidget::StaticClass, TEXT("/Script/UXToolsEditor"), TEXT("UUxtIconBrushEditorUtilityWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtIconBrushEditorUtilityWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
