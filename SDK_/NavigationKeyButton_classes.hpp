#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavigationKeyButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InteractableUserWidget_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NavigationKeyButton.NavigationKeyButton_C
// 0x0068 (0x07E0 - 0x0778)
class UNavigationKeyButton_C final : public UInteractableUserWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_NavigationKeyButton_C;              // 0x0778(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ButtonBackgroundImage;                             // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ButtonText;                                        // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GamepadButtonImage;                                // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 KeyboardKeyImage;                                  // 0x0798(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                NavigationKeyButton;                               // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                OuterBorder;                                       // 0x07A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x07B0(0x0018)(Edit, BlueprintVisible)
	class UTexture2D*                             KeyboardKeyTexture;                                // 0x07C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             GamepadButtonTexture;                              // 0x07D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsActive;                                         // 0x07D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__NavigationKeyButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_NavigationKeyButton(int32 EntryPoint);
	void GetButtonActive(bool* Param_bIsActive);
	void OnGlobalSettingsApply();
	void OnSetHoverEffect(bool bIsHovered, bool bPlaySound);
	void SetButtonActive(bool Param_bIsActive);
	void SetGlobalSettings();
	void SetHoverEffect(bool bIsHovered);
	void SetupButtonText();
	void UpdateButtonIcon(bool Param_bIsGamepadBeingUsed);
	void OnPressedBack();
	void OnPressedSelect();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavigationKeyButton_C">();
	}
	static class UNavigationKeyButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavigationKeyButton_C>();
	}
};
static_assert(alignof(UNavigationKeyButton_C) == 0x000008, "Wrong alignment on UNavigationKeyButton_C");
static_assert(sizeof(UNavigationKeyButton_C) == 0x0007E0, "Wrong size on UNavigationKeyButton_C");
static_assert(offsetof(UNavigationKeyButton_C, UberGraphFrame_NavigationKeyButton_C) == 0x000778, "Member 'UNavigationKeyButton_C::UberGraphFrame_NavigationKeyButton_C' has a wrong offset!");
static_assert(offsetof(UNavigationKeyButton_C, ButtonBackgroundImage) == 0x000780, "Member 'UNavigationKeyButton_C::ButtonBackgroundImage' has a wrong offset!");
static_assert(offsetof(UNavigationKeyButton_C, ButtonText) == 0x000788, "Member 'UNavigationKeyButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UNavigationKeyButton_C, GamepadButtonImage) == 0x000790, "Member 'UNavigationKeyButton_C::GamepadButtonImage' has a wrong offset!");
static_assert(offsetof(UNavigationKeyButton_C, KeyboardKeyImage) == 0x000798, "Member 'UNavigationKeyButton_C::KeyboardKeyImage' has a wrong offset!");
static_assert(offsetof(UNavigationKeyButton_C, NavigationKeyButton) == 0x0007A0, "Member 'UNavigationKeyButton_C::NavigationKeyButton' has a wrong offset!");
static_assert(offsetof(UNavigationKeyButton_C, OuterBorder) == 0x0007A8, "Member 'UNavigationKeyButton_C::OuterBorder' has a wrong offset!");
static_assert(offsetof(UNavigationKeyButton_C, Text) == 0x0007B0, "Member 'UNavigationKeyButton_C::Text' has a wrong offset!");
static_assert(offsetof(UNavigationKeyButton_C, KeyboardKeyTexture) == 0x0007C8, "Member 'UNavigationKeyButton_C::KeyboardKeyTexture' has a wrong offset!");
static_assert(offsetof(UNavigationKeyButton_C, GamepadButtonTexture) == 0x0007D0, "Member 'UNavigationKeyButton_C::GamepadButtonTexture' has a wrong offset!");
static_assert(offsetof(UNavigationKeyButton_C, bIsActive) == 0x0007D8, "Member 'UNavigationKeyButton_C::bIsActive' has a wrong offset!");

}

