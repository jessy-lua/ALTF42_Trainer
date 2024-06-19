#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Elevator_UnderCheck_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Elevator_UnderCheck_BP.Elevator_UnderCheck_BP_C
// 0x0028 (0x02C0 - 0x0298)
class AElevator_UnderCheck_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Overlap;                                           // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Check_TL__Direction_13C8425446C351226677BA9816EF61FD; // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4194[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Check_TL;                                          // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void Check_TL__Check__EventFunc();
	void Check_TL__FinishedFunc();
	void Check_TL__UpdateFunc();
	void ExecuteUbergraph_Elevator_UnderCheck_BP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Elevator_UnderCheck_BP_C">();
	}
	static class AElevator_UnderCheck_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AElevator_UnderCheck_BP_C>();
	}
};
static_assert(alignof(AElevator_UnderCheck_BP_C) == 0x000008, "Wrong alignment on AElevator_UnderCheck_BP_C");
static_assert(sizeof(AElevator_UnderCheck_BP_C) == 0x0002C0, "Wrong size on AElevator_UnderCheck_BP_C");
static_assert(offsetof(AElevator_UnderCheck_BP_C, UberGraphFrame) == 0x000298, "Member 'AElevator_UnderCheck_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AElevator_UnderCheck_BP_C, Overlap) == 0x0002A0, "Member 'AElevator_UnderCheck_BP_C::Overlap' has a wrong offset!");
static_assert(offsetof(AElevator_UnderCheck_BP_C, DefaultSceneRoot) == 0x0002A8, "Member 'AElevator_UnderCheck_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AElevator_UnderCheck_BP_C, Check_TL__Direction_13C8425446C351226677BA9816EF61FD) == 0x0002B0, "Member 'AElevator_UnderCheck_BP_C::Check_TL__Direction_13C8425446C351226677BA9816EF61FD' has a wrong offset!");
static_assert(offsetof(AElevator_UnderCheck_BP_C, Check_TL) == 0x0002B8, "Member 'AElevator_UnderCheck_BP_C::Check_TL' has a wrong offset!");

}
