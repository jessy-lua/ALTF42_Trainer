#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GameLanguageApply

#include "Basic.hpp"

#include "FValueTypes_structs.hpp"


namespace SDK::Params
{

// Function BP_GameLanguageApply.BP_GameLanguageApply_C.ExecuteUbergraph_BP_GameLanguageApply
// 0x0050 (0x0050 - 0x0000)
struct BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F1D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPDA_SettingsData_C*                    K2Node_Event_SettingsData;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFValueTypes                           K2Node_Event_Value;                                // 0x0010(0x0028)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_SettingsManager_C*                  K2Node_Event_SettingsManager;                      // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetCurrentCulture_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetCurrentCulture_ReturnValue_1;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F1E[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply) == 0x000008, "Wrong alignment on BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply");
static_assert(sizeof(BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply) == 0x000050, "Wrong size on BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply");
static_assert(offsetof(BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply, EntryPoint) == 0x000000, "Member 'BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply, K2Node_Event_SettingsData) == 0x000008, "Member 'BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply::K2Node_Event_SettingsData' has a wrong offset!");
static_assert(offsetof(BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply, K2Node_Event_Value) == 0x000010, "Member 'BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply::K2Node_Event_Value' has a wrong offset!");
static_assert(offsetof(BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply, K2Node_Event_SettingsManager) == 0x000038, "Member 'BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply::K2Node_Event_SettingsManager' has a wrong offset!");
static_assert(offsetof(BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply, CallFunc_SetCurrentCulture_ReturnValue) == 0x000040, "Member 'BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply::CallFunc_SetCurrentCulture_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply, CallFunc_SetCurrentCulture_ReturnValue_1) == 0x000041, "Member 'BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply::CallFunc_SetCurrentCulture_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply, CallFunc_Array_Find_ReturnValue) == 0x000044, "Member 'BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000048, "Member 'BP_GameLanguageApply_C_ExecuteUbergraph_BP_GameLanguageApply::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_GameLanguageApply.BP_GameLanguageApply_C.OnApply
// 0x0038 (0x0038 - 0x0000)
struct BP_GameLanguageApply_C_OnApply final
{
public:
	class UPDA_SettingsData_C*                    SettingsData;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFValueTypes                           Value;                                             // 0x0008(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UBP_SettingsManager_C*                  SettingsManager;                                   // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GameLanguageApply_C_OnApply) == 0x000008, "Wrong alignment on BP_GameLanguageApply_C_OnApply");
static_assert(sizeof(BP_GameLanguageApply_C_OnApply) == 0x000038, "Wrong size on BP_GameLanguageApply_C_OnApply");
static_assert(offsetof(BP_GameLanguageApply_C_OnApply, SettingsData) == 0x000000, "Member 'BP_GameLanguageApply_C_OnApply::SettingsData' has a wrong offset!");
static_assert(offsetof(BP_GameLanguageApply_C_OnApply, Value) == 0x000008, "Member 'BP_GameLanguageApply_C_OnApply::Value' has a wrong offset!");
static_assert(offsetof(BP_GameLanguageApply_C_OnApply, SettingsManager) == 0x000030, "Member 'BP_GameLanguageApply_C_OnApply::SettingsManager' has a wrong offset!");

}

