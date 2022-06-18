// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EmptyWorld/EmptyWorldGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmptyWorldGameModeBase() {}
// Cross Module References
	EMPTYWORLD_API UClass* Z_Construct_UClass_AEmptyWorldGameModeBase_NoRegister();
	EMPTYWORLD_API UClass* Z_Construct_UClass_AEmptyWorldGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EmptyWorld();
// End Cross Module References
	void AEmptyWorldGameModeBase::StaticRegisterNativesAEmptyWorldGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEmptyWorldGameModeBase);
	UClass* Z_Construct_UClass_AEmptyWorldGameModeBase_NoRegister()
	{
		return AEmptyWorldGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AEmptyWorldGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEmptyWorldGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EmptyWorld,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmptyWorldGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EmptyWorldGameModeBase.h" },
		{ "ModuleRelativePath", "EmptyWorldGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEmptyWorldGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEmptyWorldGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEmptyWorldGameModeBase_Statics::ClassParams = {
		&AEmptyWorldGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEmptyWorldGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEmptyWorldGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEmptyWorldGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AEmptyWorldGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEmptyWorldGameModeBase.OuterSingleton, Z_Construct_UClass_AEmptyWorldGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEmptyWorldGameModeBase.OuterSingleton;
	}
	template<> EMPTYWORLD_API UClass* StaticClass<AEmptyWorldGameModeBase>()
	{
		return AEmptyWorldGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEmptyWorldGameModeBase);
	struct Z_CompiledInDeferFile_FID_EmptyWorld_Source_EmptyWorld_EmptyWorldGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EmptyWorld_Source_EmptyWorld_EmptyWorldGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEmptyWorldGameModeBase, AEmptyWorldGameModeBase::StaticClass, TEXT("AEmptyWorldGameModeBase"), &Z_Registration_Info_UClass_AEmptyWorldGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEmptyWorldGameModeBase), 4206125925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EmptyWorld_Source_EmptyWorld_EmptyWorldGameModeBase_h_196646661(TEXT("/Script/EmptyWorld"),
		Z_CompiledInDeferFile_FID_EmptyWorld_Source_EmptyWorld_EmptyWorldGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EmptyWorld_Source_EmptyWorld_EmptyWorldGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
