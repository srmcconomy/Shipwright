#include "GzStateFile.h"

#include <algorithm>

#include <fstream>
#include <iterator>

namespace GzMacro {

namespace {

// struct state_meta
constexpr size_t META_SIZE = 0x10;
constexpr uint16_t MIN_STATE_VERSION = 0x0003;

// PlayState offsets
constexpr size_t PLAY_SCENE_ID = 0x000A4;
constexpr size_t PLAY_STATE_FRAMES = 0x0009C;
constexpr size_t PLAY_MAIN_CAMERA = 0x001E0;
constexpr size_t CAMERA_PLAYER_POS_ROT = 0x094;
constexpr size_t PLAY_ACTOR_FLAGS = 0x01D28;
constexpr size_t PLAY_ROOM_CTX = 0x11CBC;
constexpr size_t PLAY_GAMEPLAY_FRAMES = 0x11DE4;
constexpr size_t PLAY_PRECIPITATION = 0x10B12;
constexpr size_t PLAY_PAUSE_CTX = 0x10760;

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
constexpr size_t PLAYER_BLINK = 0x398;
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
    link.blink[0] = (int16_t)ReadU16(p + PLAYER_BLINK);
    link.blink[1] = (int16_t)ReadU16(p + PLAYER_BLINK + 2);
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
            out.data.assign(p, p + N64_PLAYER_SIZE);
            return true;
        }
        if (fallback == SIZE_MAX && HasPlayerArenaRecord(data, pos)) {
            fallback = pos;
        }
    }
    if (fallback != SIZE_MAX) {
        out = ReadLink(data + fallback);
        out.data.assign(data + fallback, data + fallback + N64_PLAYER_SIZE);
        return true;
    }
    return false;
}

constexpr uint16_t ACTOR_OBJECT_KANKYO = 0x0097;
constexpr uint8_t ACTORCAT_ITEMACTION = 7;
constexpr size_t ACTOR_PARAMS = 0x01C;

// Every Object_Kankyo in the saved heap, found like Link: by its id and category, at the start of a heap node in use
// that is big enough to hold one
std::vector<KankyoState> FindKankyos(const uint8_t* data, size_t size, size_t start) {
    std::vector<KankyoState> found;
    for (size_t pos = std::max(start, ARENA_RECORD_SIZE); pos + N64_OBJECT_KANKYO_SIZE <= size; pos++) {
        const uint8_t* p = data + pos;
        if (ReadU16(p + ACTOR_ID) != ACTOR_OBJECT_KANKYO || p[ACTOR_CATEGORY] != ACTORCAT_ITEMACTION) {
            continue;
        }
        const uint8_t* record = p - ARENA_RECORD_SIZE;
        if (ReadU16(record) != 0 || ReadU16(record + 2) != 0 || ReadU32(record + 4) < N64_OBJECT_KANKYO_SIZE) {
            continue;
        }
        KankyoState kankyo;
        kankyo.params = (int16_t)ReadU16(p + ACTOR_PARAMS);
        kankyo.data.assign(p, p + N64_OBJECT_KANKYO_SIZE);
        found.push_back(std::move(kankyo));
        pos += N64_OBJECT_KANKYO_SIZE - 1;
    }
    return found;
}

constexpr int16_t ACTOR_ID_MAX = 0x1D7;
constexpr uint8_t ACTORCAT_MAX = 12;
constexpr size_t ACTOR_ROOM = 0x003;
constexpr size_t ACTOR_LINKS_AND_FUNCS = 0x118; // parent, child, prev, next, init, destroy, update, draw
constexpr size_t ACTOR_LINKS_AND_FUNCS_COUNT = 8;

// Whether a word is null or an address in the N64's RAM
bool IsNullOrRamAddress(uint32_t value) {
    return value == 0 || (value >= 0x80000000 && value < 0x80800000);
}

