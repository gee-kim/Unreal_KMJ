// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TPS/Play/Character/TPSPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_TPSPlayer_generated_h
#error "TPSPlayer.generated.h already included, missing '#pragma once' in TPSPlayer.h"
#endif
#define TESTPROJECT_TPSPlayer_generated_h

#define FID_TestProject_Source_TestProject_TPS_Play_Character_TPSPlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSPlayer(); \
	friend struct Z_Construct_UClass_ATPSPlayer_Statics; \
public: \
	DECLARE_CLASS(ATPSPlayer, ATPSPlayCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATPSPlayer)


#define FID_TestProject_Source_TestProject_TPS_Play_Character_TPSPlayer_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSPlayer(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATPSPlayer(ATPSPlayer&&); \
	ATPSPlayer(const ATPSPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATPSPlayer) \
	NO_API virtual ~ATPSPlayer();


#define FID_TestProject_Source_TestProject_TPS_Play_Character_TPSPlayer_h_12_PROLOG
#define FID_TestProject_Source_TestProject_TPS_Play_Character_TPSPlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProject_Source_TestProject_TPS_Play_Character_TPSPlayer_h_15_INCLASS_NO_PURE_DECLS \
	FID_TestProject_Source_TestProject_TPS_Play_Character_TPSPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class ATPSPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProject_Source_TestProject_TPS_Play_Character_TPSPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
