#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function OptionsButton.OptionsButton_C.ExecuteUbergraph_OptionsButton
// 0x0008 (0x0008 - 0x0000)
struct OptionsButton_C_ExecuteUbergraph_OptionsButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsHovered;                           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bPlaySound;                           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsButton_C_ExecuteUbergraph_OptionsButton) == 0x000004, "Wrong alignment on OptionsButton_C_ExecuteUbergraph_OptionsButton");
static_assert(sizeof(OptionsButton_C_ExecuteUbergraph_OptionsButton) == 0x000008, "Wrong size on OptionsButton_C_ExecuteUbergraph_OptionsButton");
static_assert(offsetof(OptionsButton_C_ExecuteUbergraph_OptionsButton, EntryPoint) == 0x000000, "Member 'OptionsButton_C_ExecuteUbergraph_OptionsButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(OptionsButton_C_ExecuteUbergraph_OptionsButton, K2Node_Event_bIsHovered) == 0x000004, "Member 'OptionsButton_C_ExecuteUbergraph_OptionsButton::K2Node_Event_bIsHovered' has a wrong offset!");
static_assert(offsetof(OptionsButton_C_ExecuteUbergraph_OptionsButton, K2Node_Event_bPlaySound) == 0x000005, "Member 'OptionsButton_C_ExecuteUbergraph_OptionsButton::K2Node_Event_bPlaySound' has a wrong offset!");
static_assert(offsetof(OptionsButton_C_ExecuteUbergraph_OptionsButton, K2Node_Event_IsDesignTime) == 0x000006, "Member 'OptionsButton_C_ExecuteUbergraph_OptionsButton::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function OptionsButton.OptionsButton_C.OnSetHoverEffect
// 0x0002 (0x0002 - 0x0000)
struct OptionsButton_C_OnSetHoverEffect final
{
public:
	bool                                          bIsHovered;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlaySound;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsButton_C_OnSetHoverEffect) == 0x000001, "Wrong alignment on OptionsButton_C_OnSetHoverEffect");
static_assert(sizeof(OptionsButton_C_OnSetHoverEffect) == 0x000002, "Wrong size on OptionsButton_C_OnSetHoverEffect");
static_assert(offsetof(OptionsButton_C_OnSetHoverEffect, bIsHovered) == 0x000000, "Member 'OptionsButton_C_OnSetHoverEffect::bIsHovered' has a wrong offset!");
static_assert(offsetof(OptionsButton_C_OnSetHoverEffect, bPlaySound) == 0x000001, "Member 'OptionsButton_C_OnSetHoverEffect::bPlaySound' has a wrong offset!");

// Function OptionsButton.OptionsButton_C.SetGlobalSettings
// 0x0250 (0x0250 - 0x0000)
struct OptionsButton_C_SetGlobalSettings final
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
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_MainFont;                  // 0x0090(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_SmallTitleFont;            // 0x00E8(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_MediumTitleFont;           // 0x0140(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_LargeTitleFont;            // 0x0198(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_ValueFont;                 // 0x01F0(0x0058)(HasGetValueTypeHash)
	bool                                          CallFunc_GetGlobalFonts_OnlyUppercase;             // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsButton_C_SetGlobalSettings) == 0x000008, "Wrong alignment on OptionsButton_C_SetGlobalSettings");
static_assert(sizeof(OptionsButton_C_SetGlobalSettings) == 0x000250, "Wrong size on OptionsButton_C_SetGlobalSettings");
static_assert(offsetof(OptionsButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_MainColor) == 0x000000, "Member 'OptionsButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_MainColor' has a wrong offset!");
static_assert(offsetof(OptionsButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightColor) == 0x000010, "Member 'OptionsButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightColor' has a wrong offset!");
static_assert(offsetof(OptionsButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightExtraColor) == 0x000020, "Member 'OptionsButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightExtraColor' has a wrong offset!");
static_assert(offsetof(OptionsButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_MenuBackgroundColor) == 0x000030, "Member 'OptionsButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_MenuBackgroundColor' has a wrong offset!");
static_assert(offsetof(OptionsButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_WidgetBackgroundColor) == 0x000040, "Member 'OptionsButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_WidgetBackgroundColor' has a wrong offset!");
static_assert(offsetof(OptionsButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_SymbolColor) == 0x000050, "Member 'OptionsButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_SymbolColor' has a wrong offset!");
static_assert(offsetof(OptionsButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_SubtleColor) == 0x000060, "Member 'OptionsButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_SubtleColor' has a wrong offset!");
static_assert(offsetof(OptionsButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_DecisionButtonColor) == 0x000070, "Member 'OptionsButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_DecisionButtonColor' has a wrong offset!");
static_assert(offsetof(OptionsButton_C_SetGlobalSettings, CallFunc_GetGlobalColors_SliderBackgroundColor) == 0x000080, "Member 'OptionsButton_C_SetGlobalSettings::CallFunc_GetGlobalColors_SliderBackgroundColor' has a wrong offset!");
static_assert(offsetof(OptionsButton_C_SetGlobalSettings, CallFunc_GetGlobalFonts_MainFont) == 0x000090, "Member 'OptionsButton_C_SetGlobalSettings::CallFunc_GetGlobalFonts_MainFont' has a wrong offset!");
static_assert(offsetof(OptionsButton_C_SetGlobalSettings, CallFunc_GetGlobalFonts_SmallTitleFont) == 0x0000E8, "Member 'OptionsButton_C_SetGlobalSettings::CallFunc_GetGlobalFonts_SmallTitleFont' has a wrong offset!");
static_assert(offsetof(OptionsButton_C_SetGlobalSettings, CallFunc_GetGlobalFonts_MediumTitleFont) == 0x000140, "Member 'OptionsButton_C_SetGlobalSettings::CallFunc_GetGlobalFonts_MediumTitleFont' has a wrong offset!");
static_assert(offsetof(OptionsButton_C_SetGlobalSettings, CallFunc_GetGlobalFonts_LargeTitleFont) == 0x000198, "Member 'OptionsButton_C_SetGlobalSettings::CallFunc_GetGlobalFonts_LargeTitleFont' has a wrong offset!");
static_assert(offsetof(OptionsButton_C_SetGlobalSettings, CallFunc_GetGlobalFonts_ValueFont) == 0x0001F0, "Member 'OptionsButton_C_SetGlobalSettings::CallFunc_GetGlobalFonts_ValueFont' has a wrong offset!");
static_assert(offsetof(OptionsButton_C_SetGlobalSettings, CallFunc_GetGlobalFonts_OnlyUppercase) == 0x000248, "Member 'OptionsButton_C_SetGlobalSettings::CallFunc_GetGlobalFonts_OnlyUppercase' has a wrong offset!");

// Function OptionsButton.OptionsButton_C.SetHoverEffect
// 0x0010 (0x0010 - 0x0000)
struct OptionsButton_C_SetHoverEffect final
{
public:
	bool                                          bIsHovered;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_328B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsButton_C_SetHoverEffect) == 0x000008, "Wrong alignment on OptionsButton_C_SetHoverEffect");
static_assert(sizeof(OptionsButton_C_SetHoverEffect) == 0x000010, "Wrong size on OptionsButton_C_SetHoverEffect");
static_assert(offsetof(OptionsButton_C_SetHoverEffect, bIsHovered) == 0x000000, "Member 'OptionsButton_C_SetHoverEffect::bIsHovered' has a wrong offset!");
static_assert(offsetof(OptionsButton_C_SetHoverEffect, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'OptionsButton_C_SetHoverEffect::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");

// Function OptionsButton.OptionsButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct OptionsButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionsButton_C_PreConstruct) == 0x000001, "Wrong alignment on OptionsButton_C_PreConstruct");
static_assert(sizeof(OptionsButton_C_PreConstruct) == 0x000001, "Wrong size on OptionsButton_C_PreConstruct");
static_assert(offsetof(OptionsButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'OptionsButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

