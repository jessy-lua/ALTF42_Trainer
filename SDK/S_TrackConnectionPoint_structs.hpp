#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_TrackConnectionPoint

#include "Basic.hpp"

#include "S_TrackConnection_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_TrackConnectionPoint.S_TrackConnectionPoint
// 0x0010 (0x0010 - 0x0000)
struct FS_TrackConnectionPoint final
{
public:
	TArray<struct FS_TrackConnection>             Connections_3_41C9E7064104A505ED3DCC9FAE37544D;    // 0x0000(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FS_TrackConnectionPoint) == 0x000008, "Wrong alignment on FS_TrackConnectionPoint");
static_assert(sizeof(FS_TrackConnectionPoint) == 0x000010, "Wrong size on FS_TrackConnectionPoint");
static_assert(offsetof(FS_TrackConnectionPoint, Connections_3_41C9E7064104A505ED3DCC9FAE37544D) == 0x000000, "Member 'FS_TrackConnectionPoint::Connections_3_41C9E7064104A505ED3DCC9FAE37544D' has a wrong offset!");

}

