#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tuto_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct Tuto_AnimBlueprint.Tuto_AnimBlueprint_C.AnimBlueprintGeneratedConstantData
// 0x00CF (0x00D0 - 0x0001)
struct Tuto_AnimBlueprint::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_2E93[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_4;                                  // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_5;                                  // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E94[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_6;                                // 0x0018(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0038(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00B8(0x0018)()
};
static_assert(alignof(Tuto_AnimBlueprint::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on Tuto_AnimBlueprint::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(Tuto_AnimBlueprint::FAnimBlueprintGeneratedConstantData) == 0x0000D0, "Wrong size on Tuto_AnimBlueprint::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(Tuto_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __NameProperty_4) == 0x000004, "Member 'Tuto_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__NameProperty_4' has a wrong offset!");
static_assert(offsetof(Tuto_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __NameProperty_5) == 0x00000C, "Member 'Tuto_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__NameProperty_5' has a wrong offset!");
static_assert(offsetof(Tuto_AnimBlueprint::FAnimBlueprintGeneratedConstantData, __StructProperty_6) == 0x000018, "Member 'Tuto_AnimBlueprint::FAnimBlueprintGeneratedConstantData::__StructProperty_6' has a wrong offset!");
static_assert(offsetof(Tuto_AnimBlueprint::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000038, "Member 'Tuto_AnimBlueprint::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(Tuto_AnimBlueprint::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000B8, "Member 'Tuto_AnimBlueprint::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

