#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioWidgets

#include "Basic.hpp"

#include "AudioWidgets_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// Class AudioWidgets.AudioMeter
// 0x0580 (0x0700 - 0x0180)
class UAudioMeter final : public UWidget
{
public:
	TArray<struct FMeterChannelInfo>              MeterChannelInfo;                                  // 0x0180(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TDelegate<void()>                             MeterChannelInfoDelegate;                          // 0x0190(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAudioMeterStyle                       WidgetStyle;                                       // 0x01A0(0x04D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	EOrientation                                  Orientation;                                       // 0x0670(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C29[0x3];                                     // 0x0671(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           BackgroundColor;                                   // 0x0674(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MeterBackgroundColor;                              // 0x0684(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MeterValueColor;                                   // 0x0694(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MeterPeakColor;                                    // 0x06A4(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MeterClippingColor;                                // 0x06B4(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MeterScaleColor;                                   // 0x06C4(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MeterScaleLabelColor;                              // 0x06D4(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C2A[0x1C];                                    // 0x06E4(0x001C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	TArray<struct FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();
	void SetBackgroundColor(const struct FLinearColor& InValue);
	void SetMeterBackgroundColor(const struct FLinearColor& InValue);
	void SetMeterChannelInfo(const TArray<struct FMeterChannelInfo>& InMeterChannelInfo);
	void SetMeterClippingColor(const struct FLinearColor& InValue);
	void SetMeterPeakColor(const struct FLinearColor& InValue);
	void SetMeterScaleColor(const struct FLinearColor& InValue);
	void SetMeterScaleLabelColor(const struct FLinearColor& InValue);
	void SetMeterValueColor(const struct FLinearColor& InValue);

	TArray<struct FMeterChannelInfo> GetMeterChannelInfo() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioMeter">();
	}
	static class UAudioMeter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioMeter>();
	}
};
static_assert(alignof(UAudioMeter) == 0x000010, "Wrong alignment on UAudioMeter");
static_assert(sizeof(UAudioMeter) == 0x000700, "Wrong size on UAudioMeter");
static_assert(offsetof(UAudioMeter, MeterChannelInfo) == 0x000180, "Member 'UAudioMeter::MeterChannelInfo' has a wrong offset!");
static_assert(offsetof(UAudioMeter, MeterChannelInfoDelegate) == 0x000190, "Member 'UAudioMeter::MeterChannelInfoDelegate' has a wrong offset!");
static_assert(offsetof(UAudioMeter, WidgetStyle) == 0x0001A0, "Member 'UAudioMeter::WidgetStyle' has a wrong offset!");
static_assert(offsetof(UAudioMeter, Orientation) == 0x000670, "Member 'UAudioMeter::Orientation' has a wrong offset!");
static_assert(offsetof(UAudioMeter, BackgroundColor) == 0x000674, "Member 'UAudioMeter::BackgroundColor' has a wrong offset!");
static_assert(offsetof(UAudioMeter, MeterBackgroundColor) == 0x000684, "Member 'UAudioMeter::MeterBackgroundColor' has a wrong offset!");
static_assert(offsetof(UAudioMeter, MeterValueColor) == 0x000694, "Member 'UAudioMeter::MeterValueColor' has a wrong offset!");
static_assert(offsetof(UAudioMeter, MeterPeakColor) == 0x0006A4, "Member 'UAudioMeter::MeterPeakColor' has a wrong offset!");
static_assert(offsetof(UAudioMeter, MeterClippingColor) == 0x0006B4, "Member 'UAudioMeter::MeterClippingColor' has a wrong offset!");
static_assert(offsetof(UAudioMeter, MeterScaleColor) == 0x0006C4, "Member 'UAudioMeter::MeterScaleColor' has a wrong offset!");
static_assert(offsetof(UAudioMeter, MeterScaleLabelColor) == 0x0006D4, "Member 'UAudioMeter::MeterScaleLabelColor' has a wrong offset!");

