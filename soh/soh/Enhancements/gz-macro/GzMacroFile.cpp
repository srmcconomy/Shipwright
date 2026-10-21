#include "GzMacroFile.h"

#include <fstream>
#include <iterator>

namespace GzMacro {

namespace {

// Sizes of gz's structs on the N64.
constexpr size_t CONTROLLER_SIZE = 4;
constexpr size_t INPUT_SIZE = 6;
constexpr size_t SEED_SIZE = 12;
constexpr size_t OCARINA_INPUT_SIZE = 8;
constexpr size_t OCARINA_SYNC_SIZE = 8;
constexpr size_t ROOM_LOAD_SIZE = 4;

class Reader {
  public:
    Reader(const uint8_t* data, size_t size) : mData(data), mSize(size) {
    }

    size_t Remaining() const {
        return mSize - mPos;
    }

    bool Has(size_t n) const {
        return Remaining() >= n;
    }

    uint8_t U8() {
        return mData[mPos++];
    }

    uint16_t U16() {
        uint16_t v = (uint16_t)((mData[mPos] << 8) | mData[mPos + 1]);
        mPos += 2;
        return v;
    }

    uint32_t U32() {
        uint32_t v = ((uint32_t)mData[mPos] << 24) | ((uint32_t)mData[mPos + 1] << 16) |
                     ((uint32_t)mData[mPos + 2] << 8) | (uint32_t)mData[mPos + 3];
        mPos += 4;
        return v;
    }

    Controller ReadController() {
        Controller c;
        c.pad = U16();
        c.x = (int8_t)U8();
        c.y = (int8_t)U8();
        return c;
    }

  private:
    const uint8_t* mData;
    size_t mSize;
    size_t mPos = 0;
};

// Checks that count elements of elementSize fit in what is left, without overflowing.
bool Fits(const Reader& r, uint32_t count, size_t elementSize) {
    return count <= r.Remaining() / elementSize;
}

} // namespace

bool ParseMacro(const uint8_t* data, size_t size, MacroFile& out, std::string& error) {
    Reader r(data, size);
    MacroFile m;

    if (!r.Has(8)) {
        error = "file is too small to be a gz macro";
        return false;
    }
    uint32_t inputCount = r.U32();
    uint32_t seedCount = r.U32();
    if (!r.Has(CONTROLLER_SIZE)) {
        error = "unexpected end of file";
        return false;
    }
    m.inputStart = r.ReadController();
    if (!Fits(r, inputCount, INPUT_SIZE)) {
        error = "unexpected end of file in inputs";
        return false;
    }
    m.inputs.resize(inputCount);
    for (Input& in : m.inputs) {
        in.raw = r.ReadController();
        in.padDelta = r.U16();
    }
    if (!Fits(r, seedCount, SEED_SIZE)) {
        error = "unexpected end of file in rng seeds";
        return false;
    }
    m.seeds.resize(seedCount);
    for (Seed& s : m.seeds) {
        s.frame = (int32_t)r.U32();
        s.oldSeed = r.U32();
        s.newSeed = r.U32();
    }

    // Sync info was added in a later gz version, so it is optional.
    if (r.Remaining() > 0) {
        if (!r.Has(12)) {
            error = "unexpected end of file in sync header";
            return false;
        }
        uint32_t ocaInputCount = r.U32();
        uint32_t ocaSyncCount = r.U32();
        uint32_t roomLoadCount = r.U32();

        if (!Fits(r, ocaInputCount, OCARINA_INPUT_SIZE)) {
            error = "unexpected end of file in ocarina inputs";
            return false;
        }
        m.ocarinaInputs.resize(ocaInputCount);
        for (OcarinaInput& oi : m.ocarinaInputs) {
            oi.frame = (int32_t)r.U32();
            oi.pad = r.U16();
            oi.adjustedX = (int8_t)r.U8();
            oi.adjustedY = (int8_t)r.U8();
        }
        if (!Fits(r, ocaSyncCount, OCARINA_SYNC_SIZE)) {
            error = "unexpected end of file in ocarina sync";
            return false;
        }
        m.ocarinaSyncs.resize(ocaSyncCount);
        for (OcarinaSync& os : m.ocarinaSyncs) {
            os.frame = (int32_t)r.U32();
            os.audioFrames = (int32_t)r.U32();
        }
        if (!Fits(r, roomLoadCount, ROOM_LOAD_SIZE)) {
            error = "unexpected end of file in room loads";
            return false;
        }
        m.roomLoads.resize(roomLoadCount);
        for (RoomLoad& rl : m.roomLoads) {
            rl.frame = (int32_t)r.U32();
        }
    }

    // Rerecord info is also optional.
    if (r.Remaining() > 0) {
        if (!r.Has(8)) {
            error = "unexpected end of file in rerecord info";
            return false;
        }
        m.rerecords = (int32_t)r.U32();
        m.lastRecordedFrame = (int32_t)r.U32();
    }

    if (r.Remaining() > 0) {
        error = "unexpected data after end of macro";
        return false;
    }

    out = std::move(m);
    return true;
}

bool LoadMacroFile(const std::string& path, MacroFile& out, std::string& error) {
    std::ifstream stream(path, std::ios::binary);
    if (!stream) {
        error = "could not open " + path;
        return false;
    }
    std::vector<uint8_t> data((std::istreambuf_iterator<char>(stream)), std::istreambuf_iterator<char>());
    return ParseMacro(data.data(), data.size(), out, error);
}

} // namespace GzMacro
