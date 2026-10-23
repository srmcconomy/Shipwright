# Writes GzActorTables.c: for each actor whose layout and functions could be matched with an N64 1.2 ROM, the spans of
# its own fields (SoH offset by offsetof, the N64 offset) and its functions (offset in the N64 overlay, SoH function).
import json, os, re, sys

pairs = json.load(open(sys.argv[1]))
spans = json.load(open(sys.argv[2]))
soh_root, out_path = sys.argv[3], sys.argv[4]

ACTION = re.compile(r"^void\s+(\w+)\s*\(\s*[\w\s]+?\*\s*\w+\s*,\s*[\w\s]+?\*\s*\w+\s*\)\s*\{", re.M)
KINDS = {"value": "GZ_SPAN_VALUE", "ptr": "GZ_SPAN_POINTER", "func": "GZ_SPAN_FUNCTION"}


def designator(path, index):
    out = ""
    for p in path:
        out += f"[{index}]" if p == "[#]" else p
    return out.lstrip(".")


out_dir = out_path
os.makedirs(out_dir, exist_ok=True)
for f in os.listdir(out_dir):
    if f.endswith(".c"):
        os.remove(os.path.join(out_dir, f))
GENERATED = ("// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.\n"
             "// Do not edit.\n\n")
entries, externs, total_functions = [], [], 0
for actor_id, info in sorted(spans.items(), key=lambda x: int(x[0])):
    pair = pairs[actor_id]
    d = os.path.join(soh_root, "src/overlays/actors", "ovl_" + pair["name"])
    pointer_pair = set()
    for f in sorted(os.listdir(d)):
        if f.endswith(".c"):
            src = re.sub(r"/\*.*?\*/", "", open(os.path.join(d, f)).read(), flags=re.S)
            pointer_pair.update(m.group(1) for m in ACTION.finditer(src))
    header_text = open(os.path.join(soh_root, "src", info["header"])).read()
    struct, sym = info["struct"], "gGz" + info["struct"]
    lines = [GENERATED + "#include <stddef.h>\n#include \"global.h\"\n#include \"soh/Enhancements/gz-macro/GzActorTables.h\"\n#include \"" + info["header"] + "\"\n"]
    protos = []
    funcs = [f"const GzActorFunction {sym}Functions[] = {{"]
    for offset, name in zip(pair["romFunctions"], pair["sohFunctions"]):
        if name in pointer_pair:
            if not re.search(r"\b" + re.escape(name) + r"\s*\(", header_text):
                # Declared by its call signature alone, which is all a function pointer needs
                protos.append(f"void {name}(void*, void*);")
            funcs.append(f"    {{ {offset:#x}, (void*){name} }},")
            total_functions += 1
        else:
            funcs.append(f"    {{ {offset:#x}, NULL }},")
    funcs.append("};")
    span_lines = [f"const GzActorSpan {sym}Spans[] = {{"]
    for sp in info["spans"]:
        first = f"offsetof({struct}, {designator(sp['path'], 0)})"
        stride = f"offsetof({struct}, {designator(sp['path'], 1)}) - {first}" if sp["count"] > 1 else "0"
        span_lines.append(f"    {{ {first}, {stride}, {sp['n64']:#x}, {sp['n64_stride']:#x}, {sp['count']}, {sp['size']}, {KINDS[sp['kind']]} }},")
    span_lines.append("};")
    lines += protos + [""] + span_lines + [f"const size_t {sym}SpanCount = ARRAY_COUNT({sym}Spans);", ""] + funcs + [f"const size_t {sym}FunctionCount = ARRAY_COUNT({sym}Functions);", ""]
    open(os.path.join(out_dir, f"{pair['name']}.c"), "w").write("\n".join(lines))
    externs.append(f"extern const GzActorSpan {sym}Spans[];\nextern const size_t {sym}SpanCount;\nextern const GzActorFunction {sym}Functions[];\nextern const size_t {sym}FunctionCount;")
    destroy = pair["initNames"][1] if pair.get("initNames") else None
    destroy_index = pair["sohFunctions"].index(destroy) if destroy in pair["sohFunctions"] else -1
    entries.append((pair["enum"], pair["instanceSize"], sym, destroy_index))

with open(os.path.join(out_dir, "GzActorTableIndex.c"), "w") as out:
    out.write(GENERATED + "#include <stddef.h>\n#include \"global.h\"\n#include \"soh/Enhancements/gz-macro/GzActorTables.h\"\n\n")
    out.write("\n".join(externs) + "\n\n")
    out.write("const GzActorTable gGzActorTables[] = {\n")
    for enum, size, sym, destroy_index in entries:
        out.write(f"    {{ {enum}, {size:#x}, {sym}Spans, &{sym}SpanCount, {sym}Functions, &{sym}FunctionCount, {destroy_index} }},\n")
    out.write("};\nconst size_t gGzActorTableCount = ARRAY_COUNT(gGzActorTables);\n")
print(len(entries), "actors,", total_functions, "functions")
