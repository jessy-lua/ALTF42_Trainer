#pragma once
#include <cstdint>
#include <thread>
namespace globals
{
	inline bool is_initialized = false;
	inline bool is_running = true;
	inline bool is_menu_open = false;
	inline std::thread main_thread;
	inline std::uintptr_t h_module = NULL;
	inline std::uintptr_t base_address = NULL;
	inline std::uintptr_t uworld = NULL;
}