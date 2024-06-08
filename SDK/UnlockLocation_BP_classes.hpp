#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UnlockLocation_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ALTF42_MoveArea_OnlyCannonData_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass UnlockLocation_BP.UnlockLocation_BP_C
// 0x0090 (0x0328 - 0x0298)
class AUnlockLocation_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Char_LandRoot;                                     // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                       Move_Scene_Camera;                                 // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       LandRoot;                                          // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Lock_Mesh;                                         // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Target_Ballon;                                     // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Drop_TL_RotationValue_064A43E94C7E4EA294193797B86FAD62; // 0x02D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Drop_TL_DropAlpha_064A43E94C7E4EA294193797B86FAD62; // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Drop_TL__Direction_064A43E94C7E4EA294193797B86FAD62; // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3853[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Drop_TL;                                           // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FirstL;                                            // 0x0300(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UALTF42_GameInstance_C*                 ALTF42_GI;                                         // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	EALTF42_MoveArea_OnlyCannonData               UnlockArea;                                        // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AllReady_Unlock;                                   // 0x0321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Ballon_Bomb_Event();
	void BndEvt__UnlockLocation_BP_Target_Ballon_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Char_CannonFire_Event();
	void Drop_TL__FinishedFunc();
	void Drop_TL__UpdateFunc();
	void ExecuteUbergraph_UnlockLocation_BP(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Test_Loction_Swap();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UnlockLocation_BP_C">();
	}
	static class AUnlockLocation_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AUnlockLocation_BP_C>();
	}
};
static_assert(alignof(AUnlockLocation_BP_C) == 0x000008, "Wrong alignment on AUnlockLocation_BP_C");
static_assert(sizeof(AUnlockLocation_BP_C) == 0x000328, "Wrong size on AUnlockLocation_BP_C");
static_assert(offsetof(AUnlockLocation_BP_C, UberGraphFrame) == 0x000298, "Member 'AUnlockLocation_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AUnlockLocation_BP_C, Char_LandRoot) == 0x0002A0, "Member 'AUnlockLocation_BP_C::Char_LandRoot' has a wrong offset!");
static_assert(offsetof(AUnlockLocation_BP_C, Move_Scene_Camera) == 0x0002A8, "Member 'AUnlockLocation_BP_C::Move_Scene_Camera' has a wrong offset!");
static_assert(offsetof(AUnlockLocation_BP_C, LandRoot) == 0x0002B0, "Member 'AUnlockLocation_BP_C::LandRoot' has a wrong offset!");
static_assert(offsetof(AUnlockLocation_BP_C, Lock_Mesh) == 0x0002B8, "Member 'AUnlockLocation_BP_C::Lock_Mesh' has a wrong offset!");
static_assert(offsetof(AUnlockLocation_BP_C, RotatingMovement) == 0x0002C0, "Member 'AUnlockLocation_BP_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(AUnlockLocation_BP_C, Target_Ballon) == 0x0002C8, "Member 'AUnlockLocation_BP_C::Target_Ballon' has a wrong offset!");
static_assert(offsetof(AUnlockLocation_BP_C, DefaultSceneRoot) == 0x0002D0, "Member 'AUnlockLocation_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AUnlockLocation_BP_C, Drop_TL_RotationValue_064A43E94C7E4EA294193797B86FAD62) == 0x0002D8, "Member 'AUnlockLocation_BP_C::Drop_TL_RotationValue_064A43E94C7E4EA294193797B86FAD62' has a wrong offset!");
static_assert(offsetof(AUnlockLocation_BP_C, Drop_TL_DropAlpha_064A43E94C7E4EA294193797B86FAD62) == 0x0002F0, "Member 'AUnlockLocation_BP_C::Drop_TL_DropAlpha_064A43E94C7E4EA294193797B86FAD62' has a wrong offset!");
static_assert(offsetof(AUnlockLocation_BP_C, Drop_TL__Direction_064A43E94C7E4EA294193797B86FAD62) == 0x0002F4, "Member 'AUnlockLocation_BP_C::Drop_TL__Direction_064A43E94C7E4EA294193797B86FAD62' has a wrong offset!");
static_assert(offsetof(AUnlockLocation_BP_C, Drop_TL) == 0x0002F8, "Member 'AUnlockLocation_BP_C::Drop_TL' has a wrong offset!");
static_assert(offsetof(AUnlockLocation_BP_C, FirstL) == 0x000300, "Member 'AUnlockLocation_BP_C::FirstL' has a wrong offset!");
static_assert(offsetof(AUnlockLocation_BP_C, ALTF42_GI) == 0x000318, "Member 'AUnlockLocation_BP_C::ALTF42_GI' has a wrong offset!");
static_assert(offsetof(AUnlockLocation_BP_C, UnlockArea) == 0x000320, "Member 'AUnlockLocation_BP_C::UnlockArea' has a wrong offset!");
static_assert(offsetof(AUnlockLocation_BP_C, AllReady_Unlock) == 0x000321, "Member 'AUnlockLocation_BP_C::AllReady_Unlock' has a wrong offset!");

}

