#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsSlider

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "InteractableUserWidget_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionsSlider.OptionsSlider_C
// 0x00E0 (0x0858 - 0x0778)
class UOptionsSlider_C final : public UInteractableUserWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_OptionsSlider_C;                    // 0x0778(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                HoverButton;                                       // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HoverImage;                                        // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                LeftBorder;                                        // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OptionNameText;                                    // 0x0798(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                OuterBorder;                                       // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                RightBorder;                                       // 0x07A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                SliderBackgroundBorder;                            // 0x07B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                SliderHandle;                                      // 0x07B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           SliderProgressBar;                                 // 0x07C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                          SliderValueEditText;                               // 0x07C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnOptionChanged;                                   // 0x07D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        DefaultValue;                                      // 0x07E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SliderMinValue;                                    // 0x07E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SliderMaxValue;                                    // 0x07F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ValueDecimalPlaces;                                // 0x07F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3368[0x4];                                     // 0x07FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SliderStepSize;                                    // 0x0800(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MouseSliderStepSize;                               // 0x0808(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentValue;                                      // 0x0810(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentValueNormalized;                            // 0x0818(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OptionsSliderHighlightColor;                       // 0x0820(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OptionsSliderBgColor;                              // 0x0830(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 SliderPreviousAppliedText;                         // 0x0840(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsChangedAllowed;                                 // 0x0850(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bControllerChangedSlider;                          // 0x0851(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SliderHandle_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__SliderHandle_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__SliderHandle_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature();
	void BndEvt__SliderValueEditText_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__SliderValueEditText_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
	void ConvertInputToNumeric(const class FText& InText, class FText* ModifiedText);
	void ExecuteUbergraph_OptionsSlider(int32 EntryPoint);
	double GetDefaultValueNormalized();
	void GetScaledValue(double InValue, double* OnlyByMaxValue, double* Return_Value);
	void IncrementSlider(double InIncrementValue);
	void OnGlobalSettingsApply();
	void OnOptionChanged__DelegateSignature();
	void OnSetHoverEffect(bool bIsHovered, bool bPlaySound);
	void OnStartChangeCooldown();
	void SetGlobalSettings();
	void SetHoverEffect(bool IsOn);
	void SetSliderHandleValue(double InValue);
	void Setup_Slider_Initial();
	void SetupOptionNameText();
	void SetupSliderFromMenu(double InValue, bool OptionChangedIgnore);
	void Slider_RefreshEvent();
	void UpdateSlider(double InValue, bool bPlaySound, bool bOptionChangeIgnore);
	void UpdateSliderFromMouse(double InValue);
	void OnPressedLeft();
	void OnPressedRight();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionsSlider_C">();
	}
	static class UOptionsSlider_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionsSlider_C>();
	}
};
static_assert(alignof(UOptionsSlider_C) == 0x000008, "Wrong alignment on UOptionsSlider_C");
static_assert(sizeof(UOptionsSlider_C) == 0x000858, "Wrong size on UOptionsSlider_C");
static_assert(offsetof(UOptionsSlider_C, UberGraphFrame_OptionsSlider_C) == 0x000778, "Member 'UOptionsSlider_C::UberGraphFrame_OptionsSlider_C' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, HoverButton) == 0x000780, "Member 'UOptionsSlider_C::HoverButton' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, HoverImage) == 0x000788, "Member 'UOptionsSlider_C::HoverImage' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, LeftBorder) == 0x000790, "Member 'UOptionsSlider_C::LeftBorder' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, OptionNameText) == 0x000798, "Member 'UOptionsSlider_C::OptionNameText' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, OuterBorder) == 0x0007A0, "Member 'UOptionsSlider_C::OuterBorder' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, RightBorder) == 0x0007A8, "Member 'UOptionsSlider_C::RightBorder' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, SliderBackgroundBorder) == 0x0007B0, "Member 'UOptionsSlider_C::SliderBackgroundBorder' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, SliderHandle) == 0x0007B8, "Member 'UOptionsSlider_C::SliderHandle' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, SliderProgressBar) == 0x0007C0, "Member 'UOptionsSlider_C::SliderProgressBar' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, SliderValueEditText) == 0x0007C8, "Member 'UOptionsSlider_C::SliderValueEditText' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, OnOptionChanged) == 0x0007D0, "Member 'UOptionsSlider_C::OnOptionChanged' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, DefaultValue) == 0x0007E0, "Member 'UOptionsSlider_C::DefaultValue' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, SliderMinValue) == 0x0007E8, "Member 'UOptionsSlider_C::SliderMinValue' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, SliderMaxValue) == 0x0007F0, "Member 'UOptionsSlider_C::SliderMaxValue' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, ValueDecimalPlaces) == 0x0007F8, "Member 'UOptionsSlider_C::ValueDecimalPlaces' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, SliderStepSize) == 0x000800, "Member 'UOptionsSlider_C::SliderStepSize' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, MouseSliderStepSize) == 0x000808, "Member 'UOptionsSlider_C::MouseSliderStepSize' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, CurrentValue) == 0x000810, "Member 'UOptionsSlider_C::CurrentValue' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, CurrentValueNormalized) == 0x000818, "Member 'UOptionsSlider_C::CurrentValueNormalized' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, OptionsSliderHighlightColor) == 0x000820, "Member 'UOptionsSlider_C::OptionsSliderHighlightColor' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, OptionsSliderBgColor) == 0x000830, "Member 'UOptionsSlider_C::OptionsSliderBgColor' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, SliderPreviousAppliedText) == 0x000840, "Member 'UOptionsSlider_C::SliderPreviousAppliedText' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, bIsChangedAllowed) == 0x000850, "Member 'UOptionsSlider_C::bIsChangedAllowed' has a wrong offset!");
static_assert(offsetof(UOptionsSlider_C, bControllerChangedSlider) == 0x000851, "Member 'UOptionsSlider_C::bControllerChangedSlider' has a wrong offset!");

}
