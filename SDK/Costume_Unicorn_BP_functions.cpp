#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Costume_Unicorn_BP

#include "Basic.hpp"

#include "Costume_Unicorn_BP_classes.hpp"
#include "Costume_Unicorn_BP_parameters.hpp"


namespace SDK
{

// Function Costume_Unicorn_BP.Costume_Unicorn_BP_C.Costume_TakeOFF
// (BlueprintCallable, BlueprintEvent)

void ACostume_Unicorn_BP_C::Costume_TakeOFF()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Costume_Unicorn_BP_C", "Costume_TakeOFF");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Costume_Unicorn_BP.Costume_Unicorn_BP_C.ExecuteUbergraph_Costume_Unicorn_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACostume_Unicorn_BP_C::ExecuteUbergraph_Costume_Unicorn_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Costume_Unicorn_BP_C", "ExecuteUbergraph_Costume_Unicorn_BP");

	Params::Costume_Unicorn_BP_C_ExecuteUbergraph_Costume_Unicorn_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Costume_Unicorn_BP.Costume_Unicorn_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACostume_Unicorn_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Costume_Unicorn_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Costume_Unicorn_BP.Costume_Unicorn_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACostume_Unicorn_BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Costume_Unicorn_BP_C", "ReceiveTick");

	Params::Costume_Unicorn_BP_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Costume_Unicorn_BP.Costume_Unicorn_BP_C.UnicornTail_Effect_OnOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ON_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACostume_Unicorn_BP_C::UnicornTail_Effect_OnOff(bool ON_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Costume_Unicorn_BP_C", "UnicornTail_Effect_OnOff");

	Params::Costume_Unicorn_BP_C_UnicornTail_Effect_OnOff Parms{};

	Parms.ON_ = ON_;

	UObject::ProcessEvent(Func, &Parms);
}

}
