#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BossClear_Spawn_BP

#include "Basic.hpp"

#include "BossClear_Spawn_BP_classes.hpp"
#include "BossClear_Spawn_BP_parameters.hpp"


namespace SDK
{

// Function BossClear_Spawn_BP.BossClear_Spawn_BP_C.CoinCheck_Event
// (BlueprintCallable, BlueprintEvent)

void ABossClear_Spawn_BP_C::CoinCheck_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossClear_Spawn_BP_C", "CoinCheck_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BossClear_Spawn_BP.BossClear_Spawn_BP_C.CoinSpawn_And_Physics
// (BlueprintCallable, BlueprintEvent)

void ABossClear_Spawn_BP_C::CoinSpawn_And_Physics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossClear_Spawn_BP_C", "CoinSpawn_And_Physics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BossClear_Spawn_BP.BossClear_Spawn_BP_C.CoinSpawn_Loop_Event
// (BlueprintCallable, BlueprintEvent)

void ABossClear_Spawn_BP_C::CoinSpawn_Loop_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossClear_Spawn_BP_C", "CoinSpawn_Loop_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BossClear_Spawn_BP.BossClear_Spawn_BP_C.CoinSpawn_Loop_Stop
// (BlueprintCallable, BlueprintEvent)

void ABossClear_Spawn_BP_C::CoinSpawn_Loop_Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossClear_Spawn_BP_C", "CoinSpawn_Loop_Stop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BossClear_Spawn_BP.BossClear_Spawn_BP_C.ExecuteUbergraph_BossClear_Spawn_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossClear_Spawn_BP_C::ExecuteUbergraph_BossClear_Spawn_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossClear_Spawn_BP_C", "ExecuteUbergraph_BossClear_Spawn_BP");

	Params::BossClear_Spawn_BP_C_ExecuteUbergraph_BossClear_Spawn_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BossClear_Spawn_BP.BossClear_Spawn_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABossClear_Spawn_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossClear_Spawn_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BossClear_Spawn_BP.BossClear_Spawn_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossClear_Spawn_BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossClear_Spawn_BP_C", "ReceiveTick");

	Params::BossClear_Spawn_BP_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BossClear_Spawn_BP.BossClear_Spawn_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABossClear_Spawn_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossClear_Spawn_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

