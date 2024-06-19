#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Boat_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Boat_BP.Boat_BP_C
// 0x0068 (0x0310 - 0x02A8)
class ABoat_BP_C final : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Pistol10Short_Cue;                                 // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Gunshot_Cast;                                   // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Overlap_Check;                                     // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Mesh_Monkey1;                                   // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Turret_Gun_part;                                // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Turret_Cylinder;                                // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_turret_bottom;                                  // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Mesh_Monkey;                                    // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Move_;                                             // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_357A[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Org_location;                                      // 0x02F8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Boat_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Boat_Reset();
	void ExecuteUbergraph_Boat_BP(int32 EntryPoint);
	void JustSTOP_Event();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Boat_BP_C">();
	}
	static class ABoat_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABoat_BP_C>();
	}
};
static_assert(alignof(ABoat_BP_C) == 0x000008, "Wrong alignment on ABoat_BP_C");
static_assert(sizeof(ABoat_BP_C) == 0x000310, "Wrong size on ABoat_BP_C");
static_assert(offsetof(ABoat_BP_C, UberGraphFrame) == 0x0002A8, "Member 'ABoat_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABoat_BP_C, Pistol10Short_Cue) == 0x0002B0, "Member 'ABoat_BP_C::Pistol10Short_Cue' has a wrong offset!");
static_assert(offsetof(ABoat_BP_C, NS_Gunshot_Cast) == 0x0002B8, "Member 'ABoat_BP_C::NS_Gunshot_Cast' has a wrong offset!");
static_assert(offsetof(ABoat_BP_C, Overlap_Check) == 0x0002C0, "Member 'ABoat_BP_C::Overlap_Check' has a wrong offset!");
static_assert(offsetof(ABoat_BP_C, SK_Mesh_Monkey1) == 0x0002C8, "Member 'ABoat_BP_C::SK_Mesh_Monkey1' has a wrong offset!");
static_assert(offsetof(ABoat_BP_C, SM_Turret_Gun_part) == 0x0002D0, "Member 'ABoat_BP_C::SM_Turret_Gun_part' has a wrong offset!");
static_assert(offsetof(ABoat_BP_C, SM_Turret_Cylinder) == 0x0002D8, "Member 'ABoat_BP_C::SM_Turret_Cylinder' has a wrong offset!");
static_assert(offsetof(ABoat_BP_C, SM_turret_bottom) == 0x0002E0, "Member 'ABoat_BP_C::SM_turret_bottom' has a wrong offset!");
static_assert(offsetof(ABoat_BP_C, SK_Mesh_Monkey) == 0x0002E8, "Member 'ABoat_BP_C::SK_Mesh_Monkey' has a wrong offset!");
static_assert(offsetof(ABoat_BP_C, Move_) == 0x0002F0, "Member 'ABoat_BP_C::Move_' has a wrong offset!");
static_assert(offsetof(ABoat_BP_C, Org_location) == 0x0002F8, "Member 'ABoat_BP_C::Org_location' has a wrong offset!");

}

