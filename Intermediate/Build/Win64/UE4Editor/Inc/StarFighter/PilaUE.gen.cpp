// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PilaUE.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePilaUE() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_UPilaUE_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_UPilaUE();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void UPilaUE::StaticRegisterNativesUPilaUE()
	{
	}
	UClass* Z_Construct_UClass_UPilaUE_NoRegister()
	{
		return UPilaUE::StaticClass();
	}
	struct Z_Construct_UClass_UPilaUE_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPilaUE_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPilaUE_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PilaUE.h" },
		{ "ModuleRelativePath", "PilaUE.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPilaUE_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPilaUE>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPilaUE_Statics::ClassParams = {
		&UPilaUE::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPilaUE_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPilaUE_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPilaUE()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPilaUE_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPilaUE, 3591192181);
	template<> STARFIGHTER_API UClass* StaticClass<UPilaUE>()
	{
		return UPilaUE::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPilaUE(Z_Construct_UClass_UPilaUE, &UPilaUE::StaticClass, TEXT("/Script/StarFighter"), TEXT("UPilaUE"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPilaUE);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
