#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FUISound

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct FUISound.FUISound
// 0x0040 (0x0040 - 0x0000)
struct FFUISound final
{
public:
	TSoftObjectPtr<class USoundBase>              Sound_16_5EF7034C452E7ED88DB00AB82E6A94A8;         // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class USoundConcurrency*                      SoundConcurrency_15_24F63DE949D8DD5C6FD54E8644F59BB5; // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        VolumeMultiplier_12_35BCEF3F401E3D213C82B7B267B673FE; // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PitchMultiplier_11_30B4C96443E2BAF0C4C0BEAC7D5D699E; // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFUISound) == 0x000008, "Wrong alignment on FFUISound");
static_assert(sizeof(FFUISound) == 0x000040, "Wrong size on FFUISound");
static_assert(offsetof(FFUISound, Sound_16_5EF7034C452E7ED88DB00AB82E6A94A8) == 0x000000, "Member 'FFUISound::Sound_16_5EF7034C452E7ED88DB00AB82E6A94A8' has a wrong offset!");
static_assert(offsetof(FFUISound, SoundConcurrency_15_24F63DE949D8DD5C6FD54E8644F59BB5) == 0x000028, "Member 'FFUISound::SoundConcurrency_15_24F63DE949D8DD5C6FD54E8644F59BB5' has a wrong offset!");
static_assert(offsetof(FFUISound, VolumeMultiplier_12_35BCEF3F401E3D213C82B7B267B673FE) == 0x000030, "Member 'FFUISound::VolumeMultiplier_12_35BCEF3F401E3D213C82B7B267B673FE' has a wrong offset!");
static_assert(offsetof(FFUISound, PitchMultiplier_11_30B4C96443E2BAF0C4C0BEAC7D5D699E) == 0x000038, "Member 'FFUISound::PitchMultiplier_11_30B4C96443E2BAF0C4C0BEAC7D5D699E' has a wrong offset!");

}

