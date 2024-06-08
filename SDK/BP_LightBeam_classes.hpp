#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LightBeam

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LightBeam.BP_LightBeam_C
// 0x0070 (0x0308 - 0x0298)
class ABP_LightBeam_C final : public AActor
{
public:
	class UBillboardComponent*                    UISprite;                                          // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   GodRayMesh;                                        // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Light;                                             // 0x02A8(0x0008)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	double                                        Width;                                             // 0x02B0(0x0008)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Length;                                            // 0x02B8(0x0008)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Mid;                                               // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x02C8(0x0010)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Speed;                                             // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Offset;                                            // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Brightness;                                        // 0x02E8(0x0008)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Fade_Distance;                                     // 0x02F0(0x0008)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Animated;                                          // 0x02F8(0x0001)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41A3[0x3];                                     // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRandomStream                          RandomTime;                                        // 0x02FC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	bool                                          SpotLight;                                         // 0x0304(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_light_for_rotation;                            // 0x0305(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LightBeam_C">();
	}
	static class ABP_LightBeam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LightBeam_C>();
	}
};
static_assert(alignof(ABP_LightBeam_C) == 0x000008, "Wrong alignment on ABP_LightBeam_C");
static_assert(sizeof(ABP_LightBeam_C) == 0x000308, "Wrong size on ABP_LightBeam_C");
static_assert(offsetof(ABP_LightBeam_C, UISprite) == 0x000298, "Member 'ABP_LightBeam_C::UISprite' has a wrong offset!");
static_assert(offsetof(ABP_LightBeam_C, GodRayMesh) == 0x0002A0, "Member 'ABP_LightBeam_C::GodRayMesh' has a wrong offset!");
static_assert(offsetof(ABP_LightBeam_C, Light) == 0x0002A8, "Member 'ABP_LightBeam_C::Light' has a wrong offset!");
static_assert(offsetof(ABP_LightBeam_C, Width) == 0x0002B0, "Member 'ABP_LightBeam_C::Width' has a wrong offset!");
static_assert(offsetof(ABP_LightBeam_C, Length) == 0x0002B8, "Member 'ABP_LightBeam_C::Length' has a wrong offset!");
static_assert(offsetof(ABP_LightBeam_C, Mid) == 0x0002C0, "Member 'ABP_LightBeam_C::Mid' has a wrong offset!");
static_assert(offsetof(ABP_LightBeam_C, Color) == 0x0002C8, "Member 'ABP_LightBeam_C::Color' has a wrong offset!");
static_assert(offsetof(ABP_LightBeam_C, Speed) == 0x0002D8, "Member 'ABP_LightBeam_C::Speed' has a wrong offset!");
static_assert(offsetof(ABP_LightBeam_C, Offset) == 0x0002E0, "Member 'ABP_LightBeam_C::Offset' has a wrong offset!");
static_assert(offsetof(ABP_LightBeam_C, Brightness) == 0x0002E8, "Member 'ABP_LightBeam_C::Brightness' has a wrong offset!");
static_assert(offsetof(ABP_LightBeam_C, Fade_Distance) == 0x0002F0, "Member 'ABP_LightBeam_C::Fade_Distance' has a wrong offset!");
static_assert(offsetof(ABP_LightBeam_C, Animated) == 0x0002F8, "Member 'ABP_LightBeam_C::Animated' has a wrong offset!");
static_assert(offsetof(ABP_LightBeam_C, RandomTime) == 0x0002FC, "Member 'ABP_LightBeam_C::RandomTime' has a wrong offset!");
static_assert(offsetof(ABP_LightBeam_C, SpotLight) == 0x000304, "Member 'ABP_LightBeam_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ABP_LightBeam_C, Use_light_for_rotation) == 0x000305, "Member 'ABP_LightBeam_C::Use_light_for_rotation' has a wrong offset!");

}

