// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TPS/Play/TPSGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_TPSGameMode_generated_h
#error "TPSGameMode.generated.h already included, missing '#pragma once' in TPSGameMode.h"
#endif
#define TESTPROJECT_TPSGameMode_generated_h

#define FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSGameMode(); \
	friend struct Z_Construct_UClass_ATPSGameMode_Statics; \
public: \
	DECLARE_CLASS(ATPSGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATPSGameMode)


#define FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATPSGameMode(ATPSGameMode&&); \
	ATPSGameMode(const ATPSGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSGameMode) \
	NO_API virtual ~ATPSGameMode();


#define FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSGameMode_h_12_PROLOG
#define FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class ATPSGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_KMJ_Source_TestProject_TPS_Play_TPSGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
