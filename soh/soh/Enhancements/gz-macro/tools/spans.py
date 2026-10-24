# Turns clang's canonical record layout dumps of SoH's actor structs into spans of fields with the N64's offsets,
# checked against the instance sizes in the ROM. A span is one field, or one field repeated through an array.
import json, os, re, sys


def header_path(soh_root, header):
    """An actor's header is under src/; Player's is in include/."""
    path = os.path.join(soh_root, "src", header)
    return path if os.path.exists(path) else os.path.join(soh_root, "include", header)

layout_dir, pairs_path, soh_root, out_path = sys.argv[1:5]
pairs = json.load(open(pairs_path))

# Fields SoH added to structs the actors share, as (record, field), and its interpolation counters anywhere
REMOVED = {("Actor", "dbgPad"), ("SkelAnime", "skeletonHeader")}
REMOVED_ANYWHERE = {"epoch"}

LINE = re.compile(r"^\s*(\d+)(?::(\d+)-(\d+))? \|( +)(.*)$")
END = re.compile(r"\[sizeof=(\d+),.*?align=(\d+)")
SCALARS = {"char": 1, "signed char": 1, "unsigned char": 1, "_Bool": 1, "short": 2, "unsigned short": 2,
           "int": 4, "unsigned int": 4, "long": 4, "unsigned long": 4, "float": 4,
           "long long": 8, "unsigned long long": 8, "double": 8}


class Unsupported(Exception):
    pass


def strip_record(t):
    return re.sub(r"^(struct|union) ", "", t).strip()


def parse_blocks(text):
    records = {}
    for block in text.split("*** Dumping AST Record Layout")[1:]:
        root, stack, size = None, [], None
        for line in block.strip("\n").split("\n"):
            m = END.search(line)
            if m:
                size, align = int(m.group(1)), int(m.group(2))
                break
            m = LINE.match(line)
            if not m:
                continue
            offset, bit, indent, rest = int(m.group(1)), m.group(2), len(m.group(4)), m.group(5)
            if root is None:
                root = {"type": rest, "name": "", "offset": offset, "children": [], "indent": indent}
                stack = [root]
                continue
            # An unnamed struct or union member prints its type alone
            if re.match(r"^(struct|union) [^ ]*\(unnamed at [^)]*\)$", rest) or (rest.startswith(("struct ", "union ")) and " " not in rest.split(" ", 1)[1].rsplit(")", 1)[-1].strip() and "(unnamed" in rest and rest.endswith(")")):
                ftype, fname = rest, ""
            else:
                ftype, fname = rest.rsplit(" ", 1)
            node = {"type": ftype, "name": fname, "offset": offset, "children": [], "indent": indent, "bitfield": bit is not None}
            while stack and stack[-1]["indent"] >= indent:
                stack.pop()
            stack[-1]["children"].append(node)
            stack.append(node)
        if root is not None and size is not None:
            records.setdefault(strip_record(root["type"]), (root, size, align))
    return records


def leaf_kind(t):
    t = t.strip()
    if "(*)" in t:
        return 4, "func"
    if t.endswith("*"):
        return 4, "ptr"
    t = re.sub(r"\b(const|volatile)\b", "", t).strip()
    if t.startswith("enum "):
        return 4, "value"
    if t in SCALARS:
        return SCALARS[t], "value"
    raise Unsupported("type " + t)


def array_of(t):
    m = re.match(r"^(.*?)\[(\d+)\]((?:\[\d+\])*)$", t.strip())
    if not m:
        return None
    return m.group(1).strip() + m.group(3), int(m.group(2))


# A span: soh = SoH offset relative to the enclosing record (for checking), n64 offset, size, kind, path (list of
# components, one of which may be "[#]" for the repeated index), count, soh stride, n64 stride
def record_spans(rtype, children, records, rname):
    # A typedef'd union prints by its typedef name, so a union is also known by its members sharing an offset
    is_union = rtype.startswith("union") or (len(children) > 1 and len({c["offset"] for c in children}) == 1)
    spans, offset, size, align = [], 0, 0, 1
    named = [c for c in children if c["name"] or c["children"]]
    for child in children:
        if (rname, child["name"]) in REMOVED or child["name"] in REMOVED_ANYWHERE:
            continue
        if child.get("bitfield"):
            raise Unsupported("bitfield " + child["name"])
        f, s, a = field_spans(child, records)
        if rname == "SkelAnime" and child["name"] == "animation":
            # An asset address on the N64, a resource name in SoH
            f = [dict(sp, kind="anim") for sp in f]
        start = 0 if is_union else (offset + a - 1) // a * a
        prefix = [("." + child["name"]) if child["name"] else ""]
        for sp in f:
            spans.append(dict(sp, soh=sp["soh"] + child["offset"], n64=sp["n64"] + start, path=[p for p in prefix if p] + sp["path"]))
        align = max(align, a)
        if is_union:
            size = max(size, s)
            # Only the first member of a union is restored
            break
        offset = start + s
    if not is_union:
        size = offset
    size = (size + align - 1) // align * align
    return spans, size, align


