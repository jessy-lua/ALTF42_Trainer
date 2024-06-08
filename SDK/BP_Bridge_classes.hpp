#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Bridge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "S_MeshRScale_structs.hpp"
#include "E_Rails_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Bridge.BP_Bridge_C
// 0x00F0 (0x0388 - 0x0298)
class BP_Bridge::ABP_Bridge_C : public AActor
{
public:
	class USplineComponent*                       Spline;                                            // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                End;                                               // 0x02A8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        PlankDist;                                         // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SegmentDist;                                       // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Gravity;                                           // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Width;                                             // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_MeshRScale>                  Planks;                                            // 0x02E0(0x0010)(Edit, BlueprintVisible)
	struct FVector                                PlanksGlobalScale;                                 // 0x02F0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               PlanksRandomRotation;                              // 0x0308(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FS_MeshRScale>                  Poles;                                             // 0x0320(0x0010)(Edit, BlueprintVisible)
	struct FRotator                               PolesRandomRotation;                               // 0x0330(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        MissingPlankChance;                                // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PaddingStart;                                      // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PaddingEnd;                                        // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          Seed;                                              // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor)
	double                                        RopesHeight;                                       // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RopeWidth;                                         // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             RopesCollision;                                    // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10B5[0x7];                                     // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            RopeMesh;                                          // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          GeneratePoles;                                     // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Rails                                       GenerateRails;                                     // 0x0381(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PlacePoleWithOffset(const struct FVector& Location);
	void PlaceRopeWithOffset(const struct FVector& Offset);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass BP_Bridge.BP_Bridge_C", true, "BP_Bridge_C">();
	}
	static class BP_Bridge::ABP_Bridge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<BP_Bridge::ABP_Bridge_C>();
	}
};
static_assert(alignof(BP_Bridge::ABP_Bridge_C) == 0x000008, "Wrong alignment on BP_Bridge::ABP_Bridge_C");
static_assert(sizeof(BP_Bridge::ABP_Bridge_C) == 0x000388, "Wrong size on BP_Bridge::ABP_Bridge_C");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, Spline) == 0x000298, "Member 'BP_Bridge::ABP_Bridge_C::Spline' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, DefaultSceneRoot) == 0x0002A0, "Member 'BP_Bridge::ABP_Bridge_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, End) == 0x0002A8, "Member 'BP_Bridge::ABP_Bridge_C::End' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, PlankDist) == 0x0002C0, "Member 'BP_Bridge::ABP_Bridge_C::PlankDist' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, SegmentDist) == 0x0002C8, "Member 'BP_Bridge::ABP_Bridge_C::SegmentDist' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, Gravity) == 0x0002D0, "Member 'BP_Bridge::ABP_Bridge_C::Gravity' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, Width) == 0x0002D8, "Member 'BP_Bridge::ABP_Bridge_C::Width' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, Planks) == 0x0002E0, "Member 'BP_Bridge::ABP_Bridge_C::Planks' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, PlanksGlobalScale) == 0x0002F0, "Member 'BP_Bridge::ABP_Bridge_C::PlanksGlobalScale' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, PlanksRandomRotation) == 0x000308, "Member 'BP_Bridge::ABP_Bridge_C::PlanksRandomRotation' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, Poles) == 0x000320, "Member 'BP_Bridge::ABP_Bridge_C::Poles' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, PolesRandomRotation) == 0x000330, "Member 'BP_Bridge::ABP_Bridge_C::PolesRandomRotation' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, MissingPlankChance) == 0x000348, "Member 'BP_Bridge::ABP_Bridge_C::MissingPlankChance' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, PaddingStart) == 0x000350, "Member 'BP_Bridge::ABP_Bridge_C::PaddingStart' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, PaddingEnd) == 0x000354, "Member 'BP_Bridge::ABP_Bridge_C::PaddingEnd' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, Seed) == 0x000358, "Member 'BP_Bridge::ABP_Bridge_C::Seed' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, RopesHeight) == 0x000360, "Member 'BP_Bridge::ABP_Bridge_C::RopesHeight' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, RopeWidth) == 0x000368, "Member 'BP_Bridge::ABP_Bridge_C::RopeWidth' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, RopesCollision) == 0x000370, "Member 'BP_Bridge::ABP_Bridge_C::RopesCollision' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, RopeMesh) == 0x000378, "Member 'BP_Bridge::ABP_Bridge_C::RopeMesh' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, GeneratePoles) == 0x000380, "Member 'BP_Bridge::ABP_Bridge_C::GeneratePoles' has a wrong offset!");
static_assert(offsetof(BP_Bridge::ABP_Bridge_C, GenerateRails) == 0x000381, "Member 'BP_Bridge::ABP_Bridge_C::GenerateRails' has a wrong offset!");

}

