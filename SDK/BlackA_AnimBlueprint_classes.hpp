#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BlackA_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "BlackA_AnimBlueprint_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BlackA_AnimBlueprint.BlackA_AnimBlueprint_C
// 0x01B0 (0x0500 - 0x0350)
class UBlackA_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_241F[0x8];                                     // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct BlackA_AnimBlueprint::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0358(0x0003)(HasGetValueTypeHash)
	uint8                                         Pad_2420[0x5];                                     // 0x035B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0360(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0368(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0370(0x0020)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x0390(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x03D8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0420(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0468(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x04B0(0x0048)()
	bool                                          HorseStart_;                                       // 0x04F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Attack_;                                           // 0x04F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_BlackA_AnimBlueprint(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlackA_AnimBlueprint_C">();
	}
	static class UBlackA_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackA_AnimBlueprint_C>();
	}
};
static_assert(alignof(UBlackA_AnimBlueprint_C) == 0x000010, "Wrong alignment on UBlackA_AnimBlueprint_C");
static_assert(sizeof(UBlackA_AnimBlueprint_C) == 0x000500, "Wrong size on UBlackA_AnimBlueprint_C");
static_assert(offsetof(UBlackA_AnimBlueprint_C, UberGraphFrame) == 0x000350, "Member 'UBlackA_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBlackA_AnimBlueprint_C, __AnimBlueprintMutables) == 0x000358, "Member 'UBlackA_AnimBlueprint_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UBlackA_AnimBlueprint_C, AnimBlueprintExtension_PropertyAccess) == 0x000360, "Member 'UBlackA_AnimBlueprint_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UBlackA_AnimBlueprint_C, AnimBlueprintExtension_Base) == 0x000368, "Member 'UBlackA_AnimBlueprint_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UBlackA_AnimBlueprint_C, AnimGraphNode_Root) == 0x000370, "Member 'UBlackA_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UBlackA_AnimBlueprint_C, AnimGraphNode_BlendListByBool_1) == 0x000390, "Member 'UBlackA_AnimBlueprint_C::AnimGraphNode_BlendListByBool_1' has a wrong offset!");
static_assert(offsetof(UBlackA_AnimBlueprint_C, AnimGraphNode_SequencePlayer_2) == 0x0003D8, "Member 'UBlackA_AnimBlueprint_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UBlackA_AnimBlueprint_C, AnimGraphNode_SequencePlayer_1) == 0x000420, "Member 'UBlackA_AnimBlueprint_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UBlackA_AnimBlueprint_C, AnimGraphNode_BlendListByBool) == 0x000468, "Member 'UBlackA_AnimBlueprint_C::AnimGraphNode_BlendListByBool' has a wrong offset!");
static_assert(offsetof(UBlackA_AnimBlueprint_C, AnimGraphNode_SequencePlayer) == 0x0004B0, "Member 'UBlackA_AnimBlueprint_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UBlackA_AnimBlueprint_C, HorseStart_) == 0x0004F8, "Member 'UBlackA_AnimBlueprint_C::HorseStart_' has a wrong offset!");
static_assert(offsetof(UBlackA_AnimBlueprint_C, Attack_) == 0x0004F9, "Member 'UBlackA_AnimBlueprint_C::Attack_' has a wrong offset!");

}

