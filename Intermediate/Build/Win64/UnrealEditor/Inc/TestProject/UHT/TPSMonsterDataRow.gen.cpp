// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TPS/Data/TPSMonsterDataRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSMonsterDataRow() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
TESTPROJECT_API UClass* Z_Construct_UClass_UTPSMonsterData();
TESTPROJECT_API UClass* Z_Construct_UClass_UTPSMonsterData_NoRegister();
TESTPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTPSMonsterDataRow();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin ScriptStruct FTPSMonsterDataRow
static_assert(std::is_polymorphic<FTPSMonsterDataRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTPSMonsterDataRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TPSMonsterDataRow;
class UScriptStruct* FTPSMonsterDataRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TPSMonsterDataRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TPSMonsterDataRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTPSMonsterDataRow, (UObject*)Z_Construct_UPackage__Script_TestProject(), TEXT("TPSMonsterDataRow"));
	}
	return Z_Registration_Info_UScriptStruct_TPSMonsterDataRow.OuterSingleton;
}
template<> TESTPROJECT_API UScriptStruct* StaticStruct<FTPSMonsterDataRow>()
{
	return FTPSMonsterDataRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTPSMonsterDataRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "TPS/Data/TPSMonsterDataRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightRange_MetaData[] = {
		{ "Category", "TPSMonsterDataRow" },
		{ "ModuleRelativePath", "TPS/Data/TPSMonsterDataRow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTPSMonsterDataRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTPSMonsterDataRow_Statics::NewProp_SightRange = { "SightRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTPSMonsterDataRow, SightRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightRange_MetaData), NewProp_SightRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTPSMonsterDataRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTPSMonsterDataRow_Statics::NewProp_SightRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTPSMonsterDataRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTPSMonsterDataRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"TPSMonsterDataRow",
	Z_Construct_UScriptStruct_FTPSMonsterDataRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTPSMonsterDataRow_Statics::PropPointers),
	sizeof(FTPSMonsterDataRow),
	alignof(FTPSMonsterDataRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTPSMonsterDataRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTPSMonsterDataRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTPSMonsterDataRow()
{
	if (!Z_Registration_Info_UScriptStruct_TPSMonsterDataRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TPSMonsterDataRow.InnerSingleton, Z_Construct_UScriptStruct_FTPSMonsterDataRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TPSMonsterDataRow.InnerSingleton;
}
// End ScriptStruct FTPSMonsterDataRow

// Begin Class UTPSMonsterData
void UTPSMonsterData::StaticRegisterNativesUTPSMonsterData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTPSMonsterData);
UClass* Z_Construct_UClass_UTPSMonsterData_NoRegister()
{
	return UTPSMonsterData::StaticClass();
}
struct Z_Construct_UClass_UTPSMonsterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TPS/Data/TPSMonsterDataRow.h" },
		{ "ModuleRelativePath", "TPS/Data/TPSMonsterDataRow.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTPSMonsterData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTPSMonsterData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPSMonsterData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTPSMonsterData_Statics::ClassParams = {
	&UTPSMonsterData::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPSMonsterData_Statics::Class_MetaDataParams), Z_Construct_UClass_UTPSMonsterData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTPSMonsterData()
{
	if (!Z_Registration_Info_UClass_UTPSMonsterData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTPSMonsterData.OuterSingleton, Z_Construct_UClass_UTPSMonsterData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTPSMonsterData.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<UTPSMonsterData>()
{
	return UTPSMonsterData::StaticClass();
}
UTPSMonsterData::UTPSMonsterData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTPSMonsterData);
UTPSMonsterData::~UTPSMonsterData() {}
// End Class UTPSMonsterData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Data_TPSMonsterDataRow_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTPSMonsterDataRow::StaticStruct, Z_Construct_UScriptStruct_FTPSMonsterDataRow_Statics::NewStructOps, TEXT("TPSMonsterDataRow"), &Z_Registration_Info_UScriptStruct_TPSMonsterDataRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTPSMonsterDataRow), 2905861511U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTPSMonsterData, UTPSMonsterData::StaticClass, TEXT("UTPSMonsterData"), &Z_Registration_Info_UClass_UTPSMonsterData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTPSMonsterData), 2129651125U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Data_TPSMonsterDataRow_h_3545819086(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Data_TPSMonsterDataRow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Data_TPSMonsterDataRow_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Data_TPSMonsterDataRow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_KMJ_Source_TestProject_TPS_Data_TPSMonsterDataRow_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
