#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Asshole_bp_custom

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass asshole_bp_custom.asshole_bp_custom_C
// 0x0078 (0x0310 - 0x0298)
class AAsshole_bp_custom_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Overlap_Check_Collision;                           // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Buble_1_Trail;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Blink_Psionic;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Hit_Check_Collision;                               // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_ShopOwner_Horn;                                 // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_WingsSmall;                                     // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   HIP_SM;                                            // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         __________0_FD68551D4E0F980982217699704A1E5F;      // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ______Direction_FD68551D4E0F980982217699704A1E5F;  // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30E8[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ___x;                                              // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_NewTrack_0_57C0590346EF04343EFEFFA08D374BA0; // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_57C0590346EF04343EFEFFA08D374BA0; // 0x02FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30E9[0x3];                                     // 0x02FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Looping;                                           // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ___x__UpdateFunc();
	void ___x__FinishedFunc();
	void Timeline__UpdateFunc();
	void Timeline__FinishedFunc();
	void Spawn_Coin();
	void ExecuteUbergraph_asshole_bp_custom(int32 EntryPoint);
	void BndEvt__asshole_bp_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__asshole_bp_Overlap_Check_Collision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"asshole_bp_custom_C">();
	}
	static class AAsshole_bp_custom_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAsshole_bp_custom_C>();
	}
};
static_assert(alignof(AAsshole_bp_custom_C) == 0x000008, "Wrong alignment on AAsshole_bp_custom_C");
static_assert(sizeof(AAsshole_bp_custom_C) == 0x000310, "Wrong size on AAsshole_bp_custom_C");
static_assert(offsetof(AAsshole_bp_custom_C, UberGraphFrame) == 0x000298, "Member 'AAsshole_bp_custom_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAsshole_bp_custom_C, RotatingMovement) == 0x0002A0, "Member 'AAsshole_bp_custom_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(AAsshole_bp_custom_C, Overlap_Check_Collision) == 0x0002A8, "Member 'AAsshole_bp_custom_C::Overlap_Check_Collision' has a wrong offset!");
static_assert(offsetof(AAsshole_bp_custom_C, NS_Buble_1_Trail) == 0x0002B0, "Member 'AAsshole_bp_custom_C::NS_Buble_1_Trail' has a wrong offset!");
static_assert(offsetof(AAsshole_bp_custom_C, NS_Blink_Psionic) == 0x0002B8, "Member 'AAsshole_bp_custom_C::NS_Blink_Psionic' has a wrong offset!");
static_assert(offsetof(AAsshole_bp_custom_C, Hit_Check_Collision) == 0x0002C0, "Member 'AAsshole_bp_custom_C::Hit_Check_Collision' has a wrong offset!");
static_assert(offsetof(AAsshole_bp_custom_C, SM_ShopOwner_Horn) == 0x0002C8, "Member 'AAsshole_bp_custom_C::SM_ShopOwner_Horn' has a wrong offset!");
static_assert(offsetof(AAsshole_bp_custom_C, SK_WingsSmall) == 0x0002D0, "Member 'AAsshole_bp_custom_C::SK_WingsSmall' has a wrong offset!");
static_assert(offsetof(AAsshole_bp_custom_C, HIP_SM) == 0x0002D8, "Member 'AAsshole_bp_custom_C::HIP_SM' has a wrong offset!");
static_assert(offsetof(AAsshole_bp_custom_C, DefaultSceneRoot) == 0x0002E0, "Member 'AAsshole_bp_custom_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AAsshole_bp_custom_C, __________0_FD68551D4E0F980982217699704A1E5F) == 0x0002E8, "Member 'AAsshole_bp_custom_C::__________0_FD68551D4E0F980982217699704A1E5F' has a wrong offset!");
static_assert(offsetof(AAsshole_bp_custom_C, ______Direction_FD68551D4E0F980982217699704A1E5F) == 0x0002EC, "Member 'AAsshole_bp_custom_C::______Direction_FD68551D4E0F980982217699704A1E5F' has a wrong offset!");
static_assert(offsetof(AAsshole_bp_custom_C, ___x) == 0x0002F0, "Member 'AAsshole_bp_custom_C::___x' has a wrong offset!");
static_assert(offsetof(AAsshole_bp_custom_C, Timeline_NewTrack_0_57C0590346EF04343EFEFFA08D374BA0) == 0x0002F8, "Member 'AAsshole_bp_custom_C::Timeline_NewTrack_0_57C0590346EF04343EFEFFA08D374BA0' has a wrong offset!");
static_assert(offsetof(AAsshole_bp_custom_C, Timeline__Direction_57C0590346EF04343EFEFFA08D374BA0) == 0x0002FC, "Member 'AAsshole_bp_custom_C::Timeline__Direction_57C0590346EF04343EFEFFA08D374BA0' has a wrong offset!");
static_assert(offsetof(AAsshole_bp_custom_C, Timeline) == 0x000300, "Member 'AAsshole_bp_custom_C::Timeline' has a wrong offset!");
static_assert(offsetof(AAsshole_bp_custom_C, Looping) == 0x000308, "Member 'AAsshole_bp_custom_C::Looping' has a wrong offset!");

}

