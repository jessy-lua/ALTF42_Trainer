#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PDA_LevelMetaData

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PDA_LevelMetaData.PDA_LevelMetaData_C
// 0x0068 (0x0098 - 0x0030)
class UPDA_LevelMetaData_C final : public UPrimaryDataAsset
{
public:
	class FName                                   LevelName;                                         // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              ThumbnailImage;                                    // 0x0038(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              LoadingScreenImage;                                // 0x0060(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FText>                           Texts;                                             // 0x0088(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PDA_LevelMetaData_C">();
	}
	static class UPDA_LevelMetaData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPDA_LevelMetaData_C>();
	}
};
static_assert(alignof(UPDA_LevelMetaData_C) == 0x000008, "Wrong alignment on UPDA_LevelMetaData_C");
static_assert(sizeof(UPDA_LevelMetaData_C) == 0x000098, "Wrong size on UPDA_LevelMetaData_C");
static_assert(offsetof(UPDA_LevelMetaData_C, LevelName) == 0x000030, "Member 'UPDA_LevelMetaData_C::LevelName' has a wrong offset!");
static_assert(offsetof(UPDA_LevelMetaData_C, ThumbnailImage) == 0x000038, "Member 'UPDA_LevelMetaData_C::ThumbnailImage' has a wrong offset!");
static_assert(offsetof(UPDA_LevelMetaData_C, LoadingScreenImage) == 0x000060, "Member 'UPDA_LevelMetaData_C::LoadingScreenImage' has a wrong offset!");
static_assert(offsetof(UPDA_LevelMetaData_C, Texts) == 0x000088, "Member 'UPDA_LevelMetaData_C::Texts' has a wrong offset!");

}
