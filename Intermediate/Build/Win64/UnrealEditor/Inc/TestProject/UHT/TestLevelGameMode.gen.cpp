// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TestLevel/TestLevelGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestLevelGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
TESTPROJECT_API UClass* Z_Construct_UClass_ATestLevelGameMode();
TESTPROJECT_API UClass* Z_Construct_UClass_ATestLevelGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class ATestLevelGameMode
void ATestLevelGameMode::StaticRegisterNativesATestLevelGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestLevelGameMode);
UClass* Z_Construct_UClass_ATestLevelGameMode_NoRegister()
{
	return ATestLevelGameMode::StaticClass();
}
struct Z_Construct_UClass_ATestLevelGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TestLevel/TestLevelGameMode.h" },
		{ "ModuleRelativePath", "TestLevel/TestLevelGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestLevelGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATestLevelGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestLevelGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestLevelGameMode_Statics::ClassParams = {
	&ATestLevelGameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestLevelGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestLevelGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestLevelGameMode()
{
	if (!Z_Registration_Info_UClass_ATestLevelGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestLevelGameMode.OuterSingleton, Z_Construct_UClass_ATestLevelGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestLevelGameMode.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<ATestLevelGameMode>()
{
	return ATestLevelGameMode::StaticClass();
}
ATestLevelGameMode::ATestLevelGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestLevelGameMode);
ATestLevelGameMode::~ATestLevelGameMode() {}
// End Class ATestLevelGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestLevel_TestLevelGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestLevelGameMode, ATestLevelGameMode::StaticClass, TEXT("ATestLevelGameMode"), &Z_Registration_Info_UClass_ATestLevelGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestLevelGameMode), 1625013336U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestLevel_TestLevelGameMode_h_1322320698(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestLevel_TestLevelGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestLevel_TestLevelGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
