#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoldOut_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SoldOut_BP.SoldOut_BP_C
// 0x0070 (0x0308 - 0x0298)
class ASoldOut_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                        Decal1;                                            // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal;                                             // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sold_Sign;                                         // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Out_Sign;                                          // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       R_Root;                                            // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       L_Root;                                            // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Open_TL_Alpha_0_1C995086423D11885EE49CABD8317655;  // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Open_TL__Direction_1C995086423D11885EE49CABD8317655; // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31D4[0x3];                                     // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Open_TL;                                           // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Close_TL_Alpha_0_129364A840FBA0F42EF210B18EC8B83E; // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Close_TL__Direction_129364A840FBA0F42EF210B18EC8B83E; // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31D5[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Close_TL;                                          // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         L_First_Z;                                         // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         R_First_Z;                                         // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SoldOut_;                                          // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Close_TL__FinishedFunc();
	void Close_TL__UpdateFunc();
	void ExecuteUbergraph_SoldOut_BP(int32 EntryPoint);
	void Open_TL__FinishedFunc();
	void Open_TL__UpdateFunc();
	void Reset_Event();
	void SoldOut_Event();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SoldOut_BP_C">();
	}
	static class ASoldOut_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASoldOut_BP_C>();
	}
};
static_assert(alignof(ASoldOut_BP_C) == 0x000008, "Wrong alignment on ASoldOut_BP_C");
static_assert(sizeof(ASoldOut_BP_C) == 0x000308, "Wrong size on ASoldOut_BP_C");
static_assert(offsetof(ASoldOut_BP_C, UberGraphFrame) == 0x000298, "Member 'ASoldOut_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASoldOut_BP_C, Decal1) == 0x0002A0, "Member 'ASoldOut_BP_C::Decal1' has a wrong offset!");
static_assert(offsetof(ASoldOut_BP_C, Decal) == 0x0002A8, "Member 'ASoldOut_BP_C::Decal' has a wrong offset!");
static_assert(offsetof(ASoldOut_BP_C, Sold_Sign) == 0x0002B0, "Member 'ASoldOut_BP_C::Sold_Sign' has a wrong offset!");
static_assert(offsetof(ASoldOut_BP_C, Out_Sign) == 0x0002B8, "Member 'ASoldOut_BP_C::Out_Sign' has a wrong offset!");
static_assert(offsetof(ASoldOut_BP_C, R_Root) == 0x0002C0, "Member 'ASoldOut_BP_C::R_Root' has a wrong offset!");
static_assert(offsetof(ASoldOut_BP_C, L_Root) == 0x0002C8, "Member 'ASoldOut_BP_C::L_Root' has a wrong offset!");
static_assert(offsetof(ASoldOut_BP_C, DefaultSceneRoot) == 0x0002D0, "Member 'ASoldOut_BP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ASoldOut_BP_C, Open_TL_Alpha_0_1C995086423D11885EE49CABD8317655) == 0x0002D8, "Member 'ASoldOut_BP_C::Open_TL_Alpha_0_1C995086423D11885EE49CABD8317655' has a wrong offset!");
static_assert(offsetof(ASoldOut_BP_C, Open_TL__Direction_1C995086423D11885EE49CABD8317655) == 0x0002DC, "Member 'ASoldOut_BP_C::Open_TL__Direction_1C995086423D11885EE49CABD8317655' has a wrong offset!");
static_assert(offsetof(ASoldOut_BP_C, Open_TL) == 0x0002E0, "Member 'ASoldOut_BP_C::Open_TL' has a wrong offset!");
static_assert(offsetof(ASoldOut_BP_C, Close_TL_Alpha_0_129364A840FBA0F42EF210B18EC8B83E) == 0x0002E8, "Member 'ASoldOut_BP_C::Close_TL_Alpha_0_129364A840FBA0F42EF210B18EC8B83E' has a wrong offset!");
static_assert(offsetof(ASoldOut_BP_C, Close_TL__Direction_129364A840FBA0F42EF210B18EC8B83E) == 0x0002EC, "Member 'ASoldOut_BP_C::Close_TL__Direction_129364A840FBA0F42EF210B18EC8B83E' has a wrong offset!");
static_assert(offsetof(ASoldOut_BP_C, Close_TL) == 0x0002F0, "Member 'ASoldOut_BP_C::Close_TL' has a wrong offset!");
static_assert(offsetof(ASoldOut_BP_C, L_First_Z) == 0x0002F8, "Member 'ASoldOut_BP_C::L_First_Z' has a wrong offset!");
static_assert(offsetof(ASoldOut_BP_C, R_First_Z) == 0x0002FC, "Member 'ASoldOut_BP_C::R_First_Z' has a wrong offset!");
static_assert(offsetof(ASoldOut_BP_C, SoldOut_) == 0x000300, "Member 'ASoldOut_BP_C::SoldOut_' has a wrong offset!");

}