// Class AudioWidgets.AudioRadialSlider
// 0x0220 (0x03A0 - 0x0180)
class alignas(0x10) UAudioRadialSlider : public UWidget
{
public:
	float                                         Value;                                             // 0x0180(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             ValueDelegate;                                     // 0x0184(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAudioRadialSliderLayout                      WidgetLayout;                                      // 0x0194(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C2B[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CenterBackgroundColor;                             // 0x0198(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SliderProgressColor;                               // 0x01A8(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SliderBarColor;                                    // 0x01B8(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              HandStartEndRatio;                                 // 0x01C8(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   UnitsText;                                         // 0x01D8(0x0018)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                           TextLabelBackgroundColor;                          // 0x01F0(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowLabelOnlyOnHover;                              // 0x0200(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowUnitsText;                                     // 0x0201(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsUnitsTextReadOnly;                               // 0x0202(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsValueTextReadOnly;                               // 0x0203(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SliderThickness;                                   // 0x0204(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              OutputRange;                                       // 0x0208(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnValueChanged;                                    // 0x0218(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C2C[0x178];                                   // 0x0228(0x0178)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetOutputValue(const float InSliderValue);
	float GetSliderValue(const float OutputValue);
	void SetCenterBackgroundColor(const struct FLinearColor& InValue);
	void SetHandStartEndRatio(const struct FVector2D& InHandStartEndRatio);
	void SetOutputRange(const struct FVector2D& InOutputRange);
	void SetShowLabelOnlyOnHover(const bool bShowLabelOnlyOnHover);
	void SetShowUnitsText(const bool bShowUnitsText);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetSliderProgressColor(const struct FLinearColor& InValue);
	void SetSliderThickness(const float InThickness);
	void SetTextLabelBackgroundColor(const struct FSlateColor& InColor);
	void SetUnitsText(const class FText& Units);
	void SetUnitsTextReadOnly(const bool bIsReadOnly);
	void SetValueTextReadOnly(const bool bIsReadOnly);
	void SetWidgetLayout(EAudioRadialSliderLayout InLayout);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioRadialSlider">();
	}
	static class UAudioRadialSlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioRadialSlider>();
	}
};
static_assert(alignof(UAudioRadialSlider) == 0x000010, "Wrong alignment on UAudioRadialSlider");
static_assert(sizeof(UAudioRadialSlider) == 0x0003A0, "Wrong size on UAudioRadialSlider");
static_assert(offsetof(UAudioRadialSlider, Value) == 0x000180, "Member 'UAudioRadialSlider::Value' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, ValueDelegate) == 0x000184, "Member 'UAudioRadialSlider::ValueDelegate' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, WidgetLayout) == 0x000194, "Member 'UAudioRadialSlider::WidgetLayout' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, CenterBackgroundColor) == 0x000198, "Member 'UAudioRadialSlider::CenterBackgroundColor' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, SliderProgressColor) == 0x0001A8, "Member 'UAudioRadialSlider::SliderProgressColor' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, SliderBarColor) == 0x0001B8, "Member 'UAudioRadialSlider::SliderBarColor' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, HandStartEndRatio) == 0x0001C8, "Member 'UAudioRadialSlider::HandStartEndRatio' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, UnitsText) == 0x0001D8, "Member 'UAudioRadialSlider::UnitsText' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, TextLabelBackgroundColor) == 0x0001F0, "Member 'UAudioRadialSlider::TextLabelBackgroundColor' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, ShowLabelOnlyOnHover) == 0x000200, "Member 'UAudioRadialSlider::ShowLabelOnlyOnHover' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, ShowUnitsText) == 0x000201, "Member 'UAudioRadialSlider::ShowUnitsText' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, IsUnitsTextReadOnly) == 0x000202, "Member 'UAudioRadialSlider::IsUnitsTextReadOnly' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, IsValueTextReadOnly) == 0x000203, "Member 'UAudioRadialSlider::IsValueTextReadOnly' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, SliderThickness) == 0x000204, "Member 'UAudioRadialSlider::SliderThickness' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, OutputRange) == 0x000208, "Member 'UAudioRadialSlider::OutputRange' has a wrong offset!");
static_assert(offsetof(UAudioRadialSlider, OnValueChanged) == 0x000218, "Member 'UAudioRadialSlider::OnValueChanged' has a wrong offset!");

