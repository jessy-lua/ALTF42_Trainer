#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InteractableMenu

#include "Basic.hpp"

#include "WBP_GlobalInteractableUserWidget_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "EMenuInputWhitelistPreset_structs.hpp"
#include "EWidgetStyleState_structs.hpp"
#include "EInputDeviceType_structs.hpp"
#include "ETransitionAnimation_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InteractableMenu.WBP_InteractableMenu_C
// 0x0078 (0x03D8 - 0x0360)
class UWBP_InteractableMenu_C : public UWBP_GlobalInteractableUserWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_InteractableMenu_C;             // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_InteractableMenu_C*                PreviousMenu;                                      // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UWBP_InteractableUserWidget_C*>  InteractableUserWidgets;                           // 0x0370(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	class UPanelWidget*                           MenuCanvasPanelWidget;                             // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_InteractableUserWidget_C*          LastSelectedUserWidget;                            // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_InteractableUserWidget_C*          ActiveUserWidget;                                  // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_InteractableUserWidget_C*          DefaultSelectedUserWidget;                         // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsBenchmarkRunning;                               // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10B0[0x7];                                     // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DefaultMenuLayer;                                  // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UObject*                                ReceivedPayload;                                   // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bAutoHighlightWidgetOnEnter;                       // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10B1[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFocusChangedInMenu;                              // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void CheckMenuForDirtyOptions(bool* bIsMenuDirty);
	void ClearActiveUserWidget();
	void Construct();
	void ExecuteUbergraph_WBP_InteractableMenu(int32 EntryPoint);
	void ForwardMenuSetupCompleteToChildren();
	void GetAllWidgetsInMenuByTag(class FName Tag, TArray<class UWBP_InteractableUserWidget_C*>* Widgets);
	void GetFirstEnabledInteractableUserWidget(class UWBP_InteractableUserWidget_C** FirstInteractableUserWidget);
	void HighlightDefaultOrLastSelectedWidget();
	struct FEventReply KeyDown(const struct FGeometry& Geometry, const struct FKeyEvent& KeyEvent, bool bPassBlackListedKeysToOtherMenuLayers);
	struct FEventReply KeyUp(const struct FGeometry& Geometry, const struct FKeyEvent& KeyEvent);
	void NavigateBack();
	void NavigateBackFromSpecialMenu();
	void OnAnyOptionChanged(bool bIsAnyOptionDirty);
	void OnBenchmarkCompleted();
	void OnChangeInputDeviceMenuUI(EInputDeviceType NewInputDeviceType);
	void OnDelayedSaveToSettings();
	void OnEndApply();
	void OnFocusChanged(class UWBP_InteractableUserWidget_C* InteractableUserWidget);
	void OnFocusChangedInMenu__DelegateSignature(class UWBP_InteractableUserWidget_C* InteractableUserWidget);
	void OnFooterBarMenuSetupComplete(const TArray<class UWBP_InteractableUserWidget_C*>& MenuFooterBarButtons);
	void OnGameUserSettingsUpdated();
	void OnMenuSetupComplete();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnNavigationEnter(class UWBP_InteractableMenu_C* NavigateFromMenu, EInputDeviceType InputDeviceType);
	void OnNavigationExit(TSoftClassPtr<class UClass> ToMenu, const class FString& Param_MenuLayer, ETransitionAnimation TransitionAnimation, double TransitionSpeed, class UObject* InPayload);
	void OnPressedApply(const struct FKeyEvent& KeyEvent);
	void OnPressedBack(const struct FKeyEvent& KeyEvent);
	void OnPressedExtra(const struct FKeyEvent& KeyEvent);
	void OnPressedReset(const struct FKeyEvent& KeyEvent);
	void OnRunHardwareBenchmark();
	void OnScrollBoxInit(class UBP_MenuScrollBox_C* MenuScrollBox);
	void OnSpecialPreConstruct(class UPanelWidget* InMenuCanvasPanel);
	void PreConstruct(bool IsDesignTime);
	void RefreshAllWidgetsInMenu();
	void ResetAllowNavigation();
	void ResumeGameFromMenu();
	void SetActiveDefaultOrLastSelectedWidget();
	void SetActiveUserWidget(class UWBP_InteractableUserWidget_C* UserWidget);
	void SetInteractableUserWidgetReferences(class UPanelWidget* InPanel);
	void SetMenuAndChildReferences(class UPanelWidget* Param_MenuCanvasPanelWidget);
	void SetStyleOnWidgetsWithTag(class FName Tag, EWidgetStyleState Widget_Style);
	void SetupNavigation();
	void SetWhitelistedInput(EMenuInputWhitelistPreset Param_MenuInputWhitelistPreset);
	void ShowDecisionDialogFromMenu(const class FText& HeaderText, const class FText& BodyText, const class FText& AcceptText, const class FText& DeclineText, double SecondsUntilRevert, const TDelegate<void()>& Accept, const TDelegate<void()>& Decline, const TDelegate<void()>& AutoRevert, const TDelegate<void()>& Cancel, class UObject* InPayload, class UWBP_DecisionDialog_Silence_C** DecisionDialog);
	void TriggerApplySettings();
	void TriggerLoadSettings();
	void TriggerResetSettings();
	void UpdateDisplayedInputIcons(EInputDeviceType InputDeviceType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InteractableMenu_C">();
	}
	static class UWBP_InteractableMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InteractableMenu_C>();
	}
};
static_assert(alignof(UWBP_InteractableMenu_C) == 0x000008, "Wrong alignment on UWBP_InteractableMenu_C");
static_assert(sizeof(UWBP_InteractableMenu_C) == 0x0003D8, "Wrong size on UWBP_InteractableMenu_C");
static_assert(offsetof(UWBP_InteractableMenu_C, UberGraphFrame_WBP_InteractableMenu_C) == 0x000360, "Member 'UWBP_InteractableMenu_C::UberGraphFrame_WBP_InteractableMenu_C' has a wrong offset!");
static_assert(offsetof(UWBP_InteractableMenu_C, PreviousMenu) == 0x000368, "Member 'UWBP_InteractableMenu_C::PreviousMenu' has a wrong offset!");
static_assert(offsetof(UWBP_InteractableMenu_C, InteractableUserWidgets) == 0x000370, "Member 'UWBP_InteractableMenu_C::InteractableUserWidgets' has a wrong offset!");
static_assert(offsetof(UWBP_InteractableMenu_C, MenuCanvasPanelWidget) == 0x000380, "Member 'UWBP_InteractableMenu_C::MenuCanvasPanelWidget' has a wrong offset!");
static_assert(offsetof(UWBP_InteractableMenu_C, LastSelectedUserWidget) == 0x000388, "Member 'UWBP_InteractableMenu_C::LastSelectedUserWidget' has a wrong offset!");
static_assert(offsetof(UWBP_InteractableMenu_C, ActiveUserWidget) == 0x000390, "Member 'UWBP_InteractableMenu_C::ActiveUserWidget' has a wrong offset!");
static_assert(offsetof(UWBP_InteractableMenu_C, DefaultSelectedUserWidget) == 0x000398, "Member 'UWBP_InteractableMenu_C::DefaultSelectedUserWidget' has a wrong offset!");
static_assert(offsetof(UWBP_InteractableMenu_C, bIsBenchmarkRunning) == 0x0003A0, "Member 'UWBP_InteractableMenu_C::bIsBenchmarkRunning' has a wrong offset!");
static_assert(offsetof(UWBP_InteractableMenu_C, DefaultMenuLayer) == 0x0003A8, "Member 'UWBP_InteractableMenu_C::DefaultMenuLayer' has a wrong offset!");
static_assert(offsetof(UWBP_InteractableMenu_C, ReceivedPayload) == 0x0003B8, "Member 'UWBP_InteractableMenu_C::ReceivedPayload' has a wrong offset!");
static_assert(offsetof(UWBP_InteractableMenu_C, bAutoHighlightWidgetOnEnter) == 0x0003C0, "Member 'UWBP_InteractableMenu_C::bAutoHighlightWidgetOnEnter' has a wrong offset!");
static_assert(offsetof(UWBP_InteractableMenu_C, OnFocusChangedInMenu) == 0x0003C8, "Member 'UWBP_InteractableMenu_C::OnFocusChangedInMenu' has a wrong offset!");

}

