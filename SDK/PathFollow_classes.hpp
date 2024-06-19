#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PathFollow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "PathFollow_structs.hpp"


namespace SDK
{

// Class PathFollow.EventPointDelegateHolder
// 0x0010 (0x0038 - 0x0028)
class UEventPointDelegateHolder final : public UObject
{
public:
	FMulticastInlineDelegateProperty_             OnEventPointReached;                               // 0x0028(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EventPointDelegateHolder">();
	}
	static class UEventPointDelegateHolder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventPointDelegateHolder>();
	}
};
static_assert(alignof(UEventPointDelegateHolder) == 0x000008, "Wrong alignment on UEventPointDelegateHolder");
static_assert(sizeof(UEventPointDelegateHolder) == 0x000038, "Wrong size on UEventPointDelegateHolder");
static_assert(offsetof(UEventPointDelegateHolder, OnEventPointReached) == 0x000028, "Member 'UEventPointDelegateHolder::OnEventPointReached' has a wrong offset!");

// Class PathFollow.PFPathBase
// 0x0008 (0x02A0 - 0x0298)
class APFPathBase final : public AActor
{
public:
	class UPFPathComponent*                       PathToFollow;                                      // 0x0298(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PFPathBase">();
	}
	static class APFPathBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<APFPathBase>();
	}
};
static_assert(alignof(APFPathBase) == 0x000008, "Wrong alignment on APFPathBase");
static_assert(sizeof(APFPathBase) == 0x0002A0, "Wrong size on APFPathBase");
static_assert(offsetof(APFPathBase, PathToFollow) == 0x000298, "Member 'APFPathBase::PathToFollow' has a wrong offset!");

// Class PathFollow.PFPathComponent
// 0x0130 (0x07A0 - 0x0670)
class UPFPathComponent final : public USplineComponent
{
public:
	struct FDrawerData                            DrawerConfig;                                      // 0x0670(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPFEventPointsVisualization            EventPointsVisualization;                          // 0x0680(0x0018)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPFEventPoints                         EventPoints;                                       // 0x0698(0x0038)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPFPathRoller                          _PathRoller;                                       // 0x06D0(0x0028)(Edit, NativeAccessSpecifierPublic)
	struct FPFSpeedCurve                          _speedCurve;                                       // 0x06F8(0x0018)(Edit, NativeAccessSpecifierPublic)
	bool                                          MirrorAroundX;                                     // 0x0710(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_180E[0x3];                                     // 0x0711(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPFAutoRollVisualConfig                AutoRollDebugConfig;                               // 0x0714(0x0030)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_180F[0x4];                                     // 0x0744(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPFSpeedPointsDrawConfig               SpeedPointDrawConfig;                              // 0x0748(0x0040)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UPFPathFollowerComponent*               _FollowerComponent;                                // 0x0788(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1810[0x10];                                    // 0x0790(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FVector GetLocationAtDistanceAlongSplineMirrored(float Distance, ESplineCoordinateSpace CoordinateSpace) const;
	struct FVector GetLocationAtSplineInputKeyMirrored(float Key, ESplineCoordinateSpace CoordinateSpace) const;
	struct FVector GetLocationAtSplinePointMirrored(int32 PointIdx, ESplineCoordinateSpace CoordinateSpace) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PFPathComponent">();
	}
	static class UPFPathComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPFPathComponent>();
	}
};
static_assert(alignof(UPFPathComponent) == 0x000010, "Wrong alignment on UPFPathComponent");
static_assert(sizeof(UPFPathComponent) == 0x0007A0, "Wrong size on UPFPathComponent");
static_assert(offsetof(UPFPathComponent, DrawerConfig) == 0x000670, "Member 'UPFPathComponent::DrawerConfig' has a wrong offset!");
static_assert(offsetof(UPFPathComponent, EventPointsVisualization) == 0x000680, "Member 'UPFPathComponent::EventPointsVisualization' has a wrong offset!");
static_assert(offsetof(UPFPathComponent, EventPoints) == 0x000698, "Member 'UPFPathComponent::EventPoints' has a wrong offset!");
static_assert(offsetof(UPFPathComponent, _PathRoller) == 0x0006D0, "Member 'UPFPathComponent::_PathRoller' has a wrong offset!");
static_assert(offsetof(UPFPathComponent, _speedCurve) == 0x0006F8, "Member 'UPFPathComponent::_speedCurve' has a wrong offset!");
static_assert(offsetof(UPFPathComponent, MirrorAroundX) == 0x000710, "Member 'UPFPathComponent::MirrorAroundX' has a wrong offset!");
static_assert(offsetof(UPFPathComponent, AutoRollDebugConfig) == 0x000714, "Member 'UPFPathComponent::AutoRollDebugConfig' has a wrong offset!");
static_assert(offsetof(UPFPathComponent, SpeedPointDrawConfig) == 0x000748, "Member 'UPFPathComponent::SpeedPointDrawConfig' has a wrong offset!");
static_assert(offsetof(UPFPathComponent, _FollowerComponent) == 0x000788, "Member 'UPFPathComponent::_FollowerComponent' has a wrong offset!");

