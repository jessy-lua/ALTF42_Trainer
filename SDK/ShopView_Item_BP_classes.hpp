#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShopView_Item_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ShopView_Item_BP.ShopView_Item_BP_C
// 0x0040 (0x02D8 - 0x0298)
class AShopView_Item_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   ShopView_Mesh_2;                                   // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ShopView_Mesh;                                     // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UALTF42_GameInstance_C*                 ALTF4_2_GI;                                        // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AALTF4_Loco_BP_C*                       ALTF42_Char;                                       // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          BlankItem;                                         // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BA[0x3];                                       // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemCost;                                          // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemSelectSwitch;                                  // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ShopOwnerDamage_;                                  // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Dont_Talk_;                                        // 0x02D5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ShopView_Item_BP(int32 EntryPoint);
	void ItemSelect();
	void ItemUnSelect();
	void ReceiveBeginPlay();
	void ShopBuyItemEvent(bool Param_ShopOwnerDamage_, bool DontTalk_);
	void ShopItem_Recheck(int32 Param_ItemSelectSwitch);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopView_Item_BP_C">();
	}
	static class AShopView_Item_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AShopView_Item_BP_C>();
	}
};
static_assert(alignof(AShopView_Item_BP_C) == 0x000008, "Wrong alignment on AShopView_Item_BP_C");
static_assert(sizeof(AShopView_Item_BP_C) == 0x0002D8, "Wrong size on AShopView_Item_BP_C");
static_assert(offsetof(AShopView_Item_BP_C, UberGraphFrame) == 0x000298, "Member 'AShopView_Item_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AShopView_Item_BP_C, ShopView_Mesh_2) == 0x0002A0, "Member 'AShopView_Item_BP_C::ShopView_Mesh_2' has a wrong offset!");
static_assert(offsetof(AShopView_Item_BP_C, ShopView_Mesh) == 0x0002A8, "Member 'AShopView_Item_BP_C::ShopView_Mesh' has a wrong offset!");
static_assert(offsetof(AShopView_Item_BP_C, DefaultSceneRoot) == 0x0002B0, "Member 'AShopView_Item_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AShopView_Item_BP_C, ALTF4_2_GI) == 0x0002B8, "Member 'AShopView_Item_BP_C::ALTF4_2_GI' has a wrong offset!");
static_assert(offsetof(AShopView_Item_BP_C, ALTF42_Char) == 0x0002C0, "Member 'AShopView_Item_BP_C::ALTF42_Char' has a wrong offset!");
static_assert(offsetof(AShopView_Item_BP_C, BlankItem) == 0x0002C8, "Member 'AShopView_Item_BP_C::BlankItem' has a wrong offset!");
static_assert(offsetof(AShopView_Item_BP_C, ItemCost) == 0x0002CC, "Member 'AShopView_Item_BP_C::ItemCost' has a wrong offset!");
static_assert(offsetof(AShopView_Item_BP_C, ItemSelectSwitch) == 0x0002D0, "Member 'AShopView_Item_BP_C::ItemSelectSwitch' has a wrong offset!");
static_assert(offsetof(AShopView_Item_BP_C, ShopOwnerDamage_) == 0x0002D4, "Member 'AShopView_Item_BP_C::ShopOwnerDamage_' has a wrong offset!");
static_assert(offsetof(AShopView_Item_BP_C, Dont_Talk_) == 0x0002D5, "Member 'AShopView_Item_BP_C::Dont_Talk_' has a wrong offset!");

}
