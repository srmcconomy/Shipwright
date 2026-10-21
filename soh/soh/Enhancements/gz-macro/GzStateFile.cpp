#include "GzStateFile.h"

#include <fstream>
#include <iterator>

namespace GzMacro {

namespace {

// struct state_meta
constexpr size_t META_SIZE = 0x10;
constexpr uint16_t MIN_STATE_VERSION = 0x0003;

// PlayState offsets
constexpr size_t PLAY_SCENE_ID = 0x000A4;
constexpr size_t PLAY_MAIN_CAMERA = 0x001E0;
constexpr size_t CAMERA_PLAYER_POS_ROT = 0x094;
constexpr size_t PLAY_ACTOR_FLAGS = 0x01D28;
constexpr size_t PLAY_ROOM_CTX = 0x11CBC;

// Actor offsets. Retail builds do not have the debug ROM's padding at the end of Actor, so Player's own
// fields are 0x10 lower than in the decomp's comments.
constexpr size_t ACTOR_ID = 0x000;
constexpr size_t ACTOR_CATEGORY = 0x002;
constexpr size_t ACTOR_HOME_POS = 0x008;
constexpr size_t ACTOR_WORLD_POS = 0x024;
constexpr size_t ACTOR_WORLD_ROT = 0x030;
constexpr size_t ACTOR_VELOCITY = 0x05C;
constexpr size_t ACTOR_SPEED_XZ = 0x068;
constexpr size_t ACTOR_GRAVITY = 0x06C;
constexpr size_t ACTOR_MIN_VELOCITY_Y = 0x070;
constexpr size_t ACTOR_BG_CHECK_FLAGS = 0x088;
constexpr size_t ACTOR_SHAPE_ROT = 0x0B4;
constexpr size_t PLAYER_CURRENT_MASK = 0x14F;
constexpr size_t PLAYER_STATE_FLAGS_1 = 0x66C;
constexpr size_t PLAYER_STATE_FLAGS_2 = 0x670;
constexpr size_t PLAYER_STATE_FLAGS_3 = 0x682;
constexpr size_t PLAYER_LINEAR_VELOCITY = 0x828;
constexpr size_t PLAYER_YAW = 0x82C;
constexpr uint8_t ACTORCAT_PLAYER = 2;

// Each arena node gz saves is preceded by a start marker, the node's free flag and its size.
constexpr size_t ARENA_RECORD_SIZE = 8;

LinkState ReadLink(const uint8_t* p) {
    LinkState link;
    link.homePos = ReadVec3f(p + ACTOR_HOME_POS);
    link.worldPos = ReadVec3f(p + ACTOR_WORLD_POS);
    link.worldRot = ReadVec3s(p + ACTOR_WORLD_ROT);
    link.shapeRot = ReadVec3s(p + ACTOR_SHAPE_ROT);
    link.velocity = ReadVec3f(p + ACTOR_VELOCITY);
    link.speedXZ = ReadF32(p + ACTOR_SPEED_XZ);
    link.gravity = ReadF32(p + ACTOR_GRAVITY);
    link.minVelocityY = ReadF32(p + ACTOR_MIN_VELOCITY_Y);
    link.bgCheckFlags = ReadU16(p + ACTOR_BG_CHECK_FLAGS);
    link.currentMask = (int8_t)p[PLAYER_CURRENT_MASK];
    link.stateFlags1 = ReadU32(p + PLAYER_STATE_FLAGS_1);
    link.stateFlags2 = ReadU32(p + PLAYER_STATE_FLAGS_2);
    link.stateFlags3 = p[PLAYER_STATE_FLAGS_3];
    link.linearVelocity = ReadF32(p + PLAYER_LINEAR_VELOCITY);
    link.yaw = (int16_t)ReadU16(p + PLAYER_YAW);
    return link;
}

bool IsPlayerActor(const uint8_t* p) {
    return ReadU16(p + ACTOR_ID) == 0 && p[ACTOR_CATEGORY] == ACTORCAT_PLAYER;
}

bool HasPlayerArenaRecord(const uint8_t* data, size_t pos) {
    if (pos < ARENA_RECORD_SIZE) {
        return false;
    }
    const uint8_t* record = data + pos - ARENA_RECORD_SIZE;
    return ReadU16(record) == 0 && ReadU16(record + 2) == 0 && ReadU32(record + 4) >= N64_PLAYER_SIZE;
}

// The actor-code section that comes before the heap can only be walked with the ROM in hand, so Link is found
// by searching. The camera keeps a copy of Link's position, which pins down the right actor; when it does
// not match (e.g. the camera was detached), fall back to the first player actor in a heap node.
bool FindLink(const uint8_t* data, size_t size, size_t start, const uint8_t* cameraPos, LinkState& out) {
    size_t fallback = SIZE_MAX;
    // gz packs its records without padding, so the actor can start at any byte.
    for (size_t pos = start; pos + N64_PLAYER_SIZE <= size; pos++) {
        const uint8_t* p = data + pos;
        if (!IsPlayerActor(p)) {
            continue;
        }
        if (memcmp(p + ACTOR_WORLD_POS, cameraPos, 12) == 0) {
            out = ReadLink(p);
            return true;
        }
        if (fallback == SIZE_MAX && HasPlayerArenaRecord(data, pos)) {
            fallback = pos;
        }
    }
    if (fallback != SIZE_MAX) {
        out = ReadLink(data + fallback);
        return true;
    }
    return false;
}

} // namespace

const char* GzVersionName(uint16_t version) {
    switch ((GzVersion)version) {
        case GzVersion::Oot10:
            return "N64 1.0";
        case GzVersion::Oot11:
            return "N64 1.1";
        case GzVersion::Oot12:
            return "N64 1.2";
        case GzVersion::OotMqJ:
            return "GameCube Master Quest (JP)";
        case GzVersion::OotMqU:
            return "GameCube Master Quest (US)";
        case GzVersion::OotGcJ:
            return "GameCube (JP)";
        case GzVersion::OotGcU:
            return "GameCube (US)";
        case GzVersion::OotCeJ:
            return "GameCube Collector's Edition (JP)";
        case GzVersion::OotIQueC:
            return "iQue";
    }
    return "unknown";
}

bool IsMasterQuestVersion(uint16_t version) {
    return version == (uint16_t)GzVersion::OotMqJ || version == (uint16_t)GzVersion::OotMqU;
}

bool ParseState(const uint8_t* data, size_t size, StateFile& out, std::string& error) {
    StateFile s;

    if (size < META_SIZE) {
        error = "file is too small to be a gz savestate";
        return false;
    }
    s.version = ReadU16(data);
    s.stateVersion = ReadU16(data + 2);
    uint32_t stateSize = ReadU32(data + 4);
    s.movieFrame = (int32_t)ReadU32(data + 12);
    if (s.version > (uint16_t)GzVersion::OotIQueC) {
        error = "unknown game version";
        return false;
    }
    if (s.stateVersion < MIN_STATE_VERSION) {
        error = "savestate is from a gz version that is too old";
        return false;
    }
    if (stateSize > size) {
        error = "savestate is truncated";
        return false;
    }
    size = stateSize;

    // Skip the sequencer info.
    size_t pos = META_SIZE;
    for (int i = 0; i < 4; i++) {
        if (pos + 1 > size) {
            error = "unexpected end of file in sequencer info";
            return false;
        }
        bool active = data[pos++] != 0;
        if (active) {
            if (pos + 2 > size) {
                error = "unexpected end of file in sequencer info";
                return false;
            }
            uint8_t stopCmdCount = data[pos + 1];
            if (stopCmdCount > 8) {
                error = "bad sequencer info";
                return false;
            }
            pos += 2 + stopCmdCount * 4;
        }
        pos += 2 + 4 + 4 + 2; // seq id, volume, volume factors, channel mute
    }
    pos += 1; // afx config

    if (pos + N64_PLAY_STATE_SIZE + N64_SAVE_CONTEXT_SIZE + 4 + N64_GAME_INFO_SIZE > size) {
        error = "unexpected end of file in game context";
        return false;
    }
    const uint8_t* play = data + pos;
    s.sceneId = (int16_t)ReadU16(play + PLAY_SCENE_ID);
    s.roomNum = (int8_t)play[PLAY_ROOM_CTX];
    const uint8_t* cameraPos = play + PLAY_MAIN_CAMERA + CAMERA_PLAYER_POS_ROT;
    s.cameraPlayerPos = ReadVec3f(cameraPos);
    s.cameraPlayerRot = ReadVec3s(cameraPos + 12);
    const uint8_t* flags = play + PLAY_ACTOR_FLAGS;
    s.swchFlags = ReadU32(flags + 0x00);
    s.tempSwchFlags = ReadU32(flags + 0x04);
    s.chestFlags = ReadU32(flags + 0x10);
    s.clearFlags = ReadU32(flags + 0x14);
    s.tempClearFlags = ReadU32(flags + 0x18);
    s.collectFlags = ReadU32(flags + 0x1C);
    s.tempCollectFlags = ReadU32(flags + 0x20);
    pos += N64_PLAY_STATE_SIZE;

    s.saveContext.assign(data + pos, data + pos + N64_SAVE_CONTEXT_SIZE);
    pos += N64_SAVE_CONTEXT_SIZE;
    pos += 4 + N64_GAME_INFO_SIZE; // game info pointer and game info

    s.linkFound = FindLink(data, size, pos, cameraPos, s.link);

    out = std::move(s);
    return true;
}

bool LoadStateFile(const std::string& path, StateFile& out, std::string& error) {
    std::ifstream stream(path, std::ios::binary);
    if (!stream) {
        error = "could not open " + path;
        return false;
    }
    std::vector<uint8_t> data((std::istreambuf_iterator<char>(stream)), std::istreambuf_iterator<char>());
    return ParseState(data.data(), data.size(), out, error);
}

} // namespace GzMacro
