# Lists every actor overlay's functions in an OoT 1.2 ROM, as offsets from the overlay's start, with its instance size.
# Function starts come from the overlay's relocations: jal targets, addresses built with lui/addiu in code, and
# words in .data that point into .text (action function tables, the actor's init vars). Words in .rodata that point
# into .text are jump tables, inside functions, and are left out.
#
# Usage: actorfuncs.py <OoT 1.2 ROM> <out.json>
import json, os, struct, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from n64 import Rom, overlay_header, code_file, CODE_VRAM

rom = Rom(sys.argv[1])
code = code_file(rom)
ENTRY = 0x20
COUNT = 0x1D7


def entry(off, i):
    return struct.unpack(">IIIIIIIHbx", code[off + i * ENTRY:off + i * ENTRY + ENTRY])


def plausible(off):
    good = 0
    for i in range(COUNT):
        vs, ve, rs, re_, loaded, init, name, alloc, n = entry(off, i)
        if vs == 0 and ve == 0:
            continue
        if not (0 < vs < ve < 0x4000000 and 0x80800000 <= rs < re_ < 0x80C00000 and rs <= init < re_):
            return False
        good += 1
    return good > 300


table = next(off for off in range(0, len(code) - COUNT * ENTRY, 4) if plausible(off))
print(f"actor overlay table at {CODE_VRAM + table:#x}", file=sys.stderr)

result = {}
for actor_id in range(COUNT):
    vs, ve, rs, re_, loaded, init, name, alloc, n = entry(table, actor_id)
    if vs == 0:
        continue
    ovl = rom.file_by_vrom(vs)
    text, data, rodata, bss, relocs = overlay_header(ovl)
    text_end = rs + text
    starts = set()
    hi = {}
    for r in relocs:
        section, kind, off = r >> 30, (r >> 24) & 0x3F, r & 0xFFFFFF
        if section == 1:  # .text
            word = struct.unpack(">I", ovl[off:off + 4])[0]
            if kind == 4:  # R_MIPS_26: jal
                target = (rs & 0xF0000000) | ((word & 0x3FFFFFF) << 2)
                if rs <= target < text_end:
                    starts.add(target)
            elif kind == 5:  # R_MIPS_HI16
                hi[(word >> 16) & 0x1F] = (word & 0xFFFF) << 16
            elif kind == 6:  # R_MIPS_LO16
                base = (word >> 21) & 0x1F
                if base in hi:
                    target = (hi[base] + ((word & 0xFFFF) ^ 0x8000) - 0x8000) & 0xFFFFFFFF
                    if rs <= target < text_end:
                        starts.add(target)
        elif section == 2 and kind == 2:  # .data R_MIPS_32
            target = struct.unpack(">I", ovl[text + off:text + off + 4])[0]
            if rs <= target < text_end:
                starts.add(target)
    starts.add(rs)
    instance_size = struct.unpack(">I", ovl[init - rs + 0x0C:init - rs + 0x10])[0]
    init_funcs = [a - rs if a else None for a in struct.unpack(">IIII", ovl[init - rs + 0x10:init - rs + 0x20])]
    result[actor_id] = {"vram": rs, "functions": sorted(a - rs for a in starts), "instanceSize": instance_size, "initVars": init_funcs}

# Player's code comes in through the kaleido manager instead of the actor overlay table, and its init, update, draw
# and destroy are called from code, so only the functions whose addresses the overlay itself takes are listed
# (those that can be in a function pointer). Its instance size is in its init vars, in code.
name = code.find(b"player_actor\0")
pointer = struct.pack(">I", CODE_VRAM + name)
at = code.find(pointer)
loaded, vs, ve, rs, re_, _, _ = struct.unpack(">IIIIIII", code[at - 0x18:at + 4])
ovl = rom.file_by_vrom(vs)
text, data, rodata, bss, relocs = overlay_header(ovl)
taken = set()
hi = {}
for r in relocs:
    section, kind, off = r >> 30, (r >> 24) & 0x3F, r & 0xFFFFFF
    if section == 1:
        word = struct.unpack(">I", ovl[off:off + 4])[0]
        if kind == 5:
            hi[(word >> 16) & 0x1F] = (word & 0xFFFF) << 16
        elif kind == 6:
            base = (word >> 21) & 0x1F
            if base in hi:
                target = (hi[base] + ((word & 0xFFFF) ^ 0x8000) - 0x8000) & 0xFFFFFFFF
                if rs <= target < rs + text:
                    taken.add(target)
    elif section == 2 and kind == 2:
        target = struct.unpack(">I", ovl[text + off:text + off + 4])[0]
        if rs <= target < rs + text:
            taken.add(target)
player_init = entry(table, 0)[5]
player_size = struct.unpack(">I", code[player_init - CODE_VRAM + 0x0C:player_init - CODE_VRAM + 0x10])[0]
# Addresses that aren't word aligned are arithmetic on a code address, not functions
result[0] = {"vram": rs, "functions": sorted(a - rs for a in taken if a % 4 == 0), "instanceSize": player_size,
             "initVars": [None, None, None, None], "addressTakenOnly": True}

json.dump(result, open(sys.argv[2], "w"))
print(f"{len(result)} actor overlays", file=sys.stderr)
