#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Boss_RampageBroken_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Boss_RampageBroken_BP.Boss_RampageBroken_BP_C
// 0x0040 (0x02D8 - 0x0298)
class ABoss_RampageBroken_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_StatueBroken_Smoke;                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_PrayingDemon;                                   // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Spawn_Transform_Scale;                             // 0x02B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Broken_;                                           // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BrokenStatue__();
	void ExecuteUbergraph_Boss_RampageBroken_BP(int32 EntryPoint);
	void Return_CharDie();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Boss_RampageBroken_BP_C">();
	}
	static class ABoss_RampageBroken_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABoss_RampageBroken_BP_C>();
	}
};
static_assert(alignof(ABoss_RampageBroken_BP_C) == 0x000008, "Wrong alignment on ABoss_RampageBroken_BP_C");
static_assert(sizeof(ABoss_RampageBroken_BP_C) == 0x0002D8, "Wrong size on ABoss_RampageBroken_BP_C");
static_assert(offsetof(ABoss_RampageBroken_BP_C, UberGraphFrame) == 0x000298, "Member 'ABoss_RampageBroken_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABoss_RampageBroken_BP_C, NS_StatueBroken_Smoke) == 0x0002A0, "Member 'ABoss_RampageBroken_BP_C::NS_StatueBroken_Smoke' has a wrong offset!");
static_assert(offsetof(ABoss_RampageBroken_BP_C, SM_PrayingDemon) == 0x0002A8, "Member 'ABoss_RampageBroken_BP_C::SM_PrayingDemon' has a wrong offset!");
static_assert(offsetof(ABoss_RampageBroken_BP_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABoss_RampageBroken_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABoss_RampageBroken_BP_C, Spawn_Transform_Scale) == 0x0002B8, "Member 'ABoss_RampageBroken_BP_C::Spawn_Transform_Scale' has a wrong offset!");
static_assert(offsetof(ABoss_RampageBroken_BP_C, Broken_) == 0x0002D0, "Member 'ABoss_RampageBroken_BP_C::Broken_' has a wrong offset!");

}
