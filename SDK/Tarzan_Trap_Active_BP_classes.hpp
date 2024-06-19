#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tarzan_Trap_Active_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Tarzan_Trap_Active_BP.Tarzan_Trap_Active_BP_C
// 0x0058 (0x02F0 - 0x0298)
class ATarzan_Trap_Active_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Overlap;                                           // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                In_Box_Extent;                                     // 0x02B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARollTower_TrapBP_C*                    RollTower_BP;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ATarzan_NextMoveTarget_BP_C*            NextTarget;                                        // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayerPass__;                                      // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3053[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AALTF4_Loco_BP_C*                       ALTF4_Char;                                        // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Active_;                                           // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Tarzan_Trap_Active_BP_Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_Tarzan_Trap_Active_BP(int32 EntryPoint);
	void Roll_GO__();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Tarzan_Trap_Active_BP_C">();
	}
	static class ATarzan_Trap_Active_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATarzan_Trap_Active_BP_C>();
	}
};
static_assert(alignof(ATarzan_Trap_Active_BP_C) == 0x000008, "Wrong alignment on ATarzan_Trap_Active_BP_C");
static_assert(sizeof(ATarzan_Trap_Active_BP_C) == 0x0002F0, "Wrong size on ATarzan_Trap_Active_BP_C");
static_assert(offsetof(ATarzan_Trap_Active_BP_C, UberGraphFrame) == 0x000298, "Member 'ATarzan_Trap_Active_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATarzan_Trap_Active_BP_C, Overlap) == 0x0002A0, "Member 'ATarzan_Trap_Active_BP_C::Overlap' has a wrong offset!");
static_assert(offsetof(ATarzan_Trap_Active_BP_C, DefaultSceneRoot) == 0x0002A8, "Member 'ATarzan_Trap_Active_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ATarzan_Trap_Active_BP_C, In_Box_Extent) == 0x0002B0, "Member 'ATarzan_Trap_Active_BP_C::In_Box_Extent' has a wrong offset!");
static_assert(offsetof(ATarzan_Trap_Active_BP_C, RollTower_BP) == 0x0002C8, "Member 'ATarzan_Trap_Active_BP_C::RollTower_BP' has a wrong offset!");
static_assert(offsetof(ATarzan_Trap_Active_BP_C, NextTarget) == 0x0002D0, "Member 'ATarzan_Trap_Active_BP_C::NextTarget' has a wrong offset!");
static_assert(offsetof(ATarzan_Trap_Active_BP_C, PlayerPass__) == 0x0002D8, "Member 'ATarzan_Trap_Active_BP_C::PlayerPass__' has a wrong offset!");
static_assert(offsetof(ATarzan_Trap_Active_BP_C, ALTF4_Char) == 0x0002E0, "Member 'ATarzan_Trap_Active_BP_C::ALTF4_Char' has a wrong offset!");
static_assert(offsetof(ATarzan_Trap_Active_BP_C, Active_) == 0x0002E8, "Member 'ATarzan_Trap_Active_BP_C::Active_' has a wrong offset!");

}

