// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TPS/Play/Character/TPSMonster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSMonster() {}

// Begin Cross Module References
TESTPROJECT_API UClass* Z_Construct_UClass_ATPSMonster();
TESTPROJECT_API UClass* Z_Construct_UClass_ATPSMonster_NoRegister();
TESTPROJECT_API UClass* Z_Construct_UClass_ATPSPlayCharacter();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class ATPSMonster
void ATPSMonster::StaticRegisterNativesATPSMonster()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPSMonster);
UClass* Z_Construct_UClass_ATPSMonster_NoRegister()
{
	return ATPSMonster::StaticClass();
}
struct Z_Construct_UClass_ATPSMonster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TPS/Play/Character/TPSMonster.h" },
		{ "ModuleRelativePath", "TPS/Play/Character/TPSMonster.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSMonster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATPSMonster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATPSPlayCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSMonster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPSMonster_Statics::ClassParams = {
	&ATPSMonster::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSMonster_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPSMonster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATPSMonster()
{
	if (!Z_Registration_Info_UClass_ATPSMonster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPSMonster.OuterSingleton, Z_Construct_UClass_ATPSMonster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATPSMonster.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<ATPSMonster>()
{
	return ATPSMonster::StaticClass();
}
ATPSMonster::ATPSMonster() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSMonster);
ATPSMonster::~ATPSMonster() {}
// End Class ATPSMonster

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_Character_TPSMonster_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATPSMonster, ATPSMonster::StaticClass, TEXT("ATPSMonster"), &Z_Registration_Info_UClass_ATPSMonster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPSMonster), 3275921826U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_Character_TPSMonster_h_515144476(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_Character_TPSMonster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_Character_TPSMonster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
