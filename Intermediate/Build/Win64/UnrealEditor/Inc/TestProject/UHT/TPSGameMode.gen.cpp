// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TPS/Play/TPSGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
TESTPROJECT_API UClass* Z_Construct_UClass_ATPSGameMode();
TESTPROJECT_API UClass* Z_Construct_UClass_ATPSGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class ATPSGameMode
void ATPSGameMode::StaticRegisterNativesATPSGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPSGameMode);
UClass* Z_Construct_UClass_ATPSGameMode_NoRegister()
{
	return ATPSGameMode::StaticClass();
}
struct Z_Construct_UClass_ATPSGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TPS/Play/TPSGameMode.h" },
		{ "ModuleRelativePath", "TPS/Play/TPSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATPSGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPSGameMode_Statics::ClassParams = {
	&ATPSGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPSGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATPSGameMode()
{
	if (!Z_Registration_Info_UClass_ATPSGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPSGameMode.OuterSingleton, Z_Construct_UClass_ATPSGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATPSGameMode.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<ATPSGameMode>()
{
	return ATPSGameMode::StaticClass();
}
ATPSGameMode::ATPSGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSGameMode);
ATPSGameMode::~ATPSGameMode() {}
// End Class ATPSGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATPSGameMode, ATPSGameMode::StaticClass, TEXT("ATPSGameMode"), &Z_Registration_Info_UClass_ATPSGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPSGameMode), 13494162U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSGameMode_h_1278735357(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
