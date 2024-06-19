#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ControlsGamepadBindingsWidgetBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InteractableMenuWidgetBP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ControlsGamepadBindingsWidgetBP.ControlsGamepadBindingsWidgetBP_C
// 0x00B0 (0x07A0 - 0x06F0)
class UControlsGamepadBindingsWidgetBP_C final : public UInteractableMenuWidgetBP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ControlsGamepadBindingsWidgetBP_C;  // 0x06F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Back_Image_Ingame;                                 // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Back_Image_MainMenu;                               // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNavigationKeyButton_C*                 BackButton;                                        // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsActionBinder_C*                 CrouchOptionsActionBinder;                         // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDecisionDialogWidgetBP_C*              DecisionDialogWidgetBP;                            // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           GamepadSettingsVerticalBox;                        // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadWidgetBP_C*                     GamepadWidgetBP;                                   // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_48;                                          // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsActionBinder_C*                 JumpOptionsActionBinder;                           // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                LeftBorder;                                        // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                LeftTitleBorder;                                   // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MenuCanvasPanel;                                   // 0x0750(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuScrollBox_C*                       MenuScrollBox;                                     // 0x0758(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsActionBinder_C*                 MoveBackwardOptionsActionBinder;                   // 0x0760(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsActionBinder_C*                 MoveForwardOptionsActionBinder;                    // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsActionBinder_C*                 MoveLeftOptionsActionBinder;                       // 0x0770(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsActionBinder_C*                 MoveRightOptionsActionBinder;                      // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNavigationKeyButton_C*                 ResetButton;                                       // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                RightBorder;                                       // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UControlsSettingsContainerWidgetBP_C*   ControlsSettingsWidgetBP;                          // 0x0790(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          GamepadButtonsIconsMap;                            // 0x0798(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__JumpOptionsActionBinder_K2Node_ComponentBoundEvent_12_OnFocussed__DelegateSignature();
	void BndEvt__JumpOptionsActionBinder_K2Node_ComponentBoundEvent_6_OnKeyChanged__DelegateSignature();
	void BndEvt__MoveBackwardOptionsActionBinder_K2Node_ComponentBoundEvent_3_OnKeyChanged__DelegateSignature();
	void BndEvt__MoveBackwardOptionsActionBinder_K2Node_ComponentBoundEvent_9_OnFocussed__DelegateSignature();
	void BndEvt__MoveForwardOptionsActionBinder_K2Node_ComponentBoundEvent_2_OnKeyChanged__DelegateSignature();
	void BndEvt__MoveForwardOptionsActionBinder_K2Node_ComponentBoundEvent_8_OnFocussed__DelegateSignature();
	void BndEvt__MoveLeftOptionsActionBinder_K2Node_ComponentBoundEvent_10_OnFocussed__DelegateSignature();
	void BndEvt__MoveLeftOptionsActionBinder_K2Node_ComponentBoundEvent_4_OnKeyChanged__DelegateSignature();
	void BndEvt__MoveRightOptionsActionBinder_K2Node_ComponentBoundEvent_11_OnFocussed__DelegateSignature();
	void BndEvt__MoveRightOptionsActionBinder_K2Node_ComponentBoundEvent_5_OnKeyChanged__DelegateSignature();
	void BndEvt__OptionsActionBinder_C_0_K2Node_ComponentBoundEvent_13_OnFocussed__DelegateSignature();
	void BndEvt__OptionsActionBinder_C_0_K2Node_ComponentBoundEvent_14_OnKeyChanged__DelegateSignature();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_ControlsGamepadBindingsWidgetBP(int32 EntryPoint);
	void GetGamepadButtonIcon();
	void LeaveEditMode();
	void OnGlobalSettingsApply();
	void ResetGamepadBindings();
	void SetGlobalSettings();
	void UpdateBindingsInVisualization();
	void UpdateDescription(class UInteractableUserWidget_C* InWidget);
	void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool Param_bIsGamepadBeingUsed, int32 Param_PlayerIndex);
	void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
	void OnPressedBack();
	void OnPressedReset();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ControlsGamepadBindingsWidgetBP_C">();
	}
	static class UControlsGamepadBindingsWidgetBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlsGamepadBindingsWidgetBP_C>();
	}
};
static_assert(alignof(UControlsGamepadBindingsWidgetBP_C) == 0x000008, "Wrong alignment on UControlsGamepadBindingsWidgetBP_C");
static_assert(sizeof(UControlsGamepadBindingsWidgetBP_C) == 0x0007A0, "Wrong size on UControlsGamepadBindingsWidgetBP_C");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, UberGraphFrame_ControlsGamepadBindingsWidgetBP_C) == 0x0006F0, "Member 'UControlsGamepadBindingsWidgetBP_C::UberGraphFrame_ControlsGamepadBindingsWidgetBP_C' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, Back_Image_Ingame) == 0x0006F8, "Member 'UControlsGamepadBindingsWidgetBP_C::Back_Image_Ingame' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, Back_Image_MainMenu) == 0x000700, "Member 'UControlsGamepadBindingsWidgetBP_C::Back_Image_MainMenu' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, BackButton) == 0x000708, "Member 'UControlsGamepadBindingsWidgetBP_C::BackButton' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, CrouchOptionsActionBinder) == 0x000710, "Member 'UControlsGamepadBindingsWidgetBP_C::CrouchOptionsActionBinder' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, DecisionDialogWidgetBP) == 0x000718, "Member 'UControlsGamepadBindingsWidgetBP_C::DecisionDialogWidgetBP' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, GamepadSettingsVerticalBox) == 0x000720, "Member 'UControlsGamepadBindingsWidgetBP_C::GamepadSettingsVerticalBox' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, GamepadWidgetBP) == 0x000728, "Member 'UControlsGamepadBindingsWidgetBP_C::GamepadWidgetBP' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, Image_48) == 0x000730, "Member 'UControlsGamepadBindingsWidgetBP_C::Image_48' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, JumpOptionsActionBinder) == 0x000738, "Member 'UControlsGamepadBindingsWidgetBP_C::JumpOptionsActionBinder' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, LeftBorder) == 0x000740, "Member 'UControlsGamepadBindingsWidgetBP_C::LeftBorder' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, LeftTitleBorder) == 0x000748, "Member 'UControlsGamepadBindingsWidgetBP_C::LeftTitleBorder' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, MenuCanvasPanel) == 0x000750, "Member 'UControlsGamepadBindingsWidgetBP_C::MenuCanvasPanel' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, MenuScrollBox) == 0x000758, "Member 'UControlsGamepadBindingsWidgetBP_C::MenuScrollBox' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, MoveBackwardOptionsActionBinder) == 0x000760, "Member 'UControlsGamepadBindingsWidgetBP_C::MoveBackwardOptionsActionBinder' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, MoveForwardOptionsActionBinder) == 0x000768, "Member 'UControlsGamepadBindingsWidgetBP_C::MoveForwardOptionsActionBinder' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, MoveLeftOptionsActionBinder) == 0x000770, "Member 'UControlsGamepadBindingsWidgetBP_C::MoveLeftOptionsActionBinder' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, MoveRightOptionsActionBinder) == 0x000778, "Member 'UControlsGamepadBindingsWidgetBP_C::MoveRightOptionsActionBinder' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, ResetButton) == 0x000780, "Member 'UControlsGamepadBindingsWidgetBP_C::ResetButton' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, RightBorder) == 0x000788, "Member 'UControlsGamepadBindingsWidgetBP_C::RightBorder' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, ControlsSettingsWidgetBP) == 0x000790, "Member 'UControlsGamepadBindingsWidgetBP_C::ControlsSettingsWidgetBP' has a wrong offset!");
static_assert(offsetof(UControlsGamepadBindingsWidgetBP_C, GamepadButtonsIconsMap) == 0x000798, "Member 'UControlsGamepadBindingsWidgetBP_C::GamepadButtonsIconsMap' has a wrong offset!");

}

