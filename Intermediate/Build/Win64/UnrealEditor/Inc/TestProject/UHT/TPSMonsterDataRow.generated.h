// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TPS/Data/TPSMonsterDataRow.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_TPSMonsterDataRow_generated_h
#error "TPSMonsterDataRow.generated.h already included, missing '#pragma once' in TPSMonsterDataRow.h"
#endif
#define TESTPROJECT_TPSMonsterDataRow_generated_h

#define FID_Unreal_KMJ_Source_TestProject_TPS_Data_TPSMonsterDataRow_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTPSMonsterDataRow_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> TESTPROJECT_API UScriptStruct* StaticStruct<struct FTPSMonsterDataRow>();

#define FID_Unreal_KMJ_Source_TestProject_TPS_Data_TPSMonsterDataRow_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTPSMonsterData(); \
	friend struct Z_Construct_UClass_UTPSMonsterData_Statics; \
public: \
	DECLARE_CLASS(UTPSMonsterData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(UTPSMonsterData)


#define FID_Unreal_KMJ_Source_TestProject_TPS_Data_TPSMonsterDataRow_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTPSMonsterData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTPSMonsterData(UTPSMonsterData&&); \
	UTPSMonsterData(const UTPSMonsterData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTPSMonsterData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTPSMonsterData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTPSMonsterData) \
	NO_API virtual ~UTPSMonsterData();


#define FID_Unreal_KMJ_Source_TestProject_TPS_Data_TPSMonsterDataRow_h_25_PROLOG
#define FID_Unreal_KMJ_Source_TestProject_TPS_Data_TPSMonsterDataRow_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_KMJ_Source_TestProject_TPS_Data_TPSMonsterDataRow_h_28_INCLASS_NO_PURE_DECLS \
	FID_Unreal_KMJ_Source_TestProject_TPS_Data_TPSMonsterDataRow_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class UTPSMonsterData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_KMJ_Source_TestProject_TPS_Data_TPSMonsterDataRow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
