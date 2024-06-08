#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadingScreenWidgetBP

#include "Basic.hpp"

#include "LoadingScreenWidgetBP_classes.hpp"
#include "LoadingScreenWidgetBP_parameters.hpp"


namespace SDK
{

// Function LoadingScreenWidgetBP.LoadingScreenWidgetBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoadingScreenWidgetBP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingScreenWidgetBP_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoadingScreenWidgetBP.LoadingScreenWidgetBP_C.ExecuteUbergraph_LoadingScreenWidgetBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingScreenWidgetBP_C::ExecuteUbergraph_LoadingScreenWidgetBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingScreenWidgetBP_C", "ExecuteUbergraph_LoadingScreenWidgetBP");

	Params::LoadingScreenWidgetBP_C_ExecuteUbergraph_LoadingScreenWidgetBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoadingScreenWidgetBP.LoadingScreenWidgetBP_C.LoadingImage_Fade_And_Delete
// (BlueprintCallable, BlueprintEvent)

void ULoadingScreenWidgetBP_C::LoadingImage_Fade_And_Delete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingScreenWidgetBP_C", "LoadingImage_Fade_And_Delete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoadingScreenWidgetBP.LoadingScreenWidgetBP_C.OnGlobalSettingsApply
// (BlueprintCallable, BlueprintEvent)

void ULoadingScreenWidgetBP_C::OnGlobalSettingsApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingScreenWidgetBP_C", "OnGlobalSettingsApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoadingScreenWidgetBP.LoadingScreenWidgetBP_C.SetGlobalSettings
// (Public, BlueprintCallable, BlueprintEvent)

void ULoadingScreenWidgetBP_C::SetGlobalSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingScreenWidgetBP_C", "SetGlobalSettings");

	UObject::ProcessEvent(Func, nullptr);
}

}

