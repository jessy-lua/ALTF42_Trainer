#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FadeBorderWidgetBP

#include "Basic.hpp"


namespace SDK::Params
{

// Function FadeBorderWidgetBP.FadeBorderWidgetBP_C.ExecuteUbergraph_FadeBorderWidgetBP
// 0x0038 (0x0038 - 0x0000)
struct FadeBorderWidgetBP_C_ExecuteUbergraph_FadeBorderWidgetBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B95[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FadeBorderWidgetBP_C_ExecuteUbergraph_FadeBorderWidgetBP) == 0x000008, "Wrong alignment on FadeBorderWidgetBP_C_ExecuteUbergraph_FadeBorderWidgetBP");
static_assert(sizeof(FadeBorderWidgetBP_C_ExecuteUbergraph_FadeBorderWidgetBP) == 0x000038, "Wrong size on FadeBorderWidgetBP_C_ExecuteUbergraph_FadeBorderWidgetBP");
static_assert(offsetof(FadeBorderWidgetBP_C_ExecuteUbergraph_FadeBorderWidgetBP, EntryPoint) == 0x000000, "Member 'FadeBorderWidgetBP_C_ExecuteUbergraph_FadeBorderWidgetBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(FadeBorderWidgetBP_C_ExecuteUbergraph_FadeBorderWidgetBP, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'FadeBorderWidgetBP_C_ExecuteUbergraph_FadeBorderWidgetBP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FadeBorderWidgetBP_C_ExecuteUbergraph_FadeBorderWidgetBP, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'FadeBorderWidgetBP_C_ExecuteUbergraph_FadeBorderWidgetBP::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(FadeBorderWidgetBP_C_ExecuteUbergraph_FadeBorderWidgetBP, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'FadeBorderWidgetBP_C_ExecuteUbergraph_FadeBorderWidgetBP::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FadeBorderWidgetBP_C_ExecuteUbergraph_FadeBorderWidgetBP, CallFunc_PlayAnimation_ReturnValue_1) == 0x000030, "Member 'FadeBorderWidgetBP_C_ExecuteUbergraph_FadeBorderWidgetBP::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}

