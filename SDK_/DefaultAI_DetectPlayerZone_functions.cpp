#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultAI_DetectPlayerZone

#include "Basic.hpp"

#include "DefaultAI_DetectPlayerZone_classes.hpp"
#include "DefaultAI_DetectPlayerZone_parameters.hpp"


namespace SDK
{

// Function DefaultAI_DetectPlayerZone.DefaultAI_DetectPlayerZone_C.BndEvt__Kniht_DetectArea_BP_OverlapCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ADefaultAI_DetectPlayerZone_C::BndEvt__Kniht_DetectArea_BP_OverlapCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultAI_DetectPlayerZone_C", "BndEvt__Kniht_DetectArea_BP_OverlapCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::DefaultAI_DetectPlayerZone_C_BndEvt__Kniht_DetectArea_BP_OverlapCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DefaultAI_DetectPlayerZone.DefaultAI_DetectPlayerZone_C.BndEvt__Kniht_DetectArea_BP_OverlapCheck_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADefaultAI_DetectPlayerZone_C::BndEvt__Kniht_DetectArea_BP_OverlapCheck_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultAI_DetectPlayerZone_C", "BndEvt__Kniht_DetectArea_BP_OverlapCheck_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::DefaultAI_DetectPlayerZone_C_BndEvt__Kniht_DetectArea_BP_OverlapCheck_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DefaultAI_DetectPlayerZone.DefaultAI_DetectPlayerZone_C.Enemy_ArrayList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Range_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAI_FieldDefault_Enemy_BP_C*      CloseAI                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ADefaultAI_DetectPlayerZone_C::Enemy_ArrayList(bool Range_, class AAI_FieldDefault_Enemy_BP_C* CloseAI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultAI_DetectPlayerZone_C", "Enemy_ArrayList");

	Params::DefaultAI_DetectPlayerZone_C_Enemy_ArrayList Parms{};

	Parms.Range_ = Range_;
	Parms.CloseAI = CloseAI;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DefaultAI_DetectPlayerZone.DefaultAI_DetectPlayerZone_C.Enemy_DeleteArrayList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Ai_ArrayInteger                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADefaultAI_DetectPlayerZone_C::Enemy_DeleteArrayList(int32 Ai_ArrayInteger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultAI_DetectPlayerZone_C", "Enemy_DeleteArrayList");

	Params::DefaultAI_DetectPlayerZone_C_Enemy_DeleteArrayList Parms{};

	Parms.Ai_ArrayInteger = Ai_ArrayInteger;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DefaultAI_DetectPlayerZone.DefaultAI_DetectPlayerZone_C.ExecuteUbergraph_DefaultAI_DetectPlayerZone
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADefaultAI_DetectPlayerZone_C::ExecuteUbergraph_DefaultAI_DetectPlayerZone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultAI_DetectPlayerZone_C", "ExecuteUbergraph_DefaultAI_DetectPlayerZone");

	Params::DefaultAI_DetectPlayerZone_C_ExecuteUbergraph_DefaultAI_DetectPlayerZone Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
