// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXToolsInputSimulation/Public/UxtInputSimulationLocalPlayerSubsystem.h"
#include "Engine/Classes/Engine/LocalPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtInputSimulationLocalPlayerSubsystem() {}
// Cross Module References
	UXTOOLSINPUTSIMULATION_API UClass* Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_NoRegister();
	UXTOOLSINPUTSIMULATION_API UClass* Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	UPackage* Z_Construct_UPackage__Script_UXToolsInputSimulation();
// End Cross Module References
	void UUxtInputSimulationLocalPlayerSubsystem::StaticRegisterNativesUUxtInputSimulationLocalPlayerSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_NoRegister()
	{
		return UUxtInputSimulationLocalPlayerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UXToolsInputSimulation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/** Subsystem that creates an actor for simulation when a game is started. */" },
		{ "IncludePath", "UxtInputSimulationLocalPlayerSubsystem.h" },
		{ "ModuleRelativePath", "Public/UxtInputSimulationLocalPlayerSubsystem.h" },
		{ "ToolTip", "Subsystem that creates an actor for simulation when a game is started." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtInputSimulationLocalPlayerSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::ClassParams = {
		&UUxtInputSimulationLocalPlayerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtInputSimulationLocalPlayerSubsystem, 3114396091);
	template<> UXTOOLSINPUTSIMULATION_API UClass* StaticClass<UUxtInputSimulationLocalPlayerSubsystem>()
	{
		return UUxtInputSimulationLocalPlayerSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtInputSimulationLocalPlayerSubsystem(Z_Construct_UClass_UUxtInputSimulationLocalPlayerSubsystem, &UUxtInputSimulationLocalPlayerSubsystem::StaticClass, TEXT("/Script/UXToolsInputSimulation"), TEXT("UUxtInputSimulationLocalPlayerSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtInputSimulationLocalPlayerSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
