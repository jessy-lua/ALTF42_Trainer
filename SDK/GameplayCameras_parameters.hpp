#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayCameras

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayCameras_structs.hpp"


namespace SDK::Params
{

// Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShake
// 0x0038 (0x0038 - 0x0000)
struct LegacyCameraShake_StartLegacyCameraShake final
{
public:
	class APlayerCameraManager*                   PlayerCameraManager;                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULegacyCameraShake>         ShakeClass;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Scale;                                             // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECameraShakePlaySpace                         PlaySpace;                                         // 0x0014(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_271F[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               UserPlaySpaceRot;                                  // 0x0018(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class ULegacyCameraShake*                     ReturnValue;                                       // 0x0030(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LegacyCameraShake_StartLegacyCameraShake) == 0x000008, "Wrong alignment on LegacyCameraShake_StartLegacyCameraShake");
static_assert(sizeof(LegacyCameraShake_StartLegacyCameraShake) == 0x000038, "Wrong size on LegacyCameraShake_StartLegacyCameraShake");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShake, PlayerCameraManager) == 0x000000, "Member 'LegacyCameraShake_StartLegacyCameraShake::PlayerCameraManager' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShake, ShakeClass) == 0x000008, "Member 'LegacyCameraShake_StartLegacyCameraShake::ShakeClass' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShake, Scale) == 0x000010, "Member 'LegacyCameraShake_StartLegacyCameraShake::Scale' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShake, PlaySpace) == 0x000014, "Member 'LegacyCameraShake_StartLegacyCameraShake::PlaySpace' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShake, UserPlaySpaceRot) == 0x000018, "Member 'LegacyCameraShake_StartLegacyCameraShake::UserPlaySpaceRot' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShake, ReturnValue) == 0x000030, "Member 'LegacyCameraShake_StartLegacyCameraShake::ReturnValue' has a wrong offset!");

// Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShakeFromSource
// 0x0040 (0x0040 - 0x0000)
struct LegacyCameraShake_StartLegacyCameraShakeFromSource final
{
public:
	class APlayerCameraManager*                   PlayerCameraManager;                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULegacyCameraShake>         ShakeClass;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraShakeSourceComponent*            SourceComponent;                                   // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Scale;                                             // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECameraShakePlaySpace                         PlaySpace;                                         // 0x001C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2720[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               UserPlaySpaceRot;                                  // 0x0020(0x0018)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class ULegacyCameraShake*                     ReturnValue;                                       // 0x0038(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LegacyCameraShake_StartLegacyCameraShakeFromSource) == 0x000008, "Wrong alignment on LegacyCameraShake_StartLegacyCameraShakeFromSource");
static_assert(sizeof(LegacyCameraShake_StartLegacyCameraShakeFromSource) == 0x000040, "Wrong size on LegacyCameraShake_StartLegacyCameraShakeFromSource");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShakeFromSource, PlayerCameraManager) == 0x000000, "Member 'LegacyCameraShake_StartLegacyCameraShakeFromSource::PlayerCameraManager' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShakeFromSource, ShakeClass) == 0x000008, "Member 'LegacyCameraShake_StartLegacyCameraShakeFromSource::ShakeClass' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShakeFromSource, SourceComponent) == 0x000010, "Member 'LegacyCameraShake_StartLegacyCameraShakeFromSource::SourceComponent' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShakeFromSource, Scale) == 0x000018, "Member 'LegacyCameraShake_StartLegacyCameraShakeFromSource::Scale' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShakeFromSource, PlaySpace) == 0x00001C, "Member 'LegacyCameraShake_StartLegacyCameraShakeFromSource::PlaySpace' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShakeFromSource, UserPlaySpaceRot) == 0x000020, "Member 'LegacyCameraShake_StartLegacyCameraShakeFromSource::UserPlaySpaceRot' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_StartLegacyCameraShakeFromSource, ReturnValue) == 0x000038, "Member 'LegacyCameraShake_StartLegacyCameraShakeFromSource::ReturnValue' has a wrong offset!");

