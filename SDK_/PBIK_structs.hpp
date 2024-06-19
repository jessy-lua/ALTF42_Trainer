#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBIK

#include "Basic.hpp"

#include "ControlRig_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum PBIK.EPBIKLimitType
// NumValues: 0x0004
enum class EPBIKLimitType : uint8
{
	Free                                     = 0,
	Limited                                  = 1,
	Locked                                   = 2,
	EPBIKLimitType_MAX                       = 3,
};

// Enum PBIK.EPBIKRootBehavior
// NumValues: 0x0004
enum class EPBIKRootBehavior : uint8
{
	PrePull                                  = 0,
	PinToInput                               = 1,
	Free                                     = 2,
	EPBIKRootBehavior_MAX                    = 3,
};

// ScriptStruct PBIK.PBIKBoneSetting
// 0x0050 (0x0050 - 0x0000)
struct FPBIKBoneSetting final
{
public:
	class FName                                   bone;                                              // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationStiffness;                                 // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PositionStiffness;                                 // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPBIKLimitType                                X;                                                 // 0x0010(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D37[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinX;                                              // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxX;                                              // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPBIKLimitType                                Y;                                                 // 0x001C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D38[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinY;                                              // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxY;                                              // 0x0024(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPBIKLimitType                                Z;                                                 // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D39[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinZ;                                              // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxZ;                                              // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUsePreferredAngles;                               // 0x0034(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D3A[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                PreferredAngles;                                   // 0x0038(0x0018)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPBIKBoneSetting) == 0x000008, "Wrong alignment on FPBIKBoneSetting");
static_assert(sizeof(FPBIKBoneSetting) == 0x000050, "Wrong size on FPBIKBoneSetting");
static_assert(offsetof(FPBIKBoneSetting, bone) == 0x000000, "Member 'FPBIKBoneSetting::bone' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, RotationStiffness) == 0x000008, "Member 'FPBIKBoneSetting::RotationStiffness' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, PositionStiffness) == 0x00000C, "Member 'FPBIKBoneSetting::PositionStiffness' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, X) == 0x000010, "Member 'FPBIKBoneSetting::X' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, MinX) == 0x000014, "Member 'FPBIKBoneSetting::MinX' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, MaxX) == 0x000018, "Member 'FPBIKBoneSetting::MaxX' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, Y) == 0x00001C, "Member 'FPBIKBoneSetting::Y' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, MinY) == 0x000020, "Member 'FPBIKBoneSetting::MinY' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, MaxY) == 0x000024, "Member 'FPBIKBoneSetting::MaxY' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, Z) == 0x000028, "Member 'FPBIKBoneSetting::Z' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, MinZ) == 0x00002C, "Member 'FPBIKBoneSetting::MinZ' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, MaxZ) == 0x000030, "Member 'FPBIKBoneSetting::MaxZ' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, bUsePreferredAngles) == 0x000034, "Member 'FPBIKBoneSetting::bUsePreferredAngles' has a wrong offset!");
static_assert(offsetof(FPBIKBoneSetting, PreferredAngles) == 0x000038, "Member 'FPBIKBoneSetting::PreferredAngles' has a wrong offset!");

