#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Peasant_Boy_horn

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct ABP_Peasant_Boy_horn.ABP_Peasant_Boy_horn_C.AnimBlueprintGeneratedConstantData
// 0x011F (0x0120 - 0x0001)
struct ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_2EF9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_45;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_46;                                // 0x000C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_47;                                 // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_48;                                 // 0x0018(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EFA[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_49;                                // 0x001C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_50;                               // 0x0020(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_51;                                // 0x004C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_52;                                 // 0x0050(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_53;                                 // 0x0051(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_54;                                 // 0x0052(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EFB[0x1];                                     // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_55;                                 // 0x0054(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_56;                                 // 0x005C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_57;                                  // 0x0064(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_58;                               // 0x0068(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0088(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0108(0x0018)()
};
static_assert(alignof(ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData) == 0x000120, "Wrong size on ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData, __NameProperty_45) == 0x000004, "Member 'ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData::__NameProperty_45' has a wrong offset!");
static_assert(offsetof(ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData, __FloatProperty_46) == 0x00000C, "Member 'ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData::__FloatProperty_46' has a wrong offset!");
static_assert(offsetof(ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData, __NameProperty_47) == 0x000010, "Member 'ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData::__NameProperty_47' has a wrong offset!");
static_assert(offsetof(ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData, __BoolProperty_48) == 0x000018, "Member 'ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData::__BoolProperty_48' has a wrong offset!");
static_assert(offsetof(ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData, __FloatProperty_49) == 0x00001C, "Member 'ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData::__FloatProperty_49' has a wrong offset!");
static_assert(offsetof(ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData, __StructProperty_50) == 0x000020, "Member 'ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData::__StructProperty_50' has a wrong offset!");
static_assert(offsetof(ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData, __FloatProperty_51) == 0x00004C, "Member 'ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData::__FloatProperty_51' has a wrong offset!");
static_assert(offsetof(ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData, __BoolProperty_52) == 0x000050, "Member 'ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData::__BoolProperty_52' has a wrong offset!");
static_assert(offsetof(ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData, __EnumProperty_53) == 0x000051, "Member 'ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData::__EnumProperty_53' has a wrong offset!");
static_assert(offsetof(ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData, __ByteProperty_54) == 0x000052, "Member 'ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData::__ByteProperty_54' has a wrong offset!");
static_assert(offsetof(ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData, __NameProperty_55) == 0x000054, "Member 'ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData::__NameProperty_55' has a wrong offset!");
static_assert(offsetof(ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData, __NameProperty_56) == 0x00005C, "Member 'ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData::__NameProperty_56' has a wrong offset!");
static_assert(offsetof(ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData, __IntProperty_57) == 0x000064, "Member 'ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData::__IntProperty_57' has a wrong offset!");
static_assert(offsetof(ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData, __StructProperty_58) == 0x000068, "Member 'ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData::__StructProperty_58' has a wrong offset!");
static_assert(offsetof(ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000088, "Member 'ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000108, "Member 'ABP_Peasant_Boy_horn::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

