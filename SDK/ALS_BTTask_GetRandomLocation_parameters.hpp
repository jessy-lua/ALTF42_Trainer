#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALS_BTTask_GetRandomLocation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ALS_BTTask_GetRandomLocation.ALS_BTTask_GetRandomLocation_C.ExecuteUbergraph_ALS_BTTask_GetRandomLocation
// 0x0058 (0x0058 - 0x0000)
struct ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381C[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation; // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue; // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381D[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast; // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation) == 0x000008, "Wrong alignment on ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation");
static_assert(sizeof(ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation) == 0x000058, "Wrong size on ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation");
static_assert(offsetof(ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation, EntryPoint) == 0x000000, "Member 'ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation::EntryPoint' has a wrong offset!");
static_assert(offsetof(ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation, K2Node_Event_OwnerController) == 0x000008, "Member 'ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation, K2Node_Event_ControlledPawn) == 0x000010, "Member 'ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation, CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation) == 0x000038, "Member 'ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation::CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation' has a wrong offset!");
static_assert(offsetof(ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation, CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue) == 0x000050, "Member 'ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation::CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation, CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast) == 0x000054, "Member 'ALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation::CallFunc_K2_GetRandomReachablePointInRadius_Radius_ImplicitCast' has a wrong offset!");

// Function ALS_BTTask_GetRandomLocation.ALS_BTTask_GetRandomLocation_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct ALS_BTTask_GetRandomLocation_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALS_BTTask_GetRandomLocation_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on ALS_BTTask_GetRandomLocation_C_ReceiveExecuteAI");
static_assert(sizeof(ALS_BTTask_GetRandomLocation_C_ReceiveExecuteAI) == 0x000010, "Wrong size on ALS_BTTask_GetRandomLocation_C_ReceiveExecuteAI");
static_assert(offsetof(ALS_BTTask_GetRandomLocation_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'ALS_BTTask_GetRandomLocation_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(ALS_BTTask_GetRandomLocation_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'ALS_BTTask_GetRandomLocation_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}

