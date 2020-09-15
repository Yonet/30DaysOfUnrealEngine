// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXToolsRuntimeSettings/Public/UxtRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtRuntimeSettings() {}
// Cross Module References
	UXTOOLSRUNTIMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet();
	UPackage* Z_Construct_UPackage__Script_UXToolsRuntimeSettings();
	WINDOWSMIXEDREALITYHMD_API UEnum* Z_Construct_UEnum_WindowsMixedRealityHMD_EHMDInputControllerButtons();
	UXTOOLSRUNTIMESETTINGS_API UClass* Z_Construct_UClass_UUxtRuntimeSettings_NoRegister();
	UXTOOLSRUNTIMESETTINGS_API UClass* Z_Construct_UClass_UUxtRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FUxtRuntimeSettingsButtonSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UXTOOLSRUNTIMESETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet, Z_Construct_UPackage__Script_UXToolsRuntimeSettings(), TEXT("UxtRuntimeSettingsButtonSet"), sizeof(FUxtRuntimeSettingsButtonSet), Get_Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Hash());
	}
	return Singleton;
}
template<> UXTOOLSRUNTIMESETTINGS_API UScriptStruct* StaticStruct<FUxtRuntimeSettingsButtonSet>()
{
	return FUxtRuntimeSettingsButtonSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUxtRuntimeSettingsButtonSet(FUxtRuntimeSettingsButtonSet::StaticStruct, TEXT("/Script/UXToolsRuntimeSettings"), TEXT("UxtRuntimeSettingsButtonSet"), false, nullptr, nullptr);
static struct FScriptStruct_UXToolsRuntimeSettings_StaticRegisterNativesFUxtRuntimeSettingsButtonSet
{
	FScriptStruct_UXToolsRuntimeSettings_StaticRegisterNativesFUxtRuntimeSettingsButtonSet()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UxtRuntimeSettingsButtonSet")),new UScriptStruct::TCppStructOps<FUxtRuntimeSettingsButtonSet>);
	}
} ScriptStruct_UXToolsRuntimeSettings_StaticRegisterNativesFUxtRuntimeSettingsButtonSet;
	struct Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Buttons_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Buttons;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Buttons_ElementProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Buttons_ElementProp_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UxtRuntimeSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUxtRuntimeSettingsButtonSet>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Statics::NewProp_Buttons_MetaData[] = {
		{ "Category", "Input Simulation" },
		{ "DisplayName", "Buttons" },
		{ "ModuleRelativePath", "Public/UxtRuntimeSettings.h" },
		{ "Tooltip", "Buttons that are triggered by a simulated hand gesture." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Statics::NewProp_Buttons = { "Buttons", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUxtRuntimeSettingsButtonSet, Buttons), METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Statics::NewProp_Buttons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Statics::NewProp_Buttons_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Statics::NewProp_Buttons_ElementProp = { "Buttons", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_WindowsMixedRealityHMD_EHMDInputControllerButtons, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Statics::NewProp_Buttons_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Statics::NewProp_Buttons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Statics::NewProp_Buttons_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Statics::NewProp_Buttons_ElementProp_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UXToolsRuntimeSettings,
		nullptr,
		&NewStructOps,
		"UxtRuntimeSettingsButtonSet",
		sizeof(FUxtRuntimeSettingsButtonSet),
		alignof(FUxtRuntimeSettingsButtonSet),
		Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UXToolsRuntimeSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UxtRuntimeSettingsButtonSet"), sizeof(FUxtRuntimeSettingsButtonSet), Get_Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet_Hash() { return 3901103563U; }
	void UUxtRuntimeSettings::StaticRegisterNativesUUxtRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_UUxtRuntimeSettings_NoRegister()
	{
		return UUxtRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUxtRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandAnimInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HandAnimInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_HandMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandRestOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandRestOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandMovementBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandMovementBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandPoseButtonMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_HandPoseButtonMappings;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HandPoseButtonMappings_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandPoseButtonMappings_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryHandPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SecondaryHandPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryHandPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PrimaryHandPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHandPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DefaultHandPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShoulderPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHandPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultHandPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartWithHandsEnabled_MetaData[];
#endif
		static void NewProp_bStartWithHandsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartWithHandsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartWithPositionalHeadTracking_MetaData[];
#endif
		static void NewProp_bStartWithPositionalHeadTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartWithPositionalHeadTracking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UXToolsRuntimeSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for UXTools.\n */" },
		{ "IncludePath", "UxtRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/UxtRuntimeSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings for UXTools." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandAnimInstance_MetaData[] = {
		{ "Category", "Input Simulation" },
		{ "DisplayName", "Hand Animation" },
		{ "ModuleRelativePath", "Public/UxtRuntimeSettings.h" },
		{ "Tooltip", "Animation instance used for animating hand meshes." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandAnimInstance = { "HandAnimInstance", nullptr, (EPropertyFlags)0x0014000000044001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtRuntimeSettings, HandAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandAnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandAnimInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandMesh_MetaData[] = {
		{ "Category", "Input Simulation" },
		{ "DisplayName", "Hand Mesh" },
		{ "ModuleRelativePath", "Public/UxtRuntimeSettings.h" },
		{ "Tooltip", "Skeletal mesh for animating hands." },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandMesh = { "HandMesh", nullptr, (EPropertyFlags)0x0014000000044001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtRuntimeSettings, HandMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandRestOrientation_MetaData[] = {
		{ "Category", "Input Simulation" },
		{ "DisplayName", "Hand Rest Orientation" },
		{ "ModuleRelativePath", "Public/UxtRuntimeSettings.h" },
		{ "Tooltip", "Orientation of the right hand in the default pose." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandRestOrientation = { "HandRestOrientation", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtRuntimeSettings, HandRestOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandRestOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandRestOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandMovementBox_MetaData[] = {
		{ "Category", "Input Simulation" },
		{ "DisplayName", "Hand Movement Range" },
		{ "ModuleRelativePath", "Public/UxtRuntimeSettings.h" },
		{ "Tooltip", "Allowed range of hand movement in camera space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandMovementBox = { "HandMovementBox", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtRuntimeSettings, HandMovementBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandMovementBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandMovementBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandPoseButtonMappings_MetaData[] = {
		{ "Category", "Input Simulation" },
		{ "DisplayName", "Hand Pose Buttons" },
		{ "ModuleRelativePath", "Public/UxtRuntimeSettings.h" },
		{ "Tooltip", "Controller buttons that are pressed along with certain hand poses." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandPoseButtonMappings = { "HandPoseButtonMappings", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtRuntimeSettings, HandPoseButtonMappings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandPoseButtonMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandPoseButtonMappings_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandPoseButtonMappings_Key_KeyProp = { "HandPoseButtonMappings_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandPoseButtonMappings_ValueProp = { "HandPoseButtonMappings", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FUxtRuntimeSettingsButtonSet, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_SecondaryHandPose_MetaData[] = {
		{ "Category", "Input Simulation" },
		{ "DisplayName", "Secondary Hand Pose" },
		{ "ModuleRelativePath", "Public/UxtRuntimeSettings.h" },
		{ "Tooltip", "Pose mapped to the secondary pose action." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_SecondaryHandPose = { "SecondaryHandPose", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtRuntimeSettings, SecondaryHandPose), METADATA_PARAMS(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_SecondaryHandPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_SecondaryHandPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_PrimaryHandPose_MetaData[] = {
		{ "Category", "Input Simulation" },
		{ "DisplayName", "Primary Hand Pose" },
		{ "ModuleRelativePath", "Public/UxtRuntimeSettings.h" },
		{ "Tooltip", "Pose mapped to the primary pose action." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_PrimaryHandPose = { "PrimaryHandPose", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtRuntimeSettings, PrimaryHandPose), METADATA_PARAMS(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_PrimaryHandPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_PrimaryHandPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_DefaultHandPose_MetaData[] = {
		{ "Category", "Input Simulation" },
		{ "DisplayName", "Default Hand Pose" },
		{ "ModuleRelativePath", "Public/UxtRuntimeSettings.h" },
		{ "Tooltip", "Default pose when no button is pressed." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_DefaultHandPose = { "DefaultHandPose", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtRuntimeSettings, DefaultHandPose), METADATA_PARAMS(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_DefaultHandPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_DefaultHandPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_ShoulderPosition_MetaData[] = {
		{ "Category", "Input Simulation" },
		{ "DisplayName", "Shoulder Position" },
		{ "ModuleRelativePath", "Public/UxtRuntimeSettings.h" },
		{ "Tooltip", "Position of the right shoulder in camera space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_ShoulderPosition = { "ShoulderPosition", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtRuntimeSettings, ShoulderPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_ShoulderPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_ShoulderPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_DefaultHandPosition_MetaData[] = {
		{ "Category", "Input Simulation" },
		{ "DisplayName", "Default Hand Position" },
		{ "ModuleRelativePath", "Public/UxtRuntimeSettings.h" },
		{ "Tooltip", "Default position of the right hand in camera space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_DefaultHandPosition = { "DefaultHandPosition", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtRuntimeSettings, DefaultHandPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_DefaultHandPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_DefaultHandPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_bStartWithHandsEnabled_MetaData[] = {
		{ "Category", "Input Simulation" },
		{ "DisplayName", "Start With Hands Enabled" },
		{ "ModuleRelativePath", "Public/UxtRuntimeSettings.h" },
		{ "Tooltip", "If true, hands will start with tracking enabled." },
	};
#endif
	void Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_bStartWithHandsEnabled_SetBit(void* Obj)
	{
		((UUxtRuntimeSettings*)Obj)->bStartWithHandsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_bStartWithHandsEnabled = { "bStartWithHandsEnabled", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtRuntimeSettings), &Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_bStartWithHandsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_bStartWithHandsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_bStartWithHandsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_bStartWithPositionalHeadTracking_MetaData[] = {
		{ "Category", "Input Simulation" },
		{ "DisplayName", "Start With Positional Head Tracking" },
		{ "ModuleRelativePath", "Public/UxtRuntimeSettings.h" },
		{ "Tooltip", "Enable positional head tracking on game start." },
	};
#endif
	void Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_bStartWithPositionalHeadTracking_SetBit(void* Obj)
	{
		((UUxtRuntimeSettings*)Obj)->bStartWithPositionalHeadTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_bStartWithPositionalHeadTracking = { "bStartWithPositionalHeadTracking", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUxtRuntimeSettings), &Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_bStartWithPositionalHeadTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_bStartWithPositionalHeadTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_bStartWithPositionalHeadTracking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtRuntimeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandAnimInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandRestOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandMovementBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandPoseButtonMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandPoseButtonMappings_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_HandPoseButtonMappings_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_SecondaryHandPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_PrimaryHandPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_DefaultHandPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_ShoulderPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_DefaultHandPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_bStartWithHandsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtRuntimeSettings_Statics::NewProp_bStartWithPositionalHeadTracking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtRuntimeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtRuntimeSettings_Statics::ClassParams = {
		&UUxtRuntimeSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUxtRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtRuntimeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtRuntimeSettings, 2705878232);
	template<> UXTOOLSRUNTIMESETTINGS_API UClass* StaticClass<UUxtRuntimeSettings>()
	{
		return UUxtRuntimeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtRuntimeSettings(Z_Construct_UClass_UUxtRuntimeSettings, &UUxtRuntimeSettings::StaticClass, TEXT("/Script/UXToolsRuntimeSettings"), TEXT("UUxtRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
