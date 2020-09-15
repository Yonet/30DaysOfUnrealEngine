// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Controls/UxtBackPlateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtBackPlateComponent() {}
// Cross Module References
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBackPlateComponent_NoRegister();
	UXTOOLS_API UClass* Z_Construct_UClass_UUxtBackPlateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUxtBackPlateComponent::execSetBackPlateMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBackPlateMaterial(Z_Param_NewMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUxtBackPlateComponent::execGetBackPlateMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetBackPlateMaterial();
		P_NATIVE_END;
	}
	void UUxtBackPlateComponent::StaticRegisterNativesUUxtBackPlateComponent()
	{
		UClass* Class = UUxtBackPlateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBackPlateMaterial", &UUxtBackPlateComponent::execGetBackPlateMaterial },
			{ "SetBackPlateMaterial", &UUxtBackPlateComponent::execSetBackPlateMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics
	{
		struct UxtBackPlateComponent_eventGetBackPlateMaterial_Parms
		{
			UMaterialInterface* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBackPlateComponent_eventGetBackPlateMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/Controls/UxtBackPlateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBackPlateComponent, nullptr, "GetBackPlateMaterial", nullptr, nullptr, sizeof(UxtBackPlateComponent_eventGetBackPlateMaterial_Parms), Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics
	{
		struct UxtBackPlateComponent_eventSetBackPlateMaterial_Parms
		{
			UMaterialInterface* NewMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UxtBackPlateComponent_eventSetBackPlateMaterial_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::NewProp_NewMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Controls/UxtBackPlateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUxtBackPlateComponent, nullptr, "SetBackPlateMaterial", nullptr, nullptr, sizeof(UxtBackPlateComponent_eventSetBackPlateMaterial_Parms), Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUxtBackPlateComponent_NoRegister()
	{
		return UUxtBackPlateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUxtBackPlateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUxtBackPlateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UXTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUxtBackPlateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUxtBackPlateComponent_GetBackPlateMaterial, "GetBackPlateMaterial" }, // 1777987094
		{ &Z_Construct_UFunction_UUxtBackPlateComponent_SetBackPlateMaterial, "SetBackPlateMaterial" }, // 3840590134
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBackPlateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UXTools" },
		{ "Comment", "/**\n * Static mesh which automatically updates scale dependent material properties for back plates.\n */" },
		{ "HideCategories", "Materials Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Controls/UxtBackPlateComponent.h" },
		{ "ModuleRelativePath", "Public/Controls/UxtBackPlateComponent.h" },
		{ "ToolTip", "Static mesh which automatically updates scale dependent material properties for back plates." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_MaterialInstance_MetaData[] = {
		{ "Comment", "/** Handle to any dynamic material this component instantiates due to material parameter changes. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBackPlateComponent.h" },
		{ "ToolTip", "Handle to any dynamic material this component instantiates due to material parameter changes." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBackPlateComponent, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_MaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_MaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_Material_MetaData[] = {
		{ "BlueprintGetter", "GetBackPlateMaterial" },
		{ "BlueprintSetter", "SetBackPlateMaterial" },
		{ "Category", "Back Plate" },
		{ "Comment", "/** The default back plate material. */" },
		{ "ModuleRelativePath", "Public/Controls/UxtBackPlateComponent.h" },
		{ "ToolTip", "The default back plate material." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUxtBackPlateComponent, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUxtBackPlateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_MaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUxtBackPlateComponent_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUxtBackPlateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUxtBackPlateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUxtBackPlateComponent_Statics::ClassParams = {
		&UUxtBackPlateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUxtBackPlateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBackPlateComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUxtBackPlateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUxtBackPlateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUxtBackPlateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUxtBackPlateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUxtBackPlateComponent, 470551376);
	template<> UXTOOLS_API UClass* StaticClass<UUxtBackPlateComponent>()
	{
		return UUxtBackPlateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUxtBackPlateComponent(Z_Construct_UClass_UUxtBackPlateComponent, &UUxtBackPlateComponent::StaticClass, TEXT("/Script/UXTools"), TEXT("UUxtBackPlateComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUxtBackPlateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
