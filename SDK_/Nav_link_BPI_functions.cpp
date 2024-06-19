#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Nav_link_BPI

#include "Basic.hpp"

#include "Nav_link_BPI_classes.hpp"
#include "Nav_link_BPI_parameters.hpp"


namespace SDK
{

// Function Nav_link_BPI.Nav_link_BPI_C.NavLinkRange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          NavLinkLocation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  JumpDuration                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Gravity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void INav_link_BPI_C::NavLinkRange(const struct FVector& NavLinkLocation, double JumpDuration, double Gravity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Nav_link_BPI_C", "NavLinkRange");

	Params::Nav_link_BPI_C_NavLinkRange Parms{};

	Parms.NavLinkLocation = std::move(NavLinkLocation);
	Parms.JumpDuration = JumpDuration;
	Parms.Gravity = Gravity;

	UObject::ProcessEvent(Func, &Parms);
}

}
