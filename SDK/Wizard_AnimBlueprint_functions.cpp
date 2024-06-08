#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wizard_AnimBlueprint

#include "Basic.hpp"

#include "Wizard_AnimBlueprint_classes.hpp"
#include "Wizard_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function Wizard_AnimBlueprint.Wizard_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UWizard_AnimBlueprint_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Wizard_AnimBlueprint_C", "AnimGraph");

	Params::Wizard_AnimBlueprint_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function Wizard_AnimBlueprint.Wizard_AnimBlueprint_C.ExecuteUbergraph_Wizard_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWizard_AnimBlueprint_C::ExecuteUbergraph_Wizard_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Wizard_AnimBlueprint_C", "ExecuteUbergraph_Wizard_AnimBlueprint");

	Params::Wizard_AnimBlueprint_C_ExecuteUbergraph_Wizard_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

