#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShipFire_BP

#include "Basic.hpp"

#include "ShipFire_BP_classes.hpp"
#include "ShipFire_BP_parameters.hpp"


namespace SDK
{

// Function ShipFire_BP.ShipFire_BP_C.Absolute_Stop_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Absolute_STOP_                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShipFire_BP_C::Absolute_Stop_Event(bool Param_Absolute_STOP_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShipFire_BP_C", "Absolute_Stop_Event");

	Params::ShipFire_BP_C_Absolute_Stop_Event Parms{};

	Parms.Param_Absolute_STOP_ = Param_Absolute_STOP_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShipFire_BP.ShipFire_BP_C.ExecuteUbergraph_ShipFire_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShipFire_BP_C::ExecuteUbergraph_ShipFire_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShipFire_BP_C", "ExecuteUbergraph_ShipFire_BP");

	Params::ShipFire_BP_C_ExecuteUbergraph_ShipFire_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShipFire_BP.ShipFire_BP_C.fire
// (BlueprintCallable, BlueprintEvent)

void AShipFire_BP_C::Fire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShipFire_BP_C", "fire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShipFire_BP.ShipFire_BP_C.Fire_Check_TL__Distance_Check__EventFunc
// (BlueprintEvent)

void AShipFire_BP_C::Fire_Check_TL__Distance_Check__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShipFire_BP_C", "Fire_Check_TL__Distance_Check__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShipFire_BP.ShipFire_BP_C.Fire_Check_TL__FinishedFunc
// (BlueprintEvent)

void AShipFire_BP_C::Fire_Check_TL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShipFire_BP_C", "Fire_Check_TL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShipFire_BP.ShipFire_BP_C.Fire_Check_TL__UpdateFunc
// (BlueprintEvent)

void AShipFire_BP_C::Fire_Check_TL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShipFire_BP_C", "Fire_Check_TL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShipFire_BP.ShipFire_BP_C.fire_loop
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AShipFire_BP_C::Fire_loop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShipFire_BP_C", "fire_loop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShipFire_BP.ShipFire_BP_C.stop_fire
// (BlueprintCallable, BlueprintEvent)

void AShipFire_BP_C::Stop_fire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShipFire_BP_C", "stop_fire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShipFire_BP.ShipFire_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShipFire_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShipFire_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