def field_spans(node, records):
    t = node["type"]
    arr = array_of(t)
    if arr:
        el_type, count = arr
        f, s, a = type_spans(el_type, records)
        soh_stride = soh_size(el_type, records)
        out = []
        if all(sp["count"] == 1 for sp in f):
            for sp in f:
                out.append(dict(sp, path=["[#]"] + sp["path"], count=count, soh_stride=soh_stride, n64_stride=s))
        else:
            for i in range(count):
                for sp in f:
                    out.append(dict(sp, soh=sp["soh"] + i * soh_stride, n64=sp["n64"] + i * s, path=[f"[{i}]"] + sp["path"]))
        return out, s * count, a
    if node["children"]:
        f, s, a = record_spans(t, node["children"], records, strip_record(t))
        return [dict(sp, soh=sp["soh"] - node["offset"]) for sp in f], s, a
    return type_spans(t, records)


def type_spans(t, records):
    arr = array_of(t)
    if arr:
        return field_spans({"type": t, "children": [], "offset": 0}, records)
    name = strip_record(t)
    if name in records:
        root = records[name][0]
        f, s, a = record_spans(root["type"], root["children"], records, name)
        return [dict(sp, soh=sp["soh"] - root["offset"]) for sp in f], s, a
    size, kind = leaf_kind(t)
    return [dict(soh=0, n64=0, size=size, kind=kind, path=[], count=1, soh_stride=0, n64_stride=0)], size, size


def soh_size(t, records):
    arr = array_of(t)
    if arr:
        return soh_size(arr[0], records) * arr[1]
    name = strip_record(t)
    if name in records:
        return records[name][1]
    return leaf_kind(t)[0]


result, stats, problems = {}, {"ok": 0, "trimmed": 0, "size mismatch": 0, "unsupported": 0, "no struct": 0}, []
for actor_id, pair in pairs.items():
    if not pair.get("paired"):
        continue
    d = os.path.join(soh_root, "src/overlays/actors", "ovl_player_actor" if actor_id == "0" else "ovl_" + pair["name"])
    struct_name = dump = header = None
    for f in sorted(os.listdir(d)):
        text = open(os.path.join(d, f)).read()
        if f.endswith(".c"):
            m = re.search(r"ActorInit\s+\w+_InitVars\s*=\s*\{[^}]*?sizeof\((\w+)\)", text, re.S)
            if m:
                struct_name, dump = m.group(1), os.path.join(layout_dir, f[:-2] + ".txt")
    for f in sorted(os.listdir(d)):
        if f.endswith(".h") and struct_name and re.search(r"\}\s*" + struct_name + r"\s*;", open(os.path.join(d, f)).read()):
            header = "overlays/actors/ovl_" + pair["name"] + "/" + f
    if actor_id == "0":
        # Player's init vars are in code, and its struct is shared, in include/
        struct_name, header, dump = "Player", "z64player.h", os.path.join(layout_dir, "z_player.txt")
    if not struct_name or not header or not os.path.exists(dump):
        stats["no struct"] += 1
        continue
    records = parse_blocks(open(dump).read())
    if struct_name not in records:
        stats["no struct"] += 1
        continue
    root = records[struct_name][0]
    children = root["children"]
    try:
        trimmed = 0
        while True:
            spans, n64_size, _ = record_spans(root["type"], children, records, struct_name)
            if n64_size <= pair["instanceSize"] or len(children) <= 1:
                break
            children = children[:-1]
            trimmed += 1
    except Unsupported as e:
        stats["unsupported"] += 1
        problems.append((pair["name"], str(e)))
        continue
    if n64_size != pair["instanceSize"]:
        stats["size mismatch"] += 1
        problems.append((pair["name"], f"n64 {n64_size:#x} rom {pair['instanceSize']:#x}"))
        continue
    # The header's offset comments come from the decomp (the debug ROM's, 0x10 more than retail past Actor). Every
    # commented field has to land where its comment says, and anything trimmed off the end has to be uncommented.
    header_text = open(header_path(soh_root, header)).read()
    body = re.search(r"typedef struct\s*\w*\s*\{(.*?)\}\s*" + struct_name + r"\s*;", header_text, re.S)
    commented = {}
    if body:
        for m in re.finditer(r"/\*\s*0x([0-9A-Fa-f]+)\s*\*/\s*[^;]*?\b(\w+)\s*(?:\[[^\]]*\])*\s*;", body.group(1)):
            commented[m.group(2)] = int(m.group(1), 16)
    starts = {}
    for sp in spans:
        name = sp["path"][0][1:] if sp["path"] else ""
        starts[name] = min(starts.get(name, 1 << 30), sp["n64"])
    bad = [n for n, off in commented.items() if off >= 0x14C and n in starts and starts[n] != off - 0x10]
    bad += [c["name"] for c in root["children"][len(children):] if c["name"] in commented]
    # Comments have typos; an exact size is evidence enough unless fields had to be trimmed to get it
    if bad and trimmed:
        stats["comment mismatch"] = stats.get("comment mismatch", 0) + 1
        problems.append((pair["name"], "comments disagree: " + ", ".join(bad[:4])))
        continue
    stats["trimmed" if trimmed else "ok"] += 1
    base = "." + children[0]["name"]
    own = [sp for sp in spans if sp["path"][:1] != [base]]
    result[actor_id] = {"name": pair["name"], "struct": struct_name, "header": header, "spans": own}
json.dump(result, open(out_path, "w"))
print(stats, "spans", sum(len(v["spans"]) for v in result.values()))
for p in problems: print(p)
