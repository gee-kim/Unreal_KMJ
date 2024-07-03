// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/Global/GlobalBlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalBlueprintFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
TESTPROJECT_API UClass* Z_Construct_UClass_UGlobalBlueprintFunctionLibrary();
TESTPROJECT_API UClass* Z_Construct_UClass_UGlobalBlueprintFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class UGlobalBlueprintFunctionLibrary
void UGlobalBlueprintFunctionLibrary::StaticRegisterNativesUGlobalBlueprintFunctionLibrary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGlobalBlueprintFunctionLibrary);
UClass* Z_Construct_UClass_UGlobalBlueprintFunctionLibrary_NoRegister()
{
	return UGlobalBlueprintFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UGlobalBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Global/GlobalBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Global/GlobalBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlobalBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGlobalBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGlobalBlueprintFunctionLibrary_Statics::ClassParams = {
	&UGlobalBlueprintFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGlobalBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGlobalBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UGlobalBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGlobalBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGlobalBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGlobalBlueprintFunctionLibrary.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<UGlobalBlueprintFunctionLibrary>()
{
	return UGlobalBlueprintFunctionLibrary::StaticClass();
}
UGlobalBlueprintFunctionLibrary::UGlobalBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGlobalBlueprintFunctionLibrary);
UGlobalBlueprintFunctionLibrary::~UGlobalBlueprintFunctionLibrary() {}
// End Class UGlobalBlueprintFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_GlobalBlueprintFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGlobalBlueprintFunctionLibrary, UGlobalBlueprintFunctionLibrary::StaticClass, TEXT("UGlobalBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UGlobalBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGlobalBlueprintFunctionLibrary), 1214492292U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_GlobalBlueprintFunctionLibrary_h_1827409090(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_GlobalBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_GlobalBlueprintFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
