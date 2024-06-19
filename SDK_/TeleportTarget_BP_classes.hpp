#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeleportTarget_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TeleportTarget_BP.TeleportTarget_BP_C
// 0x0008 (0x02A0 - 0x0298)
class ATeleportTarget_BP_C final : public AActor
{
public:
	class UStaticMeshComponent*                   Root;                                              // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeleportTarget_BP_C">();
	}
	static class ATeleportTarget_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATeleportTarget_BP_C>();
	}
};
static_assert(alignof(ATeleportTarget_BP_C) == 0x000008, "Wrong alignment on ATeleportTarget_BP_C");
static_assert(sizeof(ATeleportTarget_BP_C) == 0x0002A0, "Wrong size on ATeleportTarget_BP_C");
static_assert(offsetof(ATeleportTarget_BP_C, Root) == 0x000298, "Member 'ATeleportTarget_BP_C::Root' has a wrong offset!");

}
