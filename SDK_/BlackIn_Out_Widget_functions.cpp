#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BlackIn_Out_Widget

#include "Basic.hpp"

#include "BlackIn_Out_Widget_classes.hpp"
#include "BlackIn_Out_Widget_parameters.hpp"


namespace SDK
{

// Function BlackIn_Out_Widget.BlackIn_Out_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBlackIn_Out_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlackIn_Out_Widget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BlackIn_Out_Widget.BlackIn_Out_Widget_C.Destroy_Widget
// (BlueprintCallable, BlueprintEvent)

void UBlackIn_Out_Widget_C::Destroy_Widget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlackIn_Out_Widget_C", "Destroy_Widget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BlackIn_Out_Widget.BlackIn_Out_Widget_C.ExecuteUbergraph_BlackIn_Out_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBlackIn_Out_Widget_C::ExecuteUbergraph_BlackIn_Out_Widget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlackIn_Out_Widget_C", "ExecuteUbergraph_BlackIn_Out_Widget");

	Params::BlackIn_Out_Widget_C_ExecuteUbergraph_BlackIn_Out_Widget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BlackIn_Out_Widget.BlackIn_Out_Widget_C.SequenceEvent__ENTRYPOINTBlackIn_Out_Widget
// (Public, BlueprintCallable, BlueprintEvent)

void UBlackIn_Out_Widget_C::SequenceEvent__ENTRYPOINTBlackIn_Out_Widget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlackIn_Out_Widget_C", "SequenceEvent__ENTRYPOINTBlackIn_Out_Widget");

	UObject::ProcessEvent(Func, nullptr);
}

}

