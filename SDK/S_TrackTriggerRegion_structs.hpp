#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_TrackTriggerRegion

#include "Basic.hpp"

#include "S_TrackRegion_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_TrackTriggerRegion.S_TrackTriggerRegion
// 0x0018 (0x0018 - 0x0000)
struct FS_TrackTriggerRegion final
{
public:
	struct FS_TrackRegion                         Region_5_E8CEB7BF4252AB116EB869A46D747246;         // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_400D[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_TrackTrigger_C*                     Trigger_6_503F9AAD4351CB1FE65FE89798DB7B11;        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_TrackTriggerRegion) == 0x000008, "Wrong alignment on FS_TrackTriggerRegion");
static_assert(sizeof(FS_TrackTriggerRegion) == 0x000018, "Wrong size on FS_TrackTriggerRegion");
static_assert(offsetof(FS_TrackTriggerRegion, Region_5_E8CEB7BF4252AB116EB869A46D747246) == 0x000000, "Member 'FS_TrackTriggerRegion::Region_5_E8CEB7BF4252AB116EB869A46D747246' has a wrong offset!");
static_assert(offsetof(FS_TrackTriggerRegion, Trigger_6_503F9AAD4351CB1FE65FE89798DB7B11) == 0x000010, "Member 'FS_TrackTriggerRegion::Trigger_6_503F9AAD4351CB1FE65FE89798DB7B11' has a wrong offset!");

}

