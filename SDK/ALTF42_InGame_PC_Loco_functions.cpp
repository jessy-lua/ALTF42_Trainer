#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALTF42_InGame_PC_Loco

#include "Basic.hpp"

#include "ALTF42_InGame_PC_Loco_classes.hpp"
#include "ALTF42_InGame_PC_Loco_parameters.hpp"


namespace SDK
{

// Function ALTF42_InGame_PC_Loco.ALTF42_InGame_PC_Loco_C.ExecuteUbergraph_ALTF42_InGame_PC_Loco
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AALTF42_InGame_PC_Loco_C::ExecuteUbergraph_ALTF42_InGame_PC_Loco(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALTF42_InGame_PC_Loco_C", "ExecuteUbergraph_ALTF42_InGame_PC_Loco");

	Params::ALTF42_InGame_PC_Loco_C_ExecuteUbergraph_ALTF42_InGame_PC_Loco Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ALTF42_InGame_PC_Loco.ALTF42_InGame_PC_Loco_C.InpActEvt_IA_Pause_K2Node_EnhancedInputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AALTF42_InGame_PC_Loco_C::InpActEvt_IA_Pause_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALTF42_InGame_PC_Loco_C", "InpActEvt_IA_Pause_K2Node_EnhancedInputActionEvent_1");

	Params::ALTF42_InGame_PC_Loco_C_InpActEvt_IA_Pause_K2Node_EnhancedInputActionEvent_1 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ALTF42_InGame_PC_Loco.ALTF42_InGame_PC_Loco_C.InpActEvt_IA_Select_Inventory_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AALTF42_InGame_PC_Loco_C::InpActEvt_IA_Select_Inventory_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALTF42_InGame_PC_Loco_C", "InpActEvt_IA_Select_Inventory_K2Node_EnhancedInputActionEvent_0");

	Params::ALTF42_InGame_PC_Loco_C_InpActEvt_IA_Select_Inventory_K2Node_EnhancedInputActionEvent_0 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ALTF42_InGame_PC_Loco.ALTF42_InGame_PC_Loco_C.KeyBoardOrPad_Input_Check
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsGM_GamepadBeingUsed                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AALTF42_InGame_PC_Loco_C::KeyBoardOrPad_Input_Check(bool Param_IsGM_GamepadBeingUsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALTF42_InGame_PC_Loco_C", "KeyBoardOrPad_Input_Check");

	Params::ALTF42_InGame_PC_Loco_C_KeyBoardOrPad_Input_Check Parms{};

	Parms.Param_IsGM_GamepadBeingUsed = Param_IsGM_GamepadBeingUsed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ALTF42_InGame_PC_Loco.ALTF42_InGame_PC_Loco_C.Open_EndingSkech
// (BlueprintCallable, BlueprintEvent)

void AALTF42_InGame_PC_Loco_C::Open_EndingSkech()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALTF42_InGame_PC_Loco_C", "Open_EndingSkech");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ALTF42_InGame_PC_Loco.ALTF42_InGame_PC_Loco_C.Open_Tooltip
// (BlueprintCallable, BlueprintEvent)

void AALTF42_InGame_PC_Loco_C::Open_Tooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALTF42_InGame_PC_Loco_C", "Open_Tooltip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ALTF42_InGame_PC_Loco.ALTF42_InGame_PC_Loco_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AALTF42_InGame_PC_Loco_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALTF42_InGame_PC_Loco_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ALTF42_InGame_PC_Loco.ALTF42_InGame_PC_Loco_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            PossessedPawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AALTF42_InGame_PC_Loco_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALTF42_InGame_PC_Loco_C", "ReceivePossess");

	Params::ALTF42_InGame_PC_Loco_C_ReceivePossess Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ALTF42_InGame_PC_Loco.ALTF42_InGame_PC_Loco_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AALTF42_InGame_PC_Loco_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALTF42_InGame_PC_Loco_C", "ReceiveTick");

	Params::ALTF42_InGame_PC_Loco_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ALTF42_InGame_PC_Loco.ALTF42_InGame_PC_Loco_C.TarzanRunning_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Tarzan_Running_                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AALTF42_InGame_PC_Loco_C::TarzanRunning_Event(bool Param_Tarzan_Running_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALTF42_InGame_PC_Loco_C", "TarzanRunning_Event");

	Params::ALTF42_InGame_PC_Loco_C_TarzanRunning_Event Parms{};

	Parms.Param_Tarzan_Running_ = Param_Tarzan_Running_;

	UObject::ProcessEvent(Func, &Parms);
}

}

