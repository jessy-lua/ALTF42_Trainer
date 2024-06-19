#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bow_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Bow_AnimBP_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Bow_AnimBP.Bow_AnimBP_C
// 0x0090 (0x03E0 - 0x0350)
class UBow_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_372C[0x8];                                     // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct Bow_AnimBP::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x0358(0x0008)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0360(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0368(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0370(0x0020)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;                   // 0x0390(0x0040)()
	double                                        Draw;                                              // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_Bow_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Bow_AnimBP_C">();
	}
	static class UBow_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBow_AnimBP_C>();
	}
};
static_assert(alignof(UBow_AnimBP_C) == 0x000010, "Wrong alignment on UBow_AnimBP_C");
static_assert(sizeof(UBow_AnimBP_C) == 0x0003E0, "Wrong size on UBow_AnimBP_C");
static_assert(offsetof(UBow_AnimBP_C, UberGraphFrame) == 0x000350, "Member 'UBow_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBow_AnimBP_C, __AnimBlueprintMutables) == 0x000358, "Member 'UBow_AnimBP_C::__AnimBlueprintMutables' has a wrong offset!");
static_assert(offsetof(UBow_AnimBP_C, AnimBlueprintExtension_PropertyAccess) == 0x000360, "Member 'UBow_AnimBP_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UBow_AnimBP_C, AnimBlueprintExtension_Base) == 0x000368, "Member 'UBow_AnimBP_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UBow_AnimBP_C, AnimGraphNode_Root) == 0x000370, "Member 'UBow_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UBow_AnimBP_C, AnimGraphNode_SequenceEvaluator) == 0x000390, "Member 'UBow_AnimBP_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(UBow_AnimBP_C, Draw) == 0x0003D0, "Member 'UBow_AnimBP_C::Draw' has a wrong offset!");

}

