#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Boss_MINI_homing

#include "Basic.hpp"

#include "BP_Boss_MINI_homing_classes.hpp"
#include "BP_Boss_MINI_homing_parameters.hpp"


namespace SDK
{

// Function BP_Boss_MINI_homing.BP_Boss_MINI_homing_C.BndEvt__BP_Homming_Projectile_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Boss_MINI_homing_C::BndEvt__BP_Homming_Projectile_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Boss_MINI_homing_C", "BndEvt__BP_Homming_Projectile_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::BP_Boss_MINI_homing_C_BndEvt__BP_Homming_Projectile_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Boss_MINI_homing.BP_Boss_MINI_homing_C.Drop_Golden_Chick_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_Boss_MINI_homing_C::Drop_Golden_Chick_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Boss_MINI_homing_C", "Drop_Golden_Chick_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Boss_MINI_homing.BP_Boss_MINI_homing_C.ExecuteUbergraph_BP_Boss_MINI_homing
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Boss_MINI_homing_C::ExecuteUbergraph_BP_Boss_MINI_homing(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Boss_MINI_homing_C", "ExecuteUbergraph_BP_Boss_MINI_homing");

	Params::BP_Boss_MINI_homing_C_ExecuteUbergraph_BP_Boss_MINI_homing Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Boss_MINI_homing.BP_Boss_MINI_homing_C.Find_Target
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  Targetwww                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Boss_MINI_homing_C::Find_Target(class USceneComponent** Targetwww)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Boss_MINI_homing_C", "Find_Target");

	Params::BP_Boss_MINI_homing_C_Find_Target Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Targetwww != nullptr)
		*Targetwww = Parms.Targetwww;
}


// Function BP_Boss_MINI_homing.BP_Boss_MINI_homing_C.HomingDestroyEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_Boss_MINI_homing_C::HomingDestroyEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Boss_MINI_homing_C", "HomingDestroyEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Boss_MINI_homing.BP_Boss_MINI_homing_C.Lock
// (BlueprintCallable, BlueprintEvent)

void ABP_Boss_MINI_homing_C::Lock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Boss_MINI_homing_C", "Lock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Boss_MINI_homing.BP_Boss_MINI_homing_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Boss_MINI_homing_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Boss_MINI_homing_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Boss_MINI_homing.BP_Boss_MINI_homing_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Boss_MINI_homing_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Boss_MINI_homing_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