// Every actor in the saved heap other than Link: a heap node in use, big enough for an actor, that starts with a
// valid actor id and category, a room, and pointers that all point into RAM
std::vector<ActorState> FindActors(const uint8_t* data, size_t size, size_t start) {
    std::vector<ActorState> found;
    for (size_t pos = std::max(start, ARENA_RECORD_SIZE); pos + N64_ACTOR_SIZE <= size; pos++) {
        const uint8_t* record = data + pos - ARENA_RECORD_SIZE;
        if (ReadU16(record) != 0 || ReadU16(record + 2) != 0 || ReadU32(record + 4) < N64_ACTOR_SIZE) {
            continue;
        }
        const uint8_t* p = data + pos;
        int16_t id = (int16_t)ReadU16(p + ACTOR_ID);
        int8_t room = (int8_t)p[ACTOR_ROOM];
        if (id <= 0 || id >= ACTOR_ID_MAX || p[ACTOR_CATEGORY] >= ACTORCAT_MAX || room < -1 || room > 63) {
            continue;
        }
        bool pointersOk = true;
        for (size_t i = 0; i < ACTOR_LINKS_AND_FUNCS_COUNT && pointersOk; i++) {
            pointersOk = IsNullOrRamAddress(ReadU32(p + ACTOR_LINKS_AND_FUNCS + i * 4));
        }
        // An actor always has an update function, or it would be gone
        if (!pointersOk || ReadU32(p + ACTOR_LINKS_AND_FUNCS + 6 * 4) == 0) {
            continue;
        }
        ActorState actor;
        actor.id = id;
        actor.params = (int16_t)ReadU16(p + ACTOR_PARAMS);
        actor.homePos = ReadVec3f(p + ACTOR_HOME_POS);
        // The whole heap node, for the actor's own fields beyond Actor
        actor.data.assign(p, p + std::min<size_t>(ReadU32(record + 4), size - pos));
        found.push_back(std::move(actor));
        pos += N64_ACTOR_SIZE - 1;
    }
    return found;
}

// The display lists gz saves: its four buffers' sizes in Gfx (work, opaque, translucent, overlay), which the state
// only gives offsets into.
constexpr uint32_t DISP_BUFFER_SIZES[4] = { 0x80, 0x17E0, 0x800, 0x400 };
constexpr size_t GFX_SIZE = 8;

bool IsOpcode(uint8_t b) {
    return b >= 0xD3 || (b >= 0x01 && b <= 0x07);
}

// Where a state would end if its rng were at rngPos, walking what gz writes after the rng (save_state in
// src/gz/state.c, as load_state reads each state version), or SIZE_MAX if what follows doesn't fit there.
size_t TailEnd(const uint8_t* data, size_t size, size_t rngPos, uint16_t stateVersion, bool ique) {
    size_t pos = rngPos + 4;
    if (stateVersion < 0x0004) {
        pos += 4 + 2 + 4 + 4 + 4; // din's fire state, kept apart before version 4
    }
    pos += 4 + 4 + 0x20 + 0x140 + 0x08 + (ique ? 0x18 : 0x28); // farore's wind, camera, cutscene, message state
    if (stateVersion >= 0x0004) {
        pos += 2; // message select state
    }
    if (pos + 2 > size) {
        return SIZE_MAX;
    }
    int16_t displayLists = (int16_t)ReadU16(data + pos);
    pos += 2;
    if (displayLists == 0) {
        if (pos + 32 > size) {
            return SIZE_MAX;
        }
        uint32_t sizes = 0;
        uint32_t used = 0;
        for (int i = 0; i < 4; i++) {
            uint32_t p = ReadU32(data + pos + i * 8);
            uint32_t d = ReadU32(data + pos + i * 8 + 4);
            if (p > d || d > DISP_BUFFER_SIZES[i]) {
                return SIZE_MAX;
            }
            used += p + (DISP_BUFFER_SIZES[i] - d);
            sizes += DISP_BUFFER_SIZES[i];
        }
        // A state is saved mid-frame, so the opaque buffer holds commands, starting with an opcode
        uint32_t opaqueP = ReadU32(data + pos + 8);
        size_t opaque = pos + 32 + GFX_SIZE * (ReadU32(data + pos) + DISP_BUFFER_SIZES[0] - ReadU32(data + pos + 4));
        if (opaqueP == 0 || opaque >= size || !IsOpcode(data[opaque])) {
            return SIZE_MAX;
        }
        pos += 32 + GFX_SIZE * used + 8; // the lists' commands and data, then two frame counters
    } else if (displayLists != -1) {
        return SIZE_MAX;
    }
    pos += 8; // sfx mutes
    if (pos + 1 > size) {
        return SIZE_MAX;
    }
    pos += 1 + 4 * data[pos]; // pending audio commands
    if (stateVersion >= 0x0005) {
        pos += 0xC + 4 + 4 + 4 + 0x54 + 0x60 + 8 + 0x144 + 0x38C + 9 + 0xA; // audio and ocarina data
        pos += stateVersion >= 0x0006 ? 0x44 + 0x18 + 4 + 0x88 : 0x160 + 4 + 0x90;
        pos += (ique ? 0x10 + 4 : 0x1E + 6) + 0x20 + 4 + 1; // message icons, message bss, metronome, frame flag
    } else {
        pos += 0x60 + (stateVersion >= 0x0004 ? 1 : 0) + 1 + 1 + 0xAC + 0x140 + 4; // ocarina and song state
    }
    pos += 0x1E; // staff notes
    return pos;
}

