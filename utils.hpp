#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <Windows.h>
#include <vector>
#include <string_view>
#include <stdexcept>
namespace utils
{
    struct SectionInfo {
        uintptr_t start;
        size_t size;
        SectionInfo() : start(0), size(0) {}
        SectionInfo(uintptr_t start, size_t size) : start(start), size(size) {}

    };

    inline SectionInfo get_text_section_info() {
        // Get the base address of the current module (executable)
        HMODULE hModule = GetModuleHandle(nullptr);
        if (!hModule) {
            throw std::runtime_error("Failed to get module handle");
        }

        // Get the DOS header
        auto dosHeader = reinterpret_cast<PIMAGE_DOS_HEADER>(hModule);
        // Get the NT headers
        auto ntHeaders = reinterpret_cast<PIMAGE_NT_HEADERS>(reinterpret_cast<uintptr_t>(hModule) + dosHeader->e_lfanew);

        // Get the section headers
        auto sectionHeader = IMAGE_FIRST_SECTION(ntHeaders);

        // Iterate through sections to find the .text section
        for (unsigned i = 0; i < ntHeaders->FileHeader.NumberOfSections; ++i, ++sectionHeader) {
            if (std::string_view(reinterpret_cast<char*>(sectionHeader->Name), 5) == ".text") {
                uintptr_t start = reinterpret_cast<uintptr_t>(hModule) + sectionHeader->VirtualAddress;
                size_t size = sectionHeader->Misc.VirtualSize;
                return { start, size };
            }
        }

        throw std::runtime_error("Failed to find .text section");
    }
} // namespace utils
#endif // SECTION_INFO_HPP
