#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Char_Costume_Location_BP

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Char_Costume_Location_BP.Char_Costume_Location_BP_C
// 0x0000 (0x0028 - 0x0028)
class UChar_Costume_Location_BP_C final : public UBlueprintFunctionLibrary
{
public:
	static void F_Char_AngelerFish_Costume(class USkeletalMeshComponent* Char_SkeletalMesh, class UObject* __WorldContext, struct FVector* Costume_Spawn_Location, struct FVector* AngelerFish_Scale, struct FVector* AngelerFish_Location, struct FRotator* Moai_Rotation);
	static void F_Char_Bikini_Costume(class USkeletalMeshComponent* Char_SkeletalMesh, class UObject* __WorldContext, struct FVector* Costume_Spawn_Location, struct FVector* Costume_Scale, struct FVector* Top_Location, struct FRotator* Top_Rotation, struct FVector* Bot_Location, struct FRotator* BotRotator);
	static void F_Char_Cannabis_Costume(class USkeletalMeshComponent* Char_SkeletalMesh, class UObject* __WorldContext, struct FVector* Costume_Spawn_Location, struct FVector* Costume_Scale, struct FVector* Cannabis_Location, struct FRotator* Cannabis_Rotation);
	static void F_Char_Flamingo_Costume(class USkeletalMeshComponent* Char_SkeletalMesh, class UObject* __WorldContext, struct FVector* Costume_Spawn_Location, struct FVector* Flamingo_Scale, struct FVector* Flamingo_Location, struct FRotator* Flamingo_Rotation);
	static void F_Char_GIraffe_Costume(class USkeletalMeshComponent* Char_SkeletalMesh, class UObject* __WorldContext, struct FVector* Costume_Spawn_Location, struct FVector* Giraffe_Scale, struct FVector* Giraffe_Location, struct FRotator* Giraffe_Rotation);
	static void F_Char_GoldenDonqui_Costume(class USkeletalMeshComponent* Char_SkeletalMesh, class UObject* __WorldContext, struct FVector* Costume_Spawn_Location, struct FVector* Scale, struct FVector* Belt_Location, struct FRotator* Belt_Rotation, struct FVector* Dagger01_Location, struct FRotator* Dagger01_Rotation, struct FVector* Dagger02_Location, struct FRotator* Dagger02_Rotation, struct FVector* SpineBracer_Location, struct FRotator* SpineBracer_Rotation, struct FVector* HolyGrail_Location, struct FRotator* HolyGrail_Rotation, struct FVector* Necklaces_Location, struct FRotator* Necklaces_Rotation, struct FVector* Crown_Location, struct FRotator* Crown_Rotation, struct FVector* ArmBracer_Location, struct FRotator* ArmBracer_Rotation);
	static void F_Char_Horse_Costume(class USkeletalMeshComponent* Char_SkeletalMesh, class UObject* __WorldContext, struct FVector* Costume_Spawn_Location, struct FVector* Costume_Scale, struct FVector* Horse_Location, struct FRotator* Horse_Rotation);
	static void F_Char_Manatee_Costume(class USkeletalMeshComponent* Char_SkeletalMesh, class UObject* __WorldContext, struct FVector* Costume_Spawn_Location, struct FVector* Manatee_Scale, struct FVector* Manatee_Location, struct FRotator* Manatee_Rotation);
	static void F_Char_MirrorBall_Costume(class USkeletalMeshComponent* Char_SkeletalMesh, class UObject* __WorldContext, struct FVector* Costume_Spawn_Location, struct FVector* Scale, struct FVector* MirrorBall_Location, struct FRotator* MirrorBall_Rotation);
	static void F_Char_Moai_Costume(class USkeletalMeshComponent* Char_SkeletalMesh, class UObject* __WorldContext, struct FVector* Costume_Spawn_Location, struct FVector* Moai_Scale, struct FVector* Moai_Location, struct FRotator* Moai_Rotation);
	static void F_Char_Rocket_Costume(class USkeletalMeshComponent* Char_SkeletalMesh, class UObject* __WorldContext, struct FVector* Costume_Spawn_Location, struct FVector* Costume_Scale, struct FVector* RocektHat_Location, struct FRotator* RocektHat_Rotation, struct FVector* RocektBag_Location, struct FRotator* RocektBag_Rotation);
	static void F_Char_Santa_Costume(class USkeletalMeshComponent* Char_SkeletalMesh, class UObject* __WorldContext, struct FVector* Costume_Spawn_Location, struct FVector* Costume_Scale, struct FVector* SantaHat_Location, struct FRotator* SantaHat_Rotation, struct FVector* SantaBag_Location, struct FRotator* SantaBag_Rotation);
	static void F_Char_Torch_Costume(class USkeletalMeshComponent* Char_SkeletalMesh, class UObject* __WorldContext, struct FVector* Costume_Spawn_Location, struct FVector* Costume_Scale, struct FVector* Torch_Location, struct FRotator* Torch_Rotation);
	static void F_Char_Unicorn_Costume(class USkeletalMeshComponent* Char_SkeletalMesh, class UObject* __WorldContext, struct FVector* Costume_Spawn_Location, struct FVector* Unicorn_Scale, struct FVector* Unicorn_Location, struct FRotator* Unicorn_Rotation, struct FVector* Unicorn_Tail_Location, struct FRotator* Unicorn_Tail_Rotation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Char_Costume_Location_BP_C">();
	}
	static class UChar_Costume_Location_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChar_Costume_Location_BP_C>();
	}
};
static_assert(alignof(UChar_Costume_Location_BP_C) == 0x000008, "Wrong alignment on UChar_Costume_Location_BP_C");
static_assert(sizeof(UChar_Costume_Location_BP_C) == 0x000028, "Wrong size on UChar_Costume_Location_BP_C");

}
