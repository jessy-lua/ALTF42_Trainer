#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIJumpNavComponent

#include "Basic.hpp"

#include "AIJumpNavComponent_classes.hpp"
#include "AIJumpNavComponent_parameters.hpp"


namespace SDK
{

// Function AIJumpNavComponent.AIJumpNavComponent_C.AIJumpNavComponent_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EMovementMode                           PrevMovementMode                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   PreviousCustomMode                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIJumpNavComponent_C::AIJumpNavComponent_AutoGenFunc(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIJumpNavComponent_C", "AIJumpNavComponent_AutoGenFunc");

	Params::AIJumpNavComponent_C_AIJumpNavComponent_AutoGenFunc Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIJumpNavComponent.AIJumpNavComponent_C.Calculate Jump
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          End_Pos                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Arc_Param                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          OutLaunchVelocity                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Obstructed                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIJumpNavComponent_C::Calculate_Jump(const struct FVector& End_Pos, double Arc_Param, struct FVector* OutLaunchVelocity, bool* Obstructed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIJumpNavComponent_C", "Calculate Jump");

	Params::AIJumpNavComponent_C_Calculate_Jump Parms{};

	Parms.End_Pos = std::move(End_Pos);
	Parms.Arc_Param = Arc_Param;

	UObject::ProcessEvent(Func, &Parms);

	if (OutLaunchVelocity != nullptr)
		*OutLaunchVelocity = std::move(Parms.OutLaunchVelocity);

	if (Obstructed != nullptr)
		*Obstructed = Parms.Obstructed;
}


// Function AIJumpNavComponent.AIJumpNavComponent_C.ExecuteUbergraph_AIJumpNavComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIJumpNavComponent_C::ExecuteUbergraph_AIJumpNavComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIJumpNavComponent_C", "ExecuteUbergraph_AIJumpNavComponent");

	Params::AIJumpNavComponent_C_ExecuteUbergraph_AIJumpNavComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIJumpNavComponent.AIJumpNavComponent_C.Get Owning Character
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacter*                       Character                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIJumpNavComponent_C::Get_Owning_Character(class ACharacter** Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIJumpNavComponent_C", "Get Owning Character");

	Params::AIJumpNavComponent_C_Get_Owning_Character Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;
}


// Function AIJumpNavComponent.AIJumpNavComponent_C.Jump Character To
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          EndPos                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  ArcParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NavLink_Automatic_Jump_Arc                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIJumpNavComponent_C::Jump_Character_To(const struct FVector& EndPos, double ArcParam, bool NavLink_Automatic_Jump_Arc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIJumpNavComponent_C", "Jump Character To");

	Params::AIJumpNavComponent_C_Jump_Character_To Parms{};

	Parms.EndPos = std::move(EndPos);
	Parms.ArcParam = ArcParam;
	Parms.NavLink_Automatic_Jump_Arc = NavLink_Automatic_Jump_Arc;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIJumpNavComponent.AIJumpNavComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UAIJumpNavComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIJumpNavComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