// ScriptStruct PBIK.RootPrePullSettings
// 0x0020 (0x0020 - 0x0000)
struct FRootPrePullSettings final
{
public:
	float                                         RotationAlpha;                                     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationAlphaX;                                    // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationAlphaY;                                    // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationAlphaZ;                                    // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PositionAlpha;                                     // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PositionAlphaX;                                    // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PositionAlphaY;                                    // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PositionAlphaZ;                                    // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRootPrePullSettings) == 0x000004, "Wrong alignment on FRootPrePullSettings");
static_assert(sizeof(FRootPrePullSettings) == 0x000020, "Wrong size on FRootPrePullSettings");
static_assert(offsetof(FRootPrePullSettings, RotationAlpha) == 0x000000, "Member 'FRootPrePullSettings::RotationAlpha' has a wrong offset!");
static_assert(offsetof(FRootPrePullSettings, RotationAlphaX) == 0x000004, "Member 'FRootPrePullSettings::RotationAlphaX' has a wrong offset!");
static_assert(offsetof(FRootPrePullSettings, RotationAlphaY) == 0x000008, "Member 'FRootPrePullSettings::RotationAlphaY' has a wrong offset!");
static_assert(offsetof(FRootPrePullSettings, RotationAlphaZ) == 0x00000C, "Member 'FRootPrePullSettings::RotationAlphaZ' has a wrong offset!");
static_assert(offsetof(FRootPrePullSettings, PositionAlpha) == 0x000010, "Member 'FRootPrePullSettings::PositionAlpha' has a wrong offset!");
static_assert(offsetof(FRootPrePullSettings, PositionAlphaX) == 0x000014, "Member 'FRootPrePullSettings::PositionAlphaX' has a wrong offset!");
static_assert(offsetof(FRootPrePullSettings, PositionAlphaY) == 0x000018, "Member 'FRootPrePullSettings::PositionAlphaY' has a wrong offset!");
static_assert(offsetof(FRootPrePullSettings, PositionAlphaZ) == 0x00001C, "Member 'FRootPrePullSettings::PositionAlphaZ' has a wrong offset!");

// ScriptStruct PBIK.PBIKSolverSettings
// 0x003C (0x003C - 0x0000)
struct FPBIKSolverSettings final
{
public:
	int32                                         Iterations;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MassMultiplier;                                    // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowStretch;                                     // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPBIKRootBehavior                             RootBehavior;                                      // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D3B[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRootPrePullSettings                   PrePullRootSettings;                               // 0x000C(0x0020)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         GlobalPullChainAlpha;                              // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxAngle;                                          // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OverRelaxation;                                    // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStartSolveFromInputPose;                          // 0x0038(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D3C[0x3];                                     // 0x0039(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPBIKSolverSettings) == 0x000004, "Wrong alignment on FPBIKSolverSettings");
static_assert(sizeof(FPBIKSolverSettings) == 0x00003C, "Wrong size on FPBIKSolverSettings");
static_assert(offsetof(FPBIKSolverSettings, Iterations) == 0x000000, "Member 'FPBIKSolverSettings::Iterations' has a wrong offset!");
static_assert(offsetof(FPBIKSolverSettings, MassMultiplier) == 0x000004, "Member 'FPBIKSolverSettings::MassMultiplier' has a wrong offset!");
static_assert(offsetof(FPBIKSolverSettings, bAllowStretch) == 0x000008, "Member 'FPBIKSolverSettings::bAllowStretch' has a wrong offset!");
static_assert(offsetof(FPBIKSolverSettings, RootBehavior) == 0x000009, "Member 'FPBIKSolverSettings::RootBehavior' has a wrong offset!");
static_assert(offsetof(FPBIKSolverSettings, PrePullRootSettings) == 0x00000C, "Member 'FPBIKSolverSettings::PrePullRootSettings' has a wrong offset!");
static_assert(offsetof(FPBIKSolverSettings, GlobalPullChainAlpha) == 0x00002C, "Member 'FPBIKSolverSettings::GlobalPullChainAlpha' has a wrong offset!");
static_assert(offsetof(FPBIKSolverSettings, MaxAngle) == 0x000030, "Member 'FPBIKSolverSettings::MaxAngle' has a wrong offset!");
static_assert(offsetof(FPBIKSolverSettings, OverRelaxation) == 0x000034, "Member 'FPBIKSolverSettings::OverRelaxation' has a wrong offset!");
static_assert(offsetof(FPBIKSolverSettings, bStartSolveFromInputPose) == 0x000038, "Member 'FPBIKSolverSettings::bStartSolveFromInputPose' has a wrong offset!");

// ScriptStruct PBIK.PBIKSolver
// 0x0068 (0x0068 - 0x0000)
struct alignas(0x08) FPBIKSolver final
{
public:
	uint8                                         Pad_2D3D[0x68];                                    // 0x0000(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPBIKSolver) == 0x000008, "Wrong alignment on FPBIKSolver");
static_assert(sizeof(FPBIKSolver) == 0x000068, "Wrong size on FPBIKSolver");

// ScriptStruct PBIK.PBIKDebug
// 0x0008 (0x0008 - 0x0000)
struct FPBIKDebug final
{
public:
	float                                         DrawScale;                                         // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDrawDebug;                                        // 0x0004(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D3E[0x3];                                     // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPBIKDebug) == 0x000004, "Wrong alignment on FPBIKDebug");
static_assert(sizeof(FPBIKDebug) == 0x000008, "Wrong size on FPBIKDebug");
static_assert(offsetof(FPBIKDebug, DrawScale) == 0x000000, "Member 'FPBIKDebug::DrawScale' has a wrong offset!");
static_assert(offsetof(FPBIKDebug, bDrawDebug) == 0x000004, "Member 'FPBIKDebug::bDrawDebug' has a wrong offset!");

// ScriptStruct PBIK.PBIKEffector
// 0x0090 (0x0090 - 0x0000)
struct FPBIKEffector final
{
public:
	class FName                                   bone;                                              // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D3F[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Transform;                                         // 0x0010(0x0060)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PositionAlpha;                                     // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationAlpha;                                     // 0x0074(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StrengthAlpha;                                     // 0x0078(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PullChainAlpha;                                    // 0x007C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PinRotation;                                       // 0x0080(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D40[0xC];                                     // 0x0084(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPBIKEffector) == 0x000010, "Wrong alignment on FPBIKEffector");
static_assert(sizeof(FPBIKEffector) == 0x000090, "Wrong size on FPBIKEffector");
static_assert(offsetof(FPBIKEffector, bone) == 0x000000, "Member 'FPBIKEffector::bone' has a wrong offset!");
static_assert(offsetof(FPBIKEffector, Transform) == 0x000010, "Member 'FPBIKEffector::Transform' has a wrong offset!");
static_assert(offsetof(FPBIKEffector, PositionAlpha) == 0x000070, "Member 'FPBIKEffector::PositionAlpha' has a wrong offset!");
static_assert(offsetof(FPBIKEffector, RotationAlpha) == 0x000074, "Member 'FPBIKEffector::RotationAlpha' has a wrong offset!");
static_assert(offsetof(FPBIKEffector, StrengthAlpha) == 0x000078, "Member 'FPBIKEffector::StrengthAlpha' has a wrong offset!");
static_assert(offsetof(FPBIKEffector, PullChainAlpha) == 0x00007C, "Member 'FPBIKEffector::PullChainAlpha' has a wrong offset!");
static_assert(offsetof(FPBIKEffector, PinRotation) == 0x000080, "Member 'FPBIKEffector::PinRotation' has a wrong offset!");

// ScriptStruct PBIK.PBIKWorkData
// 0x0090 (0x0090 - 0x0000)
struct FPBIKWorkData final
{
public:
	bool                                          bNeedsInit;                                        // 0x0000(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D41[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        HashInitializedWith;                               // 0x0004(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 BoneSettingToSolverBoneIndex;                      // 0x0008(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<int32>                                 SolverBoneToElementIndex;                          // 0x0018(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FPBIKSolver                            Solver;                                            // 0x0028(0x0068)(Transient, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPBIKWorkData) == 0x000008, "Wrong alignment on FPBIKWorkData");
static_assert(sizeof(FPBIKWorkData) == 0x000090, "Wrong size on FPBIKWorkData");
static_assert(offsetof(FPBIKWorkData, bNeedsInit) == 0x000000, "Member 'FPBIKWorkData::bNeedsInit' has a wrong offset!");
static_assert(offsetof(FPBIKWorkData, HashInitializedWith) == 0x000004, "Member 'FPBIKWorkData::HashInitializedWith' has a wrong offset!");
static_assert(offsetof(FPBIKWorkData, BoneSettingToSolverBoneIndex) == 0x000008, "Member 'FPBIKWorkData::BoneSettingToSolverBoneIndex' has a wrong offset!");
static_assert(offsetof(FPBIKWorkData, SolverBoneToElementIndex) == 0x000018, "Member 'FPBIKWorkData::SolverBoneToElementIndex' has a wrong offset!");
static_assert(offsetof(FPBIKWorkData, Solver) == 0x000028, "Member 'FPBIKWorkData::Solver' has a wrong offset!");

// ScriptStruct PBIK.RigUnit_PBIK
// 0x0120 (0x0280 - 0x0160)
struct FRigUnit_PBIK final : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                   Root;                                              // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPBIKEffector>                  Effectors;                                         // 0x0168(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 EffectorSolverIndices;                             // 0x0178(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FPBIKBoneSetting>               BoneSettings;                                      // 0x0188(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                           ExcludedBones;                                     // 0x0198(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPBIKSolverSettings                    Settings;                                          // 0x01A8(0x003C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPBIKDebug                             Debug;                                             // 0x01E4(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D42[0x4];                                     // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPBIKWorkData                          WorkData;                                          // 0x01F0(0x0090)(Transient, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRigUnit_PBIK) == 0x000010, "Wrong alignment on FRigUnit_PBIK");
static_assert(sizeof(FRigUnit_PBIK) == 0x000280, "Wrong size on FRigUnit_PBIK");
static_assert(offsetof(FRigUnit_PBIK, Root) == 0x000160, "Member 'FRigUnit_PBIK::Root' has a wrong offset!");
static_assert(offsetof(FRigUnit_PBIK, Effectors) == 0x000168, "Member 'FRigUnit_PBIK::Effectors' has a wrong offset!");
static_assert(offsetof(FRigUnit_PBIK, EffectorSolverIndices) == 0x000178, "Member 'FRigUnit_PBIK::EffectorSolverIndices' has a wrong offset!");
static_assert(offsetof(FRigUnit_PBIK, BoneSettings) == 0x000188, "Member 'FRigUnit_PBIK::BoneSettings' has a wrong offset!");
static_assert(offsetof(FRigUnit_PBIK, ExcludedBones) == 0x000198, "Member 'FRigUnit_PBIK::ExcludedBones' has a wrong offset!");
static_assert(offsetof(FRigUnit_PBIK, Settings) == 0x0001A8, "Member 'FRigUnit_PBIK::Settings' has a wrong offset!");
static_assert(offsetof(FRigUnit_PBIK, Debug) == 0x0001E4, "Member 'FRigUnit_PBIK::Debug' has a wrong offset!");
static_assert(offsetof(FRigUnit_PBIK, WorkData) == 0x0001F0, "Member 'FRigUnit_PBIK::WorkData' has a wrong offset!");

}

