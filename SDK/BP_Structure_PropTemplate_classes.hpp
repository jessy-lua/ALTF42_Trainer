#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Structure_PropTemplate

#include "Basic.hpp"

#include "BP_Prefab_Parent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Structure_PropTemplate.BP_Structure_PropTemplate_C
// 0x0000 (0x02A8 - 0x02A8)
class ABP_Structure_PropTemplate_C : public ABP_Prefab_Parent_C
{
public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Structure_PropTemplate_C">();
	}
	static class ABP_Structure_PropTemplate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Structure_PropTemplate_C>();
	}
};
static_assert(alignof(ABP_Structure_PropTemplate_C) == 0x000008, "Wrong alignment on ABP_Structure_PropTemplate_C");
static_assert(sizeof(ABP_Structure_PropTemplate_C) == 0x0002A8, "Wrong size on ABP_Structure_PropTemplate_C");

}

