#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_KeyBinderButtonBase

#include "Basic.hpp"

#include "WBP_KeyBinderButtonBase_classes.hpp"
#include "WBP_KeyBinderButtonBase_parameters.hpp"


namespace SDK
{

// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.SetWidgetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWidgetStyleState                       WidgetState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyBinderButtonBase_C::SetWidgetState(EWidgetStyleState WidgetState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "SetWidgetState");

	Params::WBP_KeyBinderButtonBase_C_SetWidgetState Parms{};

	Parms.WidgetState = WidgetState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.SetKeyTextOrIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsWaitingForInput                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyBinderButtonBase_C::SetKeyTextOrIcon(bool bIsWaitingForInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "SetKeyTextOrIcon");

	Params::WBP_KeyBinderButtonBase_C_SetKeyTextOrIcon Parms{};

	Parms.bIsWaitingForInput = bIsWaitingForInput;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.RefreshKeyBinderButton
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KeyBinderButtonBase_C::RefreshKeyBinderButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "RefreshKeyBinderButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.RebindKeyOrButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord                      NewKey                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    bClearKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyBinderButtonBase_C::RebindKeyOrButton(const struct FInputChord& NewKey, bool bClearKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "RebindKeyOrButton");

	Params::WBP_KeyBinderButtonBase_C_RebindKeyOrButton Parms{};

	Parms.NewKey = std::move(NewKey);
	Parms.bClearKey = bClearKey;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyBinderButtonBase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "PreConstruct");

	Params::WBP_KeyBinderButtonBase_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.OverrideWidgetStyleFromConfig
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KeyBinderButtonBase_C::OverrideWidgetStyleFromConfig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "OverrideWidgetStyleFromConfig");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.OnParentMenuSetupComplete
// (BlueprintCallable, BlueprintEvent)

void UWBP_KeyBinderButtonBase_C::OnParentMenuSetupComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "OnParentMenuSetupComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.OnKeyBinderButtonUnhighlighted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_KeyBinderButtonBase_C*       KeyBinderButtonBase                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyBinderButtonBase_C::OnKeyBinderButtonUnhighlighted__DelegateSignature(class UWBP_KeyBinderButtonBase_C* KeyBinderButtonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "OnKeyBinderButtonUnhighlighted__DelegateSignature");

	Params::WBP_KeyBinderButtonBase_C_OnKeyBinderButtonUnhighlighted__DelegateSignature Parms{};

	Parms.KeyBinderButtonBase = KeyBinderButtonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.OnKeyBinderButtonSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_KeyBinderButtonBase_C*       KeyBinderButton                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyBinderButtonBase_C::OnKeyBinderButtonSelect__DelegateSignature(class UWBP_KeyBinderButtonBase_C* KeyBinderButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "OnKeyBinderButtonSelect__DelegateSignature");

	Params::WBP_KeyBinderButtonBase_C_OnKeyBinderButtonSelect__DelegateSignature Parms{};

	Parms.KeyBinderButton = KeyBinderButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.OnKeyBinderButtonHighlighted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_KeyBinderButtonBase_C*       KeyBinderButtonBase                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyBinderButtonBase_C::OnKeyBinderButtonHighlighted__DelegateSignature(class UWBP_KeyBinderButtonBase_C* KeyBinderButtonBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "OnKeyBinderButtonHighlighted__DelegateSignature");

	Params::WBP_KeyBinderButtonBase_C_OnKeyBinderButtonHighlighted__DelegateSignature Parms{};

	Parms.KeyBinderButtonBase = KeyBinderButtonBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.OnButtonUnhighlighted
// (BlueprintCallable, BlueprintEvent)

void UWBP_KeyBinderButtonBase_C::OnButtonUnhighlighted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "OnButtonUnhighlighted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.OnButtonPressed
// (BlueprintCallable, BlueprintEvent)

void UWBP_KeyBinderButtonBase_C::OnButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "OnButtonPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.OnButtonHighlighted
// (BlueprintCallable, BlueprintEvent)

void UWBP_KeyBinderButtonBase_C::OnButtonHighlighted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "OnButtonHighlighted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.GetKeyOrButtonFromInputSubsystem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                             Key                                                    (Parm, OutParm, HasGetValueTypeHash)

void UWBP_KeyBinderButtonBase_C::GetKeyOrButtonFromInputSubsystem(struct FKey* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "GetKeyOrButtonFromInputSubsystem");

	Params::WBP_KeyBinderButtonBase_C_GetKeyOrButtonFromInputSubsystem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.ExecuteUbergraph_WBP_KeyBinderButtonBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyBinderButtonBase_C::ExecuteUbergraph_WBP_KeyBinderButtonBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "ExecuteUbergraph_WBP_KeyBinderButtonBase");

	Params::WBP_KeyBinderButtonBase_C_ExecuteUbergraph_WBP_KeyBinderButtonBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_KeyBinderButtonBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.ClearBindingOnButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_KeyBinderButtonBase_C::ClearBindingOnButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "ClearBindingOnButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.ApplyWidgetStyleNormal
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KeyBinderButtonBase_C::ApplyWidgetStyleNormal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "ApplyWidgetStyleNormal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.ApplyWidgetStyleHighlighted
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KeyBinderButtonBase_C::ApplyWidgetStyleHighlighted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "ApplyWidgetStyleHighlighted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.ApplyWidgetStyleDisabled
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KeyBinderButtonBase_C::ApplyWidgetStyleDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "ApplyWidgetStyleDisabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_KeyBinderButtonBase.WBP_KeyBinderButtonBase_C.ApplyWidgetStyleActive
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_KeyBinderButtonBase_C::ApplyWidgetStyleActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_KeyBinderButtonBase_C", "ApplyWidgetStyleActive");

	UObject::ProcessEvent(Func, nullptr);
}

}

