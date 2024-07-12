// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/SideScroll/SideScrollGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSideScrollGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
TESTPROJECT_API UClass* Z_Construct_UClass_ASideScrollGameMode();
TESTPROJECT_API UClass* Z_Construct_UClass_ASideScrollGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class ASideScrollGameMode
void ASideScrollGameMode::StaticRegisterNativesASideScrollGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASideScrollGameMode);
UClass* Z_Construct_UClass_ASideScrollGameMode_NoRegister()
{
	return ASideScrollGameMode::StaticClass();
}
struct Z_Construct_UClass_ASideScrollGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SideScroll/SideScrollGameMode.h" },
		{ "ModuleRelativePath", "SideScroll/SideScrollGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASideScrollGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASideScrollGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASideScrollGameMode_Statics::ClassParams = {
	&ASideScrollGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASideScrollGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASideScrollGameMode()
{
	if (!Z_Registration_Info_UClass_ASideScrollGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASideScrollGameMode.OuterSingleton, Z_Construct_UClass_ASideScrollGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASideScrollGameMode.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<ASideScrollGameMode>()
{
	return ASideScrollGameMode::StaticClass();
}
ASideScrollGameMode::ASideScrollGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASideScrollGameMode);
ASideScrollGameMode::~ASideScrollGameMode() {}
// End Class ASideScrollGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_SideScroll_SideScrollGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASideScrollGameMode, ASideScrollGameMode::StaticClass, TEXT("ASideScrollGameMode"), &Z_Registration_Info_UClass_ASideScrollGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASideScrollGameMode), 3795384515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_SideScroll_SideScrollGameMode_h_3856203643(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_SideScroll_SideScrollGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_SideScroll_SideScrollGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
