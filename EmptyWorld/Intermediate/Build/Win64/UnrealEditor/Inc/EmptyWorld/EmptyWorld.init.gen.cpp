// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmptyWorld_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EmptyWorld;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EmptyWorld()
	{
		if (!Z_Registration_Info_UPackage__Script_EmptyWorld.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EmptyWorld",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x9EB80F2C,
				0x8A7958D2,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EmptyWorld.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EmptyWorld.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EmptyWorld(Z_Construct_UPackage__Script_EmptyWorld, TEXT("/Script/EmptyWorld"), Z_Registration_Info_UPackage__Script_EmptyWorld, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9EB80F2C, 0x8A7958D2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
