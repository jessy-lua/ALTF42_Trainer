#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALTF42_FullHUD_Widget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "ALTF42_ItemList_OnlyBoxData_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ALTF42_FullHUD_Widget.ALTF42_FullHUD_Widget_C
// 0x0338 (0x05F8 - 0x02C0)
class UALTF42_FullHUD_Widget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ItemGet_Anim;                                      // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Chick_Profile;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Chick_UI;                                          // 0x02D8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Coin_Image;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Cross;                                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GetItem_Image;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GetItem_Number;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Getitem_Text;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 H_01;                                              // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 H_02;                                              // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 H_03;                                              // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 H_04;                                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 H_05;                                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 H_06;                                              // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Health_Back;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x0340(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0348(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0350(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_77;                                          // 0x0358(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_293;                                         // 0x0360(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Infinity_Image;                                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Interaction_Image;                                 // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Interaction_Text;                                  // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Interaction_UI;                                    // 0x0380(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Knight_Box;                                        // 0x0388(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              Numver_Box;                                        // 0x0390(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Profile_Image;                                     // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Shadow_Coin;                                       // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Shop_L_Price;                                      // 0x03A8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Shop_R_Price;                                      // 0x03B0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Shop_TooltipBox;                                   // 0x03B8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Suicide_Image;                                     // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Suicide_UI;                                        // 0x03C8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x03D0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_2;                                       // 0x03D8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_4;                                       // 0x03E0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_7;                                       // 0x03E8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_10;                                      // 0x03F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_12;                                      // 0x03F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_14;                                      // 0x0400(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_29;                                      // 0x0408(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_147;                                     // 0x0410(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_183;                                     // 0x0418(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TimeAttackBox;                                     // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UALTF42_GameInstance_C*                 ALTF4_2_GI;                                        // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   Slot01_ItemCount;                                  // 0x0430(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Slot02_ItemCount;                                  // 0x0448(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Slot03_ItemCount;                                  // 0x0460(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Slot04_ItemCount;                                  // 0x0478(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                                ALTF4_2_Char;                                      // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                                ChickImage;                                        // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FText                                   HowMany_Chick;                                     // 0x04A0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 HowMany_ChickString;                               // 0x04B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         GetSelectChickAndItem;                             // 0x04C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GetHealth;                                         // 0x04CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Shop01_Cost;                                       // 0x04D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Shop02_Cost;                                       // 0x04D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AALTF42_InGame_PC_Loco_C*               ALTF42_PC;                                         // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                            NewVar;                                            // 0x04E0(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKeyEvent                              In_Key_Event;                                      // 0x0598(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Cannonball_Text;                                   // 0x05D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	EALTF42_ItemList_OnlyBoxData                  Get_ItemValue;                                     // 0x05F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	class FText All_Timer_Hour();
	class FText All_Timer_Min();
	class FText All_Timer_Sec();
	ESlateVisibility CoinUI_Hide_();
	void Construct();
	void ExecuteUbergraph_ALTF42_FullHUD_Widget(int32 EntryPoint);
	ESlateVisibility Get_BaseChick_View_();
	struct FSlateBrush Get_Chick_Profile_Txture();
	ESlateVisibility Get_Cross_Visibility();
	class FText Get_GI_Coin();
	ESlateVisibility Get_H_01_Visibility();
	ESlateVisibility Get_H_02_Visibility();
	ESlateVisibility Get_H_03_Visibility();
	ESlateVisibility Get_H_04_Visibility();
	ESlateVisibility Get_H_05_Visibility();
	ESlateVisibility Get_H_06_Visibility();
	class FText Get_HowMany_Chick();
	struct FSlateBrush Get_Interaction_Image_Brush();
	ESlateVisibility Get_InteractionUI_HideAndUnHide();
	ESlateVisibility Get_KnightAndChick_Visibility_UseShop();
	struct FSlateBrush Get_L_Brush();
	ESlateVisibility Get_NotBaseChick_View_();
	struct FSlateBrush Get_Out_Brush();
	struct FSlateBrush Get_Profile_Image_Brush();
	struct FSlateBrush Get_R_Brush();
	ESlateVisibility Get_Shop_Tooltip_Visibility();
	struct FSlateBrush Get_ShopBuy_Brush();
	class FText Get_ShopSell_01_Cost();
	class FText Get_ShopSell_02_Cost();
	struct FSlateBrush Get_Suicide_Image_Brush();
	ESlateVisibility Get_SuicideUI_HideAndUnHide();
	ESlateVisibility Get_TimeAttackBox_Visibility();
	void GetItem_Event(EALTF42_ItemList_OnlyBoxData Param_Get_ItemValue, int32 Get_itemNumber);
	class FText Set_Interaction_Text();
	void ShopSellCost_Set_Event(int32 Param_Shop01_Cost, int32 Param_Shop02_Cost);
	void Statbar_Refresh();
	class FText Timer_Hour();
	class FText Timer_Min();
	class FText Timer_Sec();
	void Widget_Visible(ESlateVisibility InVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ALTF42_FullHUD_Widget_C">();
	}
	static class UALTF42_FullHUD_Widget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UALTF42_FullHUD_Widget_C>();
	}
};
static_assert(alignof(UALTF42_FullHUD_Widget_C) == 0x000008, "Wrong alignment on UALTF42_FullHUD_Widget_C");
static_assert(sizeof(UALTF42_FullHUD_Widget_C) == 0x0005F8, "Wrong size on UALTF42_FullHUD_Widget_C");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, UberGraphFrame) == 0x0002C0, "Member 'UALTF42_FullHUD_Widget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, ItemGet_Anim) == 0x0002C8, "Member 'UALTF42_FullHUD_Widget_C::ItemGet_Anim' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Chick_Profile) == 0x0002D0, "Member 'UALTF42_FullHUD_Widget_C::Chick_Profile' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Chick_UI) == 0x0002D8, "Member 'UALTF42_FullHUD_Widget_C::Chick_UI' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Coin_Image) == 0x0002E0, "Member 'UALTF42_FullHUD_Widget_C::Coin_Image' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Cross) == 0x0002E8, "Member 'UALTF42_FullHUD_Widget_C::Cross' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, GetItem_Image) == 0x0002F0, "Member 'UALTF42_FullHUD_Widget_C::GetItem_Image' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, GetItem_Number) == 0x0002F8, "Member 'UALTF42_FullHUD_Widget_C::GetItem_Number' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Getitem_Text) == 0x000300, "Member 'UALTF42_FullHUD_Widget_C::Getitem_Text' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, H_01) == 0x000308, "Member 'UALTF42_FullHUD_Widget_C::H_01' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, H_02) == 0x000310, "Member 'UALTF42_FullHUD_Widget_C::H_02' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, H_03) == 0x000318, "Member 'UALTF42_FullHUD_Widget_C::H_03' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, H_04) == 0x000320, "Member 'UALTF42_FullHUD_Widget_C::H_04' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, H_05) == 0x000328, "Member 'UALTF42_FullHUD_Widget_C::H_05' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, H_06) == 0x000330, "Member 'UALTF42_FullHUD_Widget_C::H_06' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Health_Back) == 0x000338, "Member 'UALTF42_FullHUD_Widget_C::Health_Back' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, HorizontalBox_0) == 0x000340, "Member 'UALTF42_FullHUD_Widget_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Image_2) == 0x000348, "Member 'UALTF42_FullHUD_Widget_C::Image_2' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Image_3) == 0x000350, "Member 'UALTF42_FullHUD_Widget_C::Image_3' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Image_77) == 0x000358, "Member 'UALTF42_FullHUD_Widget_C::Image_77' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Image_293) == 0x000360, "Member 'UALTF42_FullHUD_Widget_C::Image_293' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Infinity_Image) == 0x000368, "Member 'UALTF42_FullHUD_Widget_C::Infinity_Image' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Interaction_Image) == 0x000370, "Member 'UALTF42_FullHUD_Widget_C::Interaction_Image' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Interaction_Text) == 0x000378, "Member 'UALTF42_FullHUD_Widget_C::Interaction_Text' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Interaction_UI) == 0x000380, "Member 'UALTF42_FullHUD_Widget_C::Interaction_UI' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Knight_Box) == 0x000388, "Member 'UALTF42_FullHUD_Widget_C::Knight_Box' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Numver_Box) == 0x000390, "Member 'UALTF42_FullHUD_Widget_C::Numver_Box' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Profile_Image) == 0x000398, "Member 'UALTF42_FullHUD_Widget_C::Profile_Image' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Shadow_Coin) == 0x0003A0, "Member 'UALTF42_FullHUD_Widget_C::Shadow_Coin' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Shop_L_Price) == 0x0003A8, "Member 'UALTF42_FullHUD_Widget_C::Shop_L_Price' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Shop_R_Price) == 0x0003B0, "Member 'UALTF42_FullHUD_Widget_C::Shop_R_Price' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Shop_TooltipBox) == 0x0003B8, "Member 'UALTF42_FullHUD_Widget_C::Shop_TooltipBox' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Suicide_Image) == 0x0003C0, "Member 'UALTF42_FullHUD_Widget_C::Suicide_Image' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Suicide_UI) == 0x0003C8, "Member 'UALTF42_FullHUD_Widget_C::Suicide_UI' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, TextBlock) == 0x0003D0, "Member 'UALTF42_FullHUD_Widget_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, TextBlock_2) == 0x0003D8, "Member 'UALTF42_FullHUD_Widget_C::TextBlock_2' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, TextBlock_4) == 0x0003E0, "Member 'UALTF42_FullHUD_Widget_C::TextBlock_4' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, TextBlock_7) == 0x0003E8, "Member 'UALTF42_FullHUD_Widget_C::TextBlock_7' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, TextBlock_10) == 0x0003F0, "Member 'UALTF42_FullHUD_Widget_C::TextBlock_10' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, TextBlock_12) == 0x0003F8, "Member 'UALTF42_FullHUD_Widget_C::TextBlock_12' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, TextBlock_14) == 0x000400, "Member 'UALTF42_FullHUD_Widget_C::TextBlock_14' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, TextBlock_29) == 0x000408, "Member 'UALTF42_FullHUD_Widget_C::TextBlock_29' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, TextBlock_147) == 0x000410, "Member 'UALTF42_FullHUD_Widget_C::TextBlock_147' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, TextBlock_183) == 0x000418, "Member 'UALTF42_FullHUD_Widget_C::TextBlock_183' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, TimeAttackBox) == 0x000420, "Member 'UALTF42_FullHUD_Widget_C::TimeAttackBox' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, ALTF4_2_GI) == 0x000428, "Member 'UALTF42_FullHUD_Widget_C::ALTF4_2_GI' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Slot01_ItemCount) == 0x000430, "Member 'UALTF42_FullHUD_Widget_C::Slot01_ItemCount' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Slot02_ItemCount) == 0x000448, "Member 'UALTF42_FullHUD_Widget_C::Slot02_ItemCount' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Slot03_ItemCount) == 0x000460, "Member 'UALTF42_FullHUD_Widget_C::Slot03_ItemCount' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Slot04_ItemCount) == 0x000478, "Member 'UALTF42_FullHUD_Widget_C::Slot04_ItemCount' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, ALTF4_2_Char) == 0x000490, "Member 'UALTF42_FullHUD_Widget_C::ALTF4_2_Char' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, ChickImage) == 0x000498, "Member 'UALTF42_FullHUD_Widget_C::ChickImage' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, HowMany_Chick) == 0x0004A0, "Member 'UALTF42_FullHUD_Widget_C::HowMany_Chick' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, HowMany_ChickString) == 0x0004B8, "Member 'UALTF42_FullHUD_Widget_C::HowMany_ChickString' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, GetSelectChickAndItem) == 0x0004C8, "Member 'UALTF42_FullHUD_Widget_C::GetSelectChickAndItem' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, GetHealth) == 0x0004CC, "Member 'UALTF42_FullHUD_Widget_C::GetHealth' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Shop01_Cost) == 0x0004D0, "Member 'UALTF42_FullHUD_Widget_C::Shop01_Cost' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Shop02_Cost) == 0x0004D4, "Member 'UALTF42_FullHUD_Widget_C::Shop02_Cost' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, ALTF42_PC) == 0x0004D8, "Member 'UALTF42_FullHUD_Widget_C::ALTF42_PC' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, NewVar) == 0x0004E0, "Member 'UALTF42_FullHUD_Widget_C::NewVar' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, In_Key_Event) == 0x000598, "Member 'UALTF42_FullHUD_Widget_C::In_Key_Event' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Cannonball_Text) == 0x0005D8, "Member 'UALTF42_FullHUD_Widget_C::Cannonball_Text' has a wrong offset!");
static_assert(offsetof(UALTF42_FullHUD_Widget_C, Get_ItemValue) == 0x0005F0, "Member 'UALTF42_FullHUD_Widget_C::Get_ItemValue' has a wrong offset!");

}
