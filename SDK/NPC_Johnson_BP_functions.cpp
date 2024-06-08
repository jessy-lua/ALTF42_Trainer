#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Johnson_BP

#include "Basic.hpp"

#include "NPC_Johnson_BP_classes.hpp"
#include "NPC_Johnson_BP_parameters.hpp"


namespace SDK
{

// Function NPC_Johnson_BP.NPC_Johnson_BP_C.BndEvt__NPC_Johnson_BP_Overlap_TalkCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ANPC_Johnson_BP_C::BndEvt__NPC_Johnson_BP_Overlap_TalkCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Johnson_BP_C", "BndEvt__NPC_Johnson_BP_Overlap_TalkCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::NPC_Johnson_BP_C_BndEvt__NPC_Johnson_BP_Overlap_TalkCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Johnson_BP.NPC_Johnson_BP_C.ExecuteUbergraph_NPC_Johnson_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Johnson_BP_C::ExecuteUbergraph_NPC_Johnson_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Johnson_BP_C", "ExecuteUbergraph_NPC_Johnson_BP");

	Params::NPC_Johnson_BP_C_ExecuteUbergraph_NPC_Johnson_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Johnson_BP.NPC_Johnson_BP_C.NextTalk
// (BlueprintCallable, BlueprintEvent)

void ANPC_Johnson_BP_C::NextTalk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Johnson_BP_C", "NextTalk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Johnson_BP.NPC_Johnson_BP_C.Talk_End_Event
// (BlueprintCallable, BlueprintEvent)

void ANPC_Johnson_BP_C::Talk_End_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Johnson_BP_C", "Talk_End_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Johnson_BP.NPC_Johnson_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANPC_Johnson_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Johnson_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
