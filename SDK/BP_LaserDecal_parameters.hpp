#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LaserDecal

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_LaserDecal.BP_LaserDecal_C.ExecuteUbergraph_BP_LaserDecal
// 0x0010 (0x0010 - 0x0000)
struct BP_LaserDecal_C_ExecuteUbergraph_BP_LaserDecal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3087[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LaserDecal_C_ExecuteUbergraph_BP_LaserDecal) == 0x000008, "Wrong alignment on BP_LaserDecal_C_ExecuteUbergraph_BP_LaserDecal");
static_assert(sizeof(BP_LaserDecal_C_ExecuteUbergraph_BP_LaserDecal) == 0x000010, "Wrong size on BP_LaserDecal_C_ExecuteUbergraph_BP_LaserDecal");
static_assert(offsetof(BP_LaserDecal_C_ExecuteUbergraph_BP_LaserDecal, EntryPoint) == 0x000000, "Member 'BP_LaserDecal_C_ExecuteUbergraph_BP_LaserDecal::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LaserDecal_C_ExecuteUbergraph_BP_LaserDecal, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'BP_LaserDecal_C_ExecuteUbergraph_BP_LaserDecal::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}

