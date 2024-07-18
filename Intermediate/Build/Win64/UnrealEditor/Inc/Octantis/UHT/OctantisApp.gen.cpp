// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Octantis/Public/Oct/OctantisApp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOctantisApp() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OCTANTIS_API UClass* Z_Construct_UClass_UOctantisApp();
OCTANTIS_API UClass* Z_Construct_UClass_UOctantisApp_NoRegister();
UPackage* Z_Construct_UPackage__Script_Octantis();
// End Cross Module References

// Begin Class UOctantisApp
void UOctantisApp::StaticRegisterNativesUOctantisApp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOctantisApp);
UClass* Z_Construct_UClass_UOctantisApp_NoRegister()
{
	return UOctantisApp::StaticClass();
}
struct Z_Construct_UClass_UOctantisApp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Oct/OctantisApp.h" },
		{ "ModuleRelativePath", "Public/Oct/OctantisApp.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOctantisApp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOctantisApp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Octantis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOctantisApp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOctantisApp_Statics::ClassParams = {
	&UOctantisApp::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOctantisApp_Statics::Class_MetaDataParams), Z_Construct_UClass_UOctantisApp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOctantisApp()
{
	if (!Z_Registration_Info_UClass_UOctantisApp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOctantisApp.OuterSingleton, Z_Construct_UClass_UOctantisApp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOctantisApp.OuterSingleton;
}
template<> OCTANTIS_API UClass* StaticClass<UOctantisApp>()
{
	return UOctantisApp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOctantisApp);
// End Class UOctantisApp

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal5_OctProject_Plugins_Octantis_Source_Octantis_Public_Oct_OctantisApp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOctantisApp, UOctantisApp::StaticClass, TEXT("UOctantisApp"), &Z_Registration_Info_UClass_UOctantisApp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOctantisApp), 1843912957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_OctProject_Plugins_Octantis_Source_Octantis_Public_Oct_OctantisApp_h_2809805931(TEXT("/Script/Octantis"),
	Z_CompiledInDeferFile_FID_Unreal5_OctProject_Plugins_Octantis_Source_Octantis_Public_Oct_OctantisApp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5_OctProject_Plugins_Octantis_Source_Octantis_Public_Oct_OctantisApp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
