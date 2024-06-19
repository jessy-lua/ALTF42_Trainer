

#include "framework.h"
#include "globals.hpp"
#include "SDK.hpp"

#include "unreal.hpp"
#include "utils.hpp"

//#define DEBUG 1
void MainThread()
{
	std::this_thread::sleep_for(std::chrono::seconds(10));
#ifdef DEBUG
	AllocConsole();
	FILE* Dummy;
	freopen_s(&Dummy, "CONOUT$", "w", stdout);
	freopen_s(&Dummy, "CONIN$", "r", stdin);
#endif

	
	// Console close handler
	SetConsoleCtrlHandler([](DWORD dwCtrlType) -> BOOL
		{
			if (dwCtrlType == CTRL_CLOSE_EVENT)
			{
				globals::is_running = false;
				return TRUE;
			}
		return FALSE;
	}, TRUE);

	utils::SectionInfo text_section;
	while (globals::is_running && !text_section.start)
	{
		try {
			text_section = utils::get_text_section_info();
		}
		catch (const std::exception& ex) {
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			continue;
		}
	}


	unreal::text_base = reinterpret_cast<std::uint8_t*>(GetModuleHandleA(NULL));
	unreal::text_size = static_cast<std::size_t>(text_section.size);

	std::uintptr_t g_objects = unreal::find_objects();
	std::uintptr_t g_name_append = unreal::find_append_name();

	SDK::UObject::GObjects.InitManually( reinterpret_cast<void*>(g_objects) );
	SDK::FName::InitManually(reinterpret_cast<void*>(g_name_append));
#ifdef DEBUG
	std::printf("GObjects: 0x%llX\n", g_objects - (std::uintptr_t)unreal::text_base);
	std::printf("GNameAppend: 0x%llX\n", g_name_append - (std::uintptr_t)unreal::text_base);
#endif
	/* Functions returning "static" instances */
	SDK::UEngine* Engine = SDK::UEngine::GetEngine();
	SDK::UWorld* World = SDK::UWorld::GetWorld();

	std::printf("Engine: 0x%llX\n", reinterpret_cast<std::uintptr_t>(Engine));
	std::printf("World: 0x%llX\n", reinterpret_cast<std::uintptr_t>(World));
	SDK::FVector SavedLocation{0.f,0.f,0.f};
#ifdef DEBUG
	bool is_first_run = true;
#else
	bool is_first_run = false;
#endif
	// Main thread
	while (globals::is_running)
	{
		SDK::UWorld* World = SDK::UWorld::GetWorld();
		globals::uworld = reinterpret_cast<std::uintptr_t>(World);
		if (!World)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			continue;
		}

		auto GameInstance = World->OwningGameInstance;
		if (!GameInstance)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			continue;
		}

		auto LocalPlayers = GameInstance->LocalPlayers;
		if (!LocalPlayers.IsValid())
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			continue;
		}

		auto LocalPlayer = LocalPlayers[0];
		if (!LocalPlayer)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			continue;
		}

		auto PlayerController = LocalPlayer->PlayerController;
		if (!PlayerController)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			continue;
		}

		auto Pawn = PlayerController->AcknowledgedPawn;
		if (!Pawn)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			continue;
		}

		if (is_first_run) 
		{
			const auto Name = Pawn->GetName();
			const auto FullName = Pawn->GetFullName();
			std::printf("%s | Pawn: %s\n", Name.c_str(), FullName.c_str());
		}

		if (!World->PersistentLevel || !World->PersistentLevel->Actors.IsValid())
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			continue;
		}
		SDK::AALTF4_Loco_BP_C* Character = static_cast<SDK::AALTF4_Loco_BP_C*>(Pawn);
		if (is_first_run)
		{
			const auto Actors = World->PersistentLevel->Actors;
			for (int i = 0; i < Actors.Num(); ++i)
			{
				auto Actor = Actors[i];
				if (!Actor)
					continue;
				const auto ActorName = Actor->GetName();
				const auto ActorFullName = Actor->GetFullName();
				std::printf("%s |Actor: %s\n", ActorName.c_str(), ActorFullName.c_str());
			}
		}

		if (is_first_run)
		{
			is_first_run = false;
			std::printf("Press END to exit\n");
		}

		globals::is_initialized = true;


		constexpr auto sleep_time = 3000;
		for (int i = 0; i < sleep_time / 10; i++)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(10));
			if (!globals::is_running)
				break;
			if (GetAsyncKeyState(VK_END) & 0x8000)
			{
				globals::is_running = false;
				break;
			}

			if (GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
			{
				// Find NS_Portal_* actor
				const auto Actors = World->PersistentLevel->Actors;
				for (int i = 0; i < Actors.Num(); ++i)
				{
					auto Actor = Actors[i];
					if (!Actor)
						continue;
					const auto ActorName = Actor->GetName();
					if (ActorName.find("P_Fire_EllipsePortal_") != std::string::npos)
					{
						const auto ActorFullName = Actor->GetFullName();
						const auto ActorLocation = Actor->RootComponent->K2_GetComponentLocation();
						Pawn->RootComponent->K2_SetWorldLocation(ActorLocation, false, nullptr, true);
						std::printf("Found P_Fire_EllipsePortal_ actor: %s\n", ActorFullName.c_str());
						break;
					}
				}
			}
			// Trace from camera to crosshair and teleport to hit location
			if (GetAsyncKeyState(VK_MBUTTON) & 0x8000)
			{
				const auto CameraLocation = PlayerController->PlayerCameraManager->GetCameraLocation();
				const auto CameraRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
				const auto CalculateForwardVector = [](const SDK::FRotator& Rotation) -> SDK::FVector
					{
					const auto Yaw = Rotation.Yaw * (3.14159265358979323846f / 180.0f);
					const auto Pitch = Rotation.Pitch * (3.14159265358979323846f / 180.0f);
					const auto X = cosf(Yaw) * cosf(Pitch);
					const auto Y = sinf(Yaw) * cosf(Pitch);
					const auto Z = sinf(Pitch);
					return SDK::FVector(X, Y, Z);
				};
				const auto ForwardVector = CalculateForwardVector(CameraRotation);
				const auto End = CameraLocation + ForwardVector * 10000.0f;
				SDK::UObject* _find_obj = SDK::UObject::FindObjectFast("KismetSystemLibrary");
				if (!_find_obj)
				{
					std::printf("Failed to find Engine.KismetSystemLibrary\n");
					continue;
				}
				auto KismetSystemLibrary = static_cast<SDK::UKismetSystemLibrary*>(_find_obj);
				auto trace_channel = 0x1400;
				SDK::TArray<SDK::AActor*> ActorsToIgnore;
				SDK::FHitResult HitResult;
				SDK::FLinearColor TraceColor;
				KismetSystemLibrary->LineTraceSingle(World, CameraLocation, End, (SDK::ETraceTypeQuery)0x1400, false, ActorsToIgnore, SDK::EDrawDebugTrace::None, &HitResult, true, TraceColor, TraceColor, 0.f);
				if (HitResult.bBlockingHit)
				{
					HitResult.Location.Z += 200.f;
					Pawn->RootComponent->K2_SetWorldLocation(HitResult.Location, false, nullptr, true);
					Character->RagdollEnd();
				}
				std::this_thread::sleep_for(std::chrono::milliseconds(500));
			}

			// Save location
			if (GetAsyncKeyState(VK_F5) & 0x8000)
			{
				SavedLocation = Pawn->RootComponent->K2_GetComponentLocation();
				std::printf("Saved location: %f %f %f\n", SavedLocation.X, SavedLocation.Y, SavedLocation.Z);
			}

			// Teleport to saved location
			if (GetAsyncKeyState(VK_F6) & 0x8000)
			{
				if(SavedLocation.X != 0.f && SavedLocation.Y != 0.f && SavedLocation.Z != 0.f)
				Pawn->RootComponent->K2_SetWorldLocation(SavedLocation, false, nullptr, true);
			}


			// Punch forward 
			if (GetAsyncKeyState(VK_XBUTTON2) & 0x8000)
			{
				static const auto LastBone = Character->Mesh->GetBoneName(0);
				const auto CameraRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
				const auto AngleVectors = [](const SDK::FRotator& Rotation) -> SDK::FVector
					{
						const auto Yaw = Rotation.Yaw * (3.14159265358979323846f / 180.0f);
						const auto Pitch = Rotation.Pitch * (3.14159265358979323846f / 180.0f);
						const auto X = cosf(Yaw) * cosf(Pitch);
						const auto Y = sinf(Yaw) * cosf(Pitch);
						const auto Z = sinf(Pitch);
						return SDK::FVector(X, Y, Z);
					};
				const auto ForwardVector = AngleVectors(CameraRotation);
				Character->CharacterMovement->AddImpulse(ForwardVector * 30.f, true);
				//Character->RagdollEnd();
				std::this_thread::sleep_for(std::chrono::milliseconds(10));
			}
			if (GetAsyncKeyState(VK_XBUTTON1) & 0x8000)
			{
				auto move = Character->CharacterMovement;
				//move->DisableMovement();
				move->ClearAccumulatedForces();
				move->StopActiveMovement();
				move->StopMovementImmediately();
				move->Velocity = { 0.f,0.f,0.f };
				move->Acceleration = { 0.f,0.f,0.f };
				std::this_thread::sleep_for(std::chrono::milliseconds(1));

			}
			if (GetAsyncKeyState(VK_F8) & 0x8000)
			{
				// SDL::UALTF42_GameInstance_C
				auto ugameinstance = static_cast<SDK::UALTF42_GameInstance_C*>(GameInstance);
				ugameinstance->Plus_CoinEvent(10000);
				ugameinstance->TestLoad_Event();

				ugameinstance->Test_ItemGet_Event(true, 100, true, 100, true, 100, true, 100, true, 100, true, 100, true, 100, true, 100, true, 100, true, 100, true, 100, true, 100);
				ugameinstance->Test_Costume_ON_Event(true, true, true, true, true, true, true, true, true, true, true, true, true);

				std::this_thread::sleep_for(std::chrono::milliseconds(200));

				
			}
		}
	}
