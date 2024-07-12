// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TPS/Play/Character/TPSPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSPlayer() {}

// Begin Cross Module References
TESTPROJECT_API UClass* Z_Construct_UClass_ATPSPlayCharacter();
TESTPROJECT_API UClass* Z_Construct_UClass_ATPSPlayer();
TESTPROJECT_API UClass* Z_Construct_UClass_ATPSPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class ATPSPlayer
void ATPSPlayer::StaticRegisterNativesATPSPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPSPlayer);
UClass* Z_Construct_UClass_ATPSPlayer_NoRegister()
{
	return ATPSPlayer::StaticClass();
}
struct Z_Construct_UClass_ATPSPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TPS/Play/Character/TPSPlayer.h" },
		{ "ModuleRelativePath", "TPS/Play/Character/TPSPlayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATPSPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATPSPlayCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPSPlayer_Statics::ClassParams = {
	&ATPSPlayer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPSPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATPSPlayer()
{
	if (!Z_Registration_Info_UClass_ATPSPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPSPlayer.OuterSingleton, Z_Construct_UClass_ATPSPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATPSPlayer.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<ATPSPlayer>()
{
	return ATPSPlayer::StaticClass();
}
ATPSPlayer::ATPSPlayer() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSPlayer);
ATPSPlayer::~ATPSPlayer() {}
// End Class ATPSPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_Character_TPSPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATPSPlayer, ATPSPlayer::StaticClass, TEXT("ATPSPlayer"), &Z_Registration_Info_UClass_ATPSPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPSPlayer), 1574128248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_Character_TPSPlayer_h_822333576(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_Character_TPSPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Play_Character_TPSPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
