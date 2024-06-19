#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BossEnd_Coin_BP

#include "Basic.hpp"

#include "BossEnd_Coin_BP_classes.hpp"
#include "BossEnd_Coin_BP_parameters.hpp"


namespace SDK
{

// Function BossEnd_Coin_BP.BossEnd_Coin_BP_C.DeleteCoin_Event
// (BlueprintCallable, BlueprintEvent)

void ABossEnd_Coin_BP_C::DeleteCoin_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossEnd_Coin_BP_C", "DeleteCoin_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BossEnd_Coin_BP.BossEnd_Coin_BP_C.ExecuteUbergraph_BossEnd_Coin_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABossEnd_Coin_BP_C::ExecuteUbergraph_BossEnd_Coin_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BossEnd_Coin_BP_C", "ExecuteUbergraph_BossEnd_Coin_BP");

	Params::BossEnd_Coin_BP_C_ExecuteUbergraph_BossEnd_Coin_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
