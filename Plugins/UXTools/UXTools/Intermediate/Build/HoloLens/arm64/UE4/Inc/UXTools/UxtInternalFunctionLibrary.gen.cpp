// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Private/Utils/UxtInternalFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtInternalFunctionLibrary() {}
// Cross Module References
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtFontCharacter();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtInternalFunctionLibrary_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtInternalFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FUxtFontCharacter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UXTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FUxtFontCharacter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUxtFontCharacter, Z_Construct_UPackage__Script_UXTools(), TEXT("UxtFontCharacter"), sizeof(FUxtFontCharacter), Get_Z_Construct_UScriptStruct_FUxtFontCharacter_Hash());
	}
	return Singleton;
}
template<> UXTOOLS_API UScriptStruct* StaticStruct<FUxtFontCharacter>()
{
	return FUxtFontCharacter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUxtFontCharacter(FUxtFontCharacter::StaticStruct, TEXT("/Script/UXTools"), TEXT("UxtFontCharacter"), false, nullptr, nullptr);
static struct FScriptStruct_UXTools_StaticRegisterNativesFUxtFontCharacter
{
	FScriptStruct_UXTools_StaticRegisterNativesFUxtFontCharacter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UxtFontCharacter")),new UScriptStruct::TCppStructOps<FUxtFontCharacter>);
	}
} ScriptStruct_UXTools_StaticRegisterNativesFUxtFontCharacter;
	struct Z_Construct_UScriptStruct_FUxtFontCharacter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "UXTools Internal" },
		{ "Comment", "/**\n * Blueprint structure which contains data required to render a character within a offline font.\n */" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "Blueprint structure which contains data required to render a character within a offline font." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUxtFontCharacter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Font Character" },
		{ "Comment", "/**\n\x09* The normalized width and height of the character.\n\x09*/" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "The normalized width and height of the character." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtFontCharacter, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_UVTransform_MetaData[] = {
		{ "Category", "Font Character" },
		{ "Comment", "/**\n\x09* The UV offset within the texture to find the character.\n\x09*/" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "The UV offset within the texture to find the character." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_UVTransform = { "UVTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtFontCharacter, UVTransform), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_UVTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_UVTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Font Character" },
		{ "Comment", "/**\n\x09* The texutre containing the font character.\n\x09*/" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "The texutre containing the font character." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtFontCharacter, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Font Character" },
		{ "Comment", "/**\n\x09 * The single font character as a string.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "The single font character as a string." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtFontCharacter, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_UVTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::NewProp_Text,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		&NewStructOps,
		"UxtFontCharacter",
		sizeof(FUxtFontCharacter),
		alignof(FUxtFontCharacter),
		Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUxtFontCharacter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUxtFontCharacter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UxtFontCharacter"), sizeof(FUxtFontCharacter), Get_Z_Construct_UScriptStruct_FUxtFontCharacter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUxtFontCharacter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUxtFontCharacter_Hash() { return 2295479699U; }
	DEFINE_FUNCTION(UUxtInternalFunctionLibrary::execIsPlayInMobilePreview)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUxtInternalFunctionLibrary::IsPlayInMobilePreview(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInternalFunctionLibrary::execGetFontCharacterData)
	{
		P_GET_OBJECT(UFont,Z_Param_Font);
		P_GET_TARRAY_REF(FUxtFontCharacter,Z_Param_Out_FontCharacters);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUxtInternalFunctionLibrary::GetFontCharacterData(Z_Param_Font,Z_Param_Out_FontCharacters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInternalFunctionLibrary::execIsFontOffline)
	{
		P_GET_OBJECT(UFont,Z_Param_Font);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUxtInternalFunctionLibrary::IsFontOffline(Z_Param_Font);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInternalFunctionLibrary::execFStringToHexCodePoint)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Input);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUxtInternalFunctionLibrary::FStringToHexCodePoint(Z_Param_Input,Z_Param_Out_Output);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtInternalFunctionLibrary::execHexCodePointToFString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Input);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Output);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUxtInternalFunctionLibrary::HexCodePointToFString(Z_Param_Input,Z_Param_Out_Output);
		P_NATIVE_END;
	}
	void UUxtInternalFunctionLibrary::StaticRegisterNativesUUxtInternalFunctionLibrary()
	{
		UClass* Class = UUxtInternalFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FStringToHexCodePoint", &UUxtInternalFunctionLibrary::execFStringToHexCodePoint },
			{ "GetFontCharacterData", &UUxtInternalFunctionLibrary::execGetFontCharacterData },
			{ "HexCodePointToFString", &UUxtInternalFunctionLibrary::execHexCodePointToFString },
			{ "IsFontOffline", &UUxtInternalFunctionLibrary::execIsFontOffline },
			{ "IsPlayInMobilePreview", &UUxtInternalFunctionLibrary::execIsPlayInMobilePreview },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics
	{
		struct UxtInternalFunctionLibrary_eventFStringToHexCodePoint_Parms
		{
			FString Input;
			FString Output;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Output;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtInternalFunctionLibrary_eventFStringToHexCodePoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtInternalFunctionLibrary_eventFStringToHexCodePoint_Parms), &Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInternalFunctionLibrary_eventFStringToHexCodePoint_Parms, Output), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInternalFunctionLibrary_eventFStringToHexCodePoint_Parms, Input), METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_Output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools Internal" },
		{ "Comment", "/** Converts a UTF-16 FString into the corresponding unicode code point as hex representation. Returns true when the conversion is successful.*/" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "Converts a UTF-16 FString into the corresponding unicode code point as hex representation. Returns true when the conversion is successful." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInternalFunctionLibrary, nullptr, "FStringToHexCodePoint", nullptr, nullptr, sizeof(UxtInternalFunctionLibrary_eventFStringToHexCodePoint_Parms), Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics
	{
		struct UxtInternalFunctionLibrary_eventGetFontCharacterData_Parms
		{
			const UFont* Font;
			TArray<FUxtFontCharacter> FontCharacters;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FontCharacters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FontCharacters_Inner;
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
	void Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtInternalFunctionLibrary_eventGetFontCharacterData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtInternalFunctionLibrary_eventGetFontCharacterData_Parms), &Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_FontCharacters = { "FontCharacters", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInternalFunctionLibrary_eventGetFontCharacterData_Parms, FontCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_FontCharacters_Inner = { "FontCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUxtFontCharacter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_Font_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInternalFunctionLibrary_eventGetFontCharacterData_Parms, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_Font_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_FontCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_FontCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::NewProp_Font,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools Internal" },
		{ "Comment", "/** Builds an array of FUxtFontCharacters for each character present in a UFont. */" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "Builds an array of FUxtFontCharacters for each character present in a UFont." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInternalFunctionLibrary, nullptr, "GetFontCharacterData", nullptr, nullptr, sizeof(UxtInternalFunctionLibrary_eventGetFontCharacterData_Parms), Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics
	{
		struct UxtInternalFunctionLibrary_eventHexCodePointToFString_Parms
		{
			FString Input;
			FString Output;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Output;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtInternalFunctionLibrary_eventHexCodePointToFString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtInternalFunctionLibrary_eventHexCodePointToFString_Parms), &Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInternalFunctionLibrary_eventHexCodePointToFString_Parms, Output), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInternalFunctionLibrary_eventHexCodePointToFString_Parms, Input), METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_Output,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools Internal" },
		{ "Comment", "/** Converts a Unicode code point as hex into the corresponding UTF-16 FString representation. Returns true when the conversion is successful.*/" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "Converts a Unicode code point as hex into the corresponding UTF-16 FString representation. Returns true when the conversion is successful." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInternalFunctionLibrary, nullptr, "HexCodePointToFString", nullptr, nullptr, sizeof(UxtInternalFunctionLibrary_eventHexCodePointToFString_Parms), Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics
	{
		struct UxtInternalFunctionLibrary_eventIsFontOffline_Parms
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
	void Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtInternalFunctionLibrary_eventIsFontOffline_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtInternalFunctionLibrary_eventIsFontOffline_Parms), &Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::NewProp_Font_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInternalFunctionLibrary_eventIsFontOffline_Parms, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::NewProp_Font_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::NewProp_Font,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools Internal" },
		{ "Comment", "/** Returns true if a UFont is using offline caching. */" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "Returns true if a UFont is using offline caching." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInternalFunctionLibrary, nullptr, "IsFontOffline", nullptr, nullptr, sizeof(UxtInternalFunctionLibrary_eventIsFontOffline_Parms), Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview_Statics
	{
		struct UxtInternalFunctionLibrary_eventIsPlayInMobilePreview_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UxtInternalFunctionLibrary_eventIsPlayInMobilePreview_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UxtInternalFunctionLibrary_eventIsPlayInMobilePreview_Parms), &Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtInternalFunctionLibrary_eventIsPlayInMobilePreview_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview_Statics::Function_MetaDataParams[] = {
		{ "Category", "UXTools Internal" },
		{ "Comment", "/** Returns whether the world the passed object belongs to is executing within a mobile preview window. */" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "Returns whether the world the passed object belongs to is executing within a mobile preview window." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtInternalFunctionLibrary, nullptr, "IsPlayInMobilePreview", nullptr, nullptr, sizeof(UxtInternalFunctionLibrary_eventIsPlayInMobilePreview_Parms), Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtInternalFunctionLibrary_NoRegister()
	{
		return UUxtInternalFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUxtInternalFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtInternalFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtInternalFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtInternalFunctionLibrary_FStringToHexCodePoint, "FStringToHexCodePoint" }, // 2943275320
		{ &Z_Construct_UFunction_UUxtInternalFunctionLibrary_GetFontCharacterData, "GetFontCharacterData" }, // 1244387921
		{ &Z_Construct_UFunction_UUxtInternalFunctionLibrary_HexCodePointToFString, "HexCodePointToFString" }, // 460781103
		{ &Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsFontOffline, "IsFontOffline" }, // 948358048
		{ &Z_Construct_UFunction_UUxtInternalFunctionLibrary_IsPlayInMobilePreview, "IsPlayInMobilePreview" }, // 1701834065
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtInternalFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Library of utility intenral functions for UX Tools.\n */" },
		{ "IncludePath", "Utils/UxtInternalFunctionLibrary.h" },
		{ "ModuleRelativePath", "Private/Utils/UxtInternalFunctionLibrary.h" },
		{ "ToolTip", "Library of utility intenral functions for UX Tools." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtInternalFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtInternalFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtInternalFunctionLibrary_Statics::ClassParams = {
		&UUxtInternalFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUxtInternalFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtInternalFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtInternalFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtInternalFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtInternalFunctionLibrary, 1578205564);
	template<> UXTOOLS_API UClass* StaticClass<UUxtInternalFunctionLibrary>()
	{
		return UUxtInternalFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtInternalFunctionLibrary(Z_Construct_UClass_UUxtInternalFunctionLibrary, &UUxtInternalFunctionLibrary::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtInternalFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtInternalFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
