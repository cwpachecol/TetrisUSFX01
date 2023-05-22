// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/DelegateListener.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelegateListener() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ADelegateListener_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ADelegateListener();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADelegateListener::execEnableLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableLight();
		P_NATIVE_END;
	}
	void ADelegateListener::StaticRegisterNativesADelegateListener()
	{
		UClass* Class = ADelegateListener::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableLight", &ADelegateListener::execEnableLight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADelegateListener_EnableLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelegateListener_EnableLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DelegateListener.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelegateListener_EnableLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelegateListener, nullptr, "EnableLight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADelegateListener_EnableLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateListener_EnableLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADelegateListener_EnableLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADelegateListener_EnableLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADelegateListener_NoRegister()
	{
		return ADelegateListener::StaticClass();
	}
	struct Z_Construct_UClass_ADelegateListener_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointLight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADelegateListener_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADelegateListener_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADelegateListener_EnableLight, "EnableLight" }, // 2642145954
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADelegateListener_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DelegateListener.h" },
		{ "ModuleRelativePath", "DelegateListener.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADelegateListener_Statics::NewProp_PointLight_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DelegateListener.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADelegateListener_Statics::NewProp_PointLight = { "PointLight", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADelegateListener, PointLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADelegateListener_Statics::NewProp_PointLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateListener_Statics::NewProp_PointLight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADelegateListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADelegateListener_Statics::NewProp_PointLight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADelegateListener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADelegateListener>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADelegateListener_Statics::ClassParams = {
		&ADelegateListener::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADelegateListener_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateListener_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADelegateListener_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateListener_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADelegateListener()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADelegateListener_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADelegateListener, 3893420360);
	template<> TETRISUSFX01_API UClass* StaticClass<ADelegateListener>()
	{
		return ADelegateListener::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADelegateListener(Z_Construct_UClass_ADelegateListener, &ADelegateListener::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ADelegateListener"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADelegateListener);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
