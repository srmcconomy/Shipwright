#!/bin/bash
# Regenerates ../actor-tables from an N64 OoT 1.2 ROM and a configured SoH build (whose compile commands are used to
# lay out SoH's actor structs). Run it after changing an actor's struct or functions.
#
#   generate.sh <OoT 1.2 ROM (.z64)> <build dir>
#
# 1. actorfuncs.py: the ROM's actor overlays, each one's functions found from its relocations
# 2. sohfuncs.py:   pairs them with each SoH actor's functions in source order, checked by the actor's init vars
# 3. dumplayouts.sh and spans.py: SoH's actor struct layouts, laid out again the N64's way and checked against the
#                   instance sizes in the ROM
# 4. gentables.py:  writes a table per actor and an index
set -e
here=$(cd "$(dirname "$0")" && pwd)
rom="$1"; build="$2"
soh=$(cd "$here/../../../.." && pwd)
work=$(mktemp -d)
python3 "$here/actorfuncs.py" "$rom" "$work/functions.json"
python3 "$here/sohfuncs.py" "$soh" "$work/functions.json" "$work/pairs.json"
"$here/dumplayouts.sh" "$build" "$work/layouts"
python3 "$here/spans.py" "$work/layouts" "$work/pairs.json" "$soh" "$work/spans.json"
python3 "$here/gentables.py" "$work/pairs.json" "$work/spans.json" "$soh" "$here/../actor-tables"
rm -rf "$work"
