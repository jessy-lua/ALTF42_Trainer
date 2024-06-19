#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Spawn_Don_Control_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Spawn_Don_Control_BP.Spawn_Don_Control_BP_C
// 0x0060 (0x02F8 - 0x0298)
class ASpawn_Don_Control_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          SpawnEnd_Trigger;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      ZoneCheck_Trigger;                                 // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          SpawnStart_Trigger;                                // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Check_TL__Direction_9EF0CC3744D3942BF8AC7197C73326AC; // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35F3[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Check_TL;                                          // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Capsule_Height;                                    // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Capsule_Radius;                                    // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                Box_Extent;                                        // 0x02D8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          DonSpawning_;                                      // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Absolute_DonSpawn_StopEvent();
	void BndEvt__Spawn_Don_Control_BP_SpawnEnd_Trigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Spawn_Don_Control_BP_SpawnStart_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CharDie_ResetEvent();
	void Check_TL__CheckEvent__EventFunc();
	void Check_TL__FinishedFunc();
	void Check_TL__UpdateFunc();
	void ExecuteUbergraph_Spawn_Don_Control_BP(int32 EntryPoint);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Spawn_Don_Control_BP_C">();
	}
	static class ASpawn_Don_Control_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASpawn_Don_Control_BP_C>();
	}
};
static_assert(alignof(ASpawn_Don_Control_BP_C) == 0x000008, "Wrong alignment on ASpawn_Don_Control_BP_C");
static_assert(sizeof(ASpawn_Don_Control_BP_C) == 0x0002F8, "Wrong size on ASpawn_Don_Control_BP_C");
static_assert(offsetof(ASpawn_Don_Control_BP_C, UberGraphFrame) == 0x000298, "Member 'ASpawn_Don_Control_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASpawn_Don_Control_BP_C, SpawnEnd_Trigger) == 0x0002A0, "Member 'ASpawn_Don_Control_BP_C::SpawnEnd_Trigger' has a wrong offset!");
static_assert(offsetof(ASpawn_Don_Control_BP_C, ZoneCheck_Trigger) == 0x0002A8, "Member 'ASpawn_Don_Control_BP_C::ZoneCheck_Trigger' has a wrong offset!");
static_assert(offsetof(ASpawn_Don_Control_BP_C, SpawnStart_Trigger) == 0x0002B0, "Member 'ASpawn_Don_Control_BP_C::SpawnStart_Trigger' has a wrong offset!");
static_assert(offsetof(ASpawn_Don_Control_BP_C, DefaultSceneRoot) == 0x0002B8, "Member 'ASpawn_Don_Control_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ASpawn_Don_Control_BP_C, Check_TL__Direction_9EF0CC3744D3942BF8AC7197C73326AC) == 0x0002C0, "Member 'ASpawn_Don_Control_BP_C::Check_TL__Direction_9EF0CC3744D3942BF8AC7197C73326AC' has a wrong offset!");
static_assert(offsetof(ASpawn_Don_Control_BP_C, Check_TL) == 0x0002C8, "Member 'ASpawn_Don_Control_BP_C::Check_TL' has a wrong offset!");
static_assert(offsetof(ASpawn_Don_Control_BP_C, Capsule_Height) == 0x0002D0, "Member 'ASpawn_Don_Control_BP_C::Capsule_Height' has a wrong offset!");
static_assert(offsetof(ASpawn_Don_Control_BP_C, Capsule_Radius) == 0x0002D4, "Member 'ASpawn_Don_Control_BP_C::Capsule_Radius' has a wrong offset!");
static_assert(offsetof(ASpawn_Don_Control_BP_C, Box_Extent) == 0x0002D8, "Member 'ASpawn_Don_Control_BP_C::Box_Extent' has a wrong offset!");
static_assert(offsetof(ASpawn_Don_Control_BP_C, DonSpawning_) == 0x0002F0, "Member 'ASpawn_Don_Control_BP_C::DonSpawning_' has a wrong offset!");

}

