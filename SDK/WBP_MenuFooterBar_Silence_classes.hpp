#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MenuFooterBar_Silence

#include "Basic.hpp"

#include "FFooterBarButtonData_structs.hpp"
#include "Engine_structs.hpp"
#include "WBP_InteractableMenu_classes.hpp"
#include "ETransitionAnimation_structs.hpp"
#include "EInputDeviceType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MenuFooterBar_Silence.WBP_MenuFooterBar_Silence_C
// 0x0058 (0x0430 - 0x03D8)
class UWBP_MenuFooterBar_Silence_C final : public UWBP_InteractableMenu_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_MenuFooterBar_Silence_C;        // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border;                                            // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ButtonsHBox;                                       // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MenuCanvasPanel;                                   // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                SeperatorLine;                                     // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FFFooterBarButtonData>          FooterBarData;                                     // 0x0400(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class UWBP_FooterButtonBase_C*>        FooterBarButtons;                                  // 0x0410(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UWBP_InteractableMenu_C*                FooterParentMenu;                                  // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 FooterBarButtonClass;                              // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_MenuFooterBar_Silence(int32 EntryPoint);
	void OverrideWidgetStyleFromConfig();
	void RemoveFooterBarButton(class FName MappingName);
	void UpdateFooterBar(class UWBP_InteractableMenu_C* SourceMenu, TArray<struct FFFooterBarButtonData>& Param_FooterBarData);
	void NavigateBack();
	void OnNavigationEnter(class UWBP_InteractableMenu_C* NavigateFromMenu, EInputDeviceType InputDeviceType);
	void OnNavigationExit(TSoftClassPtr<class UClass> ToMenu, const class FString& Param_MenuLayer, ETransitionAnimation TransitionAnimation, double TransitionSpeed, class UObject* InPayload);
	void OnPressedBack(const struct FKeyEvent& KeyEvent);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MenuFooterBar_Silence_C">();
	}
	static class UWBP_MenuFooterBar_Silence_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MenuFooterBar_Silence_C>();
	}
};
static_assert(alignof(UWBP_MenuFooterBar_Silence_C) == 0x000008, "Wrong alignment on UWBP_MenuFooterBar_Silence_C");
static_assert(sizeof(UWBP_MenuFooterBar_Silence_C) == 0x000430, "Wrong size on UWBP_MenuFooterBar_Silence_C");
static_assert(offsetof(UWBP_MenuFooterBar_Silence_C, UberGraphFrame_WBP_MenuFooterBar_Silence_C) == 0x0003D8, "Member 'UWBP_MenuFooterBar_Silence_C::UberGraphFrame_WBP_MenuFooterBar_Silence_C' has a wrong offset!");
static_assert(offsetof(UWBP_MenuFooterBar_Silence_C, Border) == 0x0003E0, "Member 'UWBP_MenuFooterBar_Silence_C::Border' has a wrong offset!");
static_assert(offsetof(UWBP_MenuFooterBar_Silence_C, ButtonsHBox) == 0x0003E8, "Member 'UWBP_MenuFooterBar_Silence_C::ButtonsHBox' has a wrong offset!");
static_assert(offsetof(UWBP_MenuFooterBar_Silence_C, MenuCanvasPanel) == 0x0003F0, "Member 'UWBP_MenuFooterBar_Silence_C::MenuCanvasPanel' has a wrong offset!");
static_assert(offsetof(UWBP_MenuFooterBar_Silence_C, SeperatorLine) == 0x0003F8, "Member 'UWBP_MenuFooterBar_Silence_C::SeperatorLine' has a wrong offset!");
static_assert(offsetof(UWBP_MenuFooterBar_Silence_C, FooterBarData) == 0x000400, "Member 'UWBP_MenuFooterBar_Silence_C::FooterBarData' has a wrong offset!");
static_assert(offsetof(UWBP_MenuFooterBar_Silence_C, FooterBarButtons) == 0x000410, "Member 'UWBP_MenuFooterBar_Silence_C::FooterBarButtons' has a wrong offset!");
static_assert(offsetof(UWBP_MenuFooterBar_Silence_C, FooterParentMenu) == 0x000420, "Member 'UWBP_MenuFooterBar_Silence_C::FooterParentMenu' has a wrong offset!");
static_assert(offsetof(UWBP_MenuFooterBar_Silence_C, FooterBarButtonClass) == 0x000428, "Member 'UWBP_MenuFooterBar_Silence_C::FooterBarButtonClass' has a wrong offset!");

}

