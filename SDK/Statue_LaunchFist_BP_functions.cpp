#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Statue_LaunchFist_BP

#include "Basic.hpp"

#include "Statue_LaunchFist_BP_classes.hpp"
#include "Statue_LaunchFist_BP_parameters.hpp"


namespace SDK
{

// Function Statue_LaunchFist_BP.Statue_LaunchFist_BP_C.BndEvt__Statue_LaunchFist_BP_Fist_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AStatue_LaunchFist_BP_C::BndEvt__Statue_LaunchFist_BP_Fist_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Statue_LaunchFist_BP_C", "BndEvt__Statue_LaunchFist_BP_Fist_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::Statue_LaunchFist_BP_C_BndEvt__Statue_LaunchFist_BP_Fist_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Statue_LaunchFist_BP.Statue_LaunchFist_BP_C.ExecuteUbergraph_Statue_LaunchFist_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStatue_LaunchFist_BP_C::ExecuteUbergraph_Statue_LaunchFist_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Statue_LaunchFist_BP_C", "ExecuteUbergraph_Statue_LaunchFist_BP");

	Params::Statue_LaunchFist_BP_C_ExecuteUbergraph_Statue_LaunchFist_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Statue_LaunchFist_BP.Statue_LaunchFist_BP_C.Fist_Destroy
// (BlueprintCallable, BlueprintEvent)

void AStatue_LaunchFist_BP_C::Fist_Destroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Statue_LaunchFist_BP_C", "Fist_Destroy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Statue_LaunchFist_BP.Statue_LaunchFist_BP_C.Fist_GO_TL__FinishedFunc
// (BlueprintEvent)

void AStatue_LaunchFist_BP_C::Fist_GO_TL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Statue_LaunchFist_BP_C", "Fist_GO_TL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Statue_LaunchFist_BP.Statue_LaunchFist_BP_C.Fist_GO_TL__UpdateFunc
// (BlueprintEvent)

void AStatue_LaunchFist_BP_C::Fist_GO_TL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Statue_LaunchFist_BP_C", "Fist_GO_TL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Statue_LaunchFist_BP.Statue_LaunchFist_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStatue_LaunchFist_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Statue_LaunchFist_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
