#pragma once

#include <cstdint>
#include <cstring>
#include <string>
#include <vector>

// Reads the parts of a gz savestate (.gzs) that can be carried over to SoH. A gz state is a raw dump of N64
// memory, so only plain data is usable: the save context, a few fields of the play state, and Link's actor,
// which is found by searching the dump for it. Everything here is big-endian, in the retail N64 layout.
namespace GzMacro {

inline uint16_t ReadU16(const uint8_t* p) {
    return (uint16_t)((p[0] << 8) | p[1]);
}

inline uint32_t ReadU32(const uint8_t* p) {
    return ((uint32_t)p[0] << 24) | ((uint32_t)p[1] << 16) | ((uint32_t)p[2] << 8) | (uint32_t)p[3];
}

inline float ReadF32(const uint8_t* p) {
    uint32_t bits = ReadU32(p);
    float f;
    memcpy(&f, &bits, sizeof(f));
    return f;
}

struct Vec3fBE {
    float x, y, z;
};

struct Vec3sBE {
    int16_t x, y, z;
};

inline Vec3fBE ReadVec3f(const uint8_t* p) {
    return { ReadF32(p), ReadF32(p + 4), ReadF32(p + 8) };
}

inline Vec3sBE ReadVec3s(const uint8_t* p) {
    return { (int16_t)ReadU16(p), (int16_t)ReadU16(p + 2), (int16_t)ReadU16(p + 4) };
}

// Sizes of the N64 structs, the same in every version gz supports.
constexpr size_t N64_SAVE_CONTEXT_SIZE = 0x1428;
constexpr size_t N64_PLAY_STATE_SIZE = 0x12518;
constexpr size_t N64_GAME_INFO_SIZE = 0x15D4;
constexpr size_t N64_PLAYER_SIZE = 0xA84;

enum class GzVersion : uint16_t {
    Oot10 = 0,
    Oot11 = 1,
    Oot12 = 2,
    OotMqJ = 3,
    OotMqU = 4,
    OotGcJ = 5,
    OotGcU = 6,
    OotCeJ = 7,
    OotIQueC = 8,
};

const char* GzVersionName(uint16_t version);
bool IsMasterQuestVersion(uint16_t version);

struct LinkState {
    Vec3fBE homePos;
    Vec3fBE worldPos;
    Vec3sBE worldRot;
    Vec3sBE shapeRot;
    Vec3fBE velocity;
    float speedXZ;
    float gravity;
    float minVelocityY;
    uint16_t bgCheckFlags;
    int8_t currentMask;
    uint32_t stateFlags1;
    uint32_t stateFlags2;
    uint8_t stateFlags3;
    float linearVelocity;
    int16_t yaw;
    // Link's eye state and the frames until his next blink, which draws a random number
    int16_t blink[2];
};

struct StateFile {
    uint16_t version = 0;
    uint16_t stateVersion = 0;
    int32_t movieFrame = 0;

    int16_t sceneId = 0;
    int8_t roomNum = 0;
    // The play state's frame counter; some things happen only on even frames
    uint32_t gameplayFrames = 0;
    Vec3fBE cameraPlayerPos = {};
    Vec3sBE cameraPlayerRot = {};

    // Live flags of the current scene (actorCtx.flags), which only reach the save context on scene exit.
    uint32_t swchFlags = 0;
    uint32_t tempSwchFlags = 0;
    uint32_t chestFlags = 0;
    uint32_t clearFlags = 0;
    uint32_t tempClearFlags = 0;
    uint32_t collectFlags = 0;
    uint32_t tempCollectFlags = 0;

    // The N64 SaveContext, still in big-endian N64 layout.
    std::vector<uint8_t> saveContext;

    bool linkFound = false;
    LinkState link = {};

    // The rng when the state was saved, which a macro recorded from it starts with
    bool rngFound = false;
    uint32_t rng = 0;
};

bool ParseState(const uint8_t* data, size_t size, StateFile& out, std::string& error);
bool LoadStateFile(const std::string& path, StateFile& out, std::string& error);

} // namespace GzMacro
