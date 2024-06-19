#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionsPickerSubButtonBase

#include "Basic.hpp"

#include "WBP_OptionsPickerSubButtonBase_classes.hpp"
#include "WBP_OptionsPickerSubButtonBase_parameters.hpp"


namespace SDK
{

// Function WBP_OptionsPickerSubButtonBase.WBP_OptionsPickerSubButtonBase_C.SetSubButtonStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWidgetStyleState                       Param_WidgetStyleState                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsPickerSubButtonBase_C::SetSubButtonStyle(EWidgetStyleState Param_WidgetStyleState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsPickerSubButtonBase_C", "SetSubButtonStyle");

	Params::WBP_OptionsPickerSubButtonBase_C_SetSubButtonStyle Parms{};

	Parms.Param_WidgetStyleState = Param_WidgetStyleState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsPickerSubButtonBase.WBP_OptionsPickerSubButtonBase_C.SetMenuContainerReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MenuContainer_C*             MenuContainer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsPickerSubButtonBase_C::SetMenuContainerReference(class UWBP_MenuContainer_C* MenuContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsPickerSubButtonBase_C", "SetMenuContainerReference");

	Params::WBP_OptionsPickerSubButtonBase_C_SetMenuContainerReference Parms{};

	Parms.MenuContainer = MenuContainer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsPickerSubButtonBase.WBP_OptionsPickerSubButtonBase_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsPickerSubButtonBase_C::SetIndex(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsPickerSubButtonBase_C", "SetIndex");

	Params::WBP_OptionsPickerSubButtonBase_C_SetIndex Parms{};

	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsPickerSubButtonBase.WBP_OptionsPickerSubButtonBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsPickerSubButtonBase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsPickerSubButtonBase_C", "PreConstruct");

	Params::WBP_OptionsPickerSubButtonBase_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsPickerSubButtonBase.WBP_OptionsPickerSubButtonBase_C.OverrideWidgetStyleFromConfig
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_OptionsPickerSubButtonBase_C::OverrideWidgetStyleFromConfig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsPickerSubButtonBase_C", "OverrideWidgetStyleFromConfig");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionsPickerSubButtonBase.WBP_OptionsPickerSubButtonBase_C.OnClickSubButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsPickerSubButtonBase_C::OnClickSubButton__DelegateSignature(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsPickerSubButtonBase_C", "OnClickSubButton__DelegateSignature");

	Params::WBP_OptionsPickerSubButtonBase_C_OnClickSubButton__DelegateSignature Parms{};

	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_OptionsPickerSubButtonBase.WBP_OptionsPickerSubButtonBase_C.OnButtonUnhovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_OptionsPickerSubButtonBase_C::OnButtonUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsPickerSubButtonBase_C", "OnButtonUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionsPickerSubButtonBase.WBP_OptionsPickerSubButtonBase_C.OnButtonHovered
// (BlueprintCallable, BlueprintEvent)

void UWBP_OptionsPickerSubButtonBase_C::OnButtonHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsPickerSubButtonBase_C", "OnButtonHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionsPickerSubButtonBase.WBP_OptionsPickerSubButtonBase_C.OnButtonClicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_OptionsPickerSubButtonBase_C::OnButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsPickerSubButtonBase_C", "OnButtonClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_OptionsPickerSubButtonBase.WBP_OptionsPickerSubButtonBase_C.GetIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsPickerSubButtonBase_C::GetIndex(int32* OutIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsPickerSubButtonBase_C", "GetIndex");

	Params::WBP_OptionsPickerSubButtonBase_C_GetIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIndex != nullptr)
		*OutIndex = Parms.OutIndex;
}


// Function WBP_OptionsPickerSubButtonBase.WBP_OptionsPickerSubButtonBase_C.ExecuteUbergraph_WBP_OptionsPickerSubButtonBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionsPickerSubButtonBase_C::ExecuteUbergraph_WBP_OptionsPickerSubButtonBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_OptionsPickerSubButtonBase_C", "ExecuteUbergraph_WBP_OptionsPickerSubButtonBase");

	Params::WBP_OptionsPickerSubButtonBase_C_ExecuteUbergraph_WBP_OptionsPickerSubButtonBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
