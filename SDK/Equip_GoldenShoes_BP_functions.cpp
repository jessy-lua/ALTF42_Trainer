#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Equip_GoldenShoes_BP

#include "Basic.hpp"

#include "Equip_GoldenShoes_BP_classes.hpp"
#include "Equip_GoldenShoes_BP_parameters.hpp"


namespace SDK
{

// Function Equip_GoldenShoes_BP.Equip_GoldenShoes_BP_C.ExecuteUbergraph_Equip_GoldenShoes_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEquip_GoldenShoes_BP_C::ExecuteUbergraph_Equip_GoldenShoes_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Equip_GoldenShoes_BP_C", "ExecuteUbergraph_Equip_GoldenShoes_BP");

	Params::Equip_GoldenShoes_BP_C_ExecuteUbergraph_Equip_GoldenShoes_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Equip_GoldenShoes_BP.Equip_GoldenShoes_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEquip_GoldenShoes_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Equip_GoldenShoes_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Equip_GoldenShoes_BP.Equip_GoldenShoes_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEquip_GoldenShoes_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Equip_GoldenShoes_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

