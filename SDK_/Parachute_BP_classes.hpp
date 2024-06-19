#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Parachute_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Parachute_BP.Parachute_BP_C
// 0x0068 (0x0300 - 0x0298)
class AParachute_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 Parachute_SK;                                      // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Down_TL_Alpha_7E5A44E444898A2CF12115887E9A2CED;    // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Down_TL__Direction_7E5A44E444898A2CF12115887E9A2CED; // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3492[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Down_TL;                                           // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Parachute_Open_;                                   // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3493[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          Anim_Land;                                         // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FirstLocation;                                     // 0x02D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EndLocation;                                       // 0x02E8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Down_TL__FinishedFunc();
	void Down_TL__UpdateFunc();
	void ExecuteUbergraph_Parachute_BP(int32 EntryPoint);
	void Landing_Parachute_Event();
	void OnBlendOut_A37B6E9F4494BFD2391B019012125CF3(class FName NotifyName);
	void OnCompleted_A37B6E9F4494BFD2391B019012125CF3(class FName NotifyName);
	void OnInterrupted_A37B6E9F4494BFD2391B019012125CF3(class FName NotifyName);
	void OnNotifyBegin_A37B6E9F4494BFD2391B019012125CF3(class FName NotifyName);
	void OnNotifyEnd_A37B6E9F4494BFD2391B019012125CF3(class FName NotifyName);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Parachute_BP_C">();
	}
	static class AParachute_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AParachute_BP_C>();
	}
};
static_assert(alignof(AParachute_BP_C) == 0x000008, "Wrong alignment on AParachute_BP_C");
static_assert(sizeof(AParachute_BP_C) == 0x000300, "Wrong size on AParachute_BP_C");
static_assert(offsetof(AParachute_BP_C, UberGraphFrame) == 0x000298, "Member 'AParachute_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AParachute_BP_C, Parachute_SK) == 0x0002A0, "Member 'AParachute_BP_C::Parachute_SK' has a wrong offset!");
static_assert(offsetof(AParachute_BP_C, DefaultSceneRoot) == 0x0002A8, "Member 'AParachute_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AParachute_BP_C, Down_TL_Alpha_7E5A44E444898A2CF12115887E9A2CED) == 0x0002B0, "Member 'AParachute_BP_C::Down_TL_Alpha_7E5A44E444898A2CF12115887E9A2CED' has a wrong offset!");
static_assert(offsetof(AParachute_BP_C, Down_TL__Direction_7E5A44E444898A2CF12115887E9A2CED) == 0x0002B4, "Member 'AParachute_BP_C::Down_TL__Direction_7E5A44E444898A2CF12115887E9A2CED' has a wrong offset!");
static_assert(offsetof(AParachute_BP_C, Down_TL) == 0x0002B8, "Member 'AParachute_BP_C::Down_TL' has a wrong offset!");
static_assert(offsetof(AParachute_BP_C, Parachute_Open_) == 0x0002C0, "Member 'AParachute_BP_C::Parachute_Open_' has a wrong offset!");
static_assert(offsetof(AParachute_BP_C, Anim_Land) == 0x0002C8, "Member 'AParachute_BP_C::Anim_Land' has a wrong offset!");
static_assert(offsetof(AParachute_BP_C, FirstLocation) == 0x0002D0, "Member 'AParachute_BP_C::FirstLocation' has a wrong offset!");
static_assert(offsetof(AParachute_BP_C, EndLocation) == 0x0002E8, "Member 'AParachute_BP_C::EndLocation' has a wrong offset!");

}
