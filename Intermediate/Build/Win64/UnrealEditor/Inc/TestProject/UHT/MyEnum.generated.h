// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Global/MyEnum.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_MyEnum_generated_h
#error "MyEnum.generated.h already included, missing '#pragma once' in MyEnum.h"
#endif
#define TESTPROJECT_MyEnum_generated_h

#define FID_Unreal_KMJ_Source_TestProject_Global_MyEnum_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyEnum(); \
	friend struct Z_Construct_UClass_UMyEnum_Statics; \
public: \
	DECLARE_CLASS(UMyEnum, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(UMyEnum)


#define FID_Unreal_KMJ_Source_TestProject_Global_MyEnum_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyEnum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyEnum(UMyEnum&&); \
	UMyEnum(const UMyEnum&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyEnum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyEnum); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyEnum) \
	NO_API virtual ~UMyEnum();


#define FID_Unreal_KMJ_Source_TestProject_Global_MyEnum_h_47_PROLOG
#define FID_Unreal_KMJ_Source_TestProject_Global_MyEnum_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_KMJ_Source_TestProject_Global_MyEnum_h_50_INCLASS_NO_PURE_DECLS \
	FID_Unreal_KMJ_Source_TestProject_Global_MyEnum_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class UMyEnum>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_KMJ_Source_TestProject_Global_MyEnum_h


#define FOREACH_ENUM_ETPSPLAYERANIM(op) \
	op(ETPSPlayerAnim::Idle) \
	op(ETPSPlayerAnim::Run) \
	op(ETPSPlayerAnim::Attack) 

enum class ETPSPlayerAnim : uint8;
template<> struct TIsUEnumClass<ETPSPlayerAnim> { enum { Value = true }; };
template<> TESTPROJECT_API UEnum* StaticEnum<ETPSPlayerAnim>();

#define FOREACH_ENUM_ETPSOBJECTTYPE(op) \
	op(ETPSObjectType::Player) \
	op(ETPSObjectType::Monster) \
	op(ETPSObjectType::Max) 

enum class ETPSObjectType : uint8;
template<> struct TIsUEnumClass<ETPSObjectType> { enum { Value = true }; };
template<> TESTPROJECT_API UEnum* StaticEnum<ETPSObjectType>();

#define FOREACH_ENUM_ETPSCHARACTERSLOT(op) \
	op(ETPSCharacterSlot::LWeapon) \
	op(ETPSCharacterSlot::RWeapon) \
	op(ETPSCharacterSlot::SlotMax) 

enum class ETPSCharacterSlot : uint8;
template<> struct TIsUEnumClass<ETPSCharacterSlot> { enum { Value = true }; };
template<> TESTPROJECT_API UEnum* StaticEnum<ETPSCharacterSlot>();

#define FOREACH_ENUM_ETPSMONSTERSTATE(op) \
	op(ETPSMonsterState::Idle) \
	op(ETPSMonsterState::Patrol) \
	op(ETPSMonsterState::MovetoPlayer) \
	op(ETPSMonsterState::MovetoLocation) \
	op(ETPSMonsterState::Attack) 

enum class ETPSMonsterState : uint8;
template<> struct TIsUEnumClass<ETPSMonsterState> { enum { Value = true }; };
template<> TESTPROJECT_API UEnum* StaticEnum<ETPSMonsterState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