#ifdef DEBUG
	FreeConsole();
#endif


}
namespace
{
	HMODULE xinput;
}


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
    {
		wchar_t systemPath[MAX_PATH];
		GetSystemDirectory(systemPath, MAX_PATH);
		wcscat_s(systemPath, L"\\xinput1_3.dll");

		xinput = LoadLibrary(systemPath);
		
		globals::h_module = (std::uintptr_t)hModule;
		DisableThreadLibraryCalls(hModule);
		
		// Start main thread
		globals::main_thread = std::thread(MainThread);
		globals::main_thread.detach();
	}
    else if (ul_reason_for_call == DLL_PROCESS_DETACH)
    {
		// Cleanup
		globals::is_running = false;
		globals::main_thread.join();
		FreeLibraryAndExitThread(reinterpret_cast<HMODULE>(globals::h_module), 0);
		
	}


    return true;
}




#include "my_xinput.hpp"
// Export the functions
template<class T>
T set_call(T& ptr, const char* name) {
	if (ptr == 0)
		ptr = (T)GetProcAddress(xinput, name);
	return ptr;
}

template<class T>
T set_call(T& ptr, int ord) {
	if (ptr == 0)
		ptr = (T)GetProcAddress(xinput, (const char*)ord);
	return ptr;
}

void WINAPI XInputEnable(BOOL state)
{
	static void (WINAPI * orig)(BOOL state);
	return set_call(orig, __FUNCTION__)(state);
}

