#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioWidgets

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum AudioWidgets.EAudioRadialSliderLayout
// NumValues: 0x0004
enum class EAudioRadialSliderLayout : uint8
{
	Layout_LabelTop                          = 0,
	Layout_LabelCenter                       = 1,
	Layout_LabelBottom                       = 2,
	Layout_MAX                               = 3,
};

// ScriptStruct AudioWidgets.MeterChannelInfo
// 0x000C (0x000C - 0x0000)
struct FMeterChannelInfo final
{
public:
	float                                         MeterValue;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PeakValue;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClippingValue;                                     // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMeterChannelInfo) == 0x000004, "Wrong alignment on FMeterChannelInfo");
static_assert(sizeof(FMeterChannelInfo) == 0x00000C, "Wrong size on FMeterChannelInfo");
static_assert(offsetof(FMeterChannelInfo, MeterValue) == 0x000000, "Member 'FMeterChannelInfo::MeterValue' has a wrong offset!");
static_assert(offsetof(FMeterChannelInfo, PeakValue) == 0x000004, "Member 'FMeterChannelInfo::PeakValue' has a wrong offset!");
static_assert(offsetof(FMeterChannelInfo, ClippingValue) == 0x000008, "Member 'FMeterChannelInfo::ClippingValue' has a wrong offset!");

// ScriptStruct AudioWidgets.AudioMeterStyle
// 0x04C8 (0x04D0 - 0x0008)
struct FAudioMeterStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_2C68[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            MeterValueImage;                                   // 0x0010(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            BackgroundImage;                                   // 0x00E0(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            MeterBackgroundImage;                              // 0x01B0(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            MeterValueBackgroundImage;                         // 0x0280(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            MeterPeakImage;                                    // 0x0350(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                              MeterSize;                                         // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              MeterPadding;                                      // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MeterValuePadding;                                 // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PeakValueWidth;                                    // 0x0444(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ValueRangeDb;                                      // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowScale;                                        // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bScaleSide;                                        // 0x0459(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C69[0x2];                                     // 0x045A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ScaleHashOffset;                                   // 0x045C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScaleHashWidth;                                    // 0x0460(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScaleHashHeight;                                   // 0x0464(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DecibelsPerHash;                                   // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C6A[0x4];                                     // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         Font;                                              // 0x0470(0x0058)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C6B[0x8];                                     // 0x04C8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAudioMeterStyle) == 0x000010, "Wrong alignment on FAudioMeterStyle");
static_assert(sizeof(FAudioMeterStyle) == 0x0004D0, "Wrong size on FAudioMeterStyle");
static_assert(offsetof(FAudioMeterStyle, MeterValueImage) == 0x000010, "Member 'FAudioMeterStyle::MeterValueImage' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, BackgroundImage) == 0x0000E0, "Member 'FAudioMeterStyle::BackgroundImage' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, MeterBackgroundImage) == 0x0001B0, "Member 'FAudioMeterStyle::MeterBackgroundImage' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, MeterValueBackgroundImage) == 0x000280, "Member 'FAudioMeterStyle::MeterValueBackgroundImage' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, MeterPeakImage) == 0x000350, "Member 'FAudioMeterStyle::MeterPeakImage' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, MeterSize) == 0x000420, "Member 'FAudioMeterStyle::MeterSize' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, MeterPadding) == 0x000430, "Member 'FAudioMeterStyle::MeterPadding' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, MeterValuePadding) == 0x000440, "Member 'FAudioMeterStyle::MeterValuePadding' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, PeakValueWidth) == 0x000444, "Member 'FAudioMeterStyle::PeakValueWidth' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, ValueRangeDb) == 0x000448, "Member 'FAudioMeterStyle::ValueRangeDb' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, bShowScale) == 0x000458, "Member 'FAudioMeterStyle::bShowScale' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, bScaleSide) == 0x000459, "Member 'FAudioMeterStyle::bScaleSide' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, ScaleHashOffset) == 0x00045C, "Member 'FAudioMeterStyle::ScaleHashOffset' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, ScaleHashWidth) == 0x000460, "Member 'FAudioMeterStyle::ScaleHashWidth' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, ScaleHashHeight) == 0x000464, "Member 'FAudioMeterStyle::ScaleHashHeight' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, DecibelsPerHash) == 0x000468, "Member 'FAudioMeterStyle::DecibelsPerHash' has a wrong offset!");
static_assert(offsetof(FAudioMeterStyle, Font) == 0x000470, "Member 'FAudioMeterStyle::Font' has a wrong offset!");