// Class AudioWidgets.AudioVolumeRadialSlider
// 0x0000 (0x03A0 - 0x03A0)
class UAudioVolumeRadialSlider final : public UAudioRadialSlider
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioVolumeRadialSlider">();
	}
	static class UAudioVolumeRadialSlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioVolumeRadialSlider>();
	}
};
static_assert(alignof(UAudioVolumeRadialSlider) == 0x000010, "Wrong alignment on UAudioVolumeRadialSlider");
static_assert(sizeof(UAudioVolumeRadialSlider) == 0x0003A0, "Wrong size on UAudioVolumeRadialSlider");

// Class AudioWidgets.AudioFrequencyRadialSlider
// 0x0000 (0x03A0 - 0x03A0)
class UAudioFrequencyRadialSlider final : public UAudioRadialSlider
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioFrequencyRadialSlider">();
	}
	static class UAudioFrequencyRadialSlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioFrequencyRadialSlider>();
	}
};
static_assert(alignof(UAudioFrequencyRadialSlider) == 0x000010, "Wrong alignment on UAudioFrequencyRadialSlider");
static_assert(sizeof(UAudioFrequencyRadialSlider) == 0x0003A0, "Wrong size on UAudioFrequencyRadialSlider");

// Class AudioWidgets.AudioSliderBase
// 0x0850 (0x09D0 - 0x0180)
class alignas(0x10) UAudioSliderBase : public UWidget
{
public:
	float                                         Value;                                             // 0x0180(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C2D[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   UnitsText;                                         // 0x0188(0x0018)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                           TextLabelBackgroundColor;                          // 0x01A0(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             TextLabelBackgroundColorDelegate;                  // 0x01B0(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowLabelOnlyOnHover;                              // 0x01C0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowUnitsText;                                     // 0x01C1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsUnitsTextReadOnly;                               // 0x01C2(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsValueTextReadOnly;                               // 0x01C3(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             ValueDelegate;                                     // 0x01C4(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SliderBackgroundColor;                             // 0x01D4(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             SliderBackgroundColorDelegate;                     // 0x01E4(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SliderBarColor;                                    // 0x01F4(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             SliderBarColorDelegate;                            // 0x0204(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SliderThumbColor;                                  // 0x0214(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             SliderThumbColorDelegate;                          // 0x0224(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           WidgetBackgroundColor;                             // 0x0234(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             WidgetBackgroundColorDelegate;                     // 0x0244(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOrientation                                  Orientation;                                       // 0x0254(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C2E[0x3];                                     // 0x0255(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnValueChanged;                                    // 0x0258(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C2F[0x768];                                   // 0x0268(0x0768)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetLinValue(const float OutputValue);
	float GetOutputValue(const float InSliderValue);
	float GetSliderValue(const float OutputValue);
	void SetShowLabelOnlyOnHover(const bool bShowLabelOnlyOnHover);
	void SetShowUnitsText(const bool bShowUnitsText);
	void SetSliderBackgroundColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetSliderThumbColor(const struct FLinearColor& InValue);
	void SetTextLabelBackgroundColor(const struct FSlateColor& InColor);
	void SetUnitsText(const class FText& Units);
	void SetUnitsTextReadOnly(const bool bIsReadOnly);
	void SetValueTextReadOnly(const bool bIsReadOnly);
	void SetWidgetBackgroundColor(const struct FLinearColor& InValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioSliderBase">();
	}
	static class UAudioSliderBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioSliderBase>();
	}
};
static_assert(alignof(UAudioSliderBase) == 0x000010, "Wrong alignment on UAudioSliderBase");
static_assert(sizeof(UAudioSliderBase) == 0x0009D0, "Wrong size on UAudioSliderBase");
static_assert(offsetof(UAudioSliderBase, Value) == 0x000180, "Member 'UAudioSliderBase::Value' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, UnitsText) == 0x000188, "Member 'UAudioSliderBase::UnitsText' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, TextLabelBackgroundColor) == 0x0001A0, "Member 'UAudioSliderBase::TextLabelBackgroundColor' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, TextLabelBackgroundColorDelegate) == 0x0001B0, "Member 'UAudioSliderBase::TextLabelBackgroundColorDelegate' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, ShowLabelOnlyOnHover) == 0x0001C0, "Member 'UAudioSliderBase::ShowLabelOnlyOnHover' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, ShowUnitsText) == 0x0001C1, "Member 'UAudioSliderBase::ShowUnitsText' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, IsUnitsTextReadOnly) == 0x0001C2, "Member 'UAudioSliderBase::IsUnitsTextReadOnly' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, IsValueTextReadOnly) == 0x0001C3, "Member 'UAudioSliderBase::IsValueTextReadOnly' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, ValueDelegate) == 0x0001C4, "Member 'UAudioSliderBase::ValueDelegate' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, SliderBackgroundColor) == 0x0001D4, "Member 'UAudioSliderBase::SliderBackgroundColor' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, SliderBackgroundColorDelegate) == 0x0001E4, "Member 'UAudioSliderBase::SliderBackgroundColorDelegate' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, SliderBarColor) == 0x0001F4, "Member 'UAudioSliderBase::SliderBarColor' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, SliderBarColorDelegate) == 0x000204, "Member 'UAudioSliderBase::SliderBarColorDelegate' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, SliderThumbColor) == 0x000214, "Member 'UAudioSliderBase::SliderThumbColor' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, SliderThumbColorDelegate) == 0x000224, "Member 'UAudioSliderBase::SliderThumbColorDelegate' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, WidgetBackgroundColor) == 0x000234, "Member 'UAudioSliderBase::WidgetBackgroundColor' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, WidgetBackgroundColorDelegate) == 0x000244, "Member 'UAudioSliderBase::WidgetBackgroundColorDelegate' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, Orientation) == 0x000254, "Member 'UAudioSliderBase::Orientation' has a wrong offset!");
static_assert(offsetof(UAudioSliderBase, OnValueChanged) == 0x000258, "Member 'UAudioSliderBase::OnValueChanged' has a wrong offset!");

