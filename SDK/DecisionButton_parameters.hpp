#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DecisionButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function DecisionButton.DecisionButton_C.ExecuteUbergraph_DecisionButton
// 0x0008 (0x0008 - 0x0000)
struct DecisionButton_C_ExecuteUbergraph_DecisionButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsHovered;                           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bPlaySound;                           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DecisionButton_C_ExecuteUbergraph_DecisionButton) == 0x000004, "Wrong alignment on DecisionButton_C_ExecuteUbergraph_DecisionButton");
static_assert(sizeof(DecisionButton_C_ExecuteUbergraph_DecisionButton) == 0x000008, "Wrong size on DecisionButton_C_ExecuteUbergraph_DecisionButton");
static_assert(offsetof(DecisionButton_C_ExecuteUbergraph_DecisionButton, EntryPoint) == 0x000000, "Member 'DecisionButton_C_ExecuteUbergraph_DecisionButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_ExecuteUbergraph_DecisionButton, K2Node_Event_bIsHovered) == 0x000004, "Member 'DecisionButton_C_ExecuteUbergraph_DecisionButton::K2Node_Event_bIsHovered' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_ExecuteUbergraph_DecisionButton, K2Node_Event_bPlaySound) == 0x000005, "Member 'DecisionButton_C_ExecuteUbergraph_DecisionButton::K2Node_Event_bPlaySound' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_ExecuteUbergraph_DecisionButton, K2Node_Event_IsDesignTime) == 0x000006, "Member 'DecisionButton_C_ExecuteUbergraph_DecisionButton::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function DecisionButton.DecisionButton_C.OnSetHoverEffect
// 0x0002 (0x0002 - 0x0000)
struct DecisionButton_C_OnSetHoverEffect final
{
public:
	bool                                          bIsHovered;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlaySound;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DecisionButton_C_OnSetHoverEffect) == 0x000001, "Wrong alignment on DecisionButton_C_OnSetHoverEffect");