// ScriptStruct AudioWidgets.FixedSampleSequenceRulerStyle
// 0x0268 (0x0270 - 0x0008)
struct FFixedSampleSequenceRulerStyle final : public FSlateWidgetStyle
{
public:
	float                                         HandleWidth;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            HandleColor;                                       // 0x000C(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            HandleBrush;                                       // 0x0020(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            TicksColor;                                        // 0x00F0(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            TicksTextColor;                                    // 0x0104(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                         TicksTextFont;                                     // 0x0118(0x0058)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TicksTextOffset;                                   // 0x0170(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            BackgroundColor;                                   // 0x0174(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C6C[0x8];                                     // 0x0188(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            BackgroundBrush;                                   // 0x0190(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         DesiredWidth;                                      // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DesiredHeight;                                     // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C6D[0x8];                                     // 0x0268(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFixedSampleSequenceRulerStyle) == 0x000010, "Wrong alignment on FFixedSampleSequenceRulerStyle");
static_assert(sizeof(FFixedSampleSequenceRulerStyle) == 0x000270, "Wrong size on FFixedSampleSequenceRulerStyle");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, HandleWidth) == 0x000008, "Member 'FFixedSampleSequenceRulerStyle::HandleWidth' has a wrong offset!");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, HandleColor) == 0x00000C, "Member 'FFixedSampleSequenceRulerStyle::HandleColor' has a wrong offset!");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, HandleBrush) == 0x000020, "Member 'FFixedSampleSequenceRulerStyle::HandleBrush' has a wrong offset!");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, TicksColor) == 0x0000F0, "Member 'FFixedSampleSequenceRulerStyle::TicksColor' has a wrong offset!");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, TicksTextColor) == 0x000104, "Member 'FFixedSampleSequenceRulerStyle::TicksTextColor' has a wrong offset!");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, TicksTextFont) == 0x000118, "Member 'FFixedSampleSequenceRulerStyle::TicksTextFont' has a wrong offset!");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, TicksTextOffset) == 0x000170, "Member 'FFixedSampleSequenceRulerStyle::TicksTextOffset' has a wrong offset!");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, BackgroundColor) == 0x000174, "Member 'FFixedSampleSequenceRulerStyle::BackgroundColor' has a wrong offset!");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, BackgroundBrush) == 0x000190, "Member 'FFixedSampleSequenceRulerStyle::BackgroundBrush' has a wrong offset!");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, DesiredWidth) == 0x000260, "Member 'FFixedSampleSequenceRulerStyle::DesiredWidth' has a wrong offset!");
static_assert(offsetof(FFixedSampleSequenceRulerStyle, DesiredHeight) == 0x000264, "Member 'FFixedSampleSequenceRulerStyle::DesiredHeight' has a wrong offset!");

