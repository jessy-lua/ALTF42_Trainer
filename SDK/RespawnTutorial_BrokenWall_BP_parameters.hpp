#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RespawnTutorial_BrokenWall_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function RespawnTutorial_BrokenWall_BP.RespawnTutorial_BrokenWall_BP_C.Broken?
// 0x0001 (0x0001 - 0x0000)
struct RespawnTutorial_BrokenWall_BP_C_Broken_ final
{
public:
	bool                                          Param_Broken_;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RespawnTutorial_BrokenWall_BP_C_Broken_) == 0x000001, "Wrong alignment on RespawnTutorial_BrokenWall_BP_C_Broken_");
static_assert(sizeof(RespawnTutorial_BrokenWall_BP_C_Broken_) == 0x000001, "Wrong size on RespawnTutorial_BrokenWall_BP_C_Broken_");
static_assert(offsetof(RespawnTutorial_BrokenWall_BP_C_Broken_, Param_Broken_) == 0x000000, "Member 'RespawnTutorial_BrokenWall_BP_C_Broken_::Param_Broken_' has a wrong offset!");

// Function RespawnTutorial_BrokenWall_BP.RespawnTutorial_BrokenWall_BP_C.ExecuteUbergraph_RespawnTutorial_BrokenWall_BP
// 0x0130 (0x0130 - 0x0000)
struct RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34B0[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Broken_;                        // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34B1[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00C0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ATutorial_BrokenWall_BP_C*              CallFunc_FinishSpawningActor_ReturnValue;          // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP) == 0x000010, "Wrong alignment on RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP");
static_assert(sizeof(RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP) == 0x000130, "Wrong size on RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP");
static_assert(offsetof(RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP, EntryPoint) == 0x000000, "Member 'RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000010, "Member 'RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP, CallFunc_BreakTransform_Location) == 0x000070, "Member 'RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP, CallFunc_BreakTransform_Rotation) == 0x000088, "Member 'RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP, CallFunc_BreakTransform_Scale) == 0x0000A0, "Member 'RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP, K2Node_CustomEvent_Broken_) == 0x0000B8, "Member 'RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP::K2Node_CustomEvent_Broken_' has a wrong offset!");
static_assert(offsetof(RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP, CallFunc_MakeTransform_ReturnValue) == 0x0000C0, "Member 'RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000120, "Member 'RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP, CallFunc_FinishSpawningActor_ReturnValue) == 0x000128, "Member 'RespawnTutorial_BrokenWall_BP_C_ExecuteUbergraph_RespawnTutorial_BrokenWall_BP::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}
