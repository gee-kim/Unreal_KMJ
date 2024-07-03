// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TestLevel/TestLevelPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestLevelPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
TESTPROJECT_API UClass* Z_Construct_UClass_ATestLevelPawn();
TESTPROJECT_API UClass* Z_Construct_UClass_ATestLevelPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class ATestLevelPawn
void ATestLevelPawn::StaticRegisterNativesATestLevelPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestLevelPawn);
UClass* Z_Construct_UClass_ATestLevelPawn_NoRegister()
{
	return ATestLevelPawn::StaticClass();
}
struct Z_Construct_UClass_ATestLevelPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TestLevel/TestLevelPawn.h" },
		{ "ModuleRelativePath", "TestLevel/TestLevelPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestLevelPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATestLevelPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestLevelPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestLevelPawn_Statics::ClassParams = {
	&ATestLevelPawn::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestLevelPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestLevelPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestLevelPawn()
{
	if (!Z_Registration_Info_UClass_ATestLevelPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestLevelPawn.OuterSingleton, Z_Construct_UClass_ATestLevelPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestLevelPawn.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<ATestLevelPawn>()
{
	return ATestLevelPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestLevelPawn);
ATestLevelPawn::~ATestLevelPawn() {}
// End Class ATestLevelPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestLevel_TestLevelPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestLevelPawn, ATestLevelPawn::StaticClass, TEXT("ATestLevelPawn"), &Z_Registration_Info_UClass_ATestLevelPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestLevelPawn), 1872894817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestLevel_TestLevelPawn_h_611880128(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestLevel_TestLevelPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestLevel_TestLevelPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
