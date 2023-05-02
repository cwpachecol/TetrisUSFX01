// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TETRISUSFX01_MyInterface_generated_h
#error "MyInterface.generated.h already included, missing '#pragma once' in MyInterface.h"
#endif
#define TETRISUSFX01_MyInterface_generated_h

#define TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_SPARSE_DATA
#define TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_RPC_WRAPPERS
#define TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TETRISUSFX01_API UMyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TETRISUSFX01_API, UMyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TETRISUSFX01_API UMyInterface(UMyInterface&&); \
	TETRISUSFX01_API UMyInterface(const UMyInterface&); \
public:


#define TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TETRISUSFX01_API UMyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TETRISUSFX01_API UMyInterface(UMyInterface&&); \
	TETRISUSFX01_API UMyInterface(const UMyInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TETRISUSFX01_API, UMyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyInterface)


#define TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMyInterface(); \
	friend struct Z_Construct_UClass_UMyInterface_Statics; \
public: \
	DECLARE_CLASS(UMyInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TetrisUSFX01"), TETRISUSFX01_API) \
	DECLARE_SERIALIZER(UMyInterface)


#define TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_GENERATED_UINTERFACE_BODY() \
	TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_GENERATED_UINTERFACE_BODY() \
	TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMyInterface() {} \
public: \
	typedef UMyInterface UClassType; \
	typedef IMyInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IMyInterface() {} \
public: \
	typedef UMyInterface UClassType; \
	typedef IMyInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_10_PROLOG
#define TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_SPARSE_DATA \
	TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_RPC_WRAPPERS \
	TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_SPARSE_DATA \
	TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TETRISUSFX01_API UClass* StaticClass<class UMyInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TetrisUSFX01_Source_TetrisUSFX01_MyInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
