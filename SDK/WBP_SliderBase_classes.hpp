#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SliderBase

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FFontStyle_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "WBP_InteractableUserWidget_classes.hpp"
#include "EInputDeviceType_structs.hpp"
#include "EWidgetStyleState_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SliderBase.WBP_SliderBase_C
// 0x0400 (0x0880 - 0x0480)
class UWBP_SliderBase_C final : public UWBP_InteractableUserWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_SliderBase_C;                   // 0x0480(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnOptionChanged;                                   // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        SliderDefaultValue;                                // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SliderMinValue;                                    // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SliderMaxValue;                                    // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SliderStepSize;                                    // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ValueDecimalPlaces;                                // 0x04B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FB4[0x4];                                     // 0x04BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MouseSliderStepSize;                               // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        KeyboardInterpolationSpeed;                        // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        GamepadInterpolationSpeed;                         // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RampUpMaxFactor;                                   // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        KeyboardRampUpSpeed;                               // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        GamepadRampUpSpeed;                                // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentValue;                                      // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentValueNormalized;                            // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentRampUpFactor;                               // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SliderInterpolationSpeed;                          // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentRampUpSpeed;                                // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LeftBackgroundColor;                               // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           RightBackgroundColor;                              // 0x0528(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LeftHighlightColor;                                // 0x0538(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           RightHighlightColor;                               // 0x0548(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LeftActiveColor;                                   // 0x0558(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           RightActiveColor;                                  // 0x0568(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LeftDisabledColor;                                 // 0x0578(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           RightDisabledColor;                                // 0x0588(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TextColor;                                         // 0x0598(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TextHighlightColor;                                // 0x05A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TextActiveColor;                                   // 0x05B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TextDisabledColor;                                 // 0x05C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ValueColor;                                        // 0x05D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ValueHighlightColor;                               // 0x05E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ValueActiveColor;                                  // 0x05F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ValueDisabledColor;                                // 0x0608(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BarBackgroundColor;                                // 0x0618(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BarBackgroundHighlightColor;                       // 0x0628(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BarBackgroundActiveColor;                          // 0x0638(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BarBackgroundDisabledColor;                        // 0x0648(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BarColor;                                          // 0x0658(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BarHighlightColor;                                 // 0x0668(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BarActiveColor;                                    // 0x0678(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BarDisabledColor;                                  // 0x0688(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HandleColor;                                       // 0x0698(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HandleHighlightColor;                              // 0x06A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HandleActiveColor;                                 // 0x06B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HandleDisabledColor;                               // 0x06C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsChangeAllowed;                                  // 0x06D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FB5[0x7];                                     // 0x06D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_EditableText_C*                    SliderValueEditTextRef;                            // 0x06E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                OuterBorderRef;                                    // 0x06E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                           SliderProgressBarRef;                              // 0x06F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             OptionNameTextRef;                                 // 0x06F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                LeftBorderRef;                                     // 0x0700(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                RightBorderRef;                                    // 0x0708(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USlider*                                SliderHandleRef;                                   // 0x0710(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UButton*                                HoverButtonRef;                                    // 0x0718(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsTargetValueReached;                             // 0x0720(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsInputDirectionLeft;                             // 0x0721(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsHoldingKey;                                     // 0x0722(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FB6[0x5];                                     // 0x0723(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        LoadedValue;                                       // 0x0728(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCustomApplyMethod;                               // 0x0730(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USizeBox*                               SliderSizeBoxRef;                                  // 0x0740(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bMouseCaptureActive;                               // 0x0748(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FB7[0x7];                                     // 0x0749(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFFontStyle                            TextFontStyle;                                     // 0x0750(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FFFontStyle                            TextValueFontStyle;                                // 0x07D0(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsLeftOrRightKeyDown;                             // 0x0850(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SliderValueInputCooledDown;                        // 0x0851(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FB8[0x6];                                     // 0x0852(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        AmountOfHoldDownInputEvents;                       // 0x0858(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        GamepadInputEventsUntilRampUpStarts;               // 0x0860(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        KeyboardInputEventsUntilRampUpStarts;              // 0x0868(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSliderReady;                                    // 0x0870(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSliderUpdate;                                     // 0x0871(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSetSettings;                                      // 0x0872(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FB9[0x5];                                     // 0x0873(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPDA_SliderStyle_C*                     StyleData;                                         // 0x0878(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateSliderValue(double InValue, bool bPlaySound, bool bOptionChangeIgnore);
	void UpdateSliderProgressBarAndSliderHandle(float Value, double ValueNormalized);
	void UpdateSliderInterpolationSpeed();
	void UpdateSliderFromMouse(double InValue);
	void UpdateSliderAndIncrementRampUpSpeed();
	void UpdateSlider();
	void UpdateIsHoldingKey(const struct FKeyEvent& Event);
	void SetWidgetState(EWidgetStyleState Param_WidgetState);
	void SetValueTextFromNumber(float Value);
	void SetupSliderInitial();
	void SetupOptionNameText();
	void SetSliderHandleValue(double InValue);
	void SetSliderBackgroundColor(const struct FLinearColor& SpecifiedColor);
	void SetSettingsValue();
	void ResetSpeedOnTargetReached();
	void ResetSettingsValue();
	void PreConstruct(bool IsDesignTime);
	void OverrideWidgetStyleFromConfig();
	void OnUpdateSlider();
	void OnStartChangeCooldown();
	void OnSliderValueInputCooldown();
	void OnSliderValueEditTextCommited(const class FText& Text, ETextCommit CommitMethod);
	void OnSliderValueEditTextChanged(const class FText& Text);
	void OnSetupSlider();
	void OnSetSettingsValueQueue();
	void OnSetHighlightEffect(EWidgetStyleState Param_HighlightState, bool bPlaySound);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnOptionChanged__DelegateSignature(double Param_CurrentValue, class UWBP_SliderBase_C* OptionsSlider);
	void OnMouseCaptureEndSlider();
	void OnMouseCaptureBeginSlider();
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnDelayedSetSettingsValue();
	void OnCustomApplyMethod__DelegateSignature(class UWBP_SliderBase_C* OptionSliderBase);
	void IncrementWithRampUpSpeed();
	void IncrementSlider(double InIncrementValue);
	void IncrementSingleStep();
	void IncreaseSliderRampUpSpeed();
	void GetSettingsValue();
	void GetScaledValue(double InValue, double* OnlyByMaxValue, double* Return_Value);
	double GetDefaultValueNormalized();
	void ExecuteUbergraph_WBP_SliderBase(int32 EntryPoint);
	void ConvertInputToNumeric(const class FText& InText, class FText* ModifiedText);
	void Construct();
	void ApplyWidgetStyleNormal();
	void ApplyWidgetStyleHighlighted();
	void ApplyWidgetStyleDisabled();
	void ApplyWidgetStyleActive();
	void ApplySettingsValue();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SliderBase_C">();
	}
	static class UWBP_SliderBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SliderBase_C>();
	}
};
static_assert(alignof(UWBP_SliderBase_C) == 0x000008, "Wrong alignment on UWBP_SliderBase_C");
static_assert(sizeof(UWBP_SliderBase_C) == 0x000880, "Wrong size on UWBP_SliderBase_C");
static_assert(offsetof(UWBP_SliderBase_C, UberGraphFrame_WBP_SliderBase_C) == 0x000480, "Member 'UWBP_SliderBase_C::UberGraphFrame_WBP_SliderBase_C' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, OnOptionChanged) == 0x000488, "Member 'UWBP_SliderBase_C::OnOptionChanged' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, SliderDefaultValue) == 0x000498, "Member 'UWBP_SliderBase_C::SliderDefaultValue' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, SliderMinValue) == 0x0004A0, "Member 'UWBP_SliderBase_C::SliderMinValue' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, SliderMaxValue) == 0x0004A8, "Member 'UWBP_SliderBase_C::SliderMaxValue' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, SliderStepSize) == 0x0004B0, "Member 'UWBP_SliderBase_C::SliderStepSize' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, ValueDecimalPlaces) == 0x0004B8, "Member 'UWBP_SliderBase_C::ValueDecimalPlaces' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, MouseSliderStepSize) == 0x0004C0, "Member 'UWBP_SliderBase_C::MouseSliderStepSize' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, KeyboardInterpolationSpeed) == 0x0004C8, "Member 'UWBP_SliderBase_C::KeyboardInterpolationSpeed' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, GamepadInterpolationSpeed) == 0x0004D0, "Member 'UWBP_SliderBase_C::GamepadInterpolationSpeed' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, RampUpMaxFactor) == 0x0004D8, "Member 'UWBP_SliderBase_C::RampUpMaxFactor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, KeyboardRampUpSpeed) == 0x0004E0, "Member 'UWBP_SliderBase_C::KeyboardRampUpSpeed' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, GamepadRampUpSpeed) == 0x0004E8, "Member 'UWBP_SliderBase_C::GamepadRampUpSpeed' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, CurrentValue) == 0x0004F0, "Member 'UWBP_SliderBase_C::CurrentValue' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, CurrentValueNormalized) == 0x0004F8, "Member 'UWBP_SliderBase_C::CurrentValueNormalized' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, CurrentRampUpFactor) == 0x000500, "Member 'UWBP_SliderBase_C::CurrentRampUpFactor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, SliderInterpolationSpeed) == 0x000508, "Member 'UWBP_SliderBase_C::SliderInterpolationSpeed' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, CurrentRampUpSpeed) == 0x000510, "Member 'UWBP_SliderBase_C::CurrentRampUpSpeed' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, LeftBackgroundColor) == 0x000518, "Member 'UWBP_SliderBase_C::LeftBackgroundColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, RightBackgroundColor) == 0x000528, "Member 'UWBP_SliderBase_C::RightBackgroundColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, LeftHighlightColor) == 0x000538, "Member 'UWBP_SliderBase_C::LeftHighlightColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, RightHighlightColor) == 0x000548, "Member 'UWBP_SliderBase_C::RightHighlightColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, LeftActiveColor) == 0x000558, "Member 'UWBP_SliderBase_C::LeftActiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, RightActiveColor) == 0x000568, "Member 'UWBP_SliderBase_C::RightActiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, LeftDisabledColor) == 0x000578, "Member 'UWBP_SliderBase_C::LeftDisabledColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, RightDisabledColor) == 0x000588, "Member 'UWBP_SliderBase_C::RightDisabledColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, TextColor) == 0x000598, "Member 'UWBP_SliderBase_C::TextColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, TextHighlightColor) == 0x0005A8, "Member 'UWBP_SliderBase_C::TextHighlightColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, TextActiveColor) == 0x0005B8, "Member 'UWBP_SliderBase_C::TextActiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, TextDisabledColor) == 0x0005C8, "Member 'UWBP_SliderBase_C::TextDisabledColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, ValueColor) == 0x0005D8, "Member 'UWBP_SliderBase_C::ValueColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, ValueHighlightColor) == 0x0005E8, "Member 'UWBP_SliderBase_C::ValueHighlightColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, ValueActiveColor) == 0x0005F8, "Member 'UWBP_SliderBase_C::ValueActiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, ValueDisabledColor) == 0x000608, "Member 'UWBP_SliderBase_C::ValueDisabledColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, BarBackgroundColor) == 0x000618, "Member 'UWBP_SliderBase_C::BarBackgroundColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, BarBackgroundHighlightColor) == 0x000628, "Member 'UWBP_SliderBase_C::BarBackgroundHighlightColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, BarBackgroundActiveColor) == 0x000638, "Member 'UWBP_SliderBase_C::BarBackgroundActiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, BarBackgroundDisabledColor) == 0x000648, "Member 'UWBP_SliderBase_C::BarBackgroundDisabledColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, BarColor) == 0x000658, "Member 'UWBP_SliderBase_C::BarColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, BarHighlightColor) == 0x000668, "Member 'UWBP_SliderBase_C::BarHighlightColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, BarActiveColor) == 0x000678, "Member 'UWBP_SliderBase_C::BarActiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, BarDisabledColor) == 0x000688, "Member 'UWBP_SliderBase_C::BarDisabledColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, HandleColor) == 0x000698, "Member 'UWBP_SliderBase_C::HandleColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, HandleHighlightColor) == 0x0006A8, "Member 'UWBP_SliderBase_C::HandleHighlightColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, HandleActiveColor) == 0x0006B8, "Member 'UWBP_SliderBase_C::HandleActiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, HandleDisabledColor) == 0x0006C8, "Member 'UWBP_SliderBase_C::HandleDisabledColor' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, bIsChangeAllowed) == 0x0006D8, "Member 'UWBP_SliderBase_C::bIsChangeAllowed' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, SliderValueEditTextRef) == 0x0006E0, "Member 'UWBP_SliderBase_C::SliderValueEditTextRef' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, OuterBorderRef) == 0x0006E8, "Member 'UWBP_SliderBase_C::OuterBorderRef' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, SliderProgressBarRef) == 0x0006F0, "Member 'UWBP_SliderBase_C::SliderProgressBarRef' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, OptionNameTextRef) == 0x0006F8, "Member 'UWBP_SliderBase_C::OptionNameTextRef' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, LeftBorderRef) == 0x000700, "Member 'UWBP_SliderBase_C::LeftBorderRef' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, RightBorderRef) == 0x000708, "Member 'UWBP_SliderBase_C::RightBorderRef' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, SliderHandleRef) == 0x000710, "Member 'UWBP_SliderBase_C::SliderHandleRef' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, HoverButtonRef) == 0x000718, "Member 'UWBP_SliderBase_C::HoverButtonRef' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, bIsTargetValueReached) == 0x000720, "Member 'UWBP_SliderBase_C::bIsTargetValueReached' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, bIsInputDirectionLeft) == 0x000721, "Member 'UWBP_SliderBase_C::bIsInputDirectionLeft' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, bIsHoldingKey) == 0x000722, "Member 'UWBP_SliderBase_C::bIsHoldingKey' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, LoadedValue) == 0x000728, "Member 'UWBP_SliderBase_C::LoadedValue' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, OnCustomApplyMethod) == 0x000730, "Member 'UWBP_SliderBase_C::OnCustomApplyMethod' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, SliderSizeBoxRef) == 0x000740, "Member 'UWBP_SliderBase_C::SliderSizeBoxRef' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, bMouseCaptureActive) == 0x000748, "Member 'UWBP_SliderBase_C::bMouseCaptureActive' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, TextFontStyle) == 0x000750, "Member 'UWBP_SliderBase_C::TextFontStyle' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, TextValueFontStyle) == 0x0007D0, "Member 'UWBP_SliderBase_C::TextValueFontStyle' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, bIsLeftOrRightKeyDown) == 0x000850, "Member 'UWBP_SliderBase_C::bIsLeftOrRightKeyDown' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, SliderValueInputCooledDown) == 0x000851, "Member 'UWBP_SliderBase_C::SliderValueInputCooledDown' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, AmountOfHoldDownInputEvents) == 0x000858, "Member 'UWBP_SliderBase_C::AmountOfHoldDownInputEvents' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, GamepadInputEventsUntilRampUpStarts) == 0x000860, "Member 'UWBP_SliderBase_C::GamepadInputEventsUntilRampUpStarts' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, KeyboardInputEventsUntilRampUpStarts) == 0x000868, "Member 'UWBP_SliderBase_C::KeyboardInputEventsUntilRampUpStarts' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, bIsSliderReady) == 0x000870, "Member 'UWBP_SliderBase_C::bIsSliderReady' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, bSliderUpdate) == 0x000871, "Member 'UWBP_SliderBase_C::bSliderUpdate' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, bSetSettings) == 0x000872, "Member 'UWBP_SliderBase_C::bSetSettings' has a wrong offset!");
static_assert(offsetof(UWBP_SliderBase_C, StyleData) == 0x000878, "Member 'UWBP_SliderBase_C::StyleData' has a wrong offset!");

}

