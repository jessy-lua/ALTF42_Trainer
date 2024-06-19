#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AdvancedEffectFeatures

#include "Basic.hpp"

#include "BlendModes_structs.hpp"
#include "Vector2DN_structs.hpp"


namespace SDK
{

// UserDefinedStruct AdvancedEffectFeatures.AdvancedEffectFeatures
// 0x0038 (0x0038 - 0x0000)
struct FAdvancedEffectFeatures final
{
public:
	EBlendModes                                   BlendMode_12_09737E6C44063CBE16D45A8896564C06;     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_167B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             BlendMask_21_9E705B66406A56FD3FFAF1A6942926D5;     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2DN                             BlendMaskScale_24_EA5846484DB94044F896A09A0BC2F6C0; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendDistance_33_7594D9DD4D782916B58945895B32667E; // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendDistanceSharpness_35_6A828E614037A27B69EE71A96FC5821D; // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BlendDistanceInvert_37_D287DE844826F2359AAFE3858976F62A; // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_167C[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B; // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EffectPriority_11_EDF854034FC93238C76D8FA5C8F7CD2F; // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CustomDepth_1_CCA4E6DA4D5BFFF130E4238E20DDB1B8;    // 0x002C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InvertTheCustomDepthMasking_39_0CC3F8314DC1CCA922AF47BDC1C42546; // 0x002D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StencilBuffer_15_EA46BAF04C25E4D2EA4796B4C92C5FE6; // 0x002E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_167D[0x1];                                     // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StencilMask_18_BF959A7242C50326D3AE65A973C5A5B1;   // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FAdvancedEffectFeatures) == 0x000008, "Wrong alignment on FAdvancedEffectFeatures");
static_assert(sizeof(FAdvancedEffectFeatures) == 0x000038, "Wrong size on FAdvancedEffectFeatures");
static_assert(offsetof(FAdvancedEffectFeatures, BlendMode_12_09737E6C44063CBE16D45A8896564C06) == 0x000000, "Member 'FAdvancedEffectFeatures::BlendMode_12_09737E6C44063CBE16D45A8896564C06' has a wrong offset!");
static_assert(offsetof(FAdvancedEffectFeatures, BlendMask_21_9E705B66406A56FD3FFAF1A6942926D5) == 0x000008, "Member 'FAdvancedEffectFeatures::BlendMask_21_9E705B66406A56FD3FFAF1A6942926D5' has a wrong offset!");
static_assert(offsetof(FAdvancedEffectFeatures, BlendMaskScale_24_EA5846484DB94044F896A09A0BC2F6C0) == 0x000010, "Member 'FAdvancedEffectFeatures::BlendMaskScale_24_EA5846484DB94044F896A09A0BC2F6C0' has a wrong offset!");
static_assert(offsetof(FAdvancedEffectFeatures, BlendDistance_33_7594D9DD4D782916B58945895B32667E) == 0x000018, "Member 'FAdvancedEffectFeatures::BlendDistance_33_7594D9DD4D782916B58945895B32667E' has a wrong offset!");
static_assert(offsetof(FAdvancedEffectFeatures, BlendDistanceSharpness_35_6A828E614037A27B69EE71A96FC5821D) == 0x00001C, "Member 'FAdvancedEffectFeatures::BlendDistanceSharpness_35_6A828E614037A27B69EE71A96FC5821D' has a wrong offset!");
static_assert(offsetof(FAdvancedEffectFeatures, BlendDistanceInvert_37_D287DE844826F2359AAFE3858976F62A) == 0x000020, "Member 'FAdvancedEffectFeatures::BlendDistanceInvert_37_D287DE844826F2359AAFE3858976F62A' has a wrong offset!");
static_assert(offsetof(FAdvancedEffectFeatures, BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B) == 0x000024, "Member 'FAdvancedEffectFeatures::BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B' has a wrong offset!");
static_assert(offsetof(FAdvancedEffectFeatures, EffectPriority_11_EDF854034FC93238C76D8FA5C8F7CD2F) == 0x000028, "Member 'FAdvancedEffectFeatures::EffectPriority_11_EDF854034FC93238C76D8FA5C8F7CD2F' has a wrong offset!");
static_assert(offsetof(FAdvancedEffectFeatures, CustomDepth_1_CCA4E6DA4D5BFFF130E4238E20DDB1B8) == 0x00002C, "Member 'FAdvancedEffectFeatures::CustomDepth_1_CCA4E6DA4D5BFFF130E4238E20DDB1B8' has a wrong offset!");
static_assert(offsetof(FAdvancedEffectFeatures, InvertTheCustomDepthMasking_39_0CC3F8314DC1CCA922AF47BDC1C42546) == 0x00002D, "Member 'FAdvancedEffectFeatures::InvertTheCustomDepthMasking_39_0CC3F8314DC1CCA922AF47BDC1C42546' has a wrong offset!");
static_assert(offsetof(FAdvancedEffectFeatures, StencilBuffer_15_EA46BAF04C25E4D2EA4796B4C92C5FE6) == 0x00002E, "Member 'FAdvancedEffectFeatures::StencilBuffer_15_EA46BAF04C25E4D2EA4796B4C92C5FE6' has a wrong offset!");
static_assert(offsetof(FAdvancedEffectFeatures, StencilMask_18_BF959A7242C50326D3AE65A973C5A5B1) == 0x000030, "Member 'FAdvancedEffectFeatures::StencilMask_18_BF959A7242C50326D3AE65A973C5A5B1' has a wrong offset!");

}

