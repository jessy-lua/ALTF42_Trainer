#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OptionsPickerBase

#include "Basic.hpp"

#include "FFontStyle_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "WBP_InteractableUserWidget_classes.hpp"
#include "EWidgetStyleState_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OptionsPickerBase.WBP_OptionsPickerBase_C
// 0x0350 (0x07D0 - 0x0480)
class UWBP_OptionsPickerBase_C final : public UWBP_InteractableUserWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_OptionsPickerBase_C;            // 0x0480(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class FText>                           OptionsArray;                                      // 0x0488(0x0010)(Edit, BlueprintVisible)
	int32                                         ActiveOptionIndex;                                 // 0x0498(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FEC[0x4];                                     // 0x049C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_OptionsPickerSubButtonBase_C*> SubButtonWidgets;                                  // 0x04A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnOptionChanged;                                   // 0x04B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         DefaultOptionIndex;                                // 0x04C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FED[0x4];                                     // 0x04C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class UTexture2D>>      OptionsImageArray;                                 // 0x04C8(0x0010)(Edit, BlueprintVisible)
	bool                                          ShowSubButtons;                                    // 0x04D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FEE[0x3];                                     // 0x04D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           LeftBackgroundColor;                               // 0x04DC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           RightBackgroundColor;                              // 0x04EC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LeftHighlightColor;                                // 0x04FC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           RightHighlightColor;                               // 0x050C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LeftActiveColor;                                   // 0x051C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           RightActiveColor;                                  // 0x052C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LeftDisabledColor;                                 // 0x053C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           RightDisabledColor;                                // 0x054C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ButtonColor;                                       // 0x055C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ButtonHighlightColor;                              // 0x056C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ButtonActiveColor;                                 // 0x057C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ButtonDisabledColor;                               // 0x058C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TextColor;                                         // 0x059C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TextHighlightColor;                                // 0x05AC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TextActiveColor;                                   // 0x05BC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TextDisabledColor;                                 // 0x05CC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ActiveOptionTextColor;                             // 0x05DC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ActiveOptionTextHighlightColor;                    // 0x05EC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ActiveOptionTextActiveColor;                       // 0x05FC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ActiveOptionTextDisabledColor;                     // 0x060C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FEF[0x4];                                     // 0x061C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBox*                         OptionsHorizontalBoxRef;                           // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UButton*                                PreviousOptionButtonRef;                           // 0x0628(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UButton*                                NextOptionButtonRef;                               // 0x0630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                             SubButtonsScrollBoxRef;                            // 0x0638(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                OuterBorderRef;                                    // 0x0640(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 NextOptionButtonImageRef;                          // 0x0648(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 PreviousOptionButtonImageRef;                      // 0x0650(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             OptionNameTextRef;                                 // 0x0658(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                LeftBorderRef;                                     // 0x0660(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                RightBorderRef;                                    // 0x0668(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             ActiveOptionTextRef;                               // 0x0670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UButton*                                HoverButtonRef;                                    // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 SubButtonClass;                                    // 0x0680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         LoadedValue;                                       // 0x0688(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxSelectableIndex;                                // 0x068C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxRef;                                        // 0x0690(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bOnlyShowNextPreviousButtonsOnHighlight;           // 0x0698(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FF0[0x7];                                     // 0x0699(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnOptionApply;                                     // 0x06A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FFFontStyle                            TextFontStyle;                                     // 0x06B0(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FFFontStyle                            TextValueFontStyle;                                // 0x0730(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bTextAutoScrolls;                                  // 0x07B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FF1[0x7];                                     // 0x07B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        AutoScrollSpeed;                                   // 0x07B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPDA_OptionsPickerStyle_C*              StyleData;                                         // 0x07C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bTextAutoScroll;                                   // 0x07C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateSubButtons();
	void SubOnClick(int32 InIndex);
	void SetWidgetState(EWidgetStyleState Param_WidgetState);
	void SetupSubButtons();
	void SetupOptionNameText();
	void SetSettingsValue();
	void SetDefaultOptionIndex();
	void SetCurrentIndex(int32 InIndex, bool bPlaySound);
	void SetCurrentImage(int32 Param_Index);
	void SetChangeOptionsButtonVisibility(bool bIsVisible);
	void SetActiveOptionTextSettings();
	void SetActiveOptionText(bool Language_OptionPicker_, TArray<class FString>& Language_Array);
	void SetActiveOption(int32 InIndex, bool bOptionChangedIgnore, bool bPlaySound, bool bForceAllowIndex);
	void ResetSettingsValue();
	void ResetAutoScrollText();
	void RemoveOption(int32 IndexToRemove);
	void PreConstruct(bool IsDesignTime);
	void OverrideWidgetStyleFromConfig();
	void OnSetupOptionsPicker();
	void OnSetHighlightEffect(EWidgetStyleState Param_HighlightState, bool bPlaySound);
	void OnParentMenuSetupComplete();
	void OnOptionChanged__DelegateSignature(int32 ActiveIndex, class UWBP_OptionsPickerBase_C* OptionPicker);
	void OnOptionApply__DelegateSignature(class UWBP_OptionsPickerBase_C* OptionsPicker);
	void OnNavigateRight();
	void OnNavigateLeft();
	void OnAnimateAutoScrollText();
	void IsInOptionsArrayBounds(int32 InIndex, bool* bIsInBounds);
	void GetSettingsValue();
	void ExecuteUbergraph_WBP_OptionsPickerBase(int32 EntryPoint);
	void Destruct();
	void Construct();
	void ChangeArrowButtonHighlightEffect(bool bIsHovered, class UImage* InImage);
	void ApplyWidgetStyleNormal();
	void ApplyWidgetStyleHighlighted();
	void ApplyWidgetStyleDisabled();
	void ApplyWidgetStyleActive();
	void ApplySettingsValue();
	void AnimateAutoScrollText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_OptionsPickerBase_C">();
	}
	static class UWBP_OptionsPickerBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OptionsPickerBase_C>();
	}
};
static_assert(alignof(UWBP_OptionsPickerBase_C) == 0x000008, "Wrong alignment on UWBP_OptionsPickerBase_C");
static_assert(sizeof(UWBP_OptionsPickerBase_C) == 0x0007D0, "Wrong size on UWBP_OptionsPickerBase_C");
static_assert(offsetof(UWBP_OptionsPickerBase_C, UberGraphFrame_WBP_OptionsPickerBase_C) == 0x000480, "Member 'UWBP_OptionsPickerBase_C::UberGraphFrame_WBP_OptionsPickerBase_C' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, OptionsArray) == 0x000488, "Member 'UWBP_OptionsPickerBase_C::OptionsArray' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, ActiveOptionIndex) == 0x000498, "Member 'UWBP_OptionsPickerBase_C::ActiveOptionIndex' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, SubButtonWidgets) == 0x0004A0, "Member 'UWBP_OptionsPickerBase_C::SubButtonWidgets' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, OnOptionChanged) == 0x0004B0, "Member 'UWBP_OptionsPickerBase_C::OnOptionChanged' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, DefaultOptionIndex) == 0x0004C0, "Member 'UWBP_OptionsPickerBase_C::DefaultOptionIndex' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, OptionsImageArray) == 0x0004C8, "Member 'UWBP_OptionsPickerBase_C::OptionsImageArray' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, ShowSubButtons) == 0x0004D8, "Member 'UWBP_OptionsPickerBase_C::ShowSubButtons' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, LeftBackgroundColor) == 0x0004DC, "Member 'UWBP_OptionsPickerBase_C::LeftBackgroundColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, RightBackgroundColor) == 0x0004EC, "Member 'UWBP_OptionsPickerBase_C::RightBackgroundColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, LeftHighlightColor) == 0x0004FC, "Member 'UWBP_OptionsPickerBase_C::LeftHighlightColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, RightHighlightColor) == 0x00050C, "Member 'UWBP_OptionsPickerBase_C::RightHighlightColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, LeftActiveColor) == 0x00051C, "Member 'UWBP_OptionsPickerBase_C::LeftActiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, RightActiveColor) == 0x00052C, "Member 'UWBP_OptionsPickerBase_C::RightActiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, LeftDisabledColor) == 0x00053C, "Member 'UWBP_OptionsPickerBase_C::LeftDisabledColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, RightDisabledColor) == 0x00054C, "Member 'UWBP_OptionsPickerBase_C::RightDisabledColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, ButtonColor) == 0x00055C, "Member 'UWBP_OptionsPickerBase_C::ButtonColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, ButtonHighlightColor) == 0x00056C, "Member 'UWBP_OptionsPickerBase_C::ButtonHighlightColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, ButtonActiveColor) == 0x00057C, "Member 'UWBP_OptionsPickerBase_C::ButtonActiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, ButtonDisabledColor) == 0x00058C, "Member 'UWBP_OptionsPickerBase_C::ButtonDisabledColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, TextColor) == 0x00059C, "Member 'UWBP_OptionsPickerBase_C::TextColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, TextHighlightColor) == 0x0005AC, "Member 'UWBP_OptionsPickerBase_C::TextHighlightColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, TextActiveColor) == 0x0005BC, "Member 'UWBP_OptionsPickerBase_C::TextActiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, TextDisabledColor) == 0x0005CC, "Member 'UWBP_OptionsPickerBase_C::TextDisabledColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, ActiveOptionTextColor) == 0x0005DC, "Member 'UWBP_OptionsPickerBase_C::ActiveOptionTextColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, ActiveOptionTextHighlightColor) == 0x0005EC, "Member 'UWBP_OptionsPickerBase_C::ActiveOptionTextHighlightColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, ActiveOptionTextActiveColor) == 0x0005FC, "Member 'UWBP_OptionsPickerBase_C::ActiveOptionTextActiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, ActiveOptionTextDisabledColor) == 0x00060C, "Member 'UWBP_OptionsPickerBase_C::ActiveOptionTextDisabledColor' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, OptionsHorizontalBoxRef) == 0x000620, "Member 'UWBP_OptionsPickerBase_C::OptionsHorizontalBoxRef' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, PreviousOptionButtonRef) == 0x000628, "Member 'UWBP_OptionsPickerBase_C::PreviousOptionButtonRef' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, NextOptionButtonRef) == 0x000630, "Member 'UWBP_OptionsPickerBase_C::NextOptionButtonRef' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, SubButtonsScrollBoxRef) == 0x000638, "Member 'UWBP_OptionsPickerBase_C::SubButtonsScrollBoxRef' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, OuterBorderRef) == 0x000640, "Member 'UWBP_OptionsPickerBase_C::OuterBorderRef' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, NextOptionButtonImageRef) == 0x000648, "Member 'UWBP_OptionsPickerBase_C::NextOptionButtonImageRef' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, PreviousOptionButtonImageRef) == 0x000650, "Member 'UWBP_OptionsPickerBase_C::PreviousOptionButtonImageRef' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, OptionNameTextRef) == 0x000658, "Member 'UWBP_OptionsPickerBase_C::OptionNameTextRef' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, LeftBorderRef) == 0x000660, "Member 'UWBP_OptionsPickerBase_C::LeftBorderRef' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, RightBorderRef) == 0x000668, "Member 'UWBP_OptionsPickerBase_C::RightBorderRef' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, ActiveOptionTextRef) == 0x000670, "Member 'UWBP_OptionsPickerBase_C::ActiveOptionTextRef' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, HoverButtonRef) == 0x000678, "Member 'UWBP_OptionsPickerBase_C::HoverButtonRef' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, SubButtonClass) == 0x000680, "Member 'UWBP_OptionsPickerBase_C::SubButtonClass' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, LoadedValue) == 0x000688, "Member 'UWBP_OptionsPickerBase_C::LoadedValue' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, MaxSelectableIndex) == 0x00068C, "Member 'UWBP_OptionsPickerBase_C::MaxSelectableIndex' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, SizeBoxRef) == 0x000690, "Member 'UWBP_OptionsPickerBase_C::SizeBoxRef' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, bOnlyShowNextPreviousButtonsOnHighlight) == 0x000698, "Member 'UWBP_OptionsPickerBase_C::bOnlyShowNextPreviousButtonsOnHighlight' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, OnOptionApply) == 0x0006A0, "Member 'UWBP_OptionsPickerBase_C::OnOptionApply' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, TextFontStyle) == 0x0006B0, "Member 'UWBP_OptionsPickerBase_C::TextFontStyle' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, TextValueFontStyle) == 0x000730, "Member 'UWBP_OptionsPickerBase_C::TextValueFontStyle' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, bTextAutoScrolls) == 0x0007B0, "Member 'UWBP_OptionsPickerBase_C::bTextAutoScrolls' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, AutoScrollSpeed) == 0x0007B8, "Member 'UWBP_OptionsPickerBase_C::AutoScrollSpeed' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, StyleData) == 0x0007C0, "Member 'UWBP_OptionsPickerBase_C::StyleData' has a wrong offset!");
static_assert(offsetof(UWBP_OptionsPickerBase_C, bTextAutoScroll) == 0x0007C8, "Member 'UWBP_OptionsPickerBase_C::bTextAutoScroll' has a wrong offset!");

}
