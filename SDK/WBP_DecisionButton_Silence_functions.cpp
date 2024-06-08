#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DecisionButton_Silence

#include "Basic.hpp"

#include "WBP_DecisionButton_Silence_classes.hpp"
#include "WBP_DecisionButton_Silence_parameters.hpp"


namespace SDK
{

// Function WBP_DecisionButton_Silence.WBP_DecisionButton_Silence_C.BndEvt__DecisionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DecisionButton_Silence_C::BndEvt__DecisionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DecisionButton_Silence_C", "BndEvt__DecisionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DecisionButton_Silence.WBP_DecisionButton_Silence_C.BndEvt__DecisionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DecisionButton_Silence_C::BndEvt__DecisionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DecisionButton_Silence_C", "BndEvt__DecisionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DecisionButton_Silence.WBP_DecisionButton_Silence_C.ExecuteUbergraph_WBP_DecisionButton_Silence
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DecisionButton_Silence_C::ExecuteUbergraph_WBP_DecisionButton_Silence(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DecisionButton_Silence_C", "ExecuteUbergraph_WBP_DecisionButton_Silence");

	Params::WBP_DecisionButton_Silence_C_ExecuteUbergraph_WBP_DecisionButton_Silence Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DecisionButton_Silence.WBP_DecisionButton_Silence_C.OnSetHighlightEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EWidgetStyleState                       Param_HighlightState                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bPlaySound                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DecisionButton_Silence_C::OnSetHighlightEffect(EWidgetStyleState Param_HighlightState, bool bPlaySound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DecisionButton_Silence_C", "OnSetHighlightEffect");

	Params::WBP_DecisionButton_Silence_C_OnSetHighlightEffect Parms{};

	Parms.Param_HighlightState = Param_HighlightState;
	Parms.bPlaySound = bPlaySound;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DecisionButton_Silence.WBP_DecisionButton_Silence_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DecisionButton_Silence_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DecisionButton_Silence_C", "PreConstruct");

	Params::WBP_DecisionButton_Silence_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
