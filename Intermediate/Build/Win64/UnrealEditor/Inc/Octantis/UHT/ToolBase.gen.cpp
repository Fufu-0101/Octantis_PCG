// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Octantis/Public/Oct/Tools/ToolBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OCTANTIS_API UClass* Z_Construct_UClass_UToolBase();
OCTANTIS_API UClass* Z_Construct_UClass_UToolBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Octantis();
// End Cross Module References

// Begin Class UToolBase
void UToolBase::StaticRegisterNativesUToolBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolBase);
UClass* Z_Construct_UClass_UToolBase_NoRegister()
{
	return UToolBase::StaticClass();
}
struct Z_Construct_UClass_UToolBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Oct/Tools/ToolBase.h" },
		{ "ModuleRelativePath", "Public/Oct/Tools/ToolBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToolBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Octantis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToolBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolBase_Statics::ClassParams = {
	&UToolBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToolBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UToolBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToolBase()
{
	if (!Z_Registration_Info_UClass_UToolBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolBase.OuterSingleton, Z_Construct_UClass_UToolBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToolBase.OuterSingleton;
}
template<> OCTANTIS_API UClass* StaticClass<UToolBase>()
{
	return UToolBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToolBase);
// End Class UToolBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal5_OctProject_Plugins_Octantis_Source_Octantis_Public_Oct_Tools_ToolBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToolBase, UToolBase::StaticClass, TEXT("UToolBase"), &Z_Registration_Info_UClass_UToolBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolBase), 1649521230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_OctProject_Plugins_Octantis_Source_Octantis_Public_Oct_Tools_ToolBase_h_3508424657(TEXT("/Script/Octantis"),
	Z_CompiledInDeferFile_FID_Unreal5_OctProject_Plugins_Octantis_Source_Octantis_Public_Oct_Tools_ToolBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5_OctProject_Plugins_Octantis_Source_Octantis_Public_Oct_Tools_ToolBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
