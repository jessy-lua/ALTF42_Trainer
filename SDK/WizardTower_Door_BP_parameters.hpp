#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WizardTower_Door_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WizardTower_Door_BP.WizardTower_Door_BP_C.ExecuteUbergraph_WizardTower_Door_BP
// 0x0138 (0x0138 - 0x0000)
struct WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E1E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UALTF42_GameInstance_C*                 K2Node_DynamicCast_AsALTF42_Game_Instance;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E1F[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0040(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP) == 0x000008, "Wrong alignment on WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP");
static_assert(sizeof(WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP) == 0x000138, "Wrong size on WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP");
static_assert(offsetof(WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP, EntryPoint) == 0x000000, "Member 'WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP, CallFunc_Lerp_ReturnValue) == 0x000008, "Member 'WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP, CallFunc_MakeRotator_ReturnValue) == 0x000010, "Member 'WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP, CallFunc_GetGameInstance_ReturnValue) == 0x000028, "Member 'WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP, K2Node_DynamicCast_AsALTF42_Game_Instance) == 0x000030, "Member 'WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP::K2Node_DynamicCast_AsALTF42_Game_Instance' has a wrong offset!");
static_assert(offsetof(WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000040, "Member 'WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP, CallFunc_Lerp_Alpha_ImplicitCast) == 0x000128, "Member 'WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000130, "Member 'WizardTower_Door_BP_C_ExecuteUbergraph_WizardTower_Door_BP::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

}

