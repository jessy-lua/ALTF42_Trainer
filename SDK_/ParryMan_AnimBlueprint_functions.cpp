#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ParryMan_AnimBlueprint

#include "Basic.hpp"

#include "ParryMan_AnimBlueprint_classes.hpp"
#include "ParryMan_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function ParryMan_AnimBlueprint.ParryMan_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UParryMan_AnimBlueprint_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParryMan_AnimBlueprint_C", "AnimGraph");

	Params::ParryMan_AnimBlueprint_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ParryMan_AnimBlueprint.ParryMan_AnimBlueprint_C.ExecuteUbergraph_ParryMan_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UParryMan_AnimBlueprint_C::ExecuteUbergraph_ParryMan_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParryMan_AnimBlueprint_C", "ExecuteUbergraph_ParryMan_AnimBlueprint");

	Params::ParryMan_AnimBlueprint_C_ExecuteUbergraph_ParryMan_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
