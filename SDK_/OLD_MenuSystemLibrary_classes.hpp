#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OLD_MenuSystemLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass OLD_MenuSystemLibrary.OLD_MenuSystemLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UOLD_MenuSystemLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void ApplyPostProcessingSettings(bool MotionBlur, bool LensFlares, bool SSR, bool Bloom, int32 AntiAliasing, bool AmbientOcclusion, class UObject* __WorldContext);
	static void ApplyRaytracingSettings(int32 RaytracedShadows, int32 RaytracedReflections, int32 RaytracedTranslucency, int32 RaytracedAmbientOcclusion, int32 RaytracedGlobalIllumination, int32 DLSS, class UObject* __WorldContext);
	static void Get_Controls_Settings(bool InvertLookXDefault, bool InvertLookYDefault, double CameraSpeedXDefault, double CameraSpeedYDefault, bool RumbleDefault, class UObject* __WorldContext, bool* InvertLookX, bool* InvertLookY, double* CameraSpeedX, double* CameraSpeedY, bool* Rumble);
	static void Get_Language_Code_Array(class UObject* __WorldContext, TArray<class FString>* LanguageCodeArray);
	static void GetAudioSettings(double MasterAudioVolumeDefault, double MusicAudioVolumeDefault, double SFXAudioVolumeDefault, double VoiceAudioVolumeDefault, class UObject* __WorldContext, double* MasterAudioVolume, double* MusicAudioVolume, double* SFXAudioVolume, double* VoiceAudioVolume);
	static void GetBenchmarkAlreadyRan(class UObject* __WorldContext, bool* bBenchmarkAlreadyRan);
	static void GetDefaultActionMappings(class UObject* __WorldContext, TArray<struct FInputActionKeyMapping>* DefaultActionMappings);
	static void GetDefaultAxisMappings(class UObject* __WorldContext, TArray<struct FInputAxisKeyMapping>* DefaultAxisMappings);
	static void GetDefaultBindingsFirstRun(class UObject* __WorldContext, bool* bDefaultBindingsFirstRun);
	static void GetDisplaySettings(double BrightnessDefault, double FieldOfViewDefault, class UObject* __WorldContext, double* Brightness, double* FieldOfView);
	static void GetGameSettings(int32 DifficultyDefault, int32 LanguageDefault, bool SubtitlesEnabledDefault, class UObject* __WorldContext, int32* Difficulty, int32* Language, bool* SubtitlesEnabled, TArray<class FString>* Languages);
	static void GetGraphicsPreset(class UObject* __WorldContext, int32* Preset);
	static void GetPersistentVariable(const class FString& Param_Name, class UObject* __WorldContext, class FString* Value, bool* bFound);
	static void GetPostProcessingSettings(bool MotionBlurDefault, bool LensFlaresDefault, bool SSRDefault, bool BloomDefault, int32 AntiAliasingDefault, bool AmbientOcclusionDefault, class UObject* __WorldContext, bool* MotionBlur, bool* LensFlares, bool* SSR, bool* Bloom, int32* AntiAliasing, bool* AmbientOcclusion);
	static void GetRaytracingSettings(int32 RaytracedShadowsDefault, int32 RaytracedReflectionsDefault, int32 RaytracedTranslucencyDefault, int32 RaytracedAmbientOcclusionDefault, int32 RaytracedGlobalIlluminationDefault, int32 DLSSDefault, class UObject* __WorldContext, int32* RaytracedShadows, int32* RaytracedReflections, int32* RaytracedTranslucency, int32* RaytracedAmbientOcclusion, int32* RaytracedGlobalIllumination, int32* DLSS);
	static class UMenuSettingsSaveGameBP_C* GetSettingsSaveGame(class UObject* __WorldContext);
	static void GetSupportedScreenResolutions(class UObject* __WorldContext, TArray<class FString>* SupportedResolutions, int32* CurrentResolutionIndex);
	static void SaveSettingsToSlot(class USaveGame* SaveGameObject, class UObject* __WorldContext);
	static void SetAudioSettings(double MasterAudioVolume, double MusicAudioVolume, double SFXAudioVolume, double VoiceAudioVolume, class USoundClass* MasterSoundClass, class USoundClass* MusicSoundClass, class USoundClass* SFXSoundClass, class USoundClass* VoiceSoundClass, class UObject* __WorldContext);
	static void SetBenchmarkAlreadyRan(bool bBenchmarkRan, class UObject* __WorldContext);
	static void SetControlsSettings(bool InvertLookX, bool InvertLookY, double CameraSpeedX, double CameraSpeedY, bool Rumble, class UObject* __WorldContext);
	static void SetDefaultActionMappings(TArray<struct FInputActionKeyMapping>& ActionKeyMappings, class UObject* __WorldContext);
	static void SetDefaultAxisMappings(TArray<struct FInputAxisKeyMapping>& AxisKeyMappings, class UObject* __WorldContext);
	static void SetDefaultBindingsFirstRun(bool bDefaultBindingsFirstRun, class UObject* __WorldContext);
	static void SetDisplaySettings(double Brightness, double FieldOfView, class UObject* __WorldContext);
	static void SetGameSettings(int32 Difficulty, int32 Language, bool SubtitlesEnabled, class UObject* __WorldContext);
	static void SetGraphicsPreset(int32 Preset, class UObject* __WorldContext);
	static void SetLanguageCodeArray(TArray<class FString>& LanguageCodeArray, class UObject* __WorldContext);
	static void SetPersistentVariable(const class FString& Param_Name, const class FString& Value, class UObject* __WorldContext);
	static void SetPostProcessingSettings(bool MotionBlur, bool LensFlares, bool SSR, bool Bloom, int32 AntiAliasing, bool AmbientOcclusion, class UObject* __WorldContext);
	static void SetRaytracingSettings(int32 RaytracedShadows, int32 RaytracedReflections, int32 RaytracedTranslucency, int32 RaytracedAmbientOcclusion, int32 RaytracedGlobalIllumination, int32 DLSS, class UObject* __WorldContext);
	static void SetSoundClassVolumeProperty(class USoundClass* SoundClass, double VolumeValue, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OLD_MenuSystemLibrary_C">();
	}
	static class UOLD_MenuSystemLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOLD_MenuSystemLibrary_C>();
	}
};
static_assert(alignof(UOLD_MenuSystemLibrary_C) == 0x000008, "Wrong alignment on UOLD_MenuSystemLibrary_C");
static_assert(sizeof(UOLD_MenuSystemLibrary_C) == 0x000028, "Wrong size on UOLD_MenuSystemLibrary_C");

}
