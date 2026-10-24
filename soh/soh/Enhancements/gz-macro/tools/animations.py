# Writes GzAnimations.c: every object animation in N64 OoT 1.2, by object and offset, with the name SoH loads it by.
# A saved actor's animation is a segment address into its object; this turns it back into SoH's.
#
# Usage: animations.py <soh dir> <out.c>
import os, re, sys

soh, out_path = sys.argv[1:3]
objects = {}
for m in re.finditer(r"DEFINE_OBJECT(?:_EMPTY|_UNSET)?\((\w+), (\w+)\)", open(os.path.join(soh, "include/tables/object_table.h")).read()):
    objects[m.group(1)] = m.group(2)

yml_dir = os.path.join(soh, "assets/yml/ntsc_1-2/objects")
entries = []
for f in sorted(os.listdir(yml_dir)):
    name = f[:-4]
    if not f.endswith(".yml") or name not in objects:
        continue
    text = open(os.path.join(yml_dir, f)).read()
    for m in re.finditer(r"^(\w+):\n  type: OOT:ANIMATION\n  offset: (0x[0-9A-Fa-f]+)\n  symbol: (\w+)", text, re.M):
        entries.append((objects[name], int(m.group(2), 16), f"__OTR__objects/{name}/{m.group(3)}"))

with open(out_path, "w") as out:
    out.write("// Generated from SoH's N64 OoT 1.2 asset descriptions, by the gz macro tools. Do not edit.\n\n")
    out.write("#include <stddef.h>\n#include \"global.h\"\n#include \"soh/Enhancements/gz-macro/GzActorTables.h\"\n\n")
    out.write("const GzAnimation gGzAnimations[] = {\n")
    for obj, offset, path in entries:
        out.write(f"    {{ {obj}, {offset:#x}, \"{path}\" }},\n")
    out.write("};\nconst size_t gGzAnimationCount = ARRAY_COUNT(gGzAnimations);\n")
print(len(entries), "animations")
