#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GraphcisPreset

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_CustomSettingsApplyClass_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_GraphcisPreset.BP_GraphcisPreset_C
// 0x0008 (0x0038 - 0x0030)
class UBP_GraphcisPreset_C final : public UBP_CustomSettingsApplyClass_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_GraphcisPreset_C;                // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_GraphcisPreset(int32 EntryPoint);
	void OnApply(class UPDA_SettingsData_C* SettingsData, const struct FFValueTypes& Value, class UBP_SettingsManager_C* SettingsManager);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_GraphcisPreset_C">();
	}
	static class UBP_GraphcisPreset_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_GraphcisPreset_C>();
	}
};
static_assert(alignof(UBP_GraphcisPreset_C) == 0x000008, "Wrong alignment on UBP_GraphcisPreset_C");
static_assert(sizeof(UBP_GraphcisPreset_C) == 0x000038, "Wrong size on UBP_GraphcisPreset_C");
static_assert(offsetof(UBP_GraphcisPreset_C, UberGraphFrame_BP_GraphcisPreset_C) == 0x000030, "Member 'UBP_GraphcisPreset_C::UberGraphFrame_BP_GraphcisPreset_C' has a wrong offset!");

}

