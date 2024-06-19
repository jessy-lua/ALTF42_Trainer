#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALTF4_Rider_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct ALTF4_Rider_AnimBP.ALTF4_Rider_AnimBP_C.AnimBlueprintGeneratedConstantData
// 0x0137 (0x0138 - 0x0001)
struct ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_2DC5[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_124;                                // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_125;                                // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_126;                                 // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_127;                                // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_128;                                 // 0x0020(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_129;                              // 0x0024(0x002C)(BlueprintVisible, NoDestructor)
	class FName                                   __NameProperty_130;                                // 0x0050(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_131;                                 // 0x0058(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_132;                                // 0x005C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DC6[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_133;                               // 0x0060(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_134;                               // 0x0064(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_135;                                // 0x0068(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_136;                                // 0x0069(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_137;                                // 0x006A(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DC7[0x1];                                     // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_138;                                // 0x006C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_139;                                // 0x0074(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_140;                                 // 0x007C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_141;                              // 0x0080(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00A0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0120(0x0018)()
};
static_assert(alignof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000138, "Wrong size on ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_124) == 0x000004, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_124' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_125) == 0x00000C, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_125' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_126) == 0x000014, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_126' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_127) == 0x000018, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_127' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_128) == 0x000020, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_128' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_129) == 0x000024, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_129' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_130) == 0x000050, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_130' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_131) == 0x000058, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_131' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_132) == 0x00005C, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_132' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_133) == 0x000060, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_133' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_134) == 0x000064, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_134' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_135) == 0x000068, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_135' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_136) == 0x000069, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_136' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_137) == 0x00006A, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_137' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_138) == 0x00006C, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_138' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_139) == 0x000074, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_139' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_140) == 0x00007C, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_140' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_141) == 0x000080, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_141' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000A0, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000120, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ALTF4_Rider_AnimBP.ALTF4_Rider_AnimBP_C.AnimBlueprintGeneratedMutableData
// 0x000B (0x000C - 0x0001)
struct ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_2DC8[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty;                                   // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_0;                                 // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x00000C, "Wrong size on ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty) == 0x000004, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty' has a wrong offset!");
static_assert(offsetof(ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_0) == 0x000008, "Member 'ALTF4_Rider_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_0' has a wrong offset!");

}

