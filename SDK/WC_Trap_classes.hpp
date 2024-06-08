#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WC_Trap

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WC_Trap.WC_Trap_C
// 0x00E8 (0x0380 - 0x0298)
class AWC_Trap_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   PS_WC_Sign;                                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PS_Wc_Wall_L;                                      // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PS_WC_Door;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PS_WC_Roof;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PS_WC_Wall_R;                                      // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sign_Icon;                                         // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   WC_Light;                                          // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CharOverlapCheck;                                  // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   WC_DoorFrame;                                      // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   WC_Floor;                                          // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   WC_Wall_B;                                         // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       SM_Root;                                           // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URadialForceComponent*                  RadialForce;                                       // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Water_Explosion;                                // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_GrenadeEXP_Wood;                                // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_GrenadeEXP_Sand;                                // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Effect_Root;                                       // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Light_OFF_Alpha_BA9C257A4619E25D8BE72CB7DEBF64FA;  // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Light_OFF__Direction_BA9C257A4619E25D8BE72CB7DEBF64FA; // 0x0334(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34B2[0x3];                                     // 0x0335(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Light_OFF;                                         // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AALTF4_Loco_BP_C*                       ALTF42_Char;                                       // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          BoomWC_;                                           // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnCall_;                                       // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34B3[0x6];                                     // 0x034A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMeshComponent*>           Physics_SM_Array;                                  // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FVector>                        P_SM_Location_Array;                               // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTransform>                     P_SM_Transform_Array;                              // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__WC_Trap_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Char_Die_Respawn();
	void ExecuteUbergraph_WC_Trap(int32 EntryPoint);
	void F_Physics_Return();
	void Light_OFF__FinishedFunc();
	void Light_OFF__UpdateFunc();
	void ReceiveBeginPlay();
	void TramAreaIN_Event();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WC_Trap_C">();
	}
	static class AWC_Trap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWC_Trap_C>();
	}
};
static_assert(alignof(AWC_Trap_C) == 0x000008, "Wrong alignment on AWC_Trap_C");
static_assert(sizeof(AWC_Trap_C) == 0x000380, "Wrong size on AWC_Trap_C");
static_assert(offsetof(AWC_Trap_C, UberGraphFrame) == 0x000298, "Member 'AWC_Trap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, PS_WC_Sign) == 0x0002A0, "Member 'AWC_Trap_C::PS_WC_Sign' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, PS_Wc_Wall_L) == 0x0002A8, "Member 'AWC_Trap_C::PS_Wc_Wall_L' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, PS_WC_Door) == 0x0002B0, "Member 'AWC_Trap_C::PS_WC_Door' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, PS_WC_Roof) == 0x0002B8, "Member 'AWC_Trap_C::PS_WC_Roof' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, PS_WC_Wall_R) == 0x0002C0, "Member 'AWC_Trap_C::PS_WC_Wall_R' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, Sign_Icon) == 0x0002C8, "Member 'AWC_Trap_C::Sign_Icon' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, WC_Light) == 0x0002D0, "Member 'AWC_Trap_C::WC_Light' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, CharOverlapCheck) == 0x0002D8, "Member 'AWC_Trap_C::CharOverlapCheck' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, WC_DoorFrame) == 0x0002E0, "Member 'AWC_Trap_C::WC_DoorFrame' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, WC_Floor) == 0x0002E8, "Member 'AWC_Trap_C::WC_Floor' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, WC_Wall_B) == 0x0002F0, "Member 'AWC_Trap_C::WC_Wall_B' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, SM_Root) == 0x0002F8, "Member 'AWC_Trap_C::SM_Root' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, RadialForce) == 0x000300, "Member 'AWC_Trap_C::RadialForce' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, NS_Water_Explosion) == 0x000308, "Member 'AWC_Trap_C::NS_Water_Explosion' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, NS_GrenadeEXP_Wood) == 0x000310, "Member 'AWC_Trap_C::NS_GrenadeEXP_Wood' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, NS_GrenadeEXP_Sand) == 0x000318, "Member 'AWC_Trap_C::NS_GrenadeEXP_Sand' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, Effect_Root) == 0x000320, "Member 'AWC_Trap_C::Effect_Root' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, DefaultSceneRoot) == 0x000328, "Member 'AWC_Trap_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, Light_OFF_Alpha_BA9C257A4619E25D8BE72CB7DEBF64FA) == 0x000330, "Member 'AWC_Trap_C::Light_OFF_Alpha_BA9C257A4619E25D8BE72CB7DEBF64FA' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, Light_OFF__Direction_BA9C257A4619E25D8BE72CB7DEBF64FA) == 0x000334, "Member 'AWC_Trap_C::Light_OFF__Direction_BA9C257A4619E25D8BE72CB7DEBF64FA' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, Light_OFF) == 0x000338, "Member 'AWC_Trap_C::Light_OFF' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, ALTF42_Char) == 0x000340, "Member 'AWC_Trap_C::ALTF42_Char' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, BoomWC_) == 0x000348, "Member 'AWC_Trap_C::BoomWC_' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, ReturnCall_) == 0x000349, "Member 'AWC_Trap_C::ReturnCall_' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, Physics_SM_Array) == 0x000350, "Member 'AWC_Trap_C::Physics_SM_Array' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, P_SM_Location_Array) == 0x000360, "Member 'AWC_Trap_C::P_SM_Location_Array' has a wrong offset!");
static_assert(offsetof(AWC_Trap_C, P_SM_Transform_Array) == 0x000370, "Member 'AWC_Trap_C::P_SM_Transform_Array' has a wrong offset!");

}

