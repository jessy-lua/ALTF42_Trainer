#include "find_pattern.hpp"
#include "unreal.hpp"
#include "utils.hpp"

std::uintptr_t unreal::find_names()
{
	auto r = byte_scanner<"48 8D 0D ? ? ? ? E8 ? ? ? ? C6 05 ? ? ? ? ? 0F 10 07">.search(const_cast<const std::uint8_t*>(text_base), text_size);
	if (!r) [[unlikely]]
	{
		return 0;
	}

	return reinterpret_cast<uintptr_t>(r) + *reinterpret_cast<std::int32_t*>(const_cast<std::uint8_t*>(r) + 3) + 7; /**/

}

std::uintptr_t unreal::find_world()
{
	
	auto r = byte_scanner<"48 89 0D ? ? ? ? 48 85 F6">.search(const_cast<const std::uint8_t*>(text_base), text_size);
	if (!r) [[unlikely]]
	{
		return 0;
	}

	return reinterpret_cast<uintptr_t>(r) + *reinterpret_cast<std::int32_t*>(const_cast<std::uint8_t*>(r) + 3) + 7;
	/**/

}

std::uintptr_t unreal::find_objects()
{
	
	auto r = byte_scanner<"48 8B 05 ? ? ? ? 48 8B 0C C8 4C 8D 04 D1 EB ? 4C 8B 65">.search(const_cast<const std::uint8_t*>(text_base), text_size);
	if (!r) [[unlikely]]
	{
		return 0;
	}
	return reinterpret_cast<uintptr_t>(r) + *reinterpret_cast<std::int32_t*>(const_cast<std::uint8_t*>(r) + 3) + 7;
	/**/
	return 0;

}

std::uintptr_t unreal::find_append_name()
{
	
	auto r = byte_scanner<"48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 80 3D ? ? ? ? ? 48 8B F2">.search(const_cast<const std::uint8_t*>(text_base), text_size);
	if (!r) [[unlikely]]
	{
		return 0;
	}

	return reinterpret_cast<uintptr_t>(r);
		/**/
	return 0;

}