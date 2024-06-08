#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GlobalFoliageActor_UE5

#include "Basic.hpp"

#include "BP_GlobalFoliageActor_UE5_classes.hpp"
#include "BP_GlobalFoliageActor_UE5_parameters.hpp"


namespace SDK
{

// Function BP_GlobalFoliageActor_UE5.BP_GlobalFoliageActor_UE5_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GlobalFoliageActor_UE5_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalFoliageActor_UE5_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalFoliageActor_UE5.BP_GlobalFoliageActor_UE5_C.RunGlobalFoliageActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GlobalFoliageActor_UE5_C::RunGlobalFoliageActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalFoliageActor_UE5_C", "RunGlobalFoliageActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalFoliageActor_UE5.BP_GlobalFoliageActor_UE5_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalFoliageActor_UE5_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalFoliageActor_UE5_C", "ReceiveTick");

	Params::BP_GlobalFoliageActor_UE5_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GlobalFoliageActor_UE5.BP_GlobalFoliageActor_UE5_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GlobalFoliageActor_UE5_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalFoliageActor_UE5_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GlobalFoliageActor_UE5.BP_GlobalFoliageActor_UE5_C.ExecuteUbergraph_BP_GlobalFoliageActor_UE5
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GlobalFoliageActor_UE5_C::ExecuteUbergraph_BP_GlobalFoliageActor_UE5(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GlobalFoliageActor_UE5_C", "ExecuteUbergraph_BP_GlobalFoliageActor_UE5");

	Params::BP_GlobalFoliageActor_UE5_C_ExecuteUbergraph_BP_GlobalFoliageActor_UE5 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
