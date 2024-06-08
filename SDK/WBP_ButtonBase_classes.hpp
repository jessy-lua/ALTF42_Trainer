#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ButtonBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EWidgetStyleState_structs.hpp"
#include "FWidgetAnimationData_structs.hpp"
#include "FFontStyle_structs.hpp"
#include "WBP_InteractableUserWidget_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ButtonBase.WBP_ButtonBase_C
// 0x0198 (0x0618 - 0x0480)
class UWBP_ButtonBase_C : public UWBP_InteractableUserWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_ButtonBase_C;                   // 0x0480(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FLinearColor                           BackgroundColor;                                   // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DisabledColor;                                     // 0x0498(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ActiveColor;                                       // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HighlightColor;                                    // 0x04B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                ButtonRef;                                         // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                OuterBorderRef;                                    // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             ButtonTextRef;                                     // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxRef;                                        // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TextColor;                                         // 0x04E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TextHighlightColor;                                // 0x04F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TextActiveColor;                                   // 0x0508(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TextDisabledColor;                                 // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFFontStyle                            TextFontStyle;                                     // 0x0528(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       HighlightAnimation;                                // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFWidgetAnimationData                  HighlightAnimationData;                            // 0x05B0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UnhighlightAnimation;                              // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFWidgetAnimationData                  UnhighlightAnimationData;                          // 0x05E0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPDA_ButtonStyle_C*                     StyleData;                                         // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsButtonAnimationActive;                          // 0x0610(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyWidgetStyleActive();
	void ApplyWidgetStyleDisabled();
	void ApplyWidgetStyleHighlighted();
	void ApplyWidgetStyleNormal();
	void Construct();
	void ExecuteUbergraph_WBP_ButtonBase(int32 EntryPoint);
	void OnButtonClicked();
	void OnButtonHovered();
	void SetupButtonText();
	void OnPressedBack(const struct FKeyEvent& KeyEvent);
	void OnPressedDown(const struct FKeyEvent& KeyEvent);
	void OnPressedLeft(const struct FKeyEvent& KeyEvent);
	void OnPressedRight(const struct FKeyEvent& KeyEvent);
	void OnPressedSelect(const struct FKeyEvent& KeyEvent);
	void OnPressedUp(const struct FKeyEvent& KeyEvent);
	void OnSetHighlightEffect(EWidgetStyleState Param_HighlightState, bool bPlaySound);
	void OverrideWidgetStyleFromConfig();
	void PreConstruct(bool IsDesignTime);
	void SetWidgetState(EWidgetStyleState Param_WidgetState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ButtonBase_C">();
	}
	static class UWBP_ButtonBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ButtonBase_C>();
	}
};
static_assert(alignof(UWBP_ButtonBase_C) == 0x000008, "Wrong alignment on UWBP_ButtonBase_C");
static_assert(sizeof(UWBP_ButtonBase_C) == 0x000618, "Wrong size on UWBP_ButtonBase_C");
static_assert(offsetof(UWBP_ButtonBase_C, UberGraphFrame_WBP_ButtonBase_C) == 0x000480, "Member 'UWBP_ButtonBase_C::UberGraphFrame_WBP_ButtonBase_C' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonBase_C, BackgroundColor) == 0x000488, "Member 'UWBP_ButtonBase_C::BackgroundColor' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonBase_C, DisabledColor) == 0x000498, "Member 'UWBP_ButtonBase_C::DisabledColor' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonBase_C, ActiveColor) == 0x0004A8, "Member 'UWBP_ButtonBase_C::ActiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonBase_C, HighlightColor) == 0x0004B8, "Member 'UWBP_ButtonBase_C::HighlightColor' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonBase_C, ButtonRef) == 0x0004C8, "Member 'UWBP_ButtonBase_C::ButtonRef' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonBase_C, OuterBorderRef) == 0x0004D0, "Member 'UWBP_ButtonBase_C::OuterBorderRef' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonBase_C, ButtonTextRef) == 0x0004D8, "Member 'UWBP_ButtonBase_C::ButtonTextRef' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonBase_C, SizeBoxRef) == 0x0004E0, "Member 'UWBP_ButtonBase_C::SizeBoxRef' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonBase_C, TextColor) == 0x0004E8, "Member 'UWBP_ButtonBase_C::TextColor' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonBase_C, TextHighlightColor) == 0x0004F8, "Member 'UWBP_ButtonBase_C::TextHighlightColor' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonBase_C, TextActiveColor) == 0x000508, "Member 'UWBP_ButtonBase_C::TextActiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonBase_C, TextDisabledColor) == 0x000518, "Member 'UWBP_ButtonBase_C::TextDisabledColor' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonBase_C, TextFontStyle) == 0x000528, "Member 'UWBP_ButtonBase_C::TextFontStyle' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonBase_C, HighlightAnimation) == 0x0005A8, "Member 'UWBP_ButtonBase_C::HighlightAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonBase_C, HighlightAnimationData) == 0x0005B0, "Member 'UWBP_ButtonBase_C::HighlightAnimationData' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonBase_C, UnhighlightAnimation) == 0x0005D8, "Member 'UWBP_ButtonBase_C::UnhighlightAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonBase_C, UnhighlightAnimationData) == 0x0005E0, "Member 'UWBP_ButtonBase_C::UnhighlightAnimationData' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonBase_C, StyleData) == 0x000608, "Member 'UWBP_ButtonBase_C::StyleData' has a wrong offset!");
static_assert(offsetof(UWBP_ButtonBase_C, bIsButtonAnimationActive) == 0x000610, "Member 'UWBP_ButtonBase_C::bIsButtonAnimationActive' has a wrong offset!");

}
