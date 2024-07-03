// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/Global/GlobalCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TESTPROJECT_API UClass* Z_Construct_UClass_AGlobalCharacter();
TESTPROJECT_API UClass* Z_Construct_UClass_AGlobalCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class AGlobalCharacter
void AGlobalCharacter::StaticRegisterNativesAGlobalCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGlobalCharacter);
UClass* Z_Construct_UClass_AGlobalCharacter_NoRegister()
{
	return AGlobalCharacter::StaticClass();
}
struct Z_Construct_UClass_AGlobalCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Global/GlobalCharacter.h" },
		{ "ModuleRelativePath", "Global/GlobalCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGlobalCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGlobalCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGlobalCharacter_Statics::ClassParams = {
	&AGlobalCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGlobalCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGlobalCharacter()
{
	if (!Z_Registration_Info_UClass_AGlobalCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGlobalCharacter.OuterSingleton, Z_Construct_UClass_AGlobalCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGlobalCharacter.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<AGlobalCharacter>()
{
	return AGlobalCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGlobalCharacter);
AGlobalCharacter::~AGlobalCharacter() {}
// End Class AGlobalCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_GlobalCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGlobalCharacter, AGlobalCharacter::StaticClass, TEXT("AGlobalCharacter"), &Z_Registration_Info_UClass_AGlobalCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGlobalCharacter), 2610579537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_GlobalCharacter_h_637378163(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_GlobalCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_GlobalCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