// Function GameplayCameras.LegacyCameraShake.BlueprintUpdateCameraShake
// 0x0F90 (0x0F90 - 0x0000)
struct LegacyCameraShake_BlueprintUpdateCameraShake final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Alpha;                                             // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2721[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMinimalViewInfo                       POV;                                               // 0x0010(0x07C0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FMinimalViewInfo                       ModifiedPOV;                                       // 0x07D0(0x07C0)(Parm, OutParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(LegacyCameraShake_BlueprintUpdateCameraShake) == 0x000010, "Wrong alignment on LegacyCameraShake_BlueprintUpdateCameraShake");
static_assert(sizeof(LegacyCameraShake_BlueprintUpdateCameraShake) == 0x000F90, "Wrong size on LegacyCameraShake_BlueprintUpdateCameraShake");
static_assert(offsetof(LegacyCameraShake_BlueprintUpdateCameraShake, DeltaTime) == 0x000000, "Member 'LegacyCameraShake_BlueprintUpdateCameraShake::DeltaTime' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_BlueprintUpdateCameraShake, Alpha) == 0x000004, "Member 'LegacyCameraShake_BlueprintUpdateCameraShake::Alpha' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_BlueprintUpdateCameraShake, POV) == 0x000010, "Member 'LegacyCameraShake_BlueprintUpdateCameraShake::POV' has a wrong offset!");
static_assert(offsetof(LegacyCameraShake_BlueprintUpdateCameraShake, ModifiedPOV) == 0x0007D0, "Member 'LegacyCameraShake_BlueprintUpdateCameraShake::ModifiedPOV' has a wrong offset!");

// Function GameplayCameras.LegacyCameraShake.ReceivePlayShake
// 0x0004 (0x0004 - 0x0000)
struct LegacyCameraShake_ReceivePlayShake final
{
public:
	float                                         Scale;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LegacyCameraShake_ReceivePlayShake) == 0x000004, "Wrong alignment on LegacyCameraShake_ReceivePlayShake");
static_assert(sizeof(LegacyCameraShake_ReceivePlayShake) == 0x000004, "Wrong size on LegacyCameraShake_ReceivePlayShake");
static_assert(offsetof(LegacyCameraShake_ReceivePlayShake, Scale) == 0x000000, "Member 'LegacyCameraShake_ReceivePlayShake::Scale' has a wrong offset!");

// Function GameplayCameras.LegacyCameraShake.ReceiveStopShake
// 0x0001 (0x0001 - 0x0000)
struct LegacyCameraShake_ReceiveStopShake final
{
public:
	bool                                          bImmediately;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LegacyCameraShake_ReceiveStopShake) == 0x000001, "Wrong alignment on LegacyCameraShake_ReceiveStopShake");
static_assert(sizeof(LegacyCameraShake_ReceiveStopShake) == 0x000001, "Wrong size on LegacyCameraShake_ReceiveStopShake");
static_assert(offsetof(LegacyCameraShake_ReceiveStopShake, bImmediately) == 0x000000, "Member 'LegacyCameraShake_ReceiveStopShake::bImmediately' has a wrong offset!");

// Function GameplayCameras.LegacyCameraShake.ReceiveIsFinished
// 0x0001 (0x0001 - 0x0000)
struct LegacyCameraShake_ReceiveIsFinished final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LegacyCameraShake_ReceiveIsFinished) == 0x000001, "Wrong alignment on LegacyCameraShake_ReceiveIsFinished");
static_assert(sizeof(LegacyCameraShake_ReceiveIsFinished) == 0x000001, "Wrong size on LegacyCameraShake_ReceiveIsFinished");
static_assert(offsetof(LegacyCameraShake_ReceiveIsFinished, ReturnValue) == 0x000000, "Member 'LegacyCameraShake_ReceiveIsFinished::ReturnValue' has a wrong offset!");

// Function GameplayCameras.LegacyCameraShakeFunctionLibrary.Conv_LegacyCameraShake
// 0x0010 (0x0010 - 0x0000)
struct LegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake final
{
public:
	class UCameraShakeBase*                       CameraShake;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULegacyCameraShake*                     ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake) == 0x000008, "Wrong alignment on LegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake");
