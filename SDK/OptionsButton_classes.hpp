#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "InteractableUserWidget_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionsButton.OptionsButton_C
// 0x0050 (0x07C8 - 0x0778)
class UOptionsButton_C final : public UInteractableUserWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_OptionsButton_C;                    // 0x0778(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 HoverImage;                                        // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                InnerBorder;                                       // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OptionNameText;                                    // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                OptionsButton;                                     // 0x0798(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                OuterBorder;                                       // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           OptionsButtonBgColor;                              // 0x07A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OptionsButtonHightlightColor;                      // 0x07B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__OptionsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_OptionsButton(int32 EntryPoint);
	void OnGlobalSettingsApply();
	void OnSetHoverEffect(bool bIsHovered, bool bPlaySound);
	void SetGlobalSettings();
	void SetHoverEffect(bool bIsHovered);
	void SetupOptionNameText();
	void OnPressedBack();
	void OnPressedLeft();
	void OnPressedRight();
	void OnPressedSelect();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionsButton_C">();
	}
	static class UOptionsButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionsButton_C>();
	}
};
static_assert(alignof(UOptionsButton_C) == 0x000008, "Wrong alignment on UOptionsButton_C");
static_assert(sizeof(UOptionsButton_C) == 0x0007C8, "Wrong size on UOptionsButton_C");
static_assert(offsetof(UOptionsButton_C, UberGraphFrame_OptionsButton_C) == 0x000778, "Member 'UOptionsButton_C::UberGraphFrame_OptionsButton_C' has a wrong offset!");
static_assert(offsetof(UOptionsButton_C, HoverImage) == 0x000780, "Member 'UOptionsButton_C::HoverImage' has a wrong offset!");
static_assert(offsetof(UOptionsButton_C, InnerBorder) == 0x000788, "Member 'UOptionsButton_C::InnerBorder' has a wrong offset!");
static_assert(offsetof(UOptionsButton_C, OptionNameText) == 0x000790, "Member 'UOptionsButton_C::OptionNameText' has a wrong offset!");
static_assert(offsetof(UOptionsButton_C, OptionsButton) == 0x000798, "Member 'UOptionsButton_C::OptionsButton' has a wrong offset!");
static_assert(offsetof(UOptionsButton_C, OuterBorder) == 0x0007A0, "Member 'UOptionsButton_C::OuterBorder' has a wrong offset!");
static_assert(offsetof(UOptionsButton_C, OptionsButtonBgColor) == 0x0007A8, "Member 'UOptionsButton_C::OptionsButtonBgColor' has a wrong offset!");
static_assert(offsetof(UOptionsButton_C, OptionsButtonHightlightColor) == 0x0007B8, "Member 'UOptionsButton_C::OptionsButtonHightlightColor' has a wrong offset!");

}

