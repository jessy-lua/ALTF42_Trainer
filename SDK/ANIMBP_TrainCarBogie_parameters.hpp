#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANIMBP_TrainCarBogie

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ANIMBP_TrainCarBogie.ANIMBP_TrainCarBogie_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ANIMBP_TrainCarBogie_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ANIMBP_TrainCarBogie_C_AnimGraph) == 0x000008, "Wrong alignment on ANIMBP_TrainCarBogie_C_AnimGraph");
static_assert(sizeof(ANIMBP_TrainCarBogie_C_AnimGraph) == 0x000010, "Wrong size on ANIMBP_TrainCarBogie_C_AnimGraph");
static_assert(offsetof(ANIMBP_TrainCarBogie_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ANIMBP_TrainCarBogie_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ANIMBP_TrainCarBogie.ANIMBP_TrainCarBogie_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ANIMBP_TrainCarBogie_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANIMBP_TrainCarBogie_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ANIMBP_TrainCarBogie_C_BlueprintUpdateAnimation");
static_assert(sizeof(ANIMBP_TrainCarBogie_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ANIMBP_TrainCarBogie_C_BlueprintUpdateAnimation");
static_assert(offsetof(ANIMBP_TrainCarBogie_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ANIMBP_TrainCarBogie_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ANIMBP_TrainCarBogie.ANIMBP_TrainCarBogie_C.ExecuteUbergraph_ANIMBP_TrainCarBogie
// 0x0008 (0x0008 - 0x0000)
struct ANIMBP_TrainCarBogie_C_ExecuteUbergraph_ANIMBP_TrainCarBogie final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ANIMBP_TrainCarBogie_C_ExecuteUbergraph_ANIMBP_TrainCarBogie) == 0x000004, "Wrong alignment on ANIMBP_TrainCarBogie_C_ExecuteUbergraph_ANIMBP_TrainCarBogie");
static_assert(sizeof(ANIMBP_TrainCarBogie_C_ExecuteUbergraph_ANIMBP_TrainCarBogie) == 0x000008, "Wrong size on ANIMBP_TrainCarBogie_C_ExecuteUbergraph_ANIMBP_TrainCarBogie");
static_assert(offsetof(ANIMBP_TrainCarBogie_C_ExecuteUbergraph_ANIMBP_TrainCarBogie, EntryPoint) == 0x000000, "Member 'ANIMBP_TrainCarBogie_C_ExecuteUbergraph_ANIMBP_TrainCarBogie::EntryPoint' has a wrong offset!");
static_assert(offsetof(ANIMBP_TrainCarBogie_C_ExecuteUbergraph_ANIMBP_TrainCarBogie, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'ANIMBP_TrainCarBogie_C_ExecuteUbergraph_ANIMBP_TrainCarBogie::K2Node_Event_DeltaTimeX' has a wrong offset!");

}

