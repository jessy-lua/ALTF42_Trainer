#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChaosSolverEngine

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "ChaosSolverEngine_structs.hpp"
#include "Engine_classes.hpp"
#include "Chaos_structs.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class ChaosSolverEngine.ChaosDebugDrawComponent
// 0x0008 (0x00A8 - 0x00A0)
class UChaosDebugDrawComponent final : public UActorComponent
{
public:
	uint8                                         Pad_122D[0x8];                                     // 0x00A0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosDebugDrawComponent">();
	}
	static class UChaosDebugDrawComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosDebugDrawComponent>();
	}
};
static_assert(alignof(UChaosDebugDrawComponent) == 0x000008, "Wrong alignment on UChaosDebugDrawComponent");
static_assert(sizeof(UChaosDebugDrawComponent) == 0x0000A8, "Wrong size on UChaosDebugDrawComponent");

// Class ChaosSolverEngine.ChaosEventListenerComponent
// 0x0008 (0x00A8 - 0x00A0)
class UChaosEventListenerComponent : public UActorComponent
{
public:
	uint8                                         Pad_122E[0x8];                                     // 0x00A0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosEventListenerComponent">();
	}
	static class UChaosEventListenerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosEventListenerComponent>();
	}
};
static_assert(alignof(UChaosEventListenerComponent) == 0x000008, "Wrong alignment on UChaosEventListenerComponent");
static_assert(sizeof(UChaosEventListenerComponent) == 0x0000A8, "Wrong size on UChaosEventListenerComponent");

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// 0x0210 (0x02B8 - 0x00A8)
class UChaosGameplayEventDispatcher final : public UChaosEventListenerComponent
{
public:
	uint8                                         Pad_122F[0xC0];                                    // 0x00A8(0x00C0)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;                       // 0x0168(0x0050)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                           // 0x01B8(0x0050)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UPrimitiveComponent*, struct FRemovalEventCallbackWrapper> RemovalEventRegistrations;                         // 0x0208(0x0050)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UPrimitiveComponent*, struct FCrumblingEventCallbackWrapper> CrumblingEventRegistrations;                       // 0x0258(0x0050)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1230[0x10];                                    // 0x02A8(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosGameplayEventDispatcher">();
	}
	static class UChaosGameplayEventDispatcher* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosGameplayEventDispatcher>();
	}
};
static_assert(alignof(UChaosGameplayEventDispatcher) == 0x000008, "Wrong alignment on UChaosGameplayEventDispatcher");
static_assert(sizeof(UChaosGameplayEventDispatcher) == 0x0002B8, "Wrong size on UChaosGameplayEventDispatcher");
static_assert(offsetof(UChaosGameplayEventDispatcher, CollisionEventRegistrations) == 0x000168, "Member 'UChaosGameplayEventDispatcher::CollisionEventRegistrations' has a wrong offset!");
static_assert(offsetof(UChaosGameplayEventDispatcher, BreakEventRegistrations) == 0x0001B8, "Member 'UChaosGameplayEventDispatcher::BreakEventRegistrations' has a wrong offset!");
static_assert(offsetof(UChaosGameplayEventDispatcher, RemovalEventRegistrations) == 0x000208, "Member 'UChaosGameplayEventDispatcher::RemovalEventRegistrations' has a wrong offset!");
static_assert(offsetof(UChaosGameplayEventDispatcher, CrumblingEventRegistrations) == 0x000258, "Member 'UChaosGameplayEventDispatcher::CrumblingEventRegistrations' has a wrong offset!");

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class IChaosNotifyHandlerInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosNotifyHandlerInterface">();
	}
	static class IChaosNotifyHandlerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IChaosNotifyHandlerInterface>();
	}
};
static_assert(alignof(IChaosNotifyHandlerInterface) == 0x000008, "Wrong alignment on IChaosNotifyHandlerInterface");
static_assert(sizeof(IChaosNotifyHandlerInterface) == 0x000028, "Wrong size on IChaosNotifyHandlerInterface");

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UChaosSolverEngineBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FHitResult ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosSolverEngineBlueprintLibrary">();
	}
	static class UChaosSolverEngineBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosSolverEngineBlueprintLibrary>();
	}
};
static_assert(alignof(UChaosSolverEngineBlueprintLibrary) == 0x000008, "Wrong alignment on UChaosSolverEngineBlueprintLibrary");
static_assert(sizeof(UChaosSolverEngineBlueprintLibrary) == 0x000028, "Wrong size on UChaosSolverEngineBlueprintLibrary");

// Class ChaosSolverEngine.ChaosSolver
// 0x0000 (0x0028 - 0x0028)
class UChaosSolver final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosSolver">();
	}
	static class UChaosSolver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosSolver>();
	}
};
static_assert(alignof(UChaosSolver) == 0x000008, "Wrong alignment on UChaosSolver");
static_assert(sizeof(UChaosSolver) == 0x000028, "Wrong size on UChaosSolver");

