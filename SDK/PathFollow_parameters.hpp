#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PathFollow

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "PathFollow_structs.hpp"


namespace SDK::Params
{

// Function PathFollow.PFPathComponent.GetLocationAtDistanceAlongSplineMirrored
// 0x0020 (0x0020 - 0x0000)
struct PFPathComponent_GetLocationAtDistanceAlongSplineMirrored final
{
public:
	float                                         Distance;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESplineCoordinateSpace                        CoordinateSpace;                                   // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1811[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathComponent_GetLocationAtDistanceAlongSplineMirrored) == 0x000008, "Wrong alignment on PFPathComponent_GetLocationAtDistanceAlongSplineMirrored");
static_assert(sizeof(PFPathComponent_GetLocationAtDistanceAlongSplineMirrored) == 0x000020, "Wrong size on PFPathComponent_GetLocationAtDistanceAlongSplineMirrored");
static_assert(offsetof(PFPathComponent_GetLocationAtDistanceAlongSplineMirrored, Distance) == 0x000000, "Member 'PFPathComponent_GetLocationAtDistanceAlongSplineMirrored::Distance' has a wrong offset!");
static_assert(offsetof(PFPathComponent_GetLocationAtDistanceAlongSplineMirrored, CoordinateSpace) == 0x000004, "Member 'PFPathComponent_GetLocationAtDistanceAlongSplineMirrored::CoordinateSpace' has a wrong offset!");
static_assert(offsetof(PFPathComponent_GetLocationAtDistanceAlongSplineMirrored, ReturnValue) == 0x000008, "Member 'PFPathComponent_GetLocationAtDistanceAlongSplineMirrored::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathComponent.GetLocationAtSplineInputKeyMirrored
// 0x0020 (0x0020 - 0x0000)
struct PFPathComponent_GetLocationAtSplineInputKeyMirrored final
{
public:
	float                                         Key;                                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESplineCoordinateSpace                        CoordinateSpace;                                   // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1812[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathComponent_GetLocationAtSplineInputKeyMirrored) == 0x000008, "Wrong alignment on PFPathComponent_GetLocationAtSplineInputKeyMirrored");
static_assert(sizeof(PFPathComponent_GetLocationAtSplineInputKeyMirrored) == 0x000020, "Wrong size on PFPathComponent_GetLocationAtSplineInputKeyMirrored");
static_assert(offsetof(PFPathComponent_GetLocationAtSplineInputKeyMirrored, Key) == 0x000000, "Member 'PFPathComponent_GetLocationAtSplineInputKeyMirrored::Key' has a wrong offset!");
static_assert(offsetof(PFPathComponent_GetLocationAtSplineInputKeyMirrored, CoordinateSpace) == 0x000004, "Member 'PFPathComponent_GetLocationAtSplineInputKeyMirrored::CoordinateSpace' has a wrong offset!");
static_assert(offsetof(PFPathComponent_GetLocationAtSplineInputKeyMirrored, ReturnValue) == 0x000008, "Member 'PFPathComponent_GetLocationAtSplineInputKeyMirrored::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathComponent.GetLocationAtSplinePointMirrored
// 0x0020 (0x0020 - 0x0000)
struct PFPathComponent_GetLocationAtSplinePointMirrored final
{
public:
	int32                                         PointIdx;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESplineCoordinateSpace                        CoordinateSpace;                                   // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1813[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathComponent_GetLocationAtSplinePointMirrored) == 0x000008, "Wrong alignment on PFPathComponent_GetLocationAtSplinePointMirrored");
static_assert(sizeof(PFPathComponent_GetLocationAtSplinePointMirrored) == 0x000020, "Wrong size on PFPathComponent_GetLocationAtSplinePointMirrored");
static_assert(offsetof(PFPathComponent_GetLocationAtSplinePointMirrored, PointIdx) == 0x000000, "Member 'PFPathComponent_GetLocationAtSplinePointMirrored::PointIdx' has a wrong offset!");
static_assert(offsetof(PFPathComponent_GetLocationAtSplinePointMirrored, CoordinateSpace) == 0x000004, "Member 'PFPathComponent_GetLocationAtSplinePointMirrored::CoordinateSpace' has a wrong offset!");
static_assert(offsetof(PFPathComponent_GetLocationAtSplinePointMirrored, ReturnValue) == 0x000008, "Member 'PFPathComponent_GetLocationAtSplinePointMirrored::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.AddEventPoint
// 0x0028 (0x0028 - 0x0000)
struct PFPathFollowerComponent_AddEventPoint final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Distance;                                          // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1824[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    UserData;                                          // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPFEventFireMode                              FireMode;                                          // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1825[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FireCount;                                         // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEventPointDelegateHolder*              ReturnValue;                                       // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_AddEventPoint) == 0x000008, "Wrong alignment on PFPathFollowerComponent_AddEventPoint");
static_assert(sizeof(PFPathFollowerComponent_AddEventPoint) == 0x000028, "Wrong size on PFPathFollowerComponent_AddEventPoint");
static_assert(offsetof(PFPathFollowerComponent_AddEventPoint, Param_Name) == 0x000000, "Member 'PFPathFollowerComponent_AddEventPoint::Param_Name' has a wrong offset!");
static_assert(offsetof(PFPathFollowerComponent_AddEventPoint, Distance) == 0x000008, "Member 'PFPathFollowerComponent_AddEventPoint::Distance' has a wrong offset!");
static_assert(offsetof(PFPathFollowerComponent_AddEventPoint, UserData) == 0x000010, "Member 'PFPathFollowerComponent_AddEventPoint::UserData' has a wrong offset!");
static_assert(offsetof(PFPathFollowerComponent_AddEventPoint, FireMode) == 0x000018, "Member 'PFPathFollowerComponent_AddEventPoint::FireMode' has a wrong offset!");
static_assert(offsetof(PFPathFollowerComponent_AddEventPoint, FireCount) == 0x00001C, "Member 'PFPathFollowerComponent_AddEventPoint::FireCount' has a wrong offset!");
static_assert(offsetof(PFPathFollowerComponent_AddEventPoint, ReturnValue) == 0x000020, "Member 'PFPathFollowerComponent_AddEventPoint::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.ComputeLookAtRotation
// 0x0038 (0x0038 - 0x0000)
struct PFPathFollowerComponent_ComputeLookAtRotation final
{
public:
	class USceneComponent*                        TargetComponent;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                FollowerLocation;                                  // 0x0008(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               ReturnValue;                                       // 0x0020(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_ComputeLookAtRotation) == 0x000008, "Wrong alignment on PFPathFollowerComponent_ComputeLookAtRotation");
static_assert(sizeof(PFPathFollowerComponent_ComputeLookAtRotation) == 0x000038, "Wrong size on PFPathFollowerComponent_ComputeLookAtRotation");
static_assert(offsetof(PFPathFollowerComponent_ComputeLookAtRotation, TargetComponent) == 0x000000, "Member 'PFPathFollowerComponent_ComputeLookAtRotation::TargetComponent' has a wrong offset!");
static_assert(offsetof(PFPathFollowerComponent_ComputeLookAtRotation, FollowerLocation) == 0x000008, "Member 'PFPathFollowerComponent_ComputeLookAtRotation::FollowerLocation' has a wrong offset!");
static_assert(offsetof(PFPathFollowerComponent_ComputeLookAtRotation, ReturnValue) == 0x000020, "Member 'PFPathFollowerComponent_ComputeLookAtRotation::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.EventPointExistByName
// 0x000C (0x000C - 0x0000)
struct PFPathFollowerComponent_EventPointExistByName final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1826[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PFPathFollowerComponent_EventPointExistByName) == 0x000004, "Wrong alignment on PFPathFollowerComponent_EventPointExistByName");
static_assert(sizeof(PFPathFollowerComponent_EventPointExistByName) == 0x00000C, "Wrong size on PFPathFollowerComponent_EventPointExistByName");
static_assert(offsetof(PFPathFollowerComponent_EventPointExistByName, Param_Name) == 0x000000, "Member 'PFPathFollowerComponent_EventPointExistByName::Param_Name' has a wrong offset!");
static_assert(offsetof(PFPathFollowerComponent_EventPointExistByName, ReturnValue) == 0x000008, "Member 'PFPathFollowerComponent_EventPointExistByName::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.FollowPath
// 0x0004 (0x0004 - 0x0000)
struct PFPathFollowerComponent_FollowPath final
{
public:
	float                                         FollowStep;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_FollowPath) == 0x000004, "Wrong alignment on PFPathFollowerComponent_FollowPath");
static_assert(sizeof(PFPathFollowerComponent_FollowPath) == 0x000004, "Wrong size on PFPathFollowerComponent_FollowPath");
static_assert(offsetof(PFPathFollowerComponent_FollowPath, FollowStep) == 0x000000, "Member 'PFPathFollowerComponent_FollowPath::FollowStep' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.GetEventPointByName
// 0x0030 (0x0030 - 0x0000)
struct PFPathFollowerComponent_GetEventPointByName final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventPoint                            ReturnValue;                                       // 0x0008(0x0028)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_GetEventPointByName) == 0x000008, "Wrong alignment on PFPathFollowerComponent_GetEventPointByName");
static_assert(sizeof(PFPathFollowerComponent_GetEventPointByName) == 0x000030, "Wrong size on PFPathFollowerComponent_GetEventPointByName");
static_assert(offsetof(PFPathFollowerComponent_GetEventPointByName, Param_Name) == 0x000000, "Member 'PFPathFollowerComponent_GetEventPointByName::Param_Name' has a wrong offset!");
static_assert(offsetof(PFPathFollowerComponent_GetEventPointByName, ReturnValue) == 0x000008, "Member 'PFPathFollowerComponent_GetEventPointByName::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.GetEventPointDelegateAll
// 0x0008 (0x0008 - 0x0000)
struct PFPathFollowerComponent_GetEventPointDelegateAll final
{
public:
	class UEventPointDelegateHolder*              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_GetEventPointDelegateAll) == 0x000008, "Wrong alignment on PFPathFollowerComponent_GetEventPointDelegateAll");
static_assert(sizeof(PFPathFollowerComponent_GetEventPointDelegateAll) == 0x000008, "Wrong size on PFPathFollowerComponent_GetEventPointDelegateAll");
static_assert(offsetof(PFPathFollowerComponent_GetEventPointDelegateAll, ReturnValue) == 0x000000, "Member 'PFPathFollowerComponent_GetEventPointDelegateAll::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.GetEventPointDelegateByIndex
// 0x0010 (0x0010 - 0x0000)
struct PFPathFollowerComponent_GetEventPointDelegateByIndex final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1827[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventPointDelegateHolder*              ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_GetEventPointDelegateByIndex) == 0x000008, "Wrong alignment on PFPathFollowerComponent_GetEventPointDelegateByIndex");
static_assert(sizeof(PFPathFollowerComponent_GetEventPointDelegateByIndex) == 0x000010, "Wrong size on PFPathFollowerComponent_GetEventPointDelegateByIndex");
static_assert(offsetof(PFPathFollowerComponent_GetEventPointDelegateByIndex, Param_Index) == 0x000000, "Member 'PFPathFollowerComponent_GetEventPointDelegateByIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(PFPathFollowerComponent_GetEventPointDelegateByIndex, ReturnValue) == 0x000008, "Member 'PFPathFollowerComponent_GetEventPointDelegateByIndex::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.GetEventPointDelegateByName
// 0x0010 (0x0010 - 0x0000)
struct PFPathFollowerComponent_GetEventPointDelegateByName final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEventPointDelegateHolder*              ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_GetEventPointDelegateByName) == 0x000008, "Wrong alignment on PFPathFollowerComponent_GetEventPointDelegateByName");
static_assert(sizeof(PFPathFollowerComponent_GetEventPointDelegateByName) == 0x000010, "Wrong size on PFPathFollowerComponent_GetEventPointDelegateByName");
static_assert(offsetof(PFPathFollowerComponent_GetEventPointDelegateByName, Param_Name) == 0x000000, "Member 'PFPathFollowerComponent_GetEventPointDelegateByName::Param_Name' has a wrong offset!");
static_assert(offsetof(PFPathFollowerComponent_GetEventPointDelegateByName, ReturnValue) == 0x000008, "Member 'PFPathFollowerComponent_GetEventPointDelegateByName::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.GetEventPoints
// 0x0038 (0x0038 - 0x0000)
struct PFPathFollowerComponent_GetEventPoints final
{
public:
	struct FPFEventPoints                         ReturnValue;                                       // 0x0000(0x0038)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_GetEventPoints) == 0x000008, "Wrong alignment on PFPathFollowerComponent_GetEventPoints");
static_assert(sizeof(PFPathFollowerComponent_GetEventPoints) == 0x000038, "Wrong size on PFPathFollowerComponent_GetEventPoints");
static_assert(offsetof(PFPathFollowerComponent_GetEventPoints, ReturnValue) == 0x000000, "Member 'PFPathFollowerComponent_GetEventPoints::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.GetPathOwner
// 0x0008 (0x0008 - 0x0000)
struct PFPathFollowerComponent_GetPathOwner final
{
public:
	class AActor*                                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_GetPathOwner) == 0x000008, "Wrong alignment on PFPathFollowerComponent_GetPathOwner");
static_assert(sizeof(PFPathFollowerComponent_GetPathOwner) == 0x000008, "Wrong size on PFPathFollowerComponent_GetPathOwner");
static_assert(offsetof(PFPathFollowerComponent_GetPathOwner, ReturnValue) == 0x000000, "Member 'PFPathFollowerComponent_GetPathOwner::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.GetPathToFollow
// 0x0008 (0x0008 - 0x0000)
struct PFPathFollowerComponent_GetPathToFollow final
{
public:
	class UPFPathComponent*                       ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_GetPathToFollow) == 0x000008, "Wrong alignment on PFPathFollowerComponent_GetPathToFollow");
static_assert(sizeof(PFPathFollowerComponent_GetPathToFollow) == 0x000008, "Wrong size on PFPathFollowerComponent_GetPathToFollow");
static_assert(offsetof(PFPathFollowerComponent_GetPathToFollow, ReturnValue) == 0x000000, "Member 'PFPathFollowerComponent_GetPathToFollow::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.ModifyFinalLocation
// 0x0030 (0x0030 - 0x0000)
struct PFPathFollowerComponent_ModifyFinalLocation final
{
public:
	struct FVector                                NewLocation;                                       // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ReturnValue;                                       // 0x0018(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_ModifyFinalLocation) == 0x000008, "Wrong alignment on PFPathFollowerComponent_ModifyFinalLocation");
static_assert(sizeof(PFPathFollowerComponent_ModifyFinalLocation) == 0x000030, "Wrong size on PFPathFollowerComponent_ModifyFinalLocation");
static_assert(offsetof(PFPathFollowerComponent_ModifyFinalLocation, NewLocation) == 0x000000, "Member 'PFPathFollowerComponent_ModifyFinalLocation::NewLocation' has a wrong offset!");
static_assert(offsetof(PFPathFollowerComponent_ModifyFinalLocation, ReturnValue) == 0x000018, "Member 'PFPathFollowerComponent_ModifyFinalLocation::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.ModifyFinalRotation
// 0x0030 (0x0030 - 0x0000)
struct PFPathFollowerComponent_ModifyFinalRotation final
{
public:
	struct FRotator                               NewRotation;                                       // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                               ReturnValue;                                       // 0x0018(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_ModifyFinalRotation) == 0x000008, "Wrong alignment on PFPathFollowerComponent_ModifyFinalRotation");
static_assert(sizeof(PFPathFollowerComponent_ModifyFinalRotation) == 0x000030, "Wrong size on PFPathFollowerComponent_ModifyFinalRotation");
static_assert(offsetof(PFPathFollowerComponent_ModifyFinalRotation, NewRotation) == 0x000000, "Member 'PFPathFollowerComponent_ModifyFinalRotation::NewRotation' has a wrong offset!");
static_assert(offsetof(PFPathFollowerComponent_ModifyFinalRotation, ReturnValue) == 0x000018, "Member 'PFPathFollowerComponent_ModifyFinalRotation::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.RemoveEventPoint
// 0x0028 (0x0028 - 0x0000)
struct PFPathFollowerComponent_RemoveEventPoint final
{
public:
	struct FEventPoint                            EventPoint;                                        // 0x0000(0x0028)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_RemoveEventPoint) == 0x000008, "Wrong alignment on PFPathFollowerComponent_RemoveEventPoint");
static_assert(sizeof(PFPathFollowerComponent_RemoveEventPoint) == 0x000028, "Wrong size on PFPathFollowerComponent_RemoveEventPoint");
static_assert(offsetof(PFPathFollowerComponent_RemoveEventPoint, EventPoint) == 0x000000, "Member 'PFPathFollowerComponent_RemoveEventPoint::EventPoint' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.RemoveEventPointByIndex
// 0x0004 (0x0004 - 0x0000)
struct PFPathFollowerComponent_RemoveEventPointByIndex final
{
public:
	int32                                         EventPointIndex;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_RemoveEventPointByIndex) == 0x000004, "Wrong alignment on PFPathFollowerComponent_RemoveEventPointByIndex");
static_assert(sizeof(PFPathFollowerComponent_RemoveEventPointByIndex) == 0x000004, "Wrong size on PFPathFollowerComponent_RemoveEventPointByIndex");
static_assert(offsetof(PFPathFollowerComponent_RemoveEventPointByIndex, EventPointIndex) == 0x000000, "Member 'PFPathFollowerComponent_RemoveEventPointByIndex::EventPointIndex' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.RemoveEventPointByName
// 0x0008 (0x0008 - 0x0000)
struct PFPathFollowerComponent_RemoveEventPointByName final
{
public:
	class FName                                   EventPointName;                                    // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_RemoveEventPointByName) == 0x000004, "Wrong alignment on PFPathFollowerComponent_RemoveEventPointByName");
static_assert(sizeof(PFPathFollowerComponent_RemoveEventPointByName) == 0x000008, "Wrong size on PFPathFollowerComponent_RemoveEventPointByName");
static_assert(offsetof(PFPathFollowerComponent_RemoveEventPointByName, EventPointName) == 0x000000, "Member 'PFPathFollowerComponent_RemoveEventPointByName::EventPointName' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.Reverse
// 0x0001 (0x0001 - 0x0000)
struct PFPathFollowerComponent_Reverse final
{
public:
	bool                                          Param_Reverse;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_Reverse) == 0x000001, "Wrong alignment on PFPathFollowerComponent_Reverse");
static_assert(sizeof(PFPathFollowerComponent_Reverse) == 0x000001, "Wrong size on PFPathFollowerComponent_Reverse");
static_assert(offsetof(PFPathFollowerComponent_Reverse, Param_Reverse) == 0x000000, "Member 'PFPathFollowerComponent_Reverse::Param_Reverse' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.SetCurrentDistance
// 0x0004 (0x0004 - 0x0000)
struct PFPathFollowerComponent_SetCurrentDistance final
{
public:
	float                                         NewDistance;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_SetCurrentDistance) == 0x000004, "Wrong alignment on PFPathFollowerComponent_SetCurrentDistance");
static_assert(sizeof(PFPathFollowerComponent_SetCurrentDistance) == 0x000004, "Wrong size on PFPathFollowerComponent_SetCurrentDistance");
static_assert(offsetof(PFPathFollowerComponent_SetCurrentDistance, NewDistance) == 0x000000, "Member 'PFPathFollowerComponent_SetCurrentDistance::NewDistance' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.SetPathOwner
// 0x0008 (0x0008 - 0x0000)
struct PFPathFollowerComponent_SetPathOwner final
{
public:
	class AActor*                                 Param_PathOwner;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_SetPathOwner) == 0x000008, "Wrong alignment on PFPathFollowerComponent_SetPathOwner");
static_assert(sizeof(PFPathFollowerComponent_SetPathOwner) == 0x000008, "Wrong size on PFPathFollowerComponent_SetPathOwner");
static_assert(offsetof(PFPathFollowerComponent_SetPathOwner, Param_PathOwner) == 0x000000, "Member 'PFPathFollowerComponent_SetPathOwner::Param_PathOwner' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.SetPathToFollow
// 0x0008 (0x0008 - 0x0000)
struct PFPathFollowerComponent_SetPathToFollow final
{
public:
	class USplineComponent*                       Spline;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_SetPathToFollow) == 0x000008, "Wrong alignment on PFPathFollowerComponent_SetPathToFollow");
static_assert(sizeof(PFPathFollowerComponent_SetPathToFollow) == 0x000008, "Wrong size on PFPathFollowerComponent_SetPathToFollow");
static_assert(offsetof(PFPathFollowerComponent_SetPathToFollow, Spline) == 0x000000, "Member 'PFPathFollowerComponent_SetPathToFollow::Spline' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.Start
// 0x0004 (0x0004 - 0x0000)
struct PFPathFollowerComponent_Start final
{
public:
	float                                         Param_StartDelay;                                  // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_Start) == 0x000004, "Wrong alignment on PFPathFollowerComponent_Start");
static_assert(sizeof(PFPathFollowerComponent_Start) == 0x000004, "Wrong size on PFPathFollowerComponent_Start");
static_assert(offsetof(PFPathFollowerComponent_Start, Param_StartDelay) == 0x000000, "Member 'PFPathFollowerComponent_Start::Param_StartDelay' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.GetLocationAtDistance
// 0x0020 (0x0020 - 0x0000)
struct PFPathFollowerComponent_GetLocationAtDistance final
{
public:
	float                                         Distance;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESplineCoordinateSpace                        Coord;                                             // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1828[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_GetLocationAtDistance) == 0x000008, "Wrong alignment on PFPathFollowerComponent_GetLocationAtDistance");
static_assert(sizeof(PFPathFollowerComponent_GetLocationAtDistance) == 0x000020, "Wrong size on PFPathFollowerComponent_GetLocationAtDistance");
static_assert(offsetof(PFPathFollowerComponent_GetLocationAtDistance, Distance) == 0x000000, "Member 'PFPathFollowerComponent_GetLocationAtDistance::Distance' has a wrong offset!");
static_assert(offsetof(PFPathFollowerComponent_GetLocationAtDistance, Coord) == 0x000004, "Member 'PFPathFollowerComponent_GetLocationAtDistance::Coord' has a wrong offset!");
static_assert(offsetof(PFPathFollowerComponent_GetLocationAtDistance, ReturnValue) == 0x000008, "Member 'PFPathFollowerComponent_GetLocationAtDistance::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.GetMoveDirection
// 0x0018 (0x0018 - 0x0000)
struct PFPathFollowerComponent_GetMoveDirection final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_GetMoveDirection) == 0x000008, "Wrong alignment on PFPathFollowerComponent_GetMoveDirection");
static_assert(sizeof(PFPathFollowerComponent_GetMoveDirection) == 0x000018, "Wrong size on PFPathFollowerComponent_GetMoveDirection");
static_assert(offsetof(PFPathFollowerComponent_GetMoveDirection, ReturnValue) == 0x000000, "Member 'PFPathFollowerComponent_GetMoveDirection::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.GetRotationAtDistance
// 0x0020 (0x0020 - 0x0000)
struct PFPathFollowerComponent_GetRotationAtDistance final
{
public:
	float                                         Distance;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESplineCoordinateSpace                        Coord;                                             // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1829[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_GetRotationAtDistance) == 0x000008, "Wrong alignment on PFPathFollowerComponent_GetRotationAtDistance");
static_assert(sizeof(PFPathFollowerComponent_GetRotationAtDistance) == 0x000020, "Wrong size on PFPathFollowerComponent_GetRotationAtDistance");
static_assert(offsetof(PFPathFollowerComponent_GetRotationAtDistance, Distance) == 0x000000, "Member 'PFPathFollowerComponent_GetRotationAtDistance::Distance' has a wrong offset!");
static_assert(offsetof(PFPathFollowerComponent_GetRotationAtDistance, Coord) == 0x000004, "Member 'PFPathFollowerComponent_GetRotationAtDistance::Coord' has a wrong offset!");
static_assert(offsetof(PFPathFollowerComponent_GetRotationAtDistance, ReturnValue) == 0x000008, "Member 'PFPathFollowerComponent_GetRotationAtDistance::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.GetSpeedAtDistance
// 0x0008 (0x0008 - 0x0000)
struct PFPathFollowerComponent_GetSpeedAtDistance final
{
public:
	float                                         Distance;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_GetSpeedAtDistance) == 0x000004, "Wrong alignment on PFPathFollowerComponent_GetSpeedAtDistance");
static_assert(sizeof(PFPathFollowerComponent_GetSpeedAtDistance) == 0x000008, "Wrong size on PFPathFollowerComponent_GetSpeedAtDistance");
static_assert(offsetof(PFPathFollowerComponent_GetSpeedAtDistance, Distance) == 0x000000, "Member 'PFPathFollowerComponent_GetSpeedAtDistance::Distance' has a wrong offset!");
static_assert(offsetof(PFPathFollowerComponent_GetSpeedAtDistance, ReturnValue) == 0x000004, "Member 'PFPathFollowerComponent_GetSpeedAtDistance::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.GetSpeedAtSpeedPoint
// 0x0008 (0x0008 - 0x0000)
struct PFPathFollowerComponent_GetSpeedAtSpeedPoint final
{
public:
	int32                                         PointIndex;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_GetSpeedAtSpeedPoint) == 0x000004, "Wrong alignment on PFPathFollowerComponent_GetSpeedAtSpeedPoint");
static_assert(sizeof(PFPathFollowerComponent_GetSpeedAtSpeedPoint) == 0x000008, "Wrong size on PFPathFollowerComponent_GetSpeedAtSpeedPoint");
static_assert(offsetof(PFPathFollowerComponent_GetSpeedAtSpeedPoint, PointIndex) == 0x000000, "Member 'PFPathFollowerComponent_GetSpeedAtSpeedPoint::PointIndex' has a wrong offset!");
static_assert(offsetof(PFPathFollowerComponent_GetSpeedAtSpeedPoint, ReturnValue) == 0x000004, "Member 'PFPathFollowerComponent_GetSpeedAtSpeedPoint::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.GetVelocity
// 0x0018 (0x0018 - 0x0000)
struct PFPathFollowerComponent_GetVelocity final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_GetVelocity) == 0x000008, "Wrong alignment on PFPathFollowerComponent_GetVelocity");
static_assert(sizeof(PFPathFollowerComponent_GetVelocity) == 0x000018, "Wrong size on PFPathFollowerComponent_GetVelocity");
static_assert(offsetof(PFPathFollowerComponent_GetVelocity, ReturnValue) == 0x000000, "Member 'PFPathFollowerComponent_GetVelocity::ReturnValue' has a wrong offset!");

// Function PathFollow.PFPathFollowerComponent.HasPath
// 0x0001 (0x0001 - 0x0000)
struct PFPathFollowerComponent_HasPath final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PFPathFollowerComponent_HasPath) == 0x000001, "Wrong alignment on PFPathFollowerComponent_HasPath");
static_assert(sizeof(PFPathFollowerComponent_HasPath) == 0x000001, "Wrong size on PFPathFollowerComponent_HasPath");
static_assert(offsetof(PFPathFollowerComponent_HasPath, ReturnValue) == 0x000000, "Member 'PFPathFollowerComponent_HasPath::ReturnValue' has a wrong offset!");

}

