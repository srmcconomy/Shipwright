# Pairs each actor overlay's functions in the ROM with the functions in SoH's source for that actor, in order.
import json, re, sys, os
soh = sys.argv[1]
rom = json.load(open(sys.argv[2]))
table = open(os.path.join(soh, "include/tables/actor_table.h")).read()
ids = {}
for m in re.finditer(r"/\* (0x[0-9A-Fa-f]+) \*/ DEFINE_ACTOR(?:_INTERNAL)?\((\w+), (\w+),", table):
    ids[int(m.group(1), 16)] = (m.group(2), m.group(3))
func_def = re.compile(r"^(?:static\s+)?(?:inline\s+)?[A-Za-z_][\w\s\*]*?\b([A-Za-z_]\w*)\s*\(([^;{]*)\)\s*\{", re.M)
out = {}
stats = {"match": 0, "mismatch": 0, "missing": 0}
mism = []
for actor_id, info in sorted(rom.items(), key=lambda x: int(x[0])):
    actor_id = int(actor_id)
    if actor_id not in ids:
        stats["missing"] += 1
        continue
    name, enum = ids[actor_id]
    d = os.path.join(soh, "src/overlays/actors", "ovl_player_actor" if actor_id == 0 else "ovl_" + name)
    if not os.path.isdir(d):
        stats["missing"] += 1
        continue
    funcs = []
    init_names = None
    for f in sorted(os.listdir(d)):
        if f.endswith(".c"):
            src = open(os.path.join(d, f)).read()
            # Strip comments so commented-out code doesn't count
            src = re.sub(r"/\*.*?\*/", "", src, flags=re.S)
            src = re.sub(r"//[^\n]*", "", src)
            for m in func_def.finditer(src):
                if m.group(1) not in ("if", "for", "while", "switch", "return", "sizeof") and not m.group(1).endswith("_Reset"):
                    funcs.append(m.group(1))
            iv = re.search(r"ActorInit\s+\w+_InitVars\s*=\s*\{([^}]*)\}", src, re.S)
            if iv:
                names = [x.strip() for x in iv.group(1).split(",")]
                init_names = [re.sub(r"\(ActorFunc\)|\(ActorResetFunc\)", "", n).strip() for n in names[5:9]]
    entry = {"name": name, "enum": enum, "vram": info["vram"], "instanceSize": info["instanceSize"],
             "romFunctions": info["functions"], "sohFunctions": funcs}
    if info.get("addressTakenOnly"):
        # Only the functions whose addresses are taken (their name used without a call), as the ROM's list is
        used = set()
        for f in sorted(os.listdir(d)):
            if f.endswith(".c"):
                src = re.sub(r"//[^\n]*", "", re.sub(r"/\*.*?\*/", "", open(os.path.join(d, f)).read(), flags=re.S))
                used.update(m.group(1) for m in re.finditer(r"\b([A-Za-z_]\w*)\b(?!\s*\()", src))
        funcs = [f for f in funcs if f in used]
        entry["sohFunctions"] = funcs
        init_names = None
    entry["initNames"] = init_names
    ok = len(funcs) == len(info["functions"])
    if ok and init_names:
        for rom_off, soh_name in zip(info["initVars"], init_names):
            if rom_off is None or soh_name in ("NULL", "0"):
                continue
            if rom_off not in info["functions"] or soh_name not in funcs or info["functions"].index(rom_off) != funcs.index(soh_name):
                ok = False
    entry["paired"] = ok
    if ok:
        stats["match"] += 1
    else:
        stats["mismatch"] += 1
        mism.append((name, len(info["functions"]), len(funcs)))
    out[actor_id] = entry
json.dump(out, open(sys.argv[3], "w"), indent=0)
print(stats)
print(mism[:40])
