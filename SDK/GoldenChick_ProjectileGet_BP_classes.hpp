#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GoldenChick_ProjectileGet_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GoldenChick_ProjectileGet_BP.GoldenChick_ProjectileGet_BP_C
// 0x0020 (0x02B8 - 0x0298)
class AGoldenChick_ProjectileGet_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_GoldenChick_Drop;                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   GroundHit_Check;                                   // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__GoldenChick_ProjectileGet_BP_GroundHit_Check_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__GoldenChick_ProjectileGet_BP_GroundHit_Check_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Destroy_G_Chick();
	void ExecuteUbergraph_GoldenChick_ProjectileGet_BP(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Test_Start();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GoldenChick_ProjectileGet_BP_C">();
	}
	static class AGoldenChick_ProjectileGet_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGoldenChick_ProjectileGet_BP_C>();
	}
};
static_assert(alignof(AGoldenChick_ProjectileGet_BP_C) == 0x000008, "Wrong alignment on AGoldenChick_ProjectileGet_BP_C");
static_assert(sizeof(AGoldenChick_ProjectileGet_BP_C) == 0x0002B8, "Wrong size on AGoldenChick_ProjectileGet_BP_C");
static_assert(offsetof(AGoldenChick_ProjectileGet_BP_C, UberGraphFrame) == 0x000298, "Member 'AGoldenChick_ProjectileGet_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGoldenChick_ProjectileGet_BP_C, NS_GoldenChick_Drop) == 0x0002A0, "Member 'AGoldenChick_ProjectileGet_BP_C::NS_GoldenChick_Drop' has a wrong offset!");
static_assert(offsetof(AGoldenChick_ProjectileGet_BP_C, GroundHit_Check) == 0x0002A8, "Member 'AGoldenChick_ProjectileGet_BP_C::GroundHit_Check' has a wrong offset!");
static_assert(offsetof(AGoldenChick_ProjectileGet_BP_C, DefaultSceneRoot) == 0x0002B0, "Member 'AGoldenChick_ProjectileGet_BP_C::DefaultSceneRoot' has a wrong offset!");

}

