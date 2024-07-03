// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/Global/GlobalGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalGameState() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameState();
TESTPROJECT_API UClass* Z_Construct_UClass_AGlobalGameState();
TESTPROJECT_API UClass* Z_Construct_UClass_AGlobalGameState_NoRegister();
TESTPROJECT_API UClass* Z_Construct_UClass_UActorGroup();
TESTPROJECT_API UClass* Z_Construct_UClass_UActorGroup_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class UActorGroup
void UActorGroup::StaticRegisterNativesUActorGroup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorGroup);
UClass* Z_Construct_UClass_UActorGroup_NoRegister()
{
	return UActorGroup::StaticClass();
}
struct Z_Construct_UClass_UActorGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Global/GlobalGameState.h" },
		{ "ModuleRelativePath", "Global/GlobalGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActorGroup" },
		{ "ModuleRelativePath", "Global/GlobalGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorGroup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorGroup_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorGroup_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorGroup, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorGroup_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorGroup_Statics::NewProp_Actors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorGroup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActorGroup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorGroup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorGroup_Statics::ClassParams = {
	&UActorGroup::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActorGroup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActorGroup_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorGroup_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorGroup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorGroup()
{
	if (!Z_Registration_Info_UClass_UActorGroup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorGroup.OuterSingleton, Z_Construct_UClass_UActorGroup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorGroup.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<UActorGroup>()
{
	return UActorGroup::StaticClass();
}
UActorGroup::UActorGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorGroup);
UActorGroup::~UActorGroup() {}
// End Class UActorGroup

// Begin Class AGlobalGameState
void AGlobalGameState::StaticRegisterNativesAGlobalGameState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGlobalGameState);
UClass* Z_Construct_UClass_AGlobalGameState_NoRegister()
{
	return AGlobalGameState::StaticClass();
}
struct Z_Construct_UClass_AGlobalGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Global/GlobalGameState.h" },
		{ "ModuleRelativePath", "Global/GlobalGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GlobalGameState" },
		{ "ModuleRelativePath", "Global/GlobalGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllActor_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllActor_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AllActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGlobalGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlobalGameState_Statics::NewProp_AllActor_ValueProp = { "AllActor", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UActorGroup_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGlobalGameState_Statics::NewProp_AllActor_Key_KeyProp = { "AllActor_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGlobalGameState_Statics::NewProp_AllActor = { "AllActor", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGlobalGameState, AllActor), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllActor_MetaData), NewProp_AllActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGlobalGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalGameState_Statics::NewProp_AllActor_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalGameState_Statics::NewProp_AllActor_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalGameState_Statics::NewProp_AllActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGlobalGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGlobalGameState_Statics::ClassParams = {
	&AGlobalGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGlobalGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AGlobalGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGlobalGameState()
{
	if (!Z_Registration_Info_UClass_AGlobalGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGlobalGameState.OuterSingleton, Z_Construct_UClass_AGlobalGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGlobalGameState.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<AGlobalGameState>()
{
	return AGlobalGameState::StaticClass();
}
AGlobalGameState::AGlobalGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGlobalGameState);
AGlobalGameState::~AGlobalGameState() {}
// End Class AGlobalGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_GlobalGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorGroup, UActorGroup::StaticClass, TEXT("UActorGroup"), &Z_Registration_Info_UClass_UActorGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorGroup), 4053937677U) },
		{ Z_Construct_UClass_AGlobalGameState, AGlobalGameState::StaticClass, TEXT("AGlobalGameState"), &Z_Registration_Info_UClass_AGlobalGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGlobalGameState), 1114219291U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_GlobalGameState_h_4044031818(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_GlobalGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_Global_GlobalGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
