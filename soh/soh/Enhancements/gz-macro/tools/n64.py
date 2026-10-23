# Helpers for reading an OoT ROM: the DMA table, Yaz0, overlay headers and relocations
import struct


def yaz0(src):
    assert src[:4] == b"Yaz0"
    size = struct.unpack(">I", src[4:8])[0]
    out = bytearray()
    i = 16
    while len(out) < size:
        header = src[i]
        i += 1
        for bit in range(8):
            if len(out) >= size:
                break
            if header & (0x80 >> bit):
                out.append(src[i])
                i += 1
            else:
                b1, b2 = src[i], src[i + 1]
                i += 2
                dist = ((b1 & 0xF) << 8 | b2) + 1
                n = b1 >> 4
                if n == 0:
                    n = src[i] + 0x12
                    i += 1
                else:
                    n += 2
                for _ in range(n):
                    out.append(out[-dist])
    return bytes(out)


class Rom:
    def __init__(self, path):
        self.data = open(path, "rb").read()
        self.dma = self.data.find(struct.pack(">IIII", 0, 0x1060, 0, 0))
        assert self.dma > 0

    def files(self):
        i = 0
        while True:
            vs, ve, ps, pe = struct.unpack(">IIII", self.data[self.dma + i * 16:self.dma + i * 16 + 16])
            if i > 0 and vs == 0 and ve == 0:
                return
            yield vs, ve, ps, pe
            i += 1

    def file_by_vrom(self, vrom):
        for vs, ve, ps, pe in self.files():
            if vs == vrom:
                raw = self.data[ps:pe] if pe else self.data[ps:ps + (ve - vs)]
                return yaz0(raw) if pe else raw
        return None


def overlay_header(ovl):
    """Returns (text, data, rodata, bss sizes, relocations) from the header at the end of an overlay file."""
    off = len(ovl) - struct.unpack(">I", ovl[-4:])[0]
    text, data, rodata, bss, n = struct.unpack(">IIIII", ovl[off:off + 20])
    relocs = struct.unpack(f">{n}I", ovl[off + 20:off + 20 + 4 * n])
    return text, data, rodata, bss, relocs


# Where the code file is in OoT 1.2: its index in the DMA table, and where it is loaded
CODE_DMA_INDEX = 27
CODE_VRAM = 0x800116E0


def code_file(rom):
    for i, (vs, ve, ps, pe) in enumerate(rom.files()):
        if i == CODE_DMA_INDEX:
            raw = rom.data[ps:pe] if pe else rom.data[ps:ps + (ve - vs)]
            return yaz0(raw) if pe else raw
    raise ValueError("no code file")
