// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtIconBrush.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtIconBrush() {}
// Cross Module References
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtIconBrushContentType();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtIconBrush();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	static UEnum* EUxtIconBrushContentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtIconBrushContentType, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtIconBrushContentType"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtIconBrushContentType>()
	{
		return EUxtIconBrushContentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtIconBrushContentType(EUxtIconBrushContentType_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtIconBrushContentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtIconBrushContentType_Hash() { return 500484454U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtIconBrushContentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtIconBrushContentType"), 0, Get_Z_Construct_UEnum_UXTools_EUxtIconBrushContentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtIconBrushContentType::None", (int64)EUxtIconBrushContentType::None },
				{ "EUxtIconBrushContentType::UnicodeCharacter", (int64)EUxtIconBrushContentType::UnicodeCharacter },
				{ "EUxtIconBrushContentType::String", (int64)EUxtIconBrushContentType::String },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Controls/UxtIconBrush.h" },
				{ "None.Comment", "/** The icon brush has no content. */" },
				{ "None.Name", "EUxtIconBrushContentType::None" },
				{ "None.ToolTip", "The icon brush has no content." },
				{ "String.Comment", "/** The icon brush content represents a string. */" },
				{ "String.Name", "EUxtIconBrushContentType::String" },
				{ "String.ToolTip", "The icon brush content represents a string." },
				{ "UnicodeCharacter.Comment", "/** The icon brush content represents a Unicode character. */" },
				{ "UnicodeCharacter.Name", "EUxtIconBrushContentType::UnicodeCharacter" },
				{ "UnicodeCharacter.ToolTip", "The icon brush content represents a Unicode character." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtIconBrushContentType",
				"EUxtIconBrushContentType",
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
class UScriptStruct* FUxtIconBrush::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UXTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FUxtIconBrush_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUxtIconBrush, Z_Construct_UPackage__Script_UXTools(), TEXT("UxtIconBrush"), sizeof(FUxtIconBrush), Get_Z_Construct_UScriptStruct_FUxtIconBrush_Hash());
	}
	return Singleton;
}
template<> UXTOOLS_API UScriptStruct* StaticStruct<FUxtIconBrush>()
{
	return FUxtIconBrush::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUxtIconBrush(FUxtIconBrush::StaticStruct, TEXT("/Script/UXTools"), TEXT("UxtIconBrush"), false, nullptr, nullptr);
static struct FScriptStruct_UXTools_StaticRegisterNativesFUxtIconBrush
{
	FScriptStruct_UXTools_StaticRegisterNativesFUxtIconBrush()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UxtIconBrush")),new UScriptStruct::TCppStructOps<FUxtIconBrush>);
	}
} ScriptStruct_UXTools_StaticRegisterNativesFUxtIconBrush;
	struct Z_Construct_UScriptStruct_FUxtIconBrush_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconContentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IconContentType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IconContentType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtIconBrush_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "UXTools" },
		{ "Comment", "/**\n * Structure which contains data representing an icon's appearance. Icons are currently represented as\n * Unicode characters or strings, but in the future could be textures, models, etc.\n */" },
		{ "ModuleRelativePath", "Public/Controls/UxtIconBrush.h" },
		{ "ToolTip", "Structure which contains data representing an icon's appearance. Icons are currently represented as\nUnicode characters or strings, but in the future could be textures, models, etc." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUxtIconBrush>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_IconString_MetaData[] = {
		{ "Category", "Icon Brush" },
		{ "Comment", "/** String of characters representing a Unicode symbol, or a literal string. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtIconBrush.h" },
		{ "ToolTip", "String of characters representing a Unicode symbol, or a literal string." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_IconString = { "IconString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtIconBrush, IconString), METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_IconString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_IconString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_IconFont_MetaData[] = {
		{ "Category", "Icon Brush" },
		{ "Comment", "/** The font used by the IconString. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtIconBrush.h" },
		{ "ToolTip", "The font used by the IconString." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_IconFont = { "IconFont", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtIconBrush, IconFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_IconFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_IconFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_IconContentType_MetaData[] = {
		{ "Category", "Icon Brush" },
		{ "Comment", "/** Describes what the icon brush content represents. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtIconBrush.h" },
		{ "ToolTip", "Describes what the icon brush content represents." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_IconContentType = { "IconContentType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtIconBrush, IconContentType), Z_Construct_UEnum_UXTools_EUxtIconBrushContentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_IconContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_IconContentType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_IconContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUxtIconBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_IconString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_IconFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_IconContentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtIconBrush_Statics::NewProp_IconContentType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUxtIconBrush_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
		nullptr,
		&NewStructOps,
		"UxtIconBrush",
		sizeof(FUxtIconBrush),
		alignof(FUxtIconBrush),
		Z_Construct_UScriptStruct_FUxtIconBrush_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtIconBrush_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtIconBrush_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtIconBrush_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUxtIconBrush()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUxtIconBrush_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UxtIconBrush"), sizeof(FUxtIconBrush), Get_Z_Construct_UScriptStruct_FUxtIconBrush_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUxtIconBrush_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUxtIconBrush_Hash() { return 830926241U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
