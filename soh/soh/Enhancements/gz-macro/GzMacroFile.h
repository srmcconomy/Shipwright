#pragma once

#include <cstdint>
#include <string>
#include <vector>

// In-memory form of a gz (https://github.com/glankk/gz) macro file (.gzm). gz writes its movie
// vectors as raw N64 structs, so the file is big-endian with 4-byte counts.
namespace GzMacro {

struct Controller {
    uint16_t pad; // N64 button bits, same layout as BTN_*
    int8_t x;
    int8_t y;
};

struct Input {
    Controller raw;
    // Buttons that were pressed and released (or released and pressed) within one frame.
    // Bit 0x0080 is gz's reset flag.
    uint16_t padDelta;
};

struct Seed {
    int32_t frame;
    uint32_t oldSeed;
    uint32_t newSeed;
};

struct OcarinaInput {
    int32_t frame;
    uint16_t pad;
    int8_t adjustedX;
    int8_t adjustedY;
};

struct OcarinaSync {
    int32_t frame;
    int32_t audioFrames;
};

struct RoomLoad {
    int32_t frame;
};

struct MacroFile {
    Controller inputStart = {};
    std::vector<Input> inputs;
    std::vector<Seed> seeds;
    std::vector<OcarinaInput> ocarinaInputs;
    std::vector<OcarinaSync> ocarinaSyncs;
    std::vector<RoomLoad> roomLoads;
    int32_t rerecords = 0;
    int32_t lastRecordedFrame = -1;
};

constexpr uint16_t PAD_DELTA_RESET = 0x0080;

// Returns false and fills error when the data is not a valid .gzm file.
bool ParseMacro(const uint8_t* data, size_t size, MacroFile& out, std::string& error);
bool LoadMacroFile(const std::string& path, MacroFile& out, std::string& error);

} // namespace GzMacro
