#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RespawnTutorial_BrokenWall_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RespawnTutorial_BrokenWall_BP.RespawnTutorial_BrokenWall_BP_C
// 0x0020 (0x02B8 - 0x0298)
class ARespawnTutorial_BrokenWall_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Sphere;                                            // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Broken_;                                           // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Func_Broken_(bool Param_Broken_);
	void ExecuteUbergraph_RespawnTutorial_BrokenWall_BP(int32 EntryPoint);
	void Respawn_BrokenWall();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RespawnTutorial_BrokenWall_BP_C">();
	}
	static class ARespawnTutorial_BrokenWall_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARespawnTutorial_BrokenWall_BP_C>();
	}
};
static_assert(alignof(ARespawnTutorial_BrokenWall_BP_C) == 0x000008, "Wrong alignment on ARespawnTutorial_BrokenWall_BP_C");
static_assert(sizeof(ARespawnTutorial_BrokenWall_BP_C) == 0x0002B8, "Wrong size on ARespawnTutorial_BrokenWall_BP_C");
static_assert(offsetof(ARespawnTutorial_BrokenWall_BP_C, UberGraphFrame) == 0x000298, "Member 'ARespawnTutorial_BrokenWall_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ARespawnTutorial_BrokenWall_BP_C, Sphere) == 0x0002A0, "Member 'ARespawnTutorial_BrokenWall_BP_C::Sphere' has a wrong offset!");
static_assert(offsetof(ARespawnTutorial_BrokenWall_BP_C, DefaultSceneRoot) == 0x0002A8, "Member 'ARespawnTutorial_BrokenWall_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ARespawnTutorial_BrokenWall_BP_C, Broken_) == 0x0002B0, "Member 'ARespawnTutorial_BrokenWall_BP_C::Broken_' has a wrong offset!");

}

