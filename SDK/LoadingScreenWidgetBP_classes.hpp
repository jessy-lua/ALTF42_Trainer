#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadingScreenWidgetBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GlobalInteractableUserWidget_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoadingScreenWidgetBP.LoadingScreenWidgetBP_C
// 0x0018 (0x06C0 - 0x06A8)
class ULoadingScreenWidgetBP_C final : public UGlobalInteractableUserWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_LoadingScreenWidgetBP_C;            // 0x06A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Loading_Blink;                                     // 0x06B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeOut;                                           // 0x06B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_LoadingScreenWidgetBP(int32 EntryPoint);
	void LoadingImage_Fade_And_Delete();
	void OnGlobalSettingsApply();
	void SetGlobalSettings();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoadingScreenWidgetBP_C">();
	}
	static class ULoadingScreenWidgetBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadingScreenWidgetBP_C>();
	}
};
static_assert(alignof(ULoadingScreenWidgetBP_C) == 0x000008, "Wrong alignment on ULoadingScreenWidgetBP_C");
static_assert(sizeof(ULoadingScreenWidgetBP_C) == 0x0006C0, "Wrong size on ULoadingScreenWidgetBP_C");
static_assert(offsetof(ULoadingScreenWidgetBP_C, UberGraphFrame_LoadingScreenWidgetBP_C) == 0x0006A8, "Member 'ULoadingScreenWidgetBP_C::UberGraphFrame_LoadingScreenWidgetBP_C' has a wrong offset!");
static_assert(offsetof(ULoadingScreenWidgetBP_C, Loading_Blink) == 0x0006B0, "Member 'ULoadingScreenWidgetBP_C::Loading_Blink' has a wrong offset!");
static_assert(offsetof(ULoadingScreenWidgetBP_C, FadeOut) == 0x0006B8, "Member 'ULoadingScreenWidgetBP_C::FadeOut' has a wrong offset!");

}

