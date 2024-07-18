// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Octantis/Public/Oct/Tools/HdaTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHdaTool() {}

// Begin Cross Module References
OCTANTIS_API UClass* Z_Construct_UClass_UHdaTool();
OCTANTIS_API UClass* Z_Construct_UClass_UHdaTool_NoRegister();
OCTANTIS_API UClass* Z_Construct_UClass_UToolBase();
UPackage* Z_Construct_UPackage__Script_Octantis();
// End Cross Module References

// Begin Class UHdaTool
void UHdaTool::StaticRegisterNativesUHdaTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHdaTool);
UClass* Z_Construct_UClass_UHdaTool_NoRegister()
{
	return UHdaTool::StaticClass();
}
struct Z_Construct_UClass_UHdaTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Oct/Tools/HdaTool.h" },
		{ "ModuleRelativePath", "Public/Oct/Tools/HdaTool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHdaTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHdaTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Octantis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHdaTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHdaTool_Statics::ClassParams = {
	&UHdaTool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHdaTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UHdaTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHdaTool()
{
	if (!Z_Registration_Info_UClass_UHdaTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHdaTool.OuterSingleton, Z_Construct_UClass_UHdaTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHdaTool.OuterSingleton;
}
template<> OCTANTIS_API UClass* StaticClass<UHdaTool>()
{
	return UHdaTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHdaTool);
// End Class UHdaTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal5_OctProject_Plugins_Octantis_Source_Octantis_Public_Oct_Tools_HdaTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHdaTool, UHdaTool::StaticClass, TEXT("UHdaTool"), &Z_Registration_Info_UClass_UHdaTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHdaTool), 58179553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_OctProject_Plugins_Octantis_Source_Octantis_Public_Oct_Tools_HdaTool_h_1803547967(TEXT("/Script/Octantis"),
	Z_CompiledInDeferFile_FID_Unreal5_OctProject_Plugins_Octantis_Source_Octantis_Public_Oct_Tools_HdaTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5_OctProject_Plugins_Octantis_Source_Octantis_Public_Oct_Tools_HdaTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
