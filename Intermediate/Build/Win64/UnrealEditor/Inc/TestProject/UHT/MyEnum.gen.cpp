// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/Global/MyEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyEnum() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TESTPROJECT_API UClass* Z_Construct_UClass_UMyEnum();
TESTPROJECT_API UClass* Z_Construct_UClass_UMyEnum_NoRegister();
TESTPROJECT_API UEnum* Z_Construct_UEnum_TestProject_ETPSCharacterSlot();
TESTPROJECT_API UEnum* Z_Construct_UEnum_TestProject_ETPSMonsterState();
TESTPROJECT_API UEnum* Z_Construct_UEnum_TestProject_ETPSObjectType();
TESTPROJECT_API UEnum* Z_Construct_UEnum_TestProject_ETPSPlayerAnim();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Enum ETPSPlayerAnim
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETPSPlayerAnim;
static UEnum* ETPSPlayerAnim_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETPSPlayerAnim.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETPSPlayerAnim.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TestProject_ETPSPlayerAnim, (UObject*)Z_Construct_UPackage__Script_TestProject(), TEXT("ETPSPlayerAnim"));
	}
	return Z_Registration_Info_UEnum_ETPSPlayerAnim.OuterSingleton;
}
template<> TESTPROJECT_API UEnum* StaticEnum<ETPSPlayerAnim>()
{
	return ETPSPlayerAnim_StaticEnum();
}
struct Z_Construct_UEnum_TestProject_ETPSPlayerAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.DisplayName", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "Attack.Name", "ETPSPlayerAnim::Attack" },
		{ "BlueprintType", "true" },
		{ "Idle.DisplayName", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb1\xef\xbf\xbd" },
		{ "Idle.Name", "ETPSPlayerAnim::Idle" },
		{ "ModuleRelativePath", "Global/MyEnum.h" },
		{ "Run.DisplayName", "\xef\xbf\xbd\xde\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "Run.Name", "ETPSPlayerAnim::Run" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETPSPlayerAnim::Idle", (int64)ETPSPlayerAnim::Idle },
		{ "ETPSPlayerAnim::Run", (int64)ETPSPlayerAnim::Run },
		{ "ETPSPlayerAnim::Attack", (int64)ETPSPlayerAnim::Attack },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TestProject_ETPSPlayerAnim_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TestProject,
	nullptr,
	"ETPSPlayerAnim",
	"ETPSPlayerAnim",
	Z_Construct_UEnum_TestProject_ETPSPlayerAnim_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TestProject_ETPSPlayerAnim_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TestProject_ETPSPlayerAnim_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TestProject_ETPSPlayerAnim_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TestProject_ETPSPlayerAnim()
{
	if (!Z_Registration_Info_UEnum_ETPSPlayerAnim.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETPSPlayerAnim.InnerSingleton, Z_Construct_UEnum_TestProject_ETPSPlayerAnim_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETPSPlayerAnim.InnerSingleton;
}
// End Enum ETPSPlayerAnim

// Begin Enum ETPSObjectType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETPSObjectType;
static UEnum* ETPSObjectType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETPSObjectType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETPSObjectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TestProject_ETPSObjectType, (UObject*)Z_Construct_UPackage__Script_TestProject(), TEXT("ETPSObjectType"));
	}
	return Z_Registration_Info_UEnum_ETPSObjectType.OuterSingleton;
}
template<> TESTPROJECT_API UEnum* StaticEnum<ETPSObjectType>()
{
	return ETPSObjectType_StaticEnum();
}
struct Z_Construct_UEnum_TestProject_ETPSObjectType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Max.Name", "ETPSObjectType::Max" },
		{ "ModuleRelativePath", "Global/MyEnum.h" },
		{ "Monster.Name", "ETPSObjectType::Monster" },
		{ "Player.Name", "ETPSObjectType::Player" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETPSObjectType::Player", (int64)ETPSObjectType::Player },
		{ "ETPSObjectType::Monster", (int64)ETPSObjectType::Monster },
		{ "ETPSObjectType::Max", (int64)ETPSObjectType::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TestProject_ETPSObjectType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TestProject,
	nullptr,
	"ETPSObjectType",
	"ETPSObjectType",
	Z_Construct_UEnum_TestProject_ETPSObjectType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TestProject_ETPSObjectType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TestProject_ETPSObjectType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TestProject_ETPSObjectType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TestProject_ETPSObjectType()
{
	if (!Z_Registration_Info_UEnum_ETPSObjectType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETPSObjectType.InnerSingleton, Z_Construct_UEnum_TestProject_ETPSObjectType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETPSObjectType.InnerSingleton;
}
// End Enum ETPSObjectType

// Begin Enum ETPSCharacterSlot
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETPSCharacterSlot;
static UEnum* ETPSCharacterSlot_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETPSCharacterSlot.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETPSCharacterSlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TestProject_ETPSCharacterSlot, (UObject*)Z_Construct_UPackage__Script_TestProject(), TEXT("ETPSCharacterSlot"));
	}
	return Z_Registration_Info_UEnum_ETPSCharacterSlot.OuterSingleton;
}
template<> TESTPROJECT_API UEnum* StaticEnum<ETPSCharacterSlot>()
{
	return ETPSCharacterSlot_StaticEnum();
}
struct Z_Construct_UEnum_TestProject_ETPSCharacterSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LWeapon.Name", "ETPSCharacterSlot::LWeapon" },
		{ "ModuleRelativePath", "Global/MyEnum.h" },
		{ "RWeapon.Name", "ETPSCharacterSlot::RWeapon" },
		{ "SlotMax.Name", "ETPSCharacterSlot::SlotMax" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETPSCharacterSlot::LWeapon", (int64)ETPSCharacterSlot::LWeapon },
		{ "ETPSCharacterSlot::RWeapon", (int64)ETPSCharacterSlot::RWeapon },
		{ "ETPSCharacterSlot::SlotMax", (int64)ETPSCharacterSlot::SlotMax },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TestProject_ETPSCharacterSlot_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TestProject,
	nullptr,
	"ETPSCharacterSlot",
	"ETPSCharacterSlot",
	Z_Construct_UEnum_TestProject_ETPSCharacterSlot_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TestProject_ETPSCharacterSlot_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TestProject_ETPSCharacterSlot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TestProject_ETPSCharacterSlot_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TestProject_ETPSCharacterSlot()
{
	if (!Z_Registration_Info_UEnum_ETPSCharacterSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETPSCharacterSlot.InnerSingleton, Z_Construct_UEnum_TestProject_ETPSCharacterSlot_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETPSCharacterSlot.InnerSingleton;
}
// End Enum ETPSCharacterSlot

// Begin Enum ETPSMonsterState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETPSMonsterState;
static UEnum* ETPSMonsterState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETPSMonsterState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETPSMonsterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TestProject_ETPSMonsterState, (UObject*)Z_Construct_UPackage__Script_TestProject(), TEXT("ETPSMonsterState"));
	}
	return Z_Registration_Info_UEnum_ETPSMonsterState.OuterSingleton;
}
template<> TESTPROJECT_API UEnum* StaticEnum<ETPSMonsterState>()
{
	return ETPSMonsterState_StaticEnum();
}
struct Z_Construct_UEnum_TestProject_ETPSMonsterState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.DisplayName", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "Attack.Name", "ETPSMonsterState::Attack" },
		{ "BlueprintType", "true" },
		{ "Idle.DisplayName", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb1\xef\xbf\xbd" },
		{ "Idle.Name", "ETPSMonsterState::Idle" },
		{ "ModuleRelativePath", "Global/MyEnum.h" },
		{ "MovetoLocation.DisplayName", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "MovetoLocation.Name", "ETPSMonsterState::MovetoLocation" },
		{ "MovetoPlayer.DisplayName", "\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xd1\xb1\xef\xbf\xbd" },
		{ "MovetoPlayer.Name", "ETPSMonsterState::MovetoPlayer" },
		{ "Patrol.DisplayName", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb1\xef\xbf\xbd" },
		{ "Patrol.Name", "ETPSMonsterState::Patrol" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETPSMonsterState::Idle", (int64)ETPSMonsterState::Idle },
		{ "ETPSMonsterState::Patrol", (int64)ETPSMonsterState::Patrol },
		{ "ETPSMonsterState::MovetoPlayer", (int64)ETPSMonsterState::MovetoPlayer },
		{ "ETPSMonsterState::MovetoLocation", (int64)ETPSMonsterState::MovetoLocation },
		{ "ETPSMonsterState::Attack", (int64)ETPSMonsterState::Attack },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TestProject_ETPSMonsterState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TestProject,
	nullptr,
	"ETPSMonsterState",
	"ETPSMonsterState",
	Z_Construct_UEnum_TestProject_ETPSMonsterState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TestProject_ETPSMonsterState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TestProject_ETPSMonsterState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TestProject_ETPSMonsterState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TestProject_ETPSMonsterState()
{
	if (!Z_Registration_Info_UEnum_ETPSMonsterState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETPSMonsterState.InnerSingleton, Z_Construct_UEnum_TestProject_ETPSMonsterState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETPSMonsterState.InnerSingleton;
}
// End Enum ETPSMonsterState

// Begin Class UMyEnum
void UMyEnum::StaticRegisterNativesUMyEnum()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyEnum);
UClass* Z_Construct_UClass_UMyEnum_NoRegister()
{
	return UMyEnum::StaticClass();
}
struct Z_Construct_UClass_UMyEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Global/MyEnum.h" },
		{ "ModuleRelativePath", "Global/MyEnum.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyEnum>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyEnum_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyEnum_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyEnum_Statics::ClassParams = {
	&UMyEnum::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyEnum_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyEnum_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyEnum()
{
	if (!Z_Registration_Info_UClass_UMyEnum.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyEnum.OuterSingleton, Z_Construct_UClass_UMyEnum_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyEnum.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<UMyEnum>()
{
	return UMyEnum::StaticClass();
}
UMyEnum::UMyEnum(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyEnum);
UMyEnum::~UMyEnum() {}
// End Class UMyEnum

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_MyEnum_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETPSPlayerAnim_StaticEnum, TEXT("ETPSPlayerAnim"), &Z_Registration_Info_UEnum_ETPSPlayerAnim, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 971551330U) },
		{ ETPSObjectType_StaticEnum, TEXT("ETPSObjectType"), &Z_Registration_Info_UEnum_ETPSObjectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 439213650U) },
		{ ETPSCharacterSlot_StaticEnum, TEXT("ETPSCharacterSlot"), &Z_Registration_Info_UEnum_ETPSCharacterSlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3078585349U) },
		{ ETPSMonsterState_StaticEnum, TEXT("ETPSMonsterState"), &Z_Registration_Info_UEnum_ETPSMonsterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4163042981U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyEnum, UMyEnum::StaticClass, TEXT("UMyEnum"), &Z_Registration_Info_UClass_UMyEnum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyEnum), 1540986856U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_MyEnum_h_3076104587(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_MyEnum_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_MyEnum_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_MyEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_MyEnum_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
