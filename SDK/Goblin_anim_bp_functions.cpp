#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Goblin_anim_bp

#include "Basic.hpp"

#include "Goblin_anim_bp_classes.hpp"
#include "Goblin_anim_bp_parameters.hpp"


namespace SDK
{

// Function Goblin_anim_bp.Goblin_anim_bp_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UGoblin_anim_bp_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Goblin_anim_bp_C", "AnimGraph");

	Params::Goblin_anim_bp_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function Goblin_anim_bp.Goblin_anim_bp_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoblin_anim_bp_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Goblin_anim_bp_C", "BlueprintUpdateAnimation");

	Params::Goblin_anim_bp_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Goblin_anim_bp.Goblin_anim_bp_C.ExecuteUbergraph_Goblin_anim_bp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGoblin_anim_bp_C::ExecuteUbergraph_Goblin_anim_bp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Goblin_anim_bp_C", "ExecuteUbergraph_Goblin_anim_bp");

	Params::Goblin_anim_bp_C_ExecuteUbergraph_Goblin_anim_bp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
