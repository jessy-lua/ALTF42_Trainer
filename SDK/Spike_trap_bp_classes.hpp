#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Spike_trap_bp

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass spike_trap_bp.spike_trap_bp_C
// 0x0068 (0x0300 - 0x0298)
class ASpike_trap_bp_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Rumble_2_Loop_1_Cue;                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          HitOverlap_Trigger;                                // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Goal;                                              // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Activate_Overlap_Trigger;                          // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Spike_traps;                                       // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         __________0_880A4A0440A39B91612AF1B2C8EE5439;      // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ______Direction_880A4A0440A39B91612AF1B2C8EE5439;  // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3675[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ___x;                                              // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x02E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         New_Rate;                                          // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Activate_;                                         // 0x02FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__spike_trap_bp_Box1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__spike_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_spike_trap_bp(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ST_Reset();
	void Trap_Active();
	void UserConstructionScript();
	void ___x__FinishedFunc();
	void ___x__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"spike_trap_bp_C">();
	}
	static class ASpike_trap_bp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASpike_trap_bp_C>();
	}
};
static_assert(alignof(ASpike_trap_bp_C) == 0x000008, "Wrong alignment on ASpike_trap_bp_C");
static_assert(sizeof(ASpike_trap_bp_C) == 0x000300, "Wrong size on ASpike_trap_bp_C");
static_assert(offsetof(ASpike_trap_bp_C, UberGraphFrame) == 0x000298, "Member 'ASpike_trap_bp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASpike_trap_bp_C, Rumble_2_Loop_1_Cue) == 0x0002A0, "Member 'ASpike_trap_bp_C::Rumble_2_Loop_1_Cue' has a wrong offset!");
static_assert(offsetof(ASpike_trap_bp_C, HitOverlap_Trigger) == 0x0002A8, "Member 'ASpike_trap_bp_C::HitOverlap_Trigger' has a wrong offset!");
static_assert(offsetof(ASpike_trap_bp_C, Goal) == 0x0002B0, "Member 'ASpike_trap_bp_C::Goal' has a wrong offset!");
static_assert(offsetof(ASpike_trap_bp_C, Activate_Overlap_Trigger) == 0x0002B8, "Member 'ASpike_trap_bp_C::Activate_Overlap_Trigger' has a wrong offset!");
static_assert(offsetof(ASpike_trap_bp_C, Spike_traps) == 0x0002C0, "Member 'ASpike_trap_bp_C::Spike_traps' has a wrong offset!");
static_assert(offsetof(ASpike_trap_bp_C, DefaultSceneRoot) == 0x0002C8, "Member 'ASpike_trap_bp_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ASpike_trap_bp_C, __________0_880A4A0440A39B91612AF1B2C8EE5439) == 0x0002D0, "Member 'ASpike_trap_bp_C::__________0_880A4A0440A39B91612AF1B2C8EE5439' has a wrong offset!");
static_assert(offsetof(ASpike_trap_bp_C, ______Direction_880A4A0440A39B91612AF1B2C8EE5439) == 0x0002D4, "Member 'ASpike_trap_bp_C::______Direction_880A4A0440A39B91612AF1B2C8EE5439' has a wrong offset!");
static_assert(offsetof(ASpike_trap_bp_C, ___x) == 0x0002D8, "Member 'ASpike_trap_bp_C::___x' has a wrong offset!");
static_assert(offsetof(ASpike_trap_bp_C, Location) == 0x0002E0, "Member 'ASpike_trap_bp_C::Location' has a wrong offset!");
static_assert(offsetof(ASpike_trap_bp_C, New_Rate) == 0x0002F8, "Member 'ASpike_trap_bp_C::New_Rate' has a wrong offset!");
static_assert(offsetof(ASpike_trap_bp_C, Activate_) == 0x0002FC, "Member 'ASpike_trap_bp_C::Activate_' has a wrong offset!");

}

