#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BombChick_Spawn_AN

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BombChick_Spawn_AN.BombChick_Spawn_AN_C
// 0x0000 (0x0038 - 0x0038)
class UBombChick_Spawn_AN_C final : public UAnimNotify
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BombChick_Spawn_AN_C">();
	}
	static class UBombChick_Spawn_AN_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBombChick_Spawn_AN_C>();
	}
};
static_assert(alignof(UBombChick_Spawn_AN_C) == 0x000008, "Wrong alignment on UBombChick_Spawn_AN_C");
static_assert(sizeof(UBombChick_Spawn_AN_C) == 0x000038, "Wrong size on UBombChick_Spawn_AN_C");

}

