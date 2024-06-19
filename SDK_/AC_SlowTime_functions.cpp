#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AC_SlowTime

#include "Basic.hpp"

#include "AC_SlowTime_classes.hpp"
#include "AC_SlowTime_parameters.hpp"


namespace SDK
{

// Function AC_SlowTime.AC_SlowTime_C.ActivateAbility
// (BlueprintCallable, BlueprintEvent)

void UAC_SlowTime_C::ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_SlowTime_C", "ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AC_SlowTime.AC_SlowTime_C.DeactivateAbility
// (BlueprintCallable, BlueprintEvent)

void UAC_SlowTime_C::DeactivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_SlowTime_C", "DeactivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AC_SlowTime.AC_SlowTime_C.ExecuteUbergraph_AC_SlowTime
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_SlowTime_C::ExecuteUbergraph_AC_SlowTime(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_SlowTime_C", "ExecuteUbergraph_AC_SlowTime");

	Params::AC_SlowTime_C_ExecuteUbergraph_AC_SlowTime Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AC_SlowTime.AC_SlowTime_C.LerpStart
// (BlueprintCallable, BlueprintEvent)

void UAC_SlowTime_C::LerpStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_SlowTime_C", "LerpStart");

	UObject::ProcessEvent(Func, nullptr);
}

}