// Class ChaosSolverEngine.ChaosSolverActor
// 0x00F8 (0x0390 - 0x0298)
class AChaosSolverActor final : public AActor
{
public:
	struct FChaosSolverConfiguration              Properties;                                        // 0x0298(0x0068)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         TimeStepMultiplier;                                // 0x0300(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CollisionIterations;                               // 0x0304(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PushOutIterations;                                 // 0x0308(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PushOutPairIterations;                             // 0x030C(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClusterConnectionFactor;                           // 0x0310(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EClusterConnectionTypeEnum                    ClusterUnionConnectionType;                        // 0x0314(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DoGenerateCollisionData;                           // 0x0315(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1231[0x2];                                     // 0x0316(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSolverCollisionFilterSettings         CollisionFilterSettings;                           // 0x0318(0x0010)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          DoGenerateBreakingData;                            // 0x0328(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1232[0x3];                                     // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSolverBreakingFilterSettings          BreakingFilterSettings;                            // 0x032C(0x0010)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          DoGenerateTrailingData;                            // 0x033C(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1233[0x3];                                     // 0x033D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSolverTrailingFilterSettings          TrailingFilterSettings;                            // 0x0340(0x0010)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	float                                         MassScale;                                         // 0x0350(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHasFloor;                                         // 0x0354(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1234[0x3];                                     // 0x0355(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FloorHeight;                                       // 0x0358(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChaosDebugSubstepControl              ChaosDebugSubstepControl;                          // 0x035C(0x0003)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1235[0x1];                                     // 0x035F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UBillboardComponent*                    SpriteComponent;                                   // 0x0360(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1236[0x18];                                    // 0x0368(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	class UChaosGameplayEventDispatcher*          GameplayEventDispatcherComponent;                  // 0x0380(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1237[0x8];                                     // 0x0388(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetAsCurrentWorldSolver();
	void SetSolverActive(bool bActive);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosSolverActor">();
	}
	static class AChaosSolverActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AChaosSolverActor>();
	}
};
static_assert(alignof(AChaosSolverActor) == 0x000008, "Wrong alignment on AChaosSolverActor");
static_assert(sizeof(AChaosSolverActor) == 0x000390, "Wrong size on AChaosSolverActor");
static_assert(offsetof(AChaosSolverActor, Properties) == 0x000298, "Member 'AChaosSolverActor::Properties' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, TimeStepMultiplier) == 0x000300, "Member 'AChaosSolverActor::TimeStepMultiplier' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, CollisionIterations) == 0x000304, "Member 'AChaosSolverActor::CollisionIterations' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, PushOutIterations) == 0x000308, "Member 'AChaosSolverActor::PushOutIterations' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, PushOutPairIterations) == 0x00030C, "Member 'AChaosSolverActor::PushOutPairIterations' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, ClusterConnectionFactor) == 0x000310, "Member 'AChaosSolverActor::ClusterConnectionFactor' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, ClusterUnionConnectionType) == 0x000314, "Member 'AChaosSolverActor::ClusterUnionConnectionType' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, DoGenerateCollisionData) == 0x000315, "Member 'AChaosSolverActor::DoGenerateCollisionData' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, CollisionFilterSettings) == 0x000318, "Member 'AChaosSolverActor::CollisionFilterSettings' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, DoGenerateBreakingData) == 0x000328, "Member 'AChaosSolverActor::DoGenerateBreakingData' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, BreakingFilterSettings) == 0x00032C, "Member 'AChaosSolverActor::BreakingFilterSettings' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, DoGenerateTrailingData) == 0x00033C, "Member 'AChaosSolverActor::DoGenerateTrailingData' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, TrailingFilterSettings) == 0x000340, "Member 'AChaosSolverActor::TrailingFilterSettings' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, MassScale) == 0x000350, "Member 'AChaosSolverActor::MassScale' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, bHasFloor) == 0x000354, "Member 'AChaosSolverActor::bHasFloor' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, FloorHeight) == 0x000358, "Member 'AChaosSolverActor::FloorHeight' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, ChaosDebugSubstepControl) == 0x00035C, "Member 'AChaosSolverActor::ChaosDebugSubstepControl' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, SpriteComponent) == 0x000360, "Member 'AChaosSolverActor::SpriteComponent' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, GameplayEventDispatcherComponent) == 0x000380, "Member 'AChaosSolverActor::GameplayEventDispatcherComponent' has a wrong offset!");

// Class ChaosSolverEngine.ChaosSolverSettings
// 0x0028 (0x0060 - 0x0038)
class UChaosSolverSettings final : public UDeveloperSettings
{
public:
	uint8                                         Pad_1238[0x8];                                     // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftClassPath                         DefaultChaosSolverActorClass;                      // 0x0040(0x0020)(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosSolverSettings">();
	}
	static class UChaosSolverSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosSolverSettings>();
	}
};
static_assert(alignof(UChaosSolverSettings) == 0x000008, "Wrong alignment on UChaosSolverSettings");
static_assert(sizeof(UChaosSolverSettings) == 0x000060, "Wrong size on UChaosSolverSettings");
static_assert(offsetof(UChaosSolverSettings, DefaultChaosSolverActorClass) == 0x000040, "Member 'UChaosSolverSettings::DefaultChaosSolverActorClass' has a wrong offset!");

}

