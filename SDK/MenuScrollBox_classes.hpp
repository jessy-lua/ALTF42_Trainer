#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MenuScrollBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MenuScrollBox.MenuScrollBox_C
// 0x0020 (0x0D10 - 0x0CF0)
class UMenuScrollBox_C final : public UScrollBox
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0CF0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnScrollBoxScrolled;                               // 0x0CF8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_MenuScrollBox(int32 EntryPoint);
	void OnMenuScrollBoxInitialize();
	void OnScrollBoxScrolled__DelegateSignature(double CurrentOffset);
	void OnScrolled(float CurrentOffset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MenuScrollBox_C">();
	}
	static class UMenuScrollBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMenuScrollBox_C>();
	}
};
static_assert(alignof(UMenuScrollBox_C) == 0x000010, "Wrong alignment on UMenuScrollBox_C");
static_assert(sizeof(UMenuScrollBox_C) == 0x000D10, "Wrong size on UMenuScrollBox_C");
static_assert(offsetof(UMenuScrollBox_C, UberGraphFrame) == 0x000CF0, "Member 'UMenuScrollBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMenuScrollBox_C, OnScrollBoxScrolled) == 0x000CF8, "Member 'UMenuScrollBox_C::OnScrollBoxScrolled' has a wrong offset!");

}

