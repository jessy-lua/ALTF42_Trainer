#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: YouDied_Widget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass YouDied_Widget.YouDied_Widget_C
// 0x0058 (0x0318 - 0x02C0)
class UYouDied_Widget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Xray_Animation;                                    // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       DiedAnimation;                                     // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BlurImage;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               DiedBOx;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Xray_Image;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Suicide_Die_;                                      // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_CA[0x7];                                       // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Xray_Texture;                                      // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture2D*>                     Xray_Texture_Array;                                // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Random_Min;                                        // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Random_Max;                                        // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void AnimationEnd_Event();
	void Construct();
	void ExecuteUbergraph_YouDied_Widget(int32 EntryPoint);
	void SequenceEvent__ENTRYPOINTYouDied_Widget();
	void SequenceEvent__ENTRYPOINTYouDied_Widget_0();
	void YouDie_Play();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"YouDied_Widget_C">();
	}
	static class UYouDied_Widget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UYouDied_Widget_C>();
	}
};
static_assert(alignof(UYouDied_Widget_C) == 0x000008, "Wrong alignment on UYouDied_Widget_C");
static_assert(sizeof(UYouDied_Widget_C) == 0x000318, "Wrong size on UYouDied_Widget_C");
static_assert(offsetof(UYouDied_Widget_C, UberGraphFrame) == 0x0002C0, "Member 'UYouDied_Widget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UYouDied_Widget_C, Xray_Animation) == 0x0002C8, "Member 'UYouDied_Widget_C::Xray_Animation' has a wrong offset!");
static_assert(offsetof(UYouDied_Widget_C, DiedAnimation) == 0x0002D0, "Member 'UYouDied_Widget_C::DiedAnimation' has a wrong offset!");
static_assert(offsetof(UYouDied_Widget_C, BlurImage) == 0x0002D8, "Member 'UYouDied_Widget_C::BlurImage' has a wrong offset!");
static_assert(offsetof(UYouDied_Widget_C, DiedBOx) == 0x0002E0, "Member 'UYouDied_Widget_C::DiedBOx' has a wrong offset!");
static_assert(offsetof(UYouDied_Widget_C, Xray_Image) == 0x0002E8, "Member 'UYouDied_Widget_C::Xray_Image' has a wrong offset!");
static_assert(offsetof(UYouDied_Widget_C, Suicide_Die_) == 0x0002F0, "Member 'UYouDied_Widget_C::Suicide_Die_' has a wrong offset!");
static_assert(offsetof(UYouDied_Widget_C, Xray_Texture) == 0x0002F8, "Member 'UYouDied_Widget_C::Xray_Texture' has a wrong offset!");
static_assert(offsetof(UYouDied_Widget_C, Xray_Texture_Array) == 0x000300, "Member 'UYouDied_Widget_C::Xray_Texture_Array' has a wrong offset!");
static_assert(offsetof(UYouDied_Widget_C, Random_Min) == 0x000310, "Member 'UYouDied_Widget_C::Random_Min' has a wrong offset!");
static_assert(offsetof(UYouDied_Widget_C, Random_Max) == 0x000314, "Member 'UYouDied_Widget_C::Random_Max' has a wrong offset!");

}

