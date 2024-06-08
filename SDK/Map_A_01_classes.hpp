#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Map_A_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass map_A_01.map_A_01_C
// 0x0030 (0x02D0 - 0x02A0)
class AMap_A_01_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         __________0_3F3F43CC4C3487479109AF9A8E2F02F7;      // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ______Direction_3F3F43CC4C3487479109AF9A8E2F02F7;  // 0x02AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_422C[0x3];                                     // 0x02AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ___x;                                              // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UALTF42_GameInstance_C*                 ALTF42_GI;                                         // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ARocketGet_SpotLight_C*                 RocketGet_SpotLight_C_0_ExecuteUbergraph_map_A_01_RefProperty; // 0x02C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AAmbientSound*                          AmbientSound_1_ExecuteUbergraph_map_A_01_RefProperty; // 0x02C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__map_03_TriggerVolume_5_K2Node_ActorBoundEvent_10_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__map_A_01_TriggerBox_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__map_A_01_TriggerSphere_1_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__map_A_01_TriggerSphere_1_K2Node_ActorBoundEvent_2_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void ExecuteUbergraph_map_A_01(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ___x__FinishedFunc();
	void ___x__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"map_A_01_C">();
	}
	static class AMap_A_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMap_A_01_C>();
	}
};
static_assert(alignof(AMap_A_01_C) == 0x000008, "Wrong alignment on AMap_A_01_C");
static_assert(sizeof(AMap_A_01_C) == 0x0002D0, "Wrong size on AMap_A_01_C");
static_assert(offsetof(AMap_A_01_C, UberGraphFrame) == 0x0002A0, "Member 'AMap_A_01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMap_A_01_C, __________0_3F3F43CC4C3487479109AF9A8E2F02F7) == 0x0002A8, "Member 'AMap_A_01_C::__________0_3F3F43CC4C3487479109AF9A8E2F02F7' has a wrong offset!");
static_assert(offsetof(AMap_A_01_C, ______Direction_3F3F43CC4C3487479109AF9A8E2F02F7) == 0x0002AC, "Member 'AMap_A_01_C::______Direction_3F3F43CC4C3487479109AF9A8E2F02F7' has a wrong offset!");
static_assert(offsetof(AMap_A_01_C, ___x) == 0x0002B0, "Member 'AMap_A_01_C::___x' has a wrong offset!");
static_assert(offsetof(AMap_A_01_C, ALTF42_GI) == 0x0002B8, "Member 'AMap_A_01_C::ALTF42_GI' has a wrong offset!");
static_assert(offsetof(AMap_A_01_C, RocketGet_SpotLight_C_0_ExecuteUbergraph_map_A_01_RefProperty) == 0x0002C0, "Member 'AMap_A_01_C::RocketGet_SpotLight_C_0_ExecuteUbergraph_map_A_01_RefProperty' has a wrong offset!");
static_assert(offsetof(AMap_A_01_C, AmbientSound_1_ExecuteUbergraph_map_A_01_RefProperty) == 0x0002C8, "Member 'AMap_A_01_C::AmbientSound_1_ExecuteUbergraph_map_A_01_RefProperty' has a wrong offset!");

}
