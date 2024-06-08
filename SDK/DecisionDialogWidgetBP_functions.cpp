#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DecisionDialogWidgetBP

#include "Basic.hpp"

#include "DecisionDialogWidgetBP_classes.hpp"
#include "DecisionDialogWidgetBP_parameters.hpp"


namespace SDK
{

// Function DecisionDialogWidgetBP.DecisionDialogWidgetBP_C.BndEvt__DecisionButton_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UDecisionDialogWidgetBP_C::BndEvt__DecisionButton_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DecisionDialogWidgetBP_C", "BndEvt__DecisionButton_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DecisionDialogWidgetBP.DecisionDialogWidgetBP_C.BndEvt__DecisionButton_Yes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UDecisionDialogWidgetBP_C::BndEvt__DecisionButton_Yes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DecisionDialogWidgetBP_C", "BndEvt__DecisionButton_Yes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DecisionDialogWidgetBP.DecisionDialogWidgetBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDecisionDialogWidgetBP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DecisionDialogWidgetBP_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DecisionDialogWidgetBP.DecisionDialogWidgetBP_C.Decision_Textbody_Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UDecisionDialogWidgetBP_C::Decision_Textbody_Change(const class FText& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DecisionDialogWidgetBP_C", "Decision_Textbody_Change");

	Params::DecisionDialogWidgetBP_C_Decision_Textbody_Change Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DecisionDialogWidgetBP.DecisionDialogWidgetBP_C.DecisionAccept__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDecisionDialogWidgetBP_C::DecisionAccept__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DecisionDialogWidgetBP_C", "DecisionAccept__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DecisionDialogWidgetBP.DecisionDialogWidgetBP_C.DecisionDecline__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDecisionDialogWidgetBP_C::DecisionDecline__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DecisionDialogWidgetBP_C", "DecisionDecline__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DecisionDialogWidgetBP.DecisionDialogWidgetBP_C.ExecuteUbergraph_DecisionDialogWidgetBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDecisionDialogWidgetBP_C::ExecuteUbergraph_DecisionDialogWidgetBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DecisionDialogWidgetBP_C", "ExecuteUbergraph_DecisionDialogWidgetBP");

	Params::DecisionDialogWidgetBP_C_ExecuteUbergraph_DecisionDialogWidgetBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DecisionDialogWidgetBP.DecisionDialogWidgetBP_C.OnGlobalSettingsApply
// (BlueprintCallable, BlueprintEvent)

void UDecisionDialogWidgetBP_C::OnGlobalSettingsApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DecisionDialogWidgetBP_C", "OnGlobalSettingsApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DecisionDialogWidgetBP.DecisionDialogWidgetBP_C.OnNavigationEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractableMenuWidgetBP_C*      NavigateFromMenu                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_bIsGamepadBeingUsed                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_PlayerIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDecisionDialogWidgetBP_C::OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool Param_bIsGamepadBeingUsed, int32 Param_PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DecisionDialogWidgetBP_C", "OnNavigationEnter");

	Params::DecisionDialogWidgetBP_C_OnNavigationEnter Parms{};

	Parms.NavigateFromMenu = NavigateFromMenu;
	Parms.Param_bIsGamepadBeingUsed = Param_bIsGamepadBeingUsed;
	Parms.Param_PlayerIndex = Param_PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DecisionDialogWidgetBP.DecisionDialogWidgetBP_C.OnNavigationExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractableMenuWidgetBP_C*      NavigateToMenu                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UInteractableMenuWidgetBP_C*      NavigateFromMenu                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UDecisionDialogWidgetBP_C::OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DecisionDialogWidgetBP_C", "OnNavigationExit");

	Params::DecisionDialogWidgetBP_C_OnNavigationExit Parms{};

	Parms.NavigateToMenu = NavigateToMenu;
	Parms.NavigateFromMenu = NavigateFromMenu;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DecisionDialogWidgetBP.DecisionDialogWidgetBP_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDecisionDialogWidgetBP_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DecisionDialogWidgetBP_C", "PreConstruct");

	Params::DecisionDialogWidgetBP_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DecisionDialogWidgetBP.DecisionDialogWidgetBP_C.SetGlobalSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDecisionDialogWidgetBP_C::SetGlobalSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DecisionDialogWidgetBP_C", "SetGlobalSettings");

	UObject::ProcessEvent(Func, nullptr);
}

}

