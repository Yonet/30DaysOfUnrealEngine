// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UXTools/Public/Interactions/UxtManipulationFlags.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUxtManipulationFlags() {}
// Cross Module References
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtAxisFlags();
	UPackage* Z_Construct_UPackage__Script_UXTools();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtTransformMode();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtInteractionMode();
	UXTOOLS_API UEnum* Z_Construct_UEnum_UXTools_EUxtGenericManipulationMode();
// End Cross Module References
	static UEnum* EUxtAxisFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtAxisFlags, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtAxisFlags"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtAxisFlags>()
	{
		return EUxtAxisFlags_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtAxisFlags(EUxtAxisFlags_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtAxisFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtAxisFlags_Hash() { return 2302073185U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtAxisFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtAxisFlags"), 0, Get_Z_Construct_UEnum_UXTools_EUxtAxisFlags_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtAxisFlags::None", (int64)EUxtAxisFlags::None },
				{ "EUxtAxisFlags::X", (int64)EUxtAxisFlags::X },
				{ "EUxtAxisFlags::Y", (int64)EUxtAxisFlags::Y },
				{ "EUxtAxisFlags::Z", (int64)EUxtAxisFlags::Z },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Comment", "///** Flags used to represent a set of 3D axes. */\n" },
				{ "ModuleRelativePath", "Public/Interactions/UxtManipulationFlags.h" },
				{ "None.Hidden", "" },
				{ "None.Name", "EUxtAxisFlags::None" },
				{ "ToolTip", "Flags used to represent a set of 3D axes." },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
				{ "X.Name", "EUxtAxisFlags::X" },
				{ "Y.Name", "EUxtAxisFlags::Y" },
				{ "Z.Name", "EUxtAxisFlags::Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtAxisFlags",
				"EUxtAxisFlags",
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
	static UEnum* EUxtTransformMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtTransformMode, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtTransformMode"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtTransformMode>()
	{
		return EUxtTransformMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtTransformMode(EUxtTransformMode_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtTransformMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtTransformMode_Hash() { return 2286805025U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtTransformMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtTransformMode"), 0, Get_Z_Construct_UEnum_UXTools_EUxtTransformMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtTransformMode::None", (int64)EUxtTransformMode::None },
				{ "EUxtTransformMode::Translation", (int64)EUxtTransformMode::Translation },
				{ "EUxtTransformMode::Rotation", (int64)EUxtTransformMode::Rotation },
				{ "EUxtTransformMode::Scaling", (int64)EUxtTransformMode::Scaling },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** Two-handed transformations supported by the generic manipulator. */" },
				{ "ModuleRelativePath", "Public/Interactions/UxtManipulationFlags.h" },
				{ "None.Hidden", "" },
				{ "None.Name", "EUxtTransformMode::None" },
				{ "Rotation.Comment", "/** Rotation by the line between grab points. */" },
				{ "Rotation.Name", "EUxtTransformMode::Rotation" },
				{ "Rotation.ToolTip", "Rotation by the line between grab points." },
				{ "Scaling.Comment", "/** Scaling by distance between grab points. */" },
				{ "Scaling.Name", "EUxtTransformMode::Scaling" },
				{ "Scaling.ToolTip", "Scaling by distance between grab points." },
				{ "ToolTip", "Two-handed transformations supported by the generic manipulator." },
				{ "Translation.Comment", "/** Translation by average movement of grab points. */" },
				{ "Translation.Name", "EUxtTransformMode::Translation" },
				{ "Translation.ToolTip", "Translation by average movement of grab points." },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtTransformMode",
				"EUxtTransformMode",
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
	static UEnum* EUxtOneHandRotationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtOneHandRotationMode"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtOneHandRotationMode>()
	{
		return EUxtOneHandRotationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtOneHandRotationMode(EUxtOneHandRotationMode_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtOneHandRotationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode_Hash() { return 3408177825U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtOneHandRotationMode"), 0, Get_Z_Construct_UEnum_UXTools_EUxtOneHandRotationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtOneHandRotationMode::MaintainOriginalRotation", (int64)EUxtOneHandRotationMode::MaintainOriginalRotation },
				{ "EUxtOneHandRotationMode::RotateAboutObjectCenter", (int64)EUxtOneHandRotationMode::RotateAboutObjectCenter },
				{ "EUxtOneHandRotationMode::RotateAboutGrabPoint", (int64)EUxtOneHandRotationMode::RotateAboutGrabPoint },
				{ "EUxtOneHandRotationMode::MaintainRotationToUser", (int64)EUxtOneHandRotationMode::MaintainRotationToUser },
				{ "EUxtOneHandRotationMode::GravityAlignedMaintainRotationToUser", (int64)EUxtOneHandRotationMode::GravityAlignedMaintainRotationToUser },
				{ "EUxtOneHandRotationMode::FaceUser", (int64)EUxtOneHandRotationMode::FaceUser },
				{ "EUxtOneHandRotationMode::FaceAwayFromUser", (int64)EUxtOneHandRotationMode::FaceAwayFromUser },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Specifies how the object will rotate when it is being grabbed with one hand. */" },
				{ "FaceAwayFromUser.Comment", "/** Ensures object always faces away from user. Useful for slates/panels that are configured backwards. */" },
				{ "FaceAwayFromUser.Name", "EUxtOneHandRotationMode::FaceAwayFromUser" },
				{ "FaceAwayFromUser.ToolTip", "Ensures object always faces away from user. Useful for slates/panels that are configured backwards." },
				{ "FaceUser.Comment", "/** Ensures object always faces the user. Useful for slates/panels. */" },
				{ "FaceUser.Name", "EUxtOneHandRotationMode::FaceUser" },
				{ "FaceUser.ToolTip", "Ensures object always faces the user. Useful for slates/panels." },
				{ "GravityAlignedMaintainRotationToUser.Comment", "/** Maintains object's original rotation to user, but makes the object vertical. Useful for bounding boxes. */" },
				{ "GravityAlignedMaintainRotationToUser.Name", "EUxtOneHandRotationMode::GravityAlignedMaintainRotationToUser" },
				{ "GravityAlignedMaintainRotationToUser.ToolTip", "Maintains object's original rotation to user, but makes the object vertical. Useful for bounding boxes." },
				{ "MaintainOriginalRotation.Comment", "/** Does not rotate object as it is being moved. */" },
				{ "MaintainOriginalRotation.Name", "EUxtOneHandRotationMode::MaintainOriginalRotation" },
				{ "MaintainOriginalRotation.ToolTip", "Does not rotate object as it is being moved." },
				{ "MaintainRotationToUser.Comment", "/** Maintains the object's original rotation for Y/Z axis to the user. */" },
				{ "MaintainRotationToUser.Name", "EUxtOneHandRotationMode::MaintainRotationToUser" },
				{ "MaintainRotationToUser.ToolTip", "Maintains the object's original rotation for Y/Z axis to the user." },
				{ "ModuleRelativePath", "Public/Interactions/UxtManipulationFlags.h" },
				{ "RotateAboutGrabPoint.Comment", "/** Only works for articulated hands/controllers. Rotate object as if it was being held by hand/controller. Useful for inspection. */" },
				{ "RotateAboutGrabPoint.Name", "EUxtOneHandRotationMode::RotateAboutGrabPoint" },
				{ "RotateAboutGrabPoint.ToolTip", "Only works for articulated hands/controllers. Rotate object as if it was being held by hand/controller. Useful for inspection." },
				{ "RotateAboutObjectCenter.Comment", "/** Only works for articulated hands/controllers. Rotate object using rotation of the hand/controller, but about the object center point. Useful for inspecting at a distance. */" },
				{ "RotateAboutObjectCenter.Name", "EUxtOneHandRotationMode::RotateAboutObjectCenter" },
				{ "RotateAboutObjectCenter.ToolTip", "Only works for articulated hands/controllers. Rotate object using rotation of the hand/controller, but about the object center point. Useful for inspecting at a distance." },
				{ "ToolTip", "Specifies how the object will rotate when it is being grabbed with one hand." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtOneHandRotationMode",
				"EUxtOneHandRotationMode",
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
	static UEnum* EUxtInteractionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtInteractionMode, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtInteractionMode"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtInteractionMode>()
	{
		return EUxtInteractionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtInteractionMode(EUxtInteractionMode_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtInteractionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtInteractionMode_Hash() { return 2650701814U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtInteractionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtInteractionMode"), 0, Get_Z_Construct_UEnum_UXTools_EUxtInteractionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtInteractionMode::None", (int64)EUxtInteractionMode::None },
				{ "EUxtInteractionMode::Near", (int64)EUxtInteractionMode::Near },
				{ "EUxtInteractionMode::Far", (int64)EUxtInteractionMode::Far },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Comment", "/*** Interaction modes supported by the generic manipulator. */" },
				{ "Far.Comment", "/** Move, rotate and scale objects with far interaction. */" },
				{ "Far.Name", "EUxtInteractionMode::Far" },
				{ "Far.ToolTip", "Move, rotate and scale objects with far interaction." },
				{ "ModuleRelativePath", "Public/Interactions/UxtManipulationFlags.h" },
				{ "Near.Comment", "/** Move, rotate and scale objects with near interaction. */" },
				{ "Near.Name", "EUxtInteractionMode::Near" },
				{ "Near.ToolTip", "Move, rotate and scale objects with near interaction." },
				{ "None.Hidden", "" },
				{ "None.Name", "EUxtInteractionMode::None" },
				{ "ToolTip", "Interaction modes supported by the generic manipulator." },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtInteractionMode",
				"EUxtInteractionMode",
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
	static UEnum* EUxtGenericManipulationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UXTools_EUxtGenericManipulationMode, Z_Construct_UPackage__Script_UXTools(), TEXT("EUxtGenericManipulationMode"));
		}
		return Singleton;
	}
	template<> UXTOOLS_API UEnum* StaticEnum<EUxtGenericManipulationMode>()
	{
		return EUxtGenericManipulationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUxtGenericManipulationMode(EUxtGenericManipulationMode_StaticEnum, TEXT("/Script/UXTools"), TEXT("EUxtGenericManipulationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UXTools_EUxtGenericManipulationMode_Hash() { return 4165330069U; }
	UEnum* Z_Construct_UEnum_UXTools_EUxtGenericManipulationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UXTools();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUxtGenericManipulationMode"), 0, Get_Z_Construct_UEnum_UXTools_EUxtGenericManipulationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUxtGenericManipulationMode::None", (int64)EUxtGenericManipulationMode::None },
				{ "EUxtGenericManipulationMode::OneHanded", (int64)EUxtGenericManipulationMode::OneHanded },
				{ "EUxtGenericManipulationMode::TwoHanded", (int64)EUxtGenericManipulationMode::TwoHanded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Comment", "/** Manipulation modes supported by the generic manipulator. */" },
				{ "ModuleRelativePath", "Public/Interactions/UxtManipulationFlags.h" },
				{ "None.Hidden", "" },
				{ "None.Name", "EUxtGenericManipulationMode::None" },
				{ "OneHanded.Comment", "/** Move and rotate objects with one hand. */" },
				{ "OneHanded.Name", "EUxtGenericManipulationMode::OneHanded" },
				{ "OneHanded.ToolTip", "Move and rotate objects with one hand." },
				{ "ToolTip", "Manipulation modes supported by the generic manipulator." },
				{ "TwoHanded.Comment", "/** Move, rotate, scale objects with two hands. */" },
				{ "TwoHanded.Name", "EUxtGenericManipulationMode::TwoHanded" },
				{ "TwoHanded.ToolTip", "Move, rotate, scale objects with two hands." },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UXTools,
				nullptr,
				"EUxtGenericManipulationMode",
				"EUxtGenericManipulationMode",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
