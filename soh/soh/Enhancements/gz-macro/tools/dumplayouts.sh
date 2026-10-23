#!/bin/bash
# Dumps the record layouts (canonical types) of every actor source file, compiled as the given build compiles it.
# Usage: dumplayouts.sh <build dir> <out dir>
set -e
build=$(cd "$1" && pwd); out="$2"
mkdir -p "$out"
cmds=$(mktemp -d)
ninja -C "$build" -t commands | grep -E "src/overlays/actors/ovl_[^/]+/[^/ ]+\.c" | grep -- " -c /" | split -l 1 -a 4 - "$cmds/c_"
dump_one() {
    line=$(cat "$1")
    file=$(echo "$line" | grep -oE "/[^ ]+/src/overlays/actors/ovl_[^/]+/[^/ ]+\.c" | head -1)
    cmd=$(echo "$line" | sed -E 's/ -o [^ ]+//; s/ -MD -MT [^ ]+ -MF [^ ]+//; s/ -c / /')
    (cd "$2" && eval "$cmd -fsyntax-only -Xclang -fdump-record-layouts-canonical") > "$3/$(basename "$file" .c).txt" 2>/dev/null || true
}
export -f dump_one
ls "$cmds"/c_* | xargs -P 8 -I{} bash -c 'dump_one "$@"' _ {} "$build" "$out"
rm -rf "$cmds"