// ScriptStruct AudioWidgets.AudioTextBoxStyle
// 0x00F8 (0x0100 - 0x0008)
struct FAudioTextBoxStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_2C6E[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            BackgroundImage;                                   // 0x0010(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            BackgroundColor;                                   // 0x00E0(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C6F[0xC];                                     // 0x00F4(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAudioTextBoxStyle) == 0x000010, "Wrong alignment on FAudioTextBoxStyle");
static_assert(sizeof(FAudioTextBoxStyle) == 0x000100, "Wrong size on FAudioTextBoxStyle");
static_assert(offsetof(FAudioTextBoxStyle, BackgroundImage) == 0x000010, "Member 'FAudioTextBoxStyle::BackgroundImage' has a wrong offset!");
static_assert(offsetof(FAudioTextBoxStyle, BackgroundColor) == 0x0000E0, "Member 'FAudioTextBoxStyle::BackgroundColor' has a wrong offset!");

// ScriptStruct AudioWidgets.AudioSliderStyle
// 0x0748 (0x0750 - 0x0008)
struct FAudioSliderStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_2C70[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSliderStyle                           SliderStyle;                                       // 0x0010(0x0500)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAudioTextBoxStyle                     TextBoxStyle;                                      // 0x0510(0x0100)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                            WidgetBackgroundImage;                             // 0x0610(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            SliderBackgroundColor;                             // 0x06E0(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C71[0x4];                                     // 0x06F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              SliderBackgroundSize;                              // 0x06F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LabelPadding;                                      // 0x0708(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            SliderBarColor;                                    // 0x070C(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            SliderThumbColor;                                  // 0x0720(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            WidgetBackgroundColor;                             // 0x0734(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C72[0x8];                                     // 0x0748(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAudioSliderStyle) == 0x000010, "Wrong alignment on FAudioSliderStyle");
static_assert(sizeof(FAudioSliderStyle) == 0x000750, "Wrong size on FAudioSliderStyle");
static_assert(offsetof(FAudioSliderStyle, SliderStyle) == 0x000010, "Member 'FAudioSliderStyle::SliderStyle' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, TextBoxStyle) == 0x000510, "Member 'FAudioSliderStyle::TextBoxStyle' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, WidgetBackgroundImage) == 0x000610, "Member 'FAudioSliderStyle::WidgetBackgroundImage' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, SliderBackgroundColor) == 0x0006E0, "Member 'FAudioSliderStyle::SliderBackgroundColor' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, SliderBackgroundSize) == 0x0006F8, "Member 'FAudioSliderStyle::SliderBackgroundSize' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, LabelPadding) == 0x000708, "Member 'FAudioSliderStyle::LabelPadding' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, SliderBarColor) == 0x00070C, "Member 'FAudioSliderStyle::SliderBarColor' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, SliderThumbColor) == 0x000720, "Member 'FAudioSliderStyle::SliderThumbColor' has a wrong offset!");
static_assert(offsetof(FAudioSliderStyle, WidgetBackgroundColor) == 0x000734, "Member 'FAudioSliderStyle::WidgetBackgroundColor' has a wrong offset!");

