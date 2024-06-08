#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ARUtilities

#include "Basic.hpp"

#include "ARUtilities_structs.hpp"
#include "LiveLinkAnimationCore_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"
#include "AugmentedReality_structs.hpp"


namespace SDK
{

// Class ARUtilities.ARLiveLinkRetargetAsset
// 0x0088 (0x00B0 - 0x0028)
class UARLiveLinkRetargetAsset final : public ULiveLinkRetargetAsset
{
public:
	EARLiveLinkSourceType                         SourceType;                                        // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2132[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class FName>                BoneMap;                                           // 0x0030(0x0050)(Edit, NativeAccessSpecifierPublic)
	struct FARKitPoseTrackingConfig               ARKitPoseTrackingConfig;                           // 0x0080(0x0030)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ARLiveLinkRetargetAsset">();
	}
	static class UARLiveLinkRetargetAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UARLiveLinkRetargetAsset>();
	}
};
static_assert(alignof(UARLiveLinkRetargetAsset) == 0x000008, "Wrong alignment on UARLiveLinkRetargetAsset");
static_assert(sizeof(UARLiveLinkRetargetAsset) == 0x0000B0, "Wrong size on UARLiveLinkRetargetAsset");
static_assert(offsetof(UARLiveLinkRetargetAsset, SourceType) == 0x000028, "Member 'UARLiveLinkRetargetAsset::SourceType' has a wrong offset!");
static_assert(offsetof(UARLiveLinkRetargetAsset, BoneMap) == 0x000030, "Member 'UARLiveLinkRetargetAsset::BoneMap' has a wrong offset!");
static_assert(offsetof(UARLiveLinkRetargetAsset, ARKitPoseTrackingConfig) == 0x000080, "Member 'UARLiveLinkRetargetAsset::ARKitPoseTrackingConfig' has a wrong offset!");

// Class ARUtilities.ARPassthroughManager
// 0x0018 (0x02B0 - 0x0298)
class AARPassthroughManager final : public AActor
{
public:
	TArray<TSubclassOf<class UARComponent>>       ARComponentClasses;                                // 0x0298(0x0010)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UPassthroughMaterialUpdateComponent*    PassthroughUpdateComponent;                        // 0x02A8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	class UPassthroughMaterialUpdateComponent* GetPassthroughMaterialUpdateComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ARPassthroughManager">();
	}
	static class AARPassthroughManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<AARPassthroughManager>();
	}
};
static_assert(alignof(AARPassthroughManager) == 0x000008, "Wrong alignment on AARPassthroughManager");
static_assert(sizeof(AARPassthroughManager) == 0x0002B0, "Wrong size on AARPassthroughManager");
static_assert(offsetof(AARPassthroughManager, ARComponentClasses) == 0x000298, "Member 'AARPassthroughManager::ARComponentClasses' has a wrong offset!");
static_assert(offsetof(AARPassthroughManager, PassthroughUpdateComponent) == 0x0002A8, "Member 'AARPassthroughManager::PassthroughUpdateComponent' has a wrong offset!");

// Class ARUtilities.ARUtilitiesFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UARUtilitiesFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void UpdateCameraTextureParam(class UMaterialInstanceDynamic* MaterialInstance, class UTexture* CameraTexture, float ColorScale);
	static void UpdateSceneDepthTexture(class UMaterialInstanceDynamic* MaterialInstance, class UTexture* SceneDepthTexture, float DepthToMeterScale);
	static void UpdateWorldToMeterScale(class UMaterialInstanceDynamic* MaterialInstance, float WorldToMeterScale);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ARUtilitiesFunctionLibrary">();
	}
	static class UARUtilitiesFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UARUtilitiesFunctionLibrary>();
	}
};
static_assert(alignof(UARUtilitiesFunctionLibrary) == 0x000008, "Wrong alignment on UARUtilitiesFunctionLibrary");
static_assert(sizeof(UARUtilitiesFunctionLibrary) == 0x000028, "Wrong size on UARUtilitiesFunctionLibrary");

// Class ARUtilities.PassthroughMaterialUpdateComponent
// 0x0048 (0x00E8 - 0x00A0)
class UPassthroughMaterialUpdateComponent final : public UActorComponent
{
public:
	EARTextureType                                TextureType;                                       // 0x00A0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2136[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     PassthroughMaterial;                               // 0x00A8(0x0008)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                     PassthroughMaterialExternalTexture;                // 0x00B0(0x0008)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                           PassthroughDebugColor;                             // 0x00B8(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPrimitiveComponent*>            AffectedComponents;                                // 0x00C8(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UPrimitiveComponent*>            PendingComponents;                                 // 0x00D8(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	void AddAffectedComponent(class UPrimitiveComponent* InComponent);
	void RemoveAffectedComponent(class UPrimitiveComponent* InComponent);
	void SetPassthroughDebugColor(const struct FLinearColor& NewDebugColor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PassthroughMaterialUpdateComponent">();
	}
	static class UPassthroughMaterialUpdateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPassthroughMaterialUpdateComponent>();
	}
};
static_assert(alignof(UPassthroughMaterialUpdateComponent) == 0x000008, "Wrong alignment on UPassthroughMaterialUpdateComponent");
static_assert(sizeof(UPassthroughMaterialUpdateComponent) == 0x0000E8, "Wrong size on UPassthroughMaterialUpdateComponent");
static_assert(offsetof(UPassthroughMaterialUpdateComponent, TextureType) == 0x0000A0, "Member 'UPassthroughMaterialUpdateComponent::TextureType' has a wrong offset!");
static_assert(offsetof(UPassthroughMaterialUpdateComponent, PassthroughMaterial) == 0x0000A8, "Member 'UPassthroughMaterialUpdateComponent::PassthroughMaterial' has a wrong offset!");
static_assert(offsetof(UPassthroughMaterialUpdateComponent, PassthroughMaterialExternalTexture) == 0x0000B0, "Member 'UPassthroughMaterialUpdateComponent::PassthroughMaterialExternalTexture' has a wrong offset!");
static_assert(offsetof(UPassthroughMaterialUpdateComponent, PassthroughDebugColor) == 0x0000B8, "Member 'UPassthroughMaterialUpdateComponent::PassthroughDebugColor' has a wrong offset!");
static_assert(offsetof(UPassthroughMaterialUpdateComponent, AffectedComponents) == 0x0000C8, "Member 'UPassthroughMaterialUpdateComponent::AffectedComponents' has a wrong offset!");
static_assert(offsetof(UPassthroughMaterialUpdateComponent, PendingComponents) == 0x0000D8, "Member 'UPassthroughMaterialUpdateComponent::PendingComponents' has a wrong offset!");

}

