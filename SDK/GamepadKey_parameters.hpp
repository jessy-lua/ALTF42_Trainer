#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GamepadKey

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GamepadKey.GamepadKey_C.ExecuteUbergraph_GamepadKey
// 0x0008 (0x0008 - 0x0000)
struct GamepadKey_C_ExecuteUbergraph_GamepadKey final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GamepadKey_C_ExecuteUbergraph_GamepadKey) == 0x000004, "Wrong alignment on GamepadKey_C_ExecuteUbergraph_GamepadKey");
static_assert(sizeof(GamepadKey_C_ExecuteUbergraph_GamepadKey) == 0x000008, "Wrong size on GamepadKey_C_ExecuteUbergraph_GamepadKey");
static_assert(offsetof(GamepadKey_C_ExecuteUbergraph_GamepadKey, EntryPoint) == 0x000000, "Member 'GamepadKey_C_ExecuteUbergraph_GamepadKey::EntryPoint' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_ExecuteUbergraph_GamepadKey, K2Node_Event_IsDesignTime) == 0x000004, "Member 'GamepadKey_C_ExecuteUbergraph_GamepadKey::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function GamepadKey.GamepadKey_C.Highlight
// 0x0001 (0x0001 - 0x0000)
struct GamepadKey_C_Highlight final
{
public:
	bool                                          bHighlight;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GamepadKey_C_Highlight) == 0x000001, "Wrong alignment on GamepadKey_C_Highlight");
static_assert(sizeof(GamepadKey_C_Highlight) == 0x000001, "Wrong size on GamepadKey_C_Highlight");
static_assert(offsetof(GamepadKey_C_Highlight, bHighlight) == 0x000000, "Member 'GamepadKey_C_Highlight::bHighlight' has a wrong offset!");

// Function GamepadKey.GamepadKey_C.SetGlobalSettings
// 0x0370 (0x0370 - 0x0000)
struct GamepadKey_C_SetGlobalSettings final
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
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_MainFont;                  // 0x0120(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_SmallTitleFont;            // 0x0178(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_MediumTitleFont;           // 0x01D0(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_LargeTitleFont;            // 0x0228(0x0058)(HasGetValueTypeHash)
	struct FSlateFontInfo                         CallFunc_GetGlobalFonts_ValueFont;                 // 0x0280(0x0058)(HasGetValueTypeHash)
	bool                                          CallFunc_GetGlobalFonts_OnlyUppercase;             // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2088[0x3];                                     // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetGlobalColors_MainColor_2;              // 0x02DC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightColor_2;         // 0x02EC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_HighlightExtraColor_2;    // 0x02FC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_MenuBackgroundColor_2;    // 0x030C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_WidgetBackgroundColor_2;  // 0x031C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SymbolColor_2;            // 0x032C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SubtleColor_2;            // 0x033C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_DecisionButtonColor_2;    // 0x034C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColors_SliderBackgroundColor_2;  // 0x035C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GamepadKey_C_SetGlobalSettings) == 0x000008, "Wrong alignment on GamepadKey_C_SetGlobalSettings");
static_assert(sizeof(GamepadKey_C_SetGlobalSettings) == 0x000370, "Wrong size on GamepadKey_C_SetGlobalSettings");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_MainColor) == 0x000000, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_MainColor' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightColor) == 0x000010, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightColor' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightExtraColor) == 0x000020, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightExtraColor' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_MenuBackgroundColor) == 0x000030, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_MenuBackgroundColor' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_WidgetBackgroundColor) == 0x000040, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_WidgetBackgroundColor' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_SymbolColor) == 0x000050, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_SymbolColor' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_SubtleColor) == 0x000060, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_SubtleColor' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_DecisionButtonColor) == 0x000070, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_DecisionButtonColor' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_SliderBackgroundColor) == 0x000080, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_SliderBackgroundColor' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_MainColor_1) == 0x000090, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_MainColor_1' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightColor_1) == 0x0000A0, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightColor_1' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightExtraColor_1) == 0x0000B0, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightExtraColor_1' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_MenuBackgroundColor_1) == 0x0000C0, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_MenuBackgroundColor_1' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_WidgetBackgroundColor_1) == 0x0000D0, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_WidgetBackgroundColor_1' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_SymbolColor_1) == 0x0000E0, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_SymbolColor_1' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_SubtleColor_1) == 0x0000F0, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_SubtleColor_1' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_DecisionButtonColor_1) == 0x000100, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_DecisionButtonColor_1' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_SliderBackgroundColor_1) == 0x000110, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_SliderBackgroundColor_1' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalFonts_MainFont) == 0x000120, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalFonts_MainFont' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalFonts_SmallTitleFont) == 0x000178, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalFonts_SmallTitleFont' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalFonts_MediumTitleFont) == 0x0001D0, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalFonts_MediumTitleFont' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalFonts_LargeTitleFont) == 0x000228, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalFonts_LargeTitleFont' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalFonts_ValueFont) == 0x000280, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalFonts_ValueFont' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalFonts_OnlyUppercase) == 0x0002D8, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalFonts_OnlyUppercase' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_MainColor_2) == 0x0002DC, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_MainColor_2' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightColor_2) == 0x0002EC, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightColor_2' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_HighlightExtraColor_2) == 0x0002FC, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_HighlightExtraColor_2' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_MenuBackgroundColor_2) == 0x00030C, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_MenuBackgroundColor_2' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_WidgetBackgroundColor_2) == 0x00031C, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_WidgetBackgroundColor_2' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_SymbolColor_2) == 0x00032C, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_SymbolColor_2' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_SubtleColor_2) == 0x00033C, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_SubtleColor_2' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_DecisionButtonColor_2) == 0x00034C, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_DecisionButtonColor_2' has a wrong offset!");
static_assert(offsetof(GamepadKey_C_SetGlobalSettings, CallFunc_GetGlobalColors_SliderBackgroundColor_2) == 0x00035C, "Member 'GamepadKey_C_SetGlobalSettings::CallFunc_GetGlobalColors_SliderBackgroundColor_2' has a wrong offset!");

// Function GamepadKey.GamepadKey_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct GamepadKey_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GamepadKey_C_SetText) == 0x000008, "Wrong alignment on GamepadKey_C_SetText");
static_assert(sizeof(GamepadKey_C_SetText) == 0x000018, "Wrong size on GamepadKey_C_SetText");
static_assert(offsetof(GamepadKey_C_SetText, InText) == 0x000000, "Member 'GamepadKey_C_SetText::InText' has a wrong offset!");

// Function GamepadKey.GamepadKey_C.SetTexture
// 0x0008 (0x0008 - 0x0000)
struct GamepadKey_C_SetTexture final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GamepadKey_C_SetTexture) == 0x000008, "Wrong alignment on GamepadKey_C_SetTexture");
static_assert(sizeof(GamepadKey_C_SetTexture) == 0x000008, "Wrong size on GamepadKey_C_SetTexture");
static_assert(offsetof(GamepadKey_C_SetTexture, Texture) == 0x000000, "Member 'GamepadKey_C_SetTexture::Texture' has a wrong offset!");

// Function GamepadKey.GamepadKey_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct GamepadKey_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GamepadKey_C_PreConstruct) == 0x000001, "Wrong alignment on GamepadKey_C_PreConstruct");
static_assert(sizeof(GamepadKey_C_PreConstruct) == 0x000001, "Wrong size on GamepadKey_C_PreConstruct");
static_assert(offsetof(GamepadKey_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'GamepadKey_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

