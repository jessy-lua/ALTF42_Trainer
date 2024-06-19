#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Statue_LaunchFist_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Statue_LaunchFist_BP.Statue_LaunchFist_BP_C
// 0x0038 (0x02D0 - 0x0298)
class AStatue_LaunchFist_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_Iron_Trap;                                      // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Fist;                                              // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Root;                                              // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Fist_GO_TL_Alpha_4D6605F0440126BB4D35D299FB018489; // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Fist_GO_TL__Direction_4D6605F0440126BB4D35D299FB018489; // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1247[0x3];                                     // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Fist_GO_TL;                                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Statue_LaunchFist_BP_Fist_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_Statue_LaunchFist_BP(int32 EntryPoint);
	void Fist_Destroy();
	void Fist_GO_TL__FinishedFunc();
	void Fist_GO_TL__UpdateFunc();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Statue_LaunchFist_BP_C">();
	}
	static class AStatue_LaunchFist_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStatue_LaunchFist_BP_C>();
	}
};
static_assert(alignof(AStatue_LaunchFist_BP_C) == 0x000008, "Wrong alignment on AStatue_LaunchFist_BP_C");
static_assert(sizeof(AStatue_LaunchFist_BP_C) == 0x0002D0, "Wrong size on AStatue_LaunchFist_BP_C");
static_assert(offsetof(AStatue_LaunchFist_BP_C, UberGraphFrame) == 0x000298, "Member 'AStatue_LaunchFist_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AStatue_LaunchFist_BP_C, SM_Iron_Trap) == 0x0002A0, "Member 'AStatue_LaunchFist_BP_C::SM_Iron_Trap' has a wrong offset!");
static_assert(offsetof(AStatue_LaunchFist_BP_C, Fist) == 0x0002A8, "Member 'AStatue_LaunchFist_BP_C::Fist' has a wrong offset!");
static_assert(offsetof(AStatue_LaunchFist_BP_C, Root) == 0x0002B0, "Member 'AStatue_LaunchFist_BP_C::Root' has a wrong offset!");
static_assert(offsetof(AStatue_LaunchFist_BP_C, DefaultSceneRoot) == 0x0002B8, "Member 'AStatue_LaunchFist_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AStatue_LaunchFist_BP_C, Fist_GO_TL_Alpha_4D6605F0440126BB4D35D299FB018489) == 0x0002C0, "Member 'AStatue_LaunchFist_BP_C::Fist_GO_TL_Alpha_4D6605F0440126BB4D35D299FB018489' has a wrong offset!");
static_assert(offsetof(AStatue_LaunchFist_BP_C, Fist_GO_TL__Direction_4D6605F0440126BB4D35D299FB018489) == 0x0002C4, "Member 'AStatue_LaunchFist_BP_C::Fist_GO_TL__Direction_4D6605F0440126BB4D35D299FB018489' has a wrong offset!");
static_assert(offsetof(AStatue_LaunchFist_BP_C, Fist_GO_TL) == 0x0002C8, "Member 'AStatue_LaunchFist_BP_C::Fist_GO_TL' has a wrong offset!");

}
