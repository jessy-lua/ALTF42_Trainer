#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrameRate_Setting

#include "Basic.hpp"

#include "FValueTypes_structs.hpp"


namespace SDK::Params
{

// Function BP_FrameRate_Setting.BP_FrameRate_Setting_C.ExecuteUbergraph_BP_FrameRate_Setting
// 0x0050 (0x0050 - 0x0000)
struct BP_FrameRate_Setting_C_ExecuteUbergraph_BP_FrameRate_Setting final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3DF0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPDA_SettingsData_C*                    K2Node_Event_SettingsData;                         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFValueTypes                           K2Node_Event_Value;                                // 0x0018(0x0028)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_SettingsManager_C*                  K2Node_Event_SettingsManager;                      // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetFrameRateLimit_NewLimit_ImplicitCast;  // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FrameRate_Setting_C_ExecuteUbergraph_BP_FrameRate_Setting) == 0x000008, "Wrong alignment on BP_FrameRate_Setting_C_ExecuteUbergraph_BP_FrameRate_Setting");
static_assert(sizeof(BP_FrameRate_Setting_C_ExecuteUbergraph_BP_FrameRate_Setting) == 0x000050, "Wrong size on BP_FrameRate_Setting_C_ExecuteUbergraph_BP_FrameRate_Setting");
static_assert(offsetof(BP_FrameRate_Setting_C_ExecuteUbergraph_BP_FrameRate_Setting, EntryPoint) == 0x000000, "Member 'BP_FrameRate_Setting_C_ExecuteUbergraph_BP_FrameRate_Setting::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FrameRate_Setting_C_ExecuteUbergraph_BP_FrameRate_Setting, CallFunc_GetGameUserSettings_ReturnValue) == 0x000008, "Member 'BP_FrameRate_Setting_C_ExecuteUbergraph_BP_FrameRate_Setting::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FrameRate_Setting_C_ExecuteUbergraph_BP_FrameRate_Setting, K2Node_Event_SettingsData) == 0x000010, "Member 'BP_FrameRate_Setting_C_ExecuteUbergraph_BP_FrameRate_Setting::K2Node_Event_SettingsData' has a wrong offset!");
static_assert(offsetof(BP_FrameRate_Setting_C_ExecuteUbergraph_BP_FrameRate_Setting, K2Node_Event_Value) == 0x000018, "Member 'BP_FrameRate_Setting_C_ExecuteUbergraph_BP_FrameRate_Setting::K2Node_Event_Value' has a wrong offset!");
static_assert(offsetof(BP_FrameRate_Setting_C_ExecuteUbergraph_BP_FrameRate_Setting, K2Node_Event_SettingsManager) == 0x000040, "Member 'BP_FrameRate_Setting_C_ExecuteUbergraph_BP_FrameRate_Setting::K2Node_Event_SettingsManager' has a wrong offset!");
static_assert(offsetof(BP_FrameRate_Setting_C_ExecuteUbergraph_BP_FrameRate_Setting, CallFunc_SetFrameRateLimit_NewLimit_ImplicitCast) == 0x000048, "Member 'BP_FrameRate_Setting_C_ExecuteUbergraph_BP_FrameRate_Setting::CallFunc_SetFrameRateLimit_NewLimit_ImplicitCast' has a wrong offset!");

// Function BP_FrameRate_Setting.BP_FrameRate_Setting_C.OnApply
// 0x0038 (0x0038 - 0x0000)
struct BP_FrameRate_Setting_C_OnApply final
{
public:
	class UPDA_SettingsData_C*                    SettingsData;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFValueTypes                           Value;                                             // 0x0008(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UBP_SettingsManager_C*                  SettingsManager;                                   // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FrameRate_Setting_C_OnApply) == 0x000008, "Wrong alignment on BP_FrameRate_Setting_C_OnApply");
static_assert(sizeof(BP_FrameRate_Setting_C_OnApply) == 0x000038, "Wrong size on BP_FrameRate_Setting_C_OnApply");
static_assert(offsetof(BP_FrameRate_Setting_C_OnApply, SettingsData) == 0x000000, "Member 'BP_FrameRate_Setting_C_OnApply::SettingsData' has a wrong offset!");
static_assert(offsetof(BP_FrameRate_Setting_C_OnApply, Value) == 0x000008, "Member 'BP_FrameRate_Setting_C_OnApply::Value' has a wrong offset!");
static_assert(offsetof(BP_FrameRate_Setting_C_OnApply, SettingsManager) == 0x000030, "Member 'BP_FrameRate_Setting_C_OnApply::SettingsManager' has a wrong offset!");

}

