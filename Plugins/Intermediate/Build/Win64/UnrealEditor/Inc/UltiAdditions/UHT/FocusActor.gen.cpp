// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UltiAdditions/Public/FocusActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFocusActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ULTIADDITIONS_API UClass* Z_Construct_UClass_AFocusActor();
	ULTIADDITIONS_API UClass* Z_Construct_UClass_AFocusActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UltiAdditions();
// End Cross Module References
	DEFINE_FUNCTION(AFocusActor::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	static FName NAME_AFocusActor_OnWindowsGainFocus = FName(TEXT("OnWindowsGainFocus"));
	void AFocusActor::OnWindowsGainFocus()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFocusActor_OnWindowsGainFocus),NULL);
	}
	static FName NAME_AFocusActor_OnWindowsLostFocus = FName(TEXT("OnWindowsLostFocus"));
	void AFocusActor::OnWindowsLostFocus()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFocusActor_OnWindowsLostFocus),NULL);
	}
	void AFocusActor::StaticRegisterNativesAFocusActor()
	{
		UClass* Class = AFocusActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActive", &AFocusActor::execIsActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFocusActor_IsActive_Statics
	{
		struct FocusActor_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFocusActor_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FocusActor_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFocusActor_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FocusActor_eventIsActive_Parms), &Z_Construct_UFunction_AFocusActor_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFocusActor_IsActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFocusActor_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFocusActor_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "FocusState" },
		{ "ModuleRelativePath", "Public/FocusActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFocusActor_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFocusActor, nullptr, "IsActive", nullptr, nullptr, Z_Construct_UFunction_AFocusActor_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFocusActor_IsActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFocusActor_IsActive_Statics::FocusActor_eventIsActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFocusActor_IsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFocusActor_IsActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFocusActor_IsActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFocusActor_IsActive_Statics::FocusActor_eventIsActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFocusActor_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFocusActor_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFocusActor_OnWindowsGainFocus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFocusActor_OnWindowsGainFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FocusActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFocusActor_OnWindowsGainFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFocusActor, nullptr, "OnWindowsGainFocus", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFocusActor_OnWindowsGainFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFocusActor_OnWindowsGainFocus_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFocusActor_OnWindowsGainFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFocusActor_OnWindowsGainFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFocusActor_OnWindowsLostFocus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFocusActor_OnWindowsLostFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FocusActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFocusActor_OnWindowsLostFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFocusActor, nullptr, "OnWindowsLostFocus", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFocusActor_OnWindowsLostFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFocusActor_OnWindowsLostFocus_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFocusActor_OnWindowsLostFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFocusActor_OnWindowsLostFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFocusActor);
	UClass* Z_Construct_UClass_AFocusActor_NoRegister()
	{
		return AFocusActor::StaticClass();
	}
	struct Z_Construct_UClass_AFocusActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFocusActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UltiAdditions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFocusActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFocusActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFocusActor_IsActive, "IsActive" }, // 3542540093
		{ &Z_Construct_UFunction_AFocusActor_OnWindowsGainFocus, "OnWindowsGainFocus" }, // 859061193
		{ &Z_Construct_UFunction_AFocusActor_OnWindowsLostFocus, "OnWindowsLostFocus" }, // 898908524
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFocusActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFocusActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FocusActor.h" },
		{ "ModuleRelativePath", "Public/FocusActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFocusActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFocusActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFocusActor_Statics::ClassParams = {
		&AFocusActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFocusActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFocusActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFocusActor()
	{
		if (!Z_Registration_Info_UClass_AFocusActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFocusActor.OuterSingleton, Z_Construct_UClass_AFocusActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFocusActor.OuterSingleton;
	}
	template<> ULTIADDITIONS_API UClass* StaticClass<AFocusActor>()
	{
		return AFocusActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFocusActor);
	AFocusActor::~AFocusActor() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UltiAdditions_Source_UltiAdditions_Public_FocusActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltiAdditions_Source_UltiAdditions_Public_FocusActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFocusActor, AFocusActor::StaticClass, TEXT("AFocusActor"), &Z_Registration_Info_UClass_AFocusActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFocusActor), 1908115886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UltiAdditions_Source_UltiAdditions_Public_FocusActor_h_3333048702(TEXT("/Script/UltiAdditions"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UltiAdditions_Source_UltiAdditions_Public_FocusActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UltiAdditions_Source_UltiAdditions_Public_FocusActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