// The rng comes after the actor code, heap and particles, which can only be walked with the ROM in hand. What
// follows it can be walked without, so the rng is found where a walk from it ends exactly at the end of the file.
// That checks dozens of fields; the search runs from the end, as a false match is only ever found earlier.
bool FindRng(const uint8_t* data, size_t size, size_t start, uint16_t stateVersion, bool ique, size_t& out) {
    for (size_t pos = size - 4; pos-- > start;) {
        if (TailEnd(data, size, pos, stateVersion, ique) == size) {
            out = pos;
            return true;
        }
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
    s.stateFrames = ReadU32(play + PLAY_STATE_FRAMES);
    s.gameplayFrames = ReadU32(play + PLAY_GAMEPLAY_FRAMES);
    const uint8_t* cameraPos = play + PLAY_MAIN_CAMERA + CAMERA_PLAYER_POS_ROT;
    s.cameraPlayerPos = ReadVec3f(cameraPos);
    s.cameraPlayerRot = ReadVec3s(cameraPos + 12);
    memcpy(s.mainCamera, play + PLAY_MAIN_CAMERA, N64_CAMERA_SIZE);
    memcpy(s.precipitation, play + PLAY_PRECIPITATION, sizeof(s.precipitation));
    const uint8_t* pause = play + PLAY_PAUSE_CTX;
    s.pause.pageIndex = ReadU16(pause + 0x1E8);
    for (int i = 0; i < 5; i++) {
        s.pause.cursorPoint[i] = (int16_t)ReadU16(pause + 0x218 + i * 2);
        s.pause.cursorX[i] = (int16_t)ReadU16(pause + 0x222 + i * 2);
        s.pause.cursorY[i] = (int16_t)ReadU16(pause + 0x22C + i * 2);
    }
    s.pause.dungeonMapSlot = (int16_t)ReadU16(pause + 0x236);
    s.pause.cursorSpecialPos = (int16_t)ReadU16(pause + 0x238);
    for (int i = 0; i < 4; i++) {
        s.pause.cursorItem[i] = ReadU16(pause + 0x23E + i * 2);
        s.pause.cursorSlot[i] = ReadU16(pause + 0x246 + i * 2);
    }
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
    s.kankyos = FindKankyos(data, size, pos);
    s.actors = FindActors(data, size, pos);
    size_t rngPos;
    s.rngFound = FindRng(data, size, pos, s.stateVersion, s.version == (uint16_t)GzVersion::OotIQueC, rngPos);
    if (s.rngFound) {
        s.rng = ReadU32(data + rngPos);
        // After the rng, din's fire (in older states) and farore's wind, as in TailEnd
        const uint8_t* floor = data + rngPos + 4 + (s.stateVersion < 0x0004 ? 4 + 2 + 4 + 4 + 4 : 0) + 4 + 4;
        s.floorYNear = ReadF32(floor);
        s.floorYFar = ReadF32(floor + 4);
        s.floorFarPos = ReadVec3f(floor + 8);
        s.floorFarNorm = ReadVec3f(floor + 20);
    }

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
