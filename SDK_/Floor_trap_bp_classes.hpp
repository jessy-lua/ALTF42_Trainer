#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Floor_trap_bp

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass floor_trap_bp.floor_trap_bp_C
// 0x0070 (0x0308 - 0x0298)
class AFloor_trap_bp_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Large_Debris_4_1_Cue;                              // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          OverlapCheck;                                      // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Ceiling;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         MassScale_TL_Alpha_19E780ED45E78B0BFD49EB84AEA3D6A9; // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            MassScale_TL__Direction_19E780ED45E78B0BFD49EB84AEA3D6A9; // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3582[0x3];                                     // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     MassScale_TL;                                      // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Set_Simulate_;                                     // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3583[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     New_Decal_Material;                                // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          DropActivate;                                      // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SimulActivate;                                     // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug_;                                            // 0x02E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3584[0x5];                                     // 0x02E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                FirstLocation;                                     // 0x02E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OneOfUse_;                                         // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__floor_trap_bp_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void DropFloor_Activating();
	void DropFloor_Reset();
	void ExecuteUbergraph_floor_trap_bp(int32 EntryPoint);
	void MassScale_TL__FinishedFunc();
	void MassScale_TL__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"floor_trap_bp_C">();
	}
	static class AFloor_trap_bp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFloor_trap_bp_C>();
	}
};
static_assert(alignof(AFloor_trap_bp_C) == 0x000008, "Wrong alignment on AFloor_trap_bp_C");
static_assert(sizeof(AFloor_trap_bp_C) == 0x000308, "Wrong size on AFloor_trap_bp_C");
static_assert(offsetof(AFloor_trap_bp_C, UberGraphFrame) == 0x000298, "Member 'AFloor_trap_bp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFloor_trap_bp_C, Large_Debris_4_1_Cue) == 0x0002A0, "Member 'AFloor_trap_bp_C::Large_Debris_4_1_Cue' has a wrong offset!");
static_assert(offsetof(AFloor_trap_bp_C, OverlapCheck) == 0x0002A8, "Member 'AFloor_trap_bp_C::OverlapCheck' has a wrong offset!");
static_assert(offsetof(AFloor_trap_bp_C, SM_Ceiling) == 0x0002B0, "Member 'AFloor_trap_bp_C::SM_Ceiling' has a wrong offset!");
static_assert(offsetof(AFloor_trap_bp_C, DefaultSceneRoot) == 0x0002B8, "Member 'AFloor_trap_bp_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AFloor_trap_bp_C, MassScale_TL_Alpha_19E780ED45E78B0BFD49EB84AEA3D6A9) == 0x0002C0, "Member 'AFloor_trap_bp_C::MassScale_TL_Alpha_19E780ED45E78B0BFD49EB84AEA3D6A9' has a wrong offset!");
static_assert(offsetof(AFloor_trap_bp_C, MassScale_TL__Direction_19E780ED45E78B0BFD49EB84AEA3D6A9) == 0x0002C4, "Member 'AFloor_trap_bp_C::MassScale_TL__Direction_19E780ED45E78B0BFD49EB84AEA3D6A9' has a wrong offset!");
static_assert(offsetof(AFloor_trap_bp_C, MassScale_TL) == 0x0002C8, "Member 'AFloor_trap_bp_C::MassScale_TL' has a wrong offset!");
static_assert(offsetof(AFloor_trap_bp_C, Set_Simulate_) == 0x0002D0, "Member 'AFloor_trap_bp_C::Set_Simulate_' has a wrong offset!");
static_assert(offsetof(AFloor_trap_bp_C, New_Decal_Material) == 0x0002D8, "Member 'AFloor_trap_bp_C::New_Decal_Material' has a wrong offset!");
static_assert(offsetof(AFloor_trap_bp_C, DropActivate) == 0x0002E0, "Member 'AFloor_trap_bp_C::DropActivate' has a wrong offset!");
static_assert(offsetof(AFloor_trap_bp_C, SimulActivate) == 0x0002E1, "Member 'AFloor_trap_bp_C::SimulActivate' has a wrong offset!");
static_assert(offsetof(AFloor_trap_bp_C, Debug_) == 0x0002E2, "Member 'AFloor_trap_bp_C::Debug_' has a wrong offset!");
static_assert(offsetof(AFloor_trap_bp_C, FirstLocation) == 0x0002E8, "Member 'AFloor_trap_bp_C::FirstLocation' has a wrong offset!");
static_assert(offsetof(AFloor_trap_bp_C, OneOfUse_) == 0x000300, "Member 'AFloor_trap_bp_C::OneOfUse_' has a wrong offset!");

}