// Class AudioWidgets.AudioSlider
// 0x0010 (0x09E0 - 0x09D0)
class UAudioSlider : public UAudioSliderBase
{
public:
	TWeakObjectPtr<class UCurveFloat>             LinToOutputCurve;                                  // 0x09D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UCurveFloat>             OutputToLinCurve;                                  // 0x09D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioSlider">();
	}
	static class UAudioSlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioSlider>();
	}
};
static_assert(alignof(UAudioSlider) == 0x000010, "Wrong alignment on UAudioSlider");
static_assert(sizeof(UAudioSlider) == 0x0009E0, "Wrong size on UAudioSlider");
static_assert(offsetof(UAudioSlider, LinToOutputCurve) == 0x0009D0, "Member 'UAudioSlider::LinToOutputCurve' has a wrong offset!");
static_assert(offsetof(UAudioSlider, OutputToLinCurve) == 0x0009D8, "Member 'UAudioSlider::OutputToLinCurve' has a wrong offset!");

// Class AudioWidgets.AudioVolumeSlider
// 0x0000 (0x09E0 - 0x09E0)
class UAudioVolumeSlider final : public UAudioSlider
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioVolumeSlider">();
	}
	static class UAudioVolumeSlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioVolumeSlider>();
	}
};
static_assert(alignof(UAudioVolumeSlider) == 0x000010, "Wrong alignment on UAudioVolumeSlider");
static_assert(sizeof(UAudioVolumeSlider) == 0x0009E0, "Wrong size on UAudioVolumeSlider");

// Class AudioWidgets.AudioFrequencySlider
// 0x0010 (0x09E0 - 0x09D0)
class UAudioFrequencySlider final : public UAudioSliderBase
{
public:
	struct FVector2D                              OutputRange;                                       // 0x09D0(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioFrequencySlider">();
	}
	static class UAudioFrequencySlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioFrequencySlider>();
	}
};
static_assert(alignof(UAudioFrequencySlider) == 0x000010, "Wrong alignment on UAudioFrequencySlider");
static_assert(sizeof(UAudioFrequencySlider) == 0x0009E0, "Wrong size on UAudioFrequencySlider");
static_assert(offsetof(UAudioFrequencySlider, OutputRange) == 0x0009D0, "Member 'UAudioFrequencySlider::OutputRange' has a wrong offset!");

}

