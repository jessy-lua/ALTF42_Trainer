#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALTF4_Rider_AnimBP

#include "Basic.hpp"

#include "ALTF4_Rider_AnimBP_classes.hpp"
#include "ALTF4_Rider_AnimBP_parameters.hpp"


namespace SDK
{

// Function ALTF4_Rider_AnimBP.ALTF4_Rider_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UALTF4_Rider_AnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALTF4_Rider_AnimBP_C", "AnimGraph");

	Params::ALTF4_Rider_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ALTF4_Rider_AnimBP.ALTF4_Rider_AnimBP_C.AnimNotify_IsManualEnd
// (BlueprintCallable, BlueprintEvent)

void UALTF4_Rider_AnimBP_C::AnimNotify_IsManualEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALTF4_Rider_AnimBP_C", "AnimNotify_IsManualEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ALTF4_Rider_AnimBP.ALTF4_Rider_AnimBP_C.AnimNotify_IsPreload
// (BlueprintCallable, BlueprintEvent)

void UALTF4_Rider_AnimBP_C::AnimNotify_IsPreload()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALTF4_Rider_AnimBP_C", "AnimNotify_IsPreload");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ALTF4_Rider_AnimBP.ALTF4_Rider_AnimBP_C.AnimNotify_startIK
// (BlueprintCallable, BlueprintEvent)

void UALTF4_Rider_AnimBP_C::AnimNotify_startIK()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALTF4_Rider_AnimBP_C", "AnimNotify_startIK");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ALTF4_Rider_AnimBP.ALTF4_Rider_AnimBP_C.AnimNotify_stopIK
// (BlueprintCallable, BlueprintEvent)

void UALTF4_Rider_AnimBP_C::AnimNotify_stopIK()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALTF4_Rider_AnimBP_C", "AnimNotify_stopIK");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ALTF4_Rider_AnimBP.ALTF4_Rider_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UALTF4_Rider_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALTF4_Rider_AnimBP_C", "BlueprintUpdateAnimation");

	Params::ALTF4_Rider_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ALTF4_Rider_AnimBP.ALTF4_Rider_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALTF4_Rider_AnimBP_AnimGraphNode_TransitionResult_56021D744B3C176B53E46B870453186C
// (BlueprintEvent)

void UALTF4_Rider_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ALTF4_Rider_AnimBP_AnimGraphNode_TransitionResult_56021D744B3C176B53E46B870453186C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALTF4_Rider_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ALTF4_Rider_AnimBP_AnimGraphNode_TransitionResult_56021D744B3C176B53E46B870453186C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ALTF4_Rider_AnimBP.ALTF4_Rider_AnimBP_C.ExecuteUbergraph_ALTF4_Rider_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UALTF4_Rider_AnimBP_C::ExecuteUbergraph_ALTF4_Rider_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALTF4_Rider_AnimBP_C", "ExecuteUbergraph_ALTF4_Rider_AnimBP");

	Params::ALTF4_Rider_AnimBP_C_ExecuteUbergraph_ALTF4_Rider_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ALTF4_Rider_AnimBP.ALTF4_Rider_AnimBP_C.Manual
// (BlueprintCallable, BlueprintEvent)

void UALTF4_Rider_AnimBP_C::Manual()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALTF4_Rider_AnimBP_C", "Manual");

	UObject::ProcessEvent(Func, nullptr);
}

}

