#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsPicker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "InteractableUserWidget_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionsPicker.OptionsPicker_C
// 0x0108 (0x0880 - 0x0778)
class UOptionsPicker_C final : public UInteractableUserWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_OptionsPicker_C;                    // 0x0778(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                HoverButton;                                       // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HoverImage;                                        // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                LeftBorder;                                        // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                NextOptionButton;                                  // 0x0798(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NextOptionButtonImage;                             // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OptionNameText;                                    // 0x07A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         OptionsHorizontalBox;                              // 0x07B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                OuterBorder;                                       // 0x07B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PickedOptionText;                                  // 0x07C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                PreviousOptionButton;                              // 0x07C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PreviousOptionButtonImage;                         // 0x07D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                RightBorder;                                       // 0x07D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             SubButtonsScrollBox;                               // 0x07E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                           OptionsArray;                                      // 0x07E8(0x0010)(Edit, BlueprintVisible)
	int32                                         ActiveOptionIndex;                                 // 0x07F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329D[0x4];                                     // 0x07FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UOptionsPickerSubButton_C*>      SubButtonWidgets;                                  // 0x0800(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnOptionChanged;                                   // 0x0810(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         DefaultOptionIndex;                                // 0x0820(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329E[0x4];                                     // 0x0824(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTexture2D*>                     OptionsImageArray;                                 // 0x0828(0x0010)(Edit, BlueprintVisible)
	bool                                          ShowSubButtons;                                    // 0x0838(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329F[0x3];                                     // 0x0839(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           OptionsPickerBgColor;                              // 0x083C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OptionsPickerHighlightColor;                       // 0x084C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OptionsPickerExtraHighlightColor;                  // 0x085C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OptionsPickerOptionButtonBgColor;                  // 0x086C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__HoverButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__NextOptionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__NextOptionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__NextOptionButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PreviousOptionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PreviousOptionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PreviousOptionButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_OptionsPicker(int32 EntryPoint);
	void IsInOptionsArrayBounds(int32 InIndex, bool* bIsInBounds);
	void OnGlobalSettingsApply();
	void OnOptionChanged__DelegateSignature(int32 ActiveIndex);
	void OnSetHoverEffect(bool bIsHovered, bool bPlaySound);
	void SetActiveOption(int32 InIndex, bool bOptionChangedIgnore, bool bPlaySound);
	void SetChangeOptionButtonHoverEffect(bool bIsHovered, class UImage* InImage);
	void SetChangeOptionsButtonVisibility(bool bIsVisible);
	void SetCurrentImage(int32 Param_Index);
	void SetCurrentIndex(int32 InIndex, bool bPlaySound);
	void SetDefaultOptionIndex();
	void SetGlobalSettings();
	void SetHoverEffect(bool IsOn);
	void SetPickedOptionText();
	void SetPickedOptionTextSettings();
	void Setup();
	void SetupOptionNameText();
	void SubOnClick(int32 InIndex);
	void UpdateSubButtons();
	void OnPressedLeft();
	void OnPressedRight();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionsPicker_C">();
	}
	static class UOptionsPicker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionsPicker_C>();
	}
};
static_assert(alignof(UOptionsPicker_C) == 0x000008, "Wrong alignment on UOptionsPicker_C");
static_assert(sizeof(UOptionsPicker_C) == 0x000880, "Wrong size on UOptionsPicker_C");
static_assert(offsetof(UOptionsPicker_C, UberGraphFrame_OptionsPicker_C) == 0x000778, "Member 'UOptionsPicker_C::UberGraphFrame_OptionsPicker_C' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, HoverButton) == 0x000780, "Member 'UOptionsPicker_C::HoverButton' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, HoverImage) == 0x000788, "Member 'UOptionsPicker_C::HoverImage' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, LeftBorder) == 0x000790, "Member 'UOptionsPicker_C::LeftBorder' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, NextOptionButton) == 0x000798, "Member 'UOptionsPicker_C::NextOptionButton' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, NextOptionButtonImage) == 0x0007A0, "Member 'UOptionsPicker_C::NextOptionButtonImage' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, OptionNameText) == 0x0007A8, "Member 'UOptionsPicker_C::OptionNameText' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, OptionsHorizontalBox) == 0x0007B0, "Member 'UOptionsPicker_C::OptionsHorizontalBox' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, OuterBorder) == 0x0007B8, "Member 'UOptionsPicker_C::OuterBorder' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, PickedOptionText) == 0x0007C0, "Member 'UOptionsPicker_C::PickedOptionText' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, PreviousOptionButton) == 0x0007C8, "Member 'UOptionsPicker_C::PreviousOptionButton' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, PreviousOptionButtonImage) == 0x0007D0, "Member 'UOptionsPicker_C::PreviousOptionButtonImage' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, RightBorder) == 0x0007D8, "Member 'UOptionsPicker_C::RightBorder' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, SubButtonsScrollBox) == 0x0007E0, "Member 'UOptionsPicker_C::SubButtonsScrollBox' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, OptionsArray) == 0x0007E8, "Member 'UOptionsPicker_C::OptionsArray' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, ActiveOptionIndex) == 0x0007F8, "Member 'UOptionsPicker_C::ActiveOptionIndex' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, SubButtonWidgets) == 0x000800, "Member 'UOptionsPicker_C::SubButtonWidgets' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, OnOptionChanged) == 0x000810, "Member 'UOptionsPicker_C::OnOptionChanged' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, DefaultOptionIndex) == 0x000820, "Member 'UOptionsPicker_C::DefaultOptionIndex' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, OptionsImageArray) == 0x000828, "Member 'UOptionsPicker_C::OptionsImageArray' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, ShowSubButtons) == 0x000838, "Member 'UOptionsPicker_C::ShowSubButtons' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, OptionsPickerBgColor) == 0x00083C, "Member 'UOptionsPicker_C::OptionsPickerBgColor' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, OptionsPickerHighlightColor) == 0x00084C, "Member 'UOptionsPicker_C::OptionsPickerHighlightColor' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, OptionsPickerExtraHighlightColor) == 0x00085C, "Member 'UOptionsPicker_C::OptionsPickerExtraHighlightColor' has a wrong offset!");
static_assert(offsetof(UOptionsPicker_C, OptionsPickerOptionButtonBgColor) == 0x00086C, "Member 'UOptionsPicker_C::OptionsPickerOptionButtonBgColor' has a wrong offset!");

}

