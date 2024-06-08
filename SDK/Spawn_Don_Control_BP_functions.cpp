#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Spawn_Don_Control_BP

#include "Basic.hpp"

#include "Spawn_Don_Control_BP_classes.hpp"
#include "Spawn_Don_Control_BP_parameters.hpp"


namespace SDK
{

// Function Spawn_Don_Control_BP.Spawn_Don_Control_BP_C.Absolute_DonSpawn_StopEvent
// (BlueprintCallable, BlueprintEvent)

void ASpawn_Don_Control_BP_C::Absolute_DonSpawn_StopEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Spawn_Don_Control_BP_C", "Absolute_DonSpawn_StopEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Spawn_Don_Control_BP.Spawn_Don_Control_BP_C.BndEvt__Spawn_Don_Control_BP_SpawnEnd_Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ASpawn_Don_Control_BP_C::BndEvt__Spawn_Don_Control_BP_SpawnEnd_Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Spawn_Don_Control_BP_C", "BndEvt__Spawn_Don_Control_BP_SpawnEnd_Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Spawn_Don_Control_BP_C_BndEvt__Spawn_Don_Control_BP_SpawnEnd_Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Spawn_Don_Control_BP.Spawn_Don_Control_BP_C.BndEvt__Spawn_Don_Control_BP_SpawnStart_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ASpawn_Don_Control_BP_C::BndEvt__Spawn_Don_Control_BP_SpawnStart_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Spawn_Don_Control_BP_C", "BndEvt__Spawn_Don_Control_BP_SpawnStart_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Spawn_Don_Control_BP_C_BndEvt__Spawn_Don_Control_BP_SpawnStart_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Spawn_Don_Control_BP.Spawn_Don_Control_BP_C.CharDie_ResetEvent
// (BlueprintCallable, BlueprintEvent)

void ASpawn_Don_Control_BP_C::CharDie_ResetEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Spawn_Don_Control_BP_C", "CharDie_ResetEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Spawn_Don_Control_BP.Spawn_Don_Control_BP_C.Check_TL__CheckEvent__EventFunc
// (BlueprintEvent)

void ASpawn_Don_Control_BP_C::Check_TL__CheckEvent__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Spawn_Don_Control_BP_C", "Check_TL__CheckEvent__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Spawn_Don_Control_BP.Spawn_Don_Control_BP_C.Check_TL__FinishedFunc
// (BlueprintEvent)

void ASpawn_Don_Control_BP_C::Check_TL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Spawn_Don_Control_BP_C", "Check_TL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Spawn_Don_Control_BP.Spawn_Don_Control_BP_C.Check_TL__UpdateFunc
// (BlueprintEvent)

void ASpawn_Don_Control_BP_C::Check_TL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Spawn_Don_Control_BP_C", "Check_TL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Spawn_Don_Control_BP.Spawn_Don_Control_BP_C.ExecuteUbergraph_Spawn_Don_Control_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpawn_Don_Control_BP_C::ExecuteUbergraph_Spawn_Don_Control_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Spawn_Don_Control_BP_C", "ExecuteUbergraph_Spawn_Don_Control_BP");

	Params::Spawn_Don_Control_BP_C_ExecuteUbergraph_Spawn_Don_Control_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Spawn_Don_Control_BP.Spawn_Don_Control_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASpawn_Don_Control_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Spawn_Don_Control_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