// ScriptStruct AudioWidgets.AudioRadialSliderStyle
// 0x0158 (0x0160 - 0x0008)
struct FAudioRadialSliderStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_2C73[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAudioTextBoxStyle                     TextBoxStyle;                                      // 0x0010(0x0100)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            CenterBackgroundColor;                             // 0x0110(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            SliderBarColor;                                    // 0x0124(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            SliderProgressColor;                               // 0x0138(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         LabelPadding;                                      // 0x014C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultSliderRadius;                               // 0x0150(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C74[0xC];                                     // 0x0154(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAudioRadialSliderStyle) == 0x000010, "Wrong alignment on FAudioRadialSliderStyle");
static_assert(sizeof(FAudioRadialSliderStyle) == 0x000160, "Wrong size on FAudioRadialSliderStyle");
static_assert(offsetof(FAudioRadialSliderStyle, TextBoxStyle) == 0x000010, "Member 'FAudioRadialSliderStyle::TextBoxStyle' has a wrong offset!");
static_assert(offsetof(FAudioRadialSliderStyle, CenterBackgroundColor) == 0x000110, "Member 'FAudioRadialSliderStyle::CenterBackgroundColor' has a wrong offset!");
static_assert(offsetof(FAudioRadialSliderStyle, SliderBarColor) == 0x000124, "Member 'FAudioRadialSliderStyle::SliderBarColor' has a wrong offset!");
static_assert(offsetof(FAudioRadialSliderStyle, SliderProgressColor) == 0x000138, "Member 'FAudioRadialSliderStyle::SliderProgressColor' has a wrong offset!");
static_assert(offsetof(FAudioRadialSliderStyle, LabelPadding) == 0x00014C, "Member 'FAudioRadialSliderStyle::LabelPadding' has a wrong offset!");
static_assert(offsetof(FAudioRadialSliderStyle, DefaultSliderRadius) == 0x000150, "Member 'FAudioRadialSliderStyle::DefaultSliderRadius' has a wrong offset!");

// ScriptStruct AudioWidgets.SampledSequenceViewerStyle
// 0x0158 (0x0160 - 0x0008)
struct FSampledSequenceViewerStyle final : public FSlateWidgetStyle
{
public:
	struct FSlateColor                            SequenceColor;                                     // 0x0008(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         SequenceLineThickness;                             // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            MajorGridLineColor;                                // 0x0020(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            MinorGridLineColor;                                // 0x0034(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            ZeroCrossingLineColor;                             // 0x0048(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         ZeroCrossingLineThickness;                         // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SampleMarkersSize;                                 // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            SequenceBackgroundColor;                           // 0x0064(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C75[0x8];                                     // 0x0078(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            BackgroundBrush;                                   // 0x0080(0x00D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         DesiredWidth;                                      // 0x0150(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DesiredHeight;                                     // 0x0154(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C76[0x8];                                     // 0x0158(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSampledSequenceViewerStyle) == 0x000010, "Wrong alignment on FSampledSequenceViewerStyle");
static_assert(sizeof(FSampledSequenceViewerStyle) == 0x000160, "Wrong size on FSampledSequenceViewerStyle");
static_assert(offsetof(FSampledSequenceViewerStyle, SequenceColor) == 0x000008, "Member 'FSampledSequenceViewerStyle::SequenceColor' has a wrong offset!");
static_assert(offsetof(FSampledSequenceViewerStyle, SequenceLineThickness) == 0x00001C, "Member 'FSampledSequenceViewerStyle::SequenceLineThickness' has a wrong offset!");
static_assert(offsetof(FSampledSequenceViewerStyle, MajorGridLineColor) == 0x000020, "Member 'FSampledSequenceViewerStyle::MajorGridLineColor' has a wrong offset!");
static_assert(offsetof(FSampledSequenceViewerStyle, MinorGridLineColor) == 0x000034, "Member 'FSampledSequenceViewerStyle::MinorGridLineColor' has a wrong offset!");
static_assert(offsetof(FSampledSequenceViewerStyle, ZeroCrossingLineColor) == 0x000048, "Member 'FSampledSequenceViewerStyle::ZeroCrossingLineColor' has a wrong offset!");
static_assert(offsetof(FSampledSequenceViewerStyle, ZeroCrossingLineThickness) == 0x00005C, "Member 'FSampledSequenceViewerStyle::ZeroCrossingLineThickness' has a wrong offset!");
static_assert(offsetof(FSampledSequenceViewerStyle, SampleMarkersSize) == 0x000060, "Member 'FSampledSequenceViewerStyle::SampleMarkersSize' has a wrong offset!");
static_assert(offsetof(FSampledSequenceViewerStyle, SequenceBackgroundColor) == 0x000064, "Member 'FSampledSequenceViewerStyle::SequenceBackgroundColor' has a wrong offset!");
static_assert(offsetof(FSampledSequenceViewerStyle, BackgroundBrush) == 0x000080, "Member 'FSampledSequenceViewerStyle::BackgroundBrush' has a wrong offset!");
static_assert(offsetof(FSampledSequenceViewerStyle, DesiredWidth) == 0x000150, "Member 'FSampledSequenceViewerStyle::DesiredWidth' has a wrong offset!");
static_assert(offsetof(FSampledSequenceViewerStyle, DesiredHeight) == 0x000154, "Member 'FSampledSequenceViewerStyle::DesiredHeight' has a wrong offset!");

// ScriptStruct AudioWidgets.PlayheadOverlayStyle
// 0x0020 (0x0028 - 0x0008)
struct FPlayheadOverlayStyle final : public FSlateWidgetStyle
{
public:
	struct FSlateColor                            PlayheadColor;                                     // 0x0008(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         PlayheadWidth;                                     // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DesiredWidth;                                      // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DesiredHeight;                                     // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPlayheadOverlayStyle) == 0x000008, "Wrong alignment on FPlayheadOverlayStyle");
static_assert(sizeof(FPlayheadOverlayStyle) == 0x000028, "Wrong size on FPlayheadOverlayStyle");
static_assert(offsetof(FPlayheadOverlayStyle, PlayheadColor) == 0x000008, "Member 'FPlayheadOverlayStyle::PlayheadColor' has a wrong offset!");
static_assert(offsetof(FPlayheadOverlayStyle, PlayheadWidth) == 0x00001C, "Member 'FPlayheadOverlayStyle::PlayheadWidth' has a wrong offset!");
static_assert(offsetof(FPlayheadOverlayStyle, DesiredWidth) == 0x000020, "Member 'FPlayheadOverlayStyle::DesiredWidth' has a wrong offset!");
static_assert(offsetof(FPlayheadOverlayStyle, DesiredHeight) == 0x000024, "Member 'FPlayheadOverlayStyle::DesiredHeight' has a wrong offset!");

// ScriptStruct AudioWidgets.SampledSequenceValueGridOverlayStyle
// 0x0090 (0x0098 - 0x0008)
struct FSampledSequenceValueGridOverlayStyle final : public FSlateWidgetStyle
{
public:
	struct FSlateColor                            GridColor;                                         // 0x0008(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         GridThickness;                                     // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            LabelTextColor;                                    // 0x0020(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C77[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         LabelTextFont;                                     // 0x0038(0x0058)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DesiredWidth;                                      // 0x0090(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DesiredHeight;                                     // 0x0094(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSampledSequenceValueGridOverlayStyle) == 0x000008, "Wrong alignment on FSampledSequenceValueGridOverlayStyle");
static_assert(sizeof(FSampledSequenceValueGridOverlayStyle) == 0x000098, "Wrong size on FSampledSequenceValueGridOverlayStyle");
static_assert(offsetof(FSampledSequenceValueGridOverlayStyle, GridColor) == 0x000008, "Member 'FSampledSequenceValueGridOverlayStyle::GridColor' has a wrong offset!");
static_assert(offsetof(FSampledSequenceValueGridOverlayStyle, GridThickness) == 0x00001C, "Member 'FSampledSequenceValueGridOverlayStyle::GridThickness' has a wrong offset!");
static_assert(offsetof(FSampledSequenceValueGridOverlayStyle, LabelTextColor) == 0x000020, "Member 'FSampledSequenceValueGridOverlayStyle::LabelTextColor' has a wrong offset!");
static_assert(offsetof(FSampledSequenceValueGridOverlayStyle, LabelTextFont) == 0x000038, "Member 'FSampledSequenceValueGridOverlayStyle::LabelTextFont' has a wrong offset!");
static_assert(offsetof(FSampledSequenceValueGridOverlayStyle, DesiredWidth) == 0x000090, "Member 'FSampledSequenceValueGridOverlayStyle::DesiredWidth' has a wrong offset!");
static_assert(offsetof(FSampledSequenceValueGridOverlayStyle, DesiredHeight) == 0x000094, "Member 'FSampledSequenceValueGridOverlayStyle::DesiredHeight' has a wrong offset!");

}