DWORD WINAPI XInputGetBatteryInformation(DWORD dwUserIndex, BYTE devType, XINPUT_BATTERY_INFORMATION* pBatteryInformation)
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex, BYTE devType, XINPUT_BATTERY_INFORMATION * pBatteryInformation);
	return set_call(orig, __FUNCTION__)(dwUserIndex, devType, pBatteryInformation);
}

DWORD WINAPI XInputGetCapabilities(DWORD dwUserIndex, DWORD dwFlags, XINPUT_CAPABILITIES* pCapabilities)
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex, DWORD dwFlags, XINPUT_CAPABILITIES * pCapabilities);
	return set_call(orig, __FUNCTION__)(dwUserIndex, dwFlags, pCapabilities);
}

DWORD WINAPI XInputGetDSoundAudioDeviceGuids(DWORD dwUserIndex, GUID* pDSoundRenderGuid, GUID* pDSoundCaptureGuid)
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex, GUID * pDSoundRenderGuid, GUID * pDSoundCaptureGuid);
	return set_call(orig, __FUNCTION__)(dwUserIndex, pDSoundRenderGuid, pDSoundCaptureGuid);
}

DWORD WINAPI XInputGetKeystroke(DWORD dwUserIndex, DWORD dwReserved, PXINPUT_KEYSTROKE pKeystroke)
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex, DWORD dwReserved, PXINPUT_KEYSTROKE pKeystroke);
	return set_call(orig, __FUNCTION__)(dwUserIndex, dwReserved, pKeystroke);
}

DWORD WINAPI XInputGetState(DWORD dwUserIndex, XINPUT_STATE* pState)
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex, XINPUT_STATE * pState);
	return set_call(orig, __FUNCTION__)(dwUserIndex, pState);
}

DWORD WINAPI XInputSetState(DWORD dwUserIndex, XINPUT_VIBRATION* pVibration)
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex, XINPUT_VIBRATION * pVibration);
	return set_call(orig, __FUNCTION__)(dwUserIndex, pVibration);
}

DWORD WINAPI XInputOrd100(DWORD dwUserIndex, XINPUT_STATE* pState)
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex, XINPUT_STATE * pState);
	return set_call(orig, "XInputGetState")(dwUserIndex, pState);
}

DWORD WINAPI XInputOrd101(DWORD dwUserIndex, DWORD unk, void* ptr)
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex, DWORD unk, void* ptr);
	return set_call(orig, 101)(dwUserIndex, unk, ptr);
}

DWORD WINAPI XInputOrd102(DWORD dwUserIndex)
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex);
	return set_call(orig, 102)(dwUserIndex);
}

DWORD WINAPI XInputOrd103(DWORD dwUserIndex)
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex);
	return set_call(orig, 103)(dwUserIndex);
}