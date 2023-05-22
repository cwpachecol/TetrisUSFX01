// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
class AInventoryActor;
#ifdef TETRISUSFX01_InventoryCharacter_generated_h
#error "InventoryCharacter.generated.h already included, missing '#pragma once' in InventoryCharacter.h"
#endif
#define TETRISUSFX01_InventoryCharacter_generated_h

#define TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_SPARSE_DATA
#define TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execNotifyHit); \
	DECLARE_FUNCTION(execTakeItem); \
	DECLARE_FUNCTION(execDropItem);


#define TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execNotifyHit); \
	DECLARE_FUNCTION(execTakeItem); \
	DECLARE_FUNCTION(execDropItem);


#define TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInventoryCharacter(); \
	friend struct Z_Construct_UClass_AInventoryCharacter_Statics; \
public: \
	DECLARE_CLASS(AInventoryCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TetrisUSFX01"), NO_API) \
	DECLARE_SERIALIZER(AInventoryCharacter)


#define TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAInventoryCharacter(); \
	friend struct Z_Construct_UClass_AInventoryCharacter_Statics; \
public: \
	DECLARE_CLASS(AInventoryCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TetrisUSFX01"), NO_API) \
	DECLARE_SERIALIZER(AInventoryCharacter)


#define TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInventoryCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInventoryCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventoryCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventoryCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInventoryCharacter(AInventoryCharacter&&); \
	NO_API AInventoryCharacter(const AInventoryCharacter&); \
public:


#define TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInventoryCharacter(AInventoryCharacter&&); \
	NO_API AInventoryCharacter(const AInventoryCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventoryCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventoryCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInventoryCharacter)


#define TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_PRIVATE_PROPERTY_OFFSET
#define TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_11_PROLOG
#define TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_SPARSE_DATA \
	TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_RPC_WRAPPERS \
	TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_INCLASS \
	TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_SPARSE_DATA \
	TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_INCLASS_NO_PURE_DECLS \
	TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TETRISUSFX01_API UClass* StaticClass<class AInventoryCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TetrisUSFX01_Source_TetrisUSFX01_InventoryCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