// Class PathFollow.PFPathFollowerComponent
// 0x0208 (0x02A8 - 0x00A0)
class UPFPathFollowerComponent final : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_             OnReachedEnd;                                      // 0x00A0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnReachedStart;                                    // 0x00B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnStartPath;                                       // 0x00C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AActor*                                 PathOwner;                                         // 0x00D0(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bTeleportPhysics;                                  // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1814[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TickInterval;                                      // 0x00DC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHidePathInfoText;                                 // 0x00E0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1815[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SpeedDuration;                                     // 0x00E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TimeBased;                                         // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFollowRotation;                                   // 0x00E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseSpeedCurve;                                    // 0x00EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverridePathSpeedPoints;                          // 0x00EB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPFFactorOperation                            SpeedFactorOperation;                              // 0x00EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1816[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SpeedFactor;                                       // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1817[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPFSpeedCurve                          _speedCurve;                                       // 0x00F8(0x0018)(NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                      _InterpSpeedCurve;                                 // 0x0110(0x0018)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EEasingType                                   EasingType;                                        // 0x0128(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1818[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CurveDegree;                                       // 0x012C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLoop;                                             // 0x0130(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPFLoopType                                   LoopType;                                          // 0x0131(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStartAtPlay;                                      // 0x0132(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1819[0x1];                                     // 0x0133(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartDelay;                                        // 0x0134(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartDistance;                                     // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReverse;                                          // 0x013C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInvertRotationOnReverse;                          // 0x013D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_181A[0x2];                                     // 0x013E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LookAhead;                                         // 0x0140(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseRotationCurve;                                 // 0x0144(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUsePathPitchAndYaw;                               // 0x0145(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoRecompute;                                    // 0x0146(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bKeepRelativeDistances;                            // 0x0147(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RotationPointSteps;                                // 0x0148(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          GenerateOnSplineControlPoints;                     // 0x014C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_181B[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RollSampleDistance;                                // 0x0150(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bClampGeneratedAngles;                             // 0x0154(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_181C[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RollAnglesClampMax;                                // 0x0158(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RollAnglesClampMin;                                // 0x015C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPFRollInterpType                             RollIntepType;                                     // 0x0160(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPFFactorOperation                            RotationFactorOperation;                           // 0x0161(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_181D[0x6];                                     // 0x0162(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               RotationFactor;                                    // 0x0168(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          RotationMaskLocal;                                 // 0x0180(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_181E[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntVector                             RotationUpdateMask;                                // 0x0184(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                             LocationUpdateMask;                                // 0x0190(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideRotationCurve;                            // 0x019C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_181F[0x3];                                     // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPFPathRoller                          _PathRoller;                                       // 0x01A0(0x0028)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USceneComponent*                        LocationComponent;                                 // 0x01C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                        RotationComponent;                                 // 0x01D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                        RollComponent;                                     // 0x01D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                        LookAtComponent;                                   // 0x01E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLookAtEvenIfNotStarted;                           // 0x01E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStarted;                                          // 0x01E9(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPause;                                            // 0x01EA(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAlignToPathStart;                                 // 0x01EB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurrentDistanceOnPath;                             // 0x01EC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverridePathEventPoints;                          // 0x01F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1820[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPFEventPoints                         EventPoints;                                       // 0x01F8(0x0038)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USplineComponent>        SplineToFollow;                                    // 0x0230(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _pathDuration;                                     // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _currSplineLength;                                 // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _ElapsedTime;                                      // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1821[0x4];                                     // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           _DelayTimer;                                       // 0x0248(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _lastTickTime;                                     // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1822[0x4C];                                    // 0x0254(0x004C)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         _LastPassedEventIndex;                             // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1823[0x4];                                     // 0x02A4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UEventPointDelegateHolder* AddEventPoint(class FName Param_Name, float Distance, TSubclassOf<class UObject> UserData, EPFEventFireMode FireMode, int32 FireCount);
	void ComputeAutoRotationPoints();
	struct FRotator ComputeLookAtRotation(class USceneComponent* TargetComponent, const struct FVector& FollowerLocation);
	bool EventPointExistByName(const class FName& Param_Name);
	void FollowPath(float FollowStep);
	struct FEventPoint GetEventPointByName(const class FName& Param_Name);
	class UEventPointDelegateHolder* GetEventPointDelegateAll();
	class UEventPointDelegateHolder* GetEventPointDelegateByIndex(int32 Param_Index);
	class UEventPointDelegateHolder* GetEventPointDelegateByName(const class FName& Param_Name);
	struct FPFEventPoints GetEventPoints();
	class AActor* GetPathOwner();
	class UPFPathComponent* GetPathToFollow();
	struct FVector ModifyFinalLocation(const struct FVector& NewLocation);
	struct FRotator ModifyFinalRotation(const struct FRotator& NewRotation);
	void Pause();
	void RemoveEventPoint(const struct FEventPoint& EventPoint);
	void RemoveEventPointByIndex(int32 EventPointIndex);
	void RemoveEventPointByName(const class FName& EventPointName);
	void Reverse(bool Param_Reverse);
	void SetCurrentDistance(float NewDistance);
	void SetPathOwner(class AActor* Param_PathOwner);
	void SetPathToFollow(class USplineComponent* Spline);
	void Start(float Param_StartDelay);
	void StartImpl();
	void Stop();
	void UpdateAutoRotationPoints();

	struct FVector GetLocationAtDistance(float Distance, ESplineCoordinateSpace Coord) const;
	struct FVector GetMoveDirection() const;
	struct FRotator GetRotationAtDistance(float Distance, ESplineCoordinateSpace Coord) const;
	float GetSpeedAtDistance(float Distance) const;
	float GetSpeedAtSpeedPoint(int32 PointIndex) const;
	struct FVector GetVelocity() const;
	bool HasPath() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PFPathFollowerComponent">();
	}
	static class UPFPathFollowerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPFPathFollowerComponent>();
	}
};
static_assert(alignof(UPFPathFollowerComponent) == 0x000008, "Wrong alignment on UPFPathFollowerComponent");
static_assert(sizeof(UPFPathFollowerComponent) == 0x0002A8, "Wrong size on UPFPathFollowerComponent");
static_assert(offsetof(UPFPathFollowerComponent, OnReachedEnd) == 0x0000A0, "Member 'UPFPathFollowerComponent::OnReachedEnd' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, OnReachedStart) == 0x0000B0, "Member 'UPFPathFollowerComponent::OnReachedStart' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, OnStartPath) == 0x0000C0, "Member 'UPFPathFollowerComponent::OnStartPath' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, PathOwner) == 0x0000D0, "Member 'UPFPathFollowerComponent::PathOwner' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bTeleportPhysics) == 0x0000D8, "Member 'UPFPathFollowerComponent::bTeleportPhysics' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, TickInterval) == 0x0000DC, "Member 'UPFPathFollowerComponent::TickInterval' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bHidePathInfoText) == 0x0000E0, "Member 'UPFPathFollowerComponent::bHidePathInfoText' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, SpeedDuration) == 0x0000E4, "Member 'UPFPathFollowerComponent::SpeedDuration' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, TimeBased) == 0x0000E8, "Member 'UPFPathFollowerComponent::TimeBased' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bFollowRotation) == 0x0000E9, "Member 'UPFPathFollowerComponent::bFollowRotation' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bUseSpeedCurve) == 0x0000EA, "Member 'UPFPathFollowerComponent::bUseSpeedCurve' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bOverridePathSpeedPoints) == 0x0000EB, "Member 'UPFPathFollowerComponent::bOverridePathSpeedPoints' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, SpeedFactorOperation) == 0x0000EC, "Member 'UPFPathFollowerComponent::SpeedFactorOperation' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, SpeedFactor) == 0x0000F0, "Member 'UPFPathFollowerComponent::SpeedFactor' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, _speedCurve) == 0x0000F8, "Member 'UPFPathFollowerComponent::_speedCurve' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, _InterpSpeedCurve) == 0x000110, "Member 'UPFPathFollowerComponent::_InterpSpeedCurve' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, EasingType) == 0x000128, "Member 'UPFPathFollowerComponent::EasingType' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, CurveDegree) == 0x00012C, "Member 'UPFPathFollowerComponent::CurveDegree' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bLoop) == 0x000130, "Member 'UPFPathFollowerComponent::bLoop' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, LoopType) == 0x000131, "Member 'UPFPathFollowerComponent::LoopType' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bStartAtPlay) == 0x000132, "Member 'UPFPathFollowerComponent::bStartAtPlay' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, StartDelay) == 0x000134, "Member 'UPFPathFollowerComponent::StartDelay' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, StartDistance) == 0x000138, "Member 'UPFPathFollowerComponent::StartDistance' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bReverse) == 0x00013C, "Member 'UPFPathFollowerComponent::bReverse' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bInvertRotationOnReverse) == 0x00013D, "Member 'UPFPathFollowerComponent::bInvertRotationOnReverse' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, LookAhead) == 0x000140, "Member 'UPFPathFollowerComponent::LookAhead' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bUseRotationCurve) == 0x000144, "Member 'UPFPathFollowerComponent::bUseRotationCurve' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bUsePathPitchAndYaw) == 0x000145, "Member 'UPFPathFollowerComponent::bUsePathPitchAndYaw' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bAutoRecompute) == 0x000146, "Member 'UPFPathFollowerComponent::bAutoRecompute' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bKeepRelativeDistances) == 0x000147, "Member 'UPFPathFollowerComponent::bKeepRelativeDistances' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, RotationPointSteps) == 0x000148, "Member 'UPFPathFollowerComponent::RotationPointSteps' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, GenerateOnSplineControlPoints) == 0x00014C, "Member 'UPFPathFollowerComponent::GenerateOnSplineControlPoints' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, RollSampleDistance) == 0x000150, "Member 'UPFPathFollowerComponent::RollSampleDistance' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bClampGeneratedAngles) == 0x000154, "Member 'UPFPathFollowerComponent::bClampGeneratedAngles' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, RollAnglesClampMax) == 0x000158, "Member 'UPFPathFollowerComponent::RollAnglesClampMax' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, RollAnglesClampMin) == 0x00015C, "Member 'UPFPathFollowerComponent::RollAnglesClampMin' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, RollIntepType) == 0x000160, "Member 'UPFPathFollowerComponent::RollIntepType' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, RotationFactorOperation) == 0x000161, "Member 'UPFPathFollowerComponent::RotationFactorOperation' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, RotationFactor) == 0x000168, "Member 'UPFPathFollowerComponent::RotationFactor' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, RotationMaskLocal) == 0x000180, "Member 'UPFPathFollowerComponent::RotationMaskLocal' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, RotationUpdateMask) == 0x000184, "Member 'UPFPathFollowerComponent::RotationUpdateMask' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, LocationUpdateMask) == 0x000190, "Member 'UPFPathFollowerComponent::LocationUpdateMask' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bOverrideRotationCurve) == 0x00019C, "Member 'UPFPathFollowerComponent::bOverrideRotationCurve' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, _PathRoller) == 0x0001A0, "Member 'UPFPathFollowerComponent::_PathRoller' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, LocationComponent) == 0x0001C8, "Member 'UPFPathFollowerComponent::LocationComponent' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, RotationComponent) == 0x0001D0, "Member 'UPFPathFollowerComponent::RotationComponent' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, RollComponent) == 0x0001D8, "Member 'UPFPathFollowerComponent::RollComponent' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, LookAtComponent) == 0x0001E0, "Member 'UPFPathFollowerComponent::LookAtComponent' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bLookAtEvenIfNotStarted) == 0x0001E8, "Member 'UPFPathFollowerComponent::bLookAtEvenIfNotStarted' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bStarted) == 0x0001E9, "Member 'UPFPathFollowerComponent::bStarted' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bPause) == 0x0001EA, "Member 'UPFPathFollowerComponent::bPause' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bAlignToPathStart) == 0x0001EB, "Member 'UPFPathFollowerComponent::bAlignToPathStart' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, CurrentDistanceOnPath) == 0x0001EC, "Member 'UPFPathFollowerComponent::CurrentDistanceOnPath' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, bOverridePathEventPoints) == 0x0001F0, "Member 'UPFPathFollowerComponent::bOverridePathEventPoints' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, EventPoints) == 0x0001F8, "Member 'UPFPathFollowerComponent::EventPoints' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, SplineToFollow) == 0x000230, "Member 'UPFPathFollowerComponent::SplineToFollow' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, _pathDuration) == 0x000238, "Member 'UPFPathFollowerComponent::_pathDuration' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, _currSplineLength) == 0x00023C, "Member 'UPFPathFollowerComponent::_currSplineLength' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, _ElapsedTime) == 0x000240, "Member 'UPFPathFollowerComponent::_ElapsedTime' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, _DelayTimer) == 0x000248, "Member 'UPFPathFollowerComponent::_DelayTimer' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, _lastTickTime) == 0x000250, "Member 'UPFPathFollowerComponent::_lastTickTime' has a wrong offset!");
static_assert(offsetof(UPFPathFollowerComponent, _LastPassedEventIndex) == 0x0002A0, "Member 'UPFPathFollowerComponent::_LastPassedEventIndex' has a wrong offset!");

}

