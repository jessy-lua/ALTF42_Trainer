#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PDA_ScrollBarStyle

#include "Basic.hpp"

#include "PDA_WidgetStyle_classes.hpp"
#include "EColorPalette_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass PDA_ScrollBarStyle.PDA_ScrollBarStyle_C
// 0x0028 (0x0060 - 0x0038)
class UPDA_ScrollBarStyle_C final : public UPDA_WidgetStyle_C
{
public:
	EColorPalette                                 BarNormalColor;                                    // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F11[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CornerRadius;                                      // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              BarThickness;                                      // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EColorPalette                                 BarHighlightColor;                                 // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EColorPalette                                 BarDragColor;                                      // 0x0059(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PDA_ScrollBarStyle_C">();
	}
	static class UPDA_ScrollBarStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPDA_ScrollBarStyle_C>();
	}
};
static_assert(alignof(UPDA_ScrollBarStyle_C) == 0x000008, "Wrong alignment on UPDA_ScrollBarStyle_C");
static_assert(sizeof(UPDA_ScrollBarStyle_C) == 0x000060, "Wrong size on UPDA_ScrollBarStyle_C");
static_assert(offsetof(UPDA_ScrollBarStyle_C, BarNormalColor) == 0x000038, "Member 'UPDA_ScrollBarStyle_C::BarNormalColor' has a wrong offset!");
static_assert(offsetof(UPDA_ScrollBarStyle_C, CornerRadius) == 0x000040, "Member 'UPDA_ScrollBarStyle_C::CornerRadius' has a wrong offset!");
static_assert(offsetof(UPDA_ScrollBarStyle_C, BarThickness) == 0x000048, "Member 'UPDA_ScrollBarStyle_C::BarThickness' has a wrong offset!");
static_assert(offsetof(UPDA_ScrollBarStyle_C, BarHighlightColor) == 0x000058, "Member 'UPDA_ScrollBarStyle_C::BarHighlightColor' has a wrong offset!");
static_assert(offsetof(UPDA_ScrollBarStyle_C, BarDragColor) == 0x000059, "Member 'UPDA_ScrollBarStyle_C::BarDragColor' has a wrong offset!");

}