static_assert(sizeof(DecisionButton_C_OnSetHoverEffect) == 0x000002, "Wrong size on DecisionButton_C_OnSetHoverEffect");
static_assert(offsetof(DecisionButton_C_OnSetHoverEffect, bIsHovered) == 0x000000, "Member 'DecisionButton_C_OnSetHoverEffect::bIsHovered' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_OnSetHoverEffect, bPlaySound) == 0x000001, "Member 'DecisionButton_C_OnSetHoverEffect::bPlaySound' has a wrong offset!");

// Function DecisionButton.DecisionButton_C.SetGlobalSettings
// 0x0370 (0x0370 - 0x0000)
struct DecisionButton_C_SetGlobalSettings final
{
public:
	struct FLinearColor                           CallFunc_GetGlobalColors_MainColor;                // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightColor;           // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightExtraColor;      // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_MenuBackgroundColor;      // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_WidgetBackgroundColor;    // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SymbolColor;              // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SubtleColor;              // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_DecisionButtonColor;      // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SliderBackgroundColor;    // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_MainColor_1;              // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightColor_1;         // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightExtraColor_1;    // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_MenuBackgroundColor_1;    // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_WidgetBackgroundColor_1;  // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SymbolColor_1;            // 0x00E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SubtleColor_1;            // 0x00F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_DecisionButtonColor_1;    // 0x0100(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SliderBackgroundColor_1;  // 0x0110(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_MainColor_2;              // 0x0120(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightColor_2;         // 0x0130(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightExtraColor_2;    // 0x0140(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_MenuBackgroundColor_2;    // 0x0150(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_WidgetBackgroundColor_2;  // 0x0160(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SymbolColor_2;            // 0x0170(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SubtleColor_2;            // 0x0180(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_DecisionButtonColor_2;    // 0x0190(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SliderBackgroundColor_2;  // 0x01A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_MainFont;                  // 0x01B0(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_SmallTitleFont;            // 0x0208(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_MediumTitleFont;           // 0x0260(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_LargeTitleFont;            // 0x02B8(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_ValueFont;                 // 0x0310(0x0058)(HasGetValueTypeHash)
	bool                                          CallFunc_GetGlobalFonts_OnlyUppercase;             // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DecisionButton_C_SetGlobalSettings) == 0x000008, "Wrong alignment on DecisionButton_C_SetGlobalSettings");
static_assert(sizeof(DecisionButton_C_SetGlobalSettings) == 0x000370, "Wrong size on DecisionButton_C_SetGlobalSettings");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_MainColor) == 0x000000, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_MainColor' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightColor) == 0x000010, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightColor' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightExtraColor) == 0x000020, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightExtraColor' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_MenuBackgroundColor) == 0x000030, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_MenuBackgroundColor' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_WidgetBackgroundColor) == 0x000040, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_WidgetBackgroundColor' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_SymbolColor) == 0x000050, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_SymbolColor' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_SubtleColor) == 0x000060, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_SubtleColor' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_DecisionButtonColor) == 0x000070, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_DecisionButtonColor' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_SliderBackgroundColor) == 0x000080, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_SliderBackgroundColor' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_MainColor_1) == 0x000090, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_MainColor_1' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightColor_1) == 0x0000A0, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightColor_1' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightExtraColor_1) == 0x0000B0, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightExtraColor_1' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_MenuBackgroundColor_1) == 0x0000C0, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_MenuBackgroundColor_1' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_WidgetBackgroundColor_1) == 0x0000D0, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_WidgetBackgroundColor_1' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_SymbolColor_1) == 0x0000E0, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_SymbolColor_1' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_SubtleColor_1) == 0x0000F0, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_SubtleColor_1' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_DecisionButtonColor_1) == 0x000100, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_DecisionButtonColor_1' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_SliderBackgroundColor_1) == 0x000110, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_SliderBackgroundColor_1' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_MainColor_2) == 0x000120, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_MainColor_2' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightColor_2) == 0x000130, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightColor_2' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightExtraColor_2) == 0x000140, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightExtraColor_2' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_MenuBackgroundColor_2) == 0x000150, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_MenuBackgroundColor_2' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_WidgetBackgroundColor_2) == 0x000160, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_WidgetBackgroundColor_2' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_SymbolColor_2) == 0x000170, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_SymbolColor_2' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_SubtleColor_2) == 0x000180, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_SubtleColor_2' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_DecisionButtonColor_2) == 0x000190, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_DecisionButtonColor_2' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_SliderBackgroundColor_2) == 0x0001A0, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_SliderBackgroundColor_2' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalFonts_MainFont) == 0x0001B0, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalFonts_MainFont' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalFonts_SmallTitleFont) == 0x000208, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalFonts_SmallTitleFont' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalFonts_MediumTitleFont) == 0x000260, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalFonts_MediumTitleFont' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalFonts_LargeTitleFont) == 0x0002B8, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalFonts_LargeTitleFont' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalFonts_ValueFont) == 0x000310, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalFonts_ValueFont' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetGlobalSettings, CallFunc_GetGlobalFonts_OnlyUppercase) == 0x000368, "Member 'DecisionButton_C_SetGlobalSettings::CallFunc_GetGlobalFonts_OnlyUppercase' has a wrong offset!");

// Function DecisionButton.DecisionButton_C.SetHoverEffect
// 0x0010 (0x0010 - 0x0000)
struct DecisionButton_C_SetHoverEffect final
{
public:
	bool                                          bIsHovered;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_328A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DecisionButton_C_SetHoverEffect) == 0x000008, "Wrong alignment on DecisionButton_C_SetHoverEffect");
static_assert(sizeof(DecisionButton_C_SetHoverEffect) == 0x000010, "Wrong size on DecisionButton_C_SetHoverEffect");
static_assert(offsetof(DecisionButton_C_SetHoverEffect, bIsHovered) == 0x000000, "Member 'DecisionButton_C_SetHoverEffect::bIsHovered' has a wrong offset!");
static_assert(offsetof(DecisionButton_C_SetHoverEffect, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'DecisionButton_C_SetHoverEffect::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");

// Function DecisionButton.DecisionButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct DecisionButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DecisionButton_C_PreConstruct) == 0x000001, "Wrong alignment on DecisionButton_C_PreConstruct");
static_assert(sizeof(DecisionButton_C_PreConstruct) == 0x000001, "Wrong size on DecisionButton_C_PreConstruct");
static_assert(offsetof(DecisionButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'DecisionButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