static_assert(sizeof(LegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake) == 0x000010, "Wrong size on LegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake");
static_assert(offsetof(LegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake, CameraShake) == 0x000000, "Member 'LegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake::CameraShake' has a wrong offset!");
static_assert(offsetof(LegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake, ReturnValue) == 0x000008, "Member 'LegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake::ReturnValue' has a wrong offset!");

// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
// 0x0018 (0x0018 - 0x0000)
struct CameraAnimationCameraModifier_GetCameraAnimationCameraModifier final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PlayerIndex;                                       // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2723[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraAnimationCameraModifier*         ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifier) == 0x000008, "Wrong alignment on CameraAnimationCameraModifier_GetCameraAnimationCameraModifier");
static_assert(sizeof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifier) == 0x000018, "Wrong size on CameraAnimationCameraModifier_GetCameraAnimationCameraModifier");
static_assert(offsetof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifier, WorldContextObject) == 0x000000, "Member 'CameraAnimationCameraModifier_GetCameraAnimationCameraModifier::WorldContextObject' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifier, PlayerIndex) == 0x000008, "Member 'CameraAnimationCameraModifier_GetCameraAnimationCameraModifier::PlayerIndex' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifier, ReturnValue) == 0x000010, "Member 'CameraAnimationCameraModifier_GetCameraAnimationCameraModifier::ReturnValue' has a wrong offset!");

// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
// 0x0018 (0x0018 - 0x0000)
struct CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ControllerId;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2724[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCameraAnimationCameraModifier*         ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID) == 0x000008, "Wrong alignment on CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID");
static_assert(sizeof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID) == 0x000018, "Wrong size on CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID");
static_assert(offsetof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID, WorldContextObject) == 0x000000, "Member 'CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID::WorldContextObject' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID, ControllerId) == 0x000008, "Member 'CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID::ControllerId' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID, ReturnValue) == 0x000010, "Member 'CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID::ReturnValue' has a wrong offset!");

// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
// 0x0010 (0x0010 - 0x0000)
struct CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController final
{
public:
	const class APlayerController*                PlayerController;                                  // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraAnimationCameraModifier*         ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController) == 0x000008, "Wrong alignment on CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController");
static_assert(sizeof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController) == 0x000010, "Wrong size on CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController");
static_assert(offsetof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController, PlayerController) == 0x000000, "Member 'CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController::PlayerController' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController, ReturnValue) == 0x000008, "Member 'CameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController::ReturnValue' has a wrong offset!");

// Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
// 0x0058 (0x0058 - 0x0000)
struct CameraAnimationCameraModifier_PlayCameraAnimation final
{
public:
	class UCameraAnimationSequence*               Sequence;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraAnimationParams                 Params_0;                                          // 0x0008(0x0048)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraAnimationHandle                 ReturnValue;                                       // 0x0050(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2725[0x4];                                     // 0x0054(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CameraAnimationCameraModifier_PlayCameraAnimation) == 0x000008, "Wrong alignment on CameraAnimationCameraModifier_PlayCameraAnimation");
static_assert(sizeof(CameraAnimationCameraModifier_PlayCameraAnimation) == 0x000058, "Wrong size on CameraAnimationCameraModifier_PlayCameraAnimation");
static_assert(offsetof(CameraAnimationCameraModifier_PlayCameraAnimation, Sequence) == 0x000000, "Member 'CameraAnimationCameraModifier_PlayCameraAnimation::Sequence' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_PlayCameraAnimation, Params_0) == 0x000008, "Member 'CameraAnimationCameraModifier_PlayCameraAnimation::Params_0' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_PlayCameraAnimation, ReturnValue) == 0x000050, "Member 'CameraAnimationCameraModifier_PlayCameraAnimation::ReturnValue' has a wrong offset!");

// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
// 0x0001 (0x0001 - 0x0000)
struct CameraAnimationCameraModifier_StopAllCameraAnimations final
{
public:
	bool                                          bImmediate;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CameraAnimationCameraModifier_StopAllCameraAnimations) == 0x000001, "Wrong alignment on CameraAnimationCameraModifier_StopAllCameraAnimations");
static_assert(sizeof(CameraAnimationCameraModifier_StopAllCameraAnimations) == 0x000001, "Wrong size on CameraAnimationCameraModifier_StopAllCameraAnimations");
static_assert(offsetof(CameraAnimationCameraModifier_StopAllCameraAnimations, bImmediate) == 0x000000, "Member 'CameraAnimationCameraModifier_StopAllCameraAnimations::bImmediate' has a wrong offset!");

// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
// 0x0010 (0x0010 - 0x0000)
struct CameraAnimationCameraModifier_StopAllCameraAnimationsOf final
{
public:
	class UCameraAnimationSequence*               Sequence;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bImmediate;                                        // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2726[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CameraAnimationCameraModifier_StopAllCameraAnimationsOf) == 0x000008, "Wrong alignment on CameraAnimationCameraModifier_StopAllCameraAnimationsOf");
static_assert(sizeof(CameraAnimationCameraModifier_StopAllCameraAnimationsOf) == 0x000010, "Wrong size on CameraAnimationCameraModifier_StopAllCameraAnimationsOf");
static_assert(offsetof(CameraAnimationCameraModifier_StopAllCameraAnimationsOf, Sequence) == 0x000000, "Member 'CameraAnimationCameraModifier_StopAllCameraAnimationsOf::Sequence' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_StopAllCameraAnimationsOf, bImmediate) == 0x000008, "Member 'CameraAnimationCameraModifier_StopAllCameraAnimationsOf::bImmediate' has a wrong offset!");

// Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation
// 0x0006 (0x0006 - 0x0000)
struct CameraAnimationCameraModifier_StopCameraAnimation final
{
public:
	struct FCameraAnimationHandle                 Handle;                                            // 0x0000(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bImmediate;                                        // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2727[0x1];                                     // 0x0005(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CameraAnimationCameraModifier_StopCameraAnimation) == 0x000002, "Wrong alignment on CameraAnimationCameraModifier_StopCameraAnimation");
static_assert(sizeof(CameraAnimationCameraModifier_StopCameraAnimation) == 0x000006, "Wrong size on CameraAnimationCameraModifier_StopCameraAnimation");
static_assert(offsetof(CameraAnimationCameraModifier_StopCameraAnimation, Handle) == 0x000000, "Member 'CameraAnimationCameraModifier_StopCameraAnimation::Handle' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_StopCameraAnimation, bImmediate) == 0x000004, "Member 'CameraAnimationCameraModifier_StopCameraAnimation::bImmediate' has a wrong offset!");

// Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
// 0x0006 (0x0006 - 0x0000)
struct CameraAnimationCameraModifier_IsCameraAnimationActive final
{
public:
	struct FCameraAnimationHandle                 Handle;                                            // 0x0000(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2728[0x1];                                     // 0x0005(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CameraAnimationCameraModifier_IsCameraAnimationActive) == 0x000002, "Wrong alignment on CameraAnimationCameraModifier_IsCameraAnimationActive");
static_assert(sizeof(CameraAnimationCameraModifier_IsCameraAnimationActive) == 0x000006, "Wrong size on CameraAnimationCameraModifier_IsCameraAnimationActive");
static_assert(offsetof(CameraAnimationCameraModifier_IsCameraAnimationActive, Handle) == 0x000000, "Member 'CameraAnimationCameraModifier_IsCameraAnimationActive::Handle' has a wrong offset!");
static_assert(offsetof(CameraAnimationCameraModifier_IsCameraAnimationActive, ReturnValue) == 0x000004, "Member 'CameraAnimationCameraModifier_IsCameraAnimationActive::ReturnValue' has a wrong offset!");

// Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationCameraModifier
// 0x0010 (0x0010 - 0x0000)
struct GameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier final
{
public:
	class APlayerCameraManager*                   PlayerCameraManager;                               // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraAnimationCameraModifier*         ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier) == 0x000008, "Wrong alignment on GameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier");
static_assert(sizeof(GameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier) == 0x000010, "Wrong size on GameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier");
static_assert(offsetof(GameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier, PlayerCameraManager) == 0x000000, "Member 'GameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier::PlayerCameraManager' has a wrong offset!");
static_assert(offsetof(GameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier, ReturnValue) == 0x000008, "Member 'GameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier::ReturnValue' has a wrong offset!");

// Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationPlaySpace
// 0x0002 (0x0002 - 0x0000)
struct GameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace final
{
public:
	ECameraShakePlaySpace                         CameraShakePlaySpace;                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECameraAnimationPlaySpace                     ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace) == 0x000001, "Wrong alignment on GameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace");
static_assert(sizeof(GameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace) == 0x000002, "Wrong size on GameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace");
static_assert(offsetof(GameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace, CameraShakePlaySpace) == 0x000000, "Member 'GameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace::CameraShakePlaySpace' has a wrong offset!");
static_assert(offsetof(GameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace, ReturnValue) == 0x000001, "Member 'GameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace::ReturnValue' has a wrong offset!");

// Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraShakePlaySpace
// 0x0002 (0x0002 - 0x0000)
struct GameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace final
{
public:
	ECameraAnimationPlaySpace                     CameraAnimationPlaySpace;                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECameraShakePlaySpace                         ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace) == 0x000001, "Wrong alignment on GameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace");
static_assert(sizeof(GameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace) == 0x000002, "Wrong size on GameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace");
static_assert(offsetof(GameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace, CameraAnimationPlaySpace) == 0x000000, "Member 'GameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace::CameraAnimationPlaySpace' has a wrong offset!");
static_assert(offsetof(GameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace, ReturnValue) == 0x000001, "Member 'GameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace::ReturnValue' has a wrong offset!");

// Function GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation
// 0x0060 (0x0060 - 0x0000)
struct GameplayCamerasSubsystem_PlayCameraAnimation final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraAnimationSequence*               Sequence;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraAnimationParams                 Params_0;                                          // 0x0010(0x0048)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraAnimationHandle                 ReturnValue;                                       // 0x0058(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2729[0x4];                                     // 0x005C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameplayCamerasSubsystem_PlayCameraAnimation) == 0x000008, "Wrong alignment on GameplayCamerasSubsystem_PlayCameraAnimation");
static_assert(sizeof(GameplayCamerasSubsystem_PlayCameraAnimation) == 0x000060, "Wrong size on GameplayCamerasSubsystem_PlayCameraAnimation");
static_assert(offsetof(GameplayCamerasSubsystem_PlayCameraAnimation, PlayerController) == 0x000000, "Member 'GameplayCamerasSubsystem_PlayCameraAnimation::PlayerController' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_PlayCameraAnimation, Sequence) == 0x000008, "Member 'GameplayCamerasSubsystem_PlayCameraAnimation::Sequence' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_PlayCameraAnimation, Params_0) == 0x000010, "Member 'GameplayCamerasSubsystem_PlayCameraAnimation::Params_0' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_PlayCameraAnimation, ReturnValue) == 0x000058, "Member 'GameplayCamerasSubsystem_PlayCameraAnimation::ReturnValue' has a wrong offset!");

// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations
// 0x0010 (0x0010 - 0x0000)
struct GameplayCamerasSubsystem_StopAllCameraAnimations final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bImmediate;                                        // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_272A[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameplayCamerasSubsystem_StopAllCameraAnimations) == 0x000008, "Wrong alignment on GameplayCamerasSubsystem_StopAllCameraAnimations");
static_assert(sizeof(GameplayCamerasSubsystem_StopAllCameraAnimations) == 0x000010, "Wrong size on GameplayCamerasSubsystem_StopAllCameraAnimations");
static_assert(offsetof(GameplayCamerasSubsystem_StopAllCameraAnimations, PlayerController) == 0x000000, "Member 'GameplayCamerasSubsystem_StopAllCameraAnimations::PlayerController' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_StopAllCameraAnimations, bImmediate) == 0x000008, "Member 'GameplayCamerasSubsystem_StopAllCameraAnimations::bImmediate' has a wrong offset!");

// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf
// 0x0018 (0x0018 - 0x0000)
struct GameplayCamerasSubsystem_StopAllCameraAnimationsOf final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCameraAnimationSequence*               Sequence;                                          // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bImmediate;                                        // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_272B[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameplayCamerasSubsystem_StopAllCameraAnimationsOf) == 0x000008, "Wrong alignment on GameplayCamerasSubsystem_StopAllCameraAnimationsOf");
static_assert(sizeof(GameplayCamerasSubsystem_StopAllCameraAnimationsOf) == 0x000018, "Wrong size on GameplayCamerasSubsystem_StopAllCameraAnimationsOf");
static_assert(offsetof(GameplayCamerasSubsystem_StopAllCameraAnimationsOf, PlayerController) == 0x000000, "Member 'GameplayCamerasSubsystem_StopAllCameraAnimationsOf::PlayerController' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_StopAllCameraAnimationsOf, Sequence) == 0x000008, "Member 'GameplayCamerasSubsystem_StopAllCameraAnimationsOf::Sequence' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_StopAllCameraAnimationsOf, bImmediate) == 0x000010, "Member 'GameplayCamerasSubsystem_StopAllCameraAnimationsOf::bImmediate' has a wrong offset!");

// Function GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation
// 0x0010 (0x0010 - 0x0000)
struct GameplayCamerasSubsystem_StopCameraAnimation final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraAnimationHandle                 Handle;                                            // 0x0008(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bImmediate;                                        // 0x000C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_272C[0x3];                                     // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameplayCamerasSubsystem_StopCameraAnimation) == 0x000008, "Wrong alignment on GameplayCamerasSubsystem_StopCameraAnimation");
static_assert(sizeof(GameplayCamerasSubsystem_StopCameraAnimation) == 0x000010, "Wrong size on GameplayCamerasSubsystem_StopCameraAnimation");
static_assert(offsetof(GameplayCamerasSubsystem_StopCameraAnimation, PlayerController) == 0x000000, "Member 'GameplayCamerasSubsystem_StopCameraAnimation::PlayerController' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_StopCameraAnimation, Handle) == 0x000008, "Member 'GameplayCamerasSubsystem_StopCameraAnimation::Handle' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_StopCameraAnimation, bImmediate) == 0x00000C, "Member 'GameplayCamerasSubsystem_StopCameraAnimation::bImmediate' has a wrong offset!");

// Function GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive
// 0x0010 (0x0010 - 0x0000)
struct GameplayCamerasSubsystem_IsCameraAnimationActive final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraAnimationHandle                 Handle;                                            // 0x0008(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_272D[0x3];                                     // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameplayCamerasSubsystem_IsCameraAnimationActive) == 0x000008, "Wrong alignment on GameplayCamerasSubsystem_IsCameraAnimationActive");
static_assert(sizeof(GameplayCamerasSubsystem_IsCameraAnimationActive) == 0x000010, "Wrong size on GameplayCamerasSubsystem_IsCameraAnimationActive");
static_assert(offsetof(GameplayCamerasSubsystem_IsCameraAnimationActive, PlayerController) == 0x000000, "Member 'GameplayCamerasSubsystem_IsCameraAnimationActive::PlayerController' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_IsCameraAnimationActive, Handle) == 0x000008, "Member 'GameplayCamerasSubsystem_IsCameraAnimationActive::Handle' has a wrong offset!");
static_assert(offsetof(GameplayCamerasSubsystem_IsCameraAnimationActive, ReturnValue) == 0x00000C, "Member 'GameplayCamerasSubsystem_IsCameraAnimationActive::ReturnValue' has a wrong offset!");

}

