#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_GameInstanceExtension

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "JsonUtilities_structs.hpp"


namespace SDK::Params
{

// Function BPI_GameInstanceExtension.BPI_GameInstanceExtension_C.GetCurrentLevel
// 0x0008 (0x0008 - 0x0000)
struct BPI_GameInstanceExtension_C_GetCurrentLevel final
{
public:
	class FName                                   CurrentLevelName;                                  // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameInstanceExtension_C_GetCurrentLevel) == 0x000004, "Wrong alignment on BPI_GameInstanceExtension_C_GetCurrentLevel");
static_assert(sizeof(BPI_GameInstanceExtension_C_GetCurrentLevel) == 0x000008, "Wrong size on BPI_GameInstanceExtension_C_GetCurrentLevel");
static_assert(offsetof(BPI_GameInstanceExtension_C_GetCurrentLevel, CurrentLevelName) == 0x000000, "Member 'BPI_GameInstanceExtension_C_GetCurrentLevel::CurrentLevelName' has a wrong offset!");

// Function BPI_GameInstanceExtension.BPI_GameInstanceExtension_C.GetCurrentPlayTime
// 0x0008 (0x0008 - 0x0000)
struct BPI_GameInstanceExtension_C_GetCurrentPlayTime final
{
public:
	double                                        PlayTimeInSeconds;                                 // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameInstanceExtension_C_GetCurrentPlayTime) == 0x000008, "Wrong alignment on BPI_GameInstanceExtension_C_GetCurrentPlayTime");
static_assert(sizeof(BPI_GameInstanceExtension_C_GetCurrentPlayTime) == 0x000008, "Wrong size on BPI_GameInstanceExtension_C_GetCurrentPlayTime");
static_assert(offsetof(BPI_GameInstanceExtension_C_GetCurrentPlayTime, PlayTimeInSeconds) == 0x000000, "Member 'BPI_GameInstanceExtension_C_GetCurrentPlayTime::PlayTimeInSeconds' has a wrong offset!");

// Function BPI_GameInstanceExtension.BPI_GameInstanceExtension_C.GetSaveGameManager
// 0x0028 (0x0028 - 0x0000)
struct BPI_GameInstanceExtension_C_GetSaveGameManager final
{
public:
	TSoftObjectPtr<class UBP_SaveGameManager_C>   SaveGameManager;                                   // 0x0000(0x0028)(Parm, OutParm, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameInstanceExtension_C_GetSaveGameManager) == 0x000008, "Wrong alignment on BPI_GameInstanceExtension_C_GetSaveGameManager");
static_assert(sizeof(BPI_GameInstanceExtension_C_GetSaveGameManager) == 0x000028, "Wrong size on BPI_GameInstanceExtension_C_GetSaveGameManager");
static_assert(offsetof(BPI_GameInstanceExtension_C_GetSaveGameManager, SaveGameManager) == 0x000000, "Member 'BPI_GameInstanceExtension_C_GetSaveGameManager::SaveGameManager' has a wrong offset!");

// Function BPI_GameInstanceExtension.BPI_GameInstanceExtension_C.GetSettingsManager
// 0x0028 (0x0028 - 0x0000)
struct BPI_GameInstanceExtension_C_GetSettingsManager final
{
public:
	TSoftObjectPtr<class UBP_SettingsManager_C>   SettingsManager;                                   // 0x0000(0x0028)(Parm, OutParm, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameInstanceExtension_C_GetSettingsManager) == 0x000008, "Wrong alignment on BPI_GameInstanceExtension_C_GetSettingsManager");
static_assert(sizeof(BPI_GameInstanceExtension_C_GetSettingsManager) == 0x000028, "Wrong size on BPI_GameInstanceExtension_C_GetSettingsManager");
static_assert(offsetof(BPI_GameInstanceExtension_C_GetSettingsManager, SettingsManager) == 0x000000, "Member 'BPI_GameInstanceExtension_C_GetSettingsManager::SettingsManager' has a wrong offset!");

// Function BPI_GameInstanceExtension.BPI_GameInstanceExtension_C.OnLoadSettingsFromFile
// 0x0010 (0x0010 - 0x0000)
struct BPI_GameInstanceExtension_C_OnLoadSettingsFromFile final
{
public:
	struct FFilePath                              FilePath;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameInstanceExtension_C_OnLoadSettingsFromFile) == 0x000008, "Wrong alignment on BPI_GameInstanceExtension_C_OnLoadSettingsFromFile");
static_assert(sizeof(BPI_GameInstanceExtension_C_OnLoadSettingsFromFile) == 0x000010, "Wrong size on BPI_GameInstanceExtension_C_OnLoadSettingsFromFile");
static_assert(offsetof(BPI_GameInstanceExtension_C_OnLoadSettingsFromFile, FilePath) == 0x000000, "Member 'BPI_GameInstanceExtension_C_OnLoadSettingsFromFile::FilePath' has a wrong offset!");

// Function BPI_GameInstanceExtension.BPI_GameInstanceExtension_C.OnOpenLevel
// 0x0020 (0x0020 - 0x0000)
struct BPI_GameInstanceExtension_C_OnOpenLevel final
{
public:
	class FName                                   LevelName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAbsolute;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FDA[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Options;                                           // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameInstanceExtension_C_OnOpenLevel) == 0x000008, "Wrong alignment on BPI_GameInstanceExtension_C_OnOpenLevel");
static_assert(sizeof(BPI_GameInstanceExtension_C_OnOpenLevel) == 0x000020, "Wrong size on BPI_GameInstanceExtension_C_OnOpenLevel");
static_assert(offsetof(BPI_GameInstanceExtension_C_OnOpenLevel, LevelName) == 0x000000, "Member 'BPI_GameInstanceExtension_C_OnOpenLevel::LevelName' has a wrong offset!");
static_assert(offsetof(BPI_GameInstanceExtension_C_OnOpenLevel, bAbsolute) == 0x000008, "Member 'BPI_GameInstanceExtension_C_OnOpenLevel::bAbsolute' has a wrong offset!");
static_assert(offsetof(BPI_GameInstanceExtension_C_OnOpenLevel, Options) == 0x000010, "Member 'BPI_GameInstanceExtension_C_OnOpenLevel::Options' has a wrong offset!");

// Function BPI_GameInstanceExtension.BPI_GameInstanceExtension_C.OnSaveSettingsToFile
// 0x0030 (0x0030 - 0x0000)
struct BPI_GameInstanceExtension_C_OnSaveSettingsToFile final
{
public:
	struct FJsonObjectWrapper                     JsonObject;                                        // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFilePath                              FilePath;                                          // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameInstanceExtension_C_OnSaveSettingsToFile) == 0x000008, "Wrong alignment on BPI_GameInstanceExtension_C_OnSaveSettingsToFile");
static_assert(sizeof(BPI_GameInstanceExtension_C_OnSaveSettingsToFile) == 0x000030, "Wrong size on BPI_GameInstanceExtension_C_OnSaveSettingsToFile");
static_assert(offsetof(BPI_GameInstanceExtension_C_OnSaveSettingsToFile, JsonObject) == 0x000000, "Member 'BPI_GameInstanceExtension_C_OnSaveSettingsToFile::JsonObject' has a wrong offset!");
static_assert(offsetof(BPI_GameInstanceExtension_C_OnSaveSettingsToFile, FilePath) == 0x000020, "Member 'BPI_GameInstanceExtension_C_OnSaveSettingsToFile::FilePath' has a wrong offset!");

// Function BPI_GameInstanceExtension.BPI_GameInstanceExtension_C.OnSetCurrentPlayTime
// 0x0008 (0x0008 - 0x0000)
struct BPI_GameInstanceExtension_C_OnSetCurrentPlayTime final
{
public:
	double                                        PlayTimeInSeconds;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameInstanceExtension_C_OnSetCurrentPlayTime) == 0x000008, "Wrong alignment on BPI_GameInstanceExtension_C_OnSetCurrentPlayTime");
static_assert(sizeof(BPI_GameInstanceExtension_C_OnSetCurrentPlayTime) == 0x000008, "Wrong size on BPI_GameInstanceExtension_C_OnSetCurrentPlayTime");
static_assert(offsetof(BPI_GameInstanceExtension_C_OnSetCurrentPlayTime, PlayTimeInSeconds) == 0x000000, "Member 'BPI_GameInstanceExtension_C_OnSetCurrentPlayTime::PlayTimeInSeconds' has a wrong offset!");

// Function BPI_GameInstanceExtension.BPI_GameInstanceExtension_C.OnSetSoundClassVolume
// 0x0010 (0x0010 - 0x0000)
struct BPI_GameInstanceExtension_C_OnSetSoundClassVolume final
{
public:
	class USoundClass*                            SoundClass;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Volume;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_GameInstanceExtension_C_OnSetSoundClassVolume) == 0x000008, "Wrong alignment on BPI_GameInstanceExtension_C_OnSetSoundClassVolume");
static_assert(sizeof(BPI_GameInstanceExtension_C_OnSetSoundClassVolume) == 0x000010, "Wrong size on BPI_GameInstanceExtension_C_OnSetSoundClassVolume");
static_assert(offsetof(BPI_GameInstanceExtension_C_OnSetSoundClassVolume, SoundClass) == 0x000000, "Member 'BPI_GameInstanceExtension_C_OnSetSoundClassVolume::SoundClass' has a wrong offset!");
static_assert(offsetof(BPI_GameInstanceExtension_C_OnSetSoundClassVolume, Volume) == 0x000008, "Member 'BPI_GameInstanceExtension_C_OnSetSoundClassVolume::Volume' has a wrong offset!");

}

