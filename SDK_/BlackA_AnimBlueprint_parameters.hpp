#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BlackA_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BlackA_AnimBlueprint.BlackA_AnimBlueprint_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct BlackA_AnimBlueprint_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(BlackA_AnimBlueprint_C_AnimGraph) == 0x000008, "Wrong alignment on BlackA_AnimBlueprint_C_AnimGraph");
static_assert(sizeof(BlackA_AnimBlueprint_C_AnimGraph) == 0x000010, "Wrong size on BlackA_AnimBlueprint_C_AnimGraph");
static_assert(offsetof(BlackA_AnimBlueprint_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'BlackA_AnimBlueprint_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function BlackA_AnimBlueprint.BlackA_AnimBlueprint_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct BlackA_AnimBlueprint_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BlackA_AnimBlueprint_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on BlackA_AnimBlueprint_C_BlueprintUpdateAnimation");
static_assert(sizeof(BlackA_AnimBlueprint_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on BlackA_AnimBlueprint_C_BlueprintUpdateAnimation");
static_assert(offsetof(BlackA_AnimBlueprint_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'BlackA_AnimBlueprint_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function BlackA_AnimBlueprint.BlackA_AnimBlueprint_C.ExecuteUbergraph_BlackA_AnimBlueprint
// 0x0020 (0x0020 - 0x0000)
struct BlackA_AnimBlueprint_C_ExecuteUbergraph_BlackA_AnimBlueprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Horse_Enemy_C*                      K2Node_DynamicCast_AsBP_Horse_Enemy;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BlackA_AnimBlueprint_C_ExecuteUbergraph_BlackA_AnimBlueprint) == 0x000008, "Wrong alignment on BlackA_AnimBlueprint_C_ExecuteUbergraph_BlackA_AnimBlueprint");
static_assert(sizeof(BlackA_AnimBlueprint_C_ExecuteUbergraph_BlackA_AnimBlueprint) == 0x000020, "Wrong size on BlackA_AnimBlueprint_C_ExecuteUbergraph_BlackA_AnimBlueprint");
static_assert(offsetof(BlackA_AnimBlueprint_C_ExecuteUbergraph_BlackA_AnimBlueprint, EntryPoint) == 0x000000, "Member 'BlackA_AnimBlueprint_C_ExecuteUbergraph_BlackA_AnimBlueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(BlackA_AnimBlueprint_C_ExecuteUbergraph_BlackA_AnimBlueprint, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'BlackA_AnimBlueprint_C_ExecuteUbergraph_BlackA_AnimBlueprint::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(BlackA_AnimBlueprint_C_ExecuteUbergraph_BlackA_AnimBlueprint, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000008, "Member 'BlackA_AnimBlueprint_C_ExecuteUbergraph_BlackA_AnimBlueprint::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BlackA_AnimBlueprint_C_ExecuteUbergraph_BlackA_AnimBlueprint, K2Node_DynamicCast_AsBP_Horse_Enemy) == 0x000010, "Member 'BlackA_AnimBlueprint_C_ExecuteUbergraph_BlackA_AnimBlueprint::K2Node_DynamicCast_AsBP_Horse_Enemy' has a wrong offset!");
static_assert(offsetof(BlackA_AnimBlueprint_C_ExecuteUbergraph_BlackA_AnimBlueprint, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BlackA_AnimBlueprint_C_ExecuteUbergraph_BlackA_AnimBlueprint::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

