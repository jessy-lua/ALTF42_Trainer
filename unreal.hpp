#pragma once
#include <cstdint>

namespace unreal
{
	inline std::uint8_t* text_base = 0;
	inline std::size_t text_size = 0;

	std::uintptr_t find_names();
	std::uintptr_t find_world();
	std::uintptr_t find_objects();
	std::uintptr_t find_append_name();
}