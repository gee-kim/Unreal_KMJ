// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TPS/Play/TPSPlayCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSPlayCharacter() {}

// Begin Cross Module References
TESTPROJECT_API UClass* Z_Construct_UClass_AGlobalCharacter();
TESTPROJECT_API UClass* Z_Construct_UClass_ATPSPlayCharacter();
TESTPROJECT_API UClass* Z_Construct_UClass_ATPSPlayCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class ATPSPlayCharacter
void ATPSPlayCharacter::StaticRegisterNativesATPSPlayCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPSPlayCharacter);
UClass* Z_Construct_UClass_ATPSPlayCharacter_NoRegister()
{
	return ATPSPlayCharacter::StaticClass();
}
struct Z_Construct_UClass_ATPSPlayCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TPS/Play/TPSPlayCharacter.h" },
		{ "ModuleRelativePath", "TPS/Play/TPSPlayCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSPlayCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATPSPlayCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGlobalCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPSPlayCharacter_Statics::ClassParams = {
	&ATPSPlayCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPSPlayCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATPSPlayCharacter()
{
	if (!Z_Registration_Info_UClass_ATPSPlayCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPSPlayCharacter.OuterSingleton, Z_Construct_UClass_ATPSPlayCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATPSPlayCharacter.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<ATPSPlayCharacter>()
{
	return ATPSPlayCharacter::StaticClass();
}
ATPSPlayCharacter::ATPSPlayCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSPlayCharacter);
ATPSPlayCharacter::~ATPSPlayCharacter() {}
// End Class ATPSPlayCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_TPSPlayCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATPSPlayCharacter, ATPSPlayCharacter::StaticClass, TEXT("ATPSPlayCharacter"), &Z_Registration_Info_UClass_ATPSPlayCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPSPlayCharacter), 1928878203U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_TPSPlayCharacter_h_928943076(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_TPSPlayCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TPS_Play_TPSPlayCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
