#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Chick_Spawn_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ALTF42_GetChickList_OnlyListData_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Chick_Spawn_BP.Chick_Spawn_BP_C
// 0x0038 (0x02D0 - 0x0298)
class AChick_Spawn_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SpawnLocation;                                     // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	EALTF42_GetChickList_OnlyListData             GetChick_List;                                     // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36FF[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UALTF42_GameInstance_C*                 ALTF42_GI;                                         // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         Get_Chick_Number;                                  // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Get_Chick;                                         // 0x02CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Chick_DieAndRespawn_Event();
	void ExecuteUbergraph_Chick_Spawn_BP(int32 EntryPoint);
	void GetChick(bool Param_Get_Chick);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Chick_Spawn_BP_C">();
	}
	static class AChick_Spawn_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AChick_Spawn_BP_C>();
	}
};
static_assert(alignof(AChick_Spawn_BP_C) == 0x000008, "Wrong alignment on AChick_Spawn_BP_C");
static_assert(sizeof(AChick_Spawn_BP_C) == 0x0002D0, "Wrong size on AChick_Spawn_BP_C");
static_assert(offsetof(AChick_Spawn_BP_C, UberGraphFrame) == 0x000298, "Member 'AChick_Spawn_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AChick_Spawn_BP_C, Arrow) == 0x0002A0, "Member 'AChick_Spawn_BP_C::Arrow' has a wrong offset!");
static_assert(offsetof(AChick_Spawn_BP_C, SpawnLocation) == 0x0002A8, "Member 'AChick_Spawn_BP_C::SpawnLocation' has a wrong offset!");
static_assert(offsetof(AChick_Spawn_BP_C, DefaultSceneRoot) == 0x0002B0, "Member 'AChick_Spawn_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AChick_Spawn_BP_C, GetChick_List) == 0x0002B8, "Member 'AChick_Spawn_BP_C::GetChick_List' has a wrong offset!");
static_assert(offsetof(AChick_Spawn_BP_C, ALTF42_GI) == 0x0002C0, "Member 'AChick_Spawn_BP_C::ALTF42_GI' has a wrong offset!");
static_assert(offsetof(AChick_Spawn_BP_C, Get_Chick_Number) == 0x0002C8, "Member 'AChick_Spawn_BP_C::Get_Chick_Number' has a wrong offset!");
static_assert(offsetof(AChick_Spawn_BP_C, Get_Chick) == 0x0002CC, "Member 'AChick_Spawn_BP_C::Get_Chick' has a wrong offset!");

}

