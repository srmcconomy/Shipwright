# Building for the browser

Ship of Harkinian can be compiled to WebAssembly with Emscripten and played in a browser.
Like [Prelude of Light](https://preludeoflight.com/play/), the build is single threaded, so it
runs on any static web host: no `SharedArrayBuffer` and no cross-origin isolation headers.

## Requirements

- Emscripten 6 or newer (`brew install emscripten`, or the [emsdk](https://emscripten.org/docs/getting_started/downloads.html))
- CMake 3.26+ and Ninja
- A `soh.o2r` from a native build of the same commit, in the repository root. The native
  build writes it there; the browser build can't pack it itself because that needs torch.

## Build

```sh
export EM_CACHE=$HOME/.emscripten_cache        # Homebrew's emscripten cache isn't writable
mkdir -p $EM_CACHE/sysroot/lib/pkgconfig       # works around an emscripten 6.0 port install bug
emcmake cmake -S . -B build-web -G Ninja -DCMAKE_BUILD_TYPE=Release -DUSE_OPENGLES=ON
ninja -C build-web
```

`build-web/soh/` then holds everything to serve:

- `index.html`, `soh.js`, `soh.wasm` and `soh.o2r`: the game
- `rom-convert-worker.js`, `soh-extract.js`, `soh-extract.wasm` and `soh-extract-yml.tar.gz`:
  the ROM converter, which is SoH's own torch extractor built for the browser. It runs in a
  worker and turns a ROM into the same `oot.o2r` the desktop version makes, in a few seconds.

## Run

```sh
python3 -m http.server 8123 --directory build-web/soh
```

Open <http://127.0.0.1:8123/>, choose your Ocarina of Time ROM (`.z64`, `.n64` or `.v64`) or an
`oot.o2r` from the desktop version, and press Play. The converted archive, mods, saves and
settings are kept in the browser's IndexedDB, so you only do this once. "Download saves"
exports the save files.

Files dropped on the page, or chosen with a Browse button in the game (such as in gz Tools),
are copied into the browser's storage under `/ship/dropped` and handed to the game like a
desktop drag-and-drop. Because they are stored, a path the game remembers still loads after a reload.

For local testing you can copy `oot.o2r` next to the page and open
`/?archive=oot.o2r` to skip the file picker. Never host a ROM archive publicly.

## Playing gz macros

The start page takes a gz savestate (`.gzs`) and, optionally, the macro (`.gzm`) recorded from
it, picked with its buttons or dropped anywhere on the page. Play then boots straight into the
savestate and plays the macro: no title screen, file select or save file. The game runs on a
temporary file that is never written to disk.

The page exposes the same through JavaScript, for a site built around the player:

```js
await SohWeb.playGz({ state, macro, speed });  // File, Blob, ArrayBuffer, Uint8Array or URL
SohWeb.status();      // { macro: { playing, frame, frameCount, rngMismatches }, scene, room, pos, ... }
SohWeb.setSpeed(8);   // game updates per browser frame; above 1 fast-forwards without sound
SohWeb.stopMacro();
```

## How it differs from the desktop build

- **ROM conversion runs in a worker** with the page open; the ROM never leaves the browser.
- **No threads.** The audio mixer runs once per frame on the main thread. Resource loading,
  custom-audio decoding and randomizer generation run inline. The thread pool is swapped
  for an inline stand-in (`libultraship/cmake/dependencies/emscripten/BS_thread_pool.hpp`),
  so generating a randomizer seed pauses the game until it finishes.
- **The browser owns the main loop.** `Graph_ThreadEntry` hands `RunFrame` to
  `emscripten_set_main_loop` and runs it at the game's own update rate. Frame interpolation
  is fixed at 20 FPS, because only the last frame drawn before returning to the browser is shown.
- **Networking** (Anchor, Sail, Crowd Control) compiles but can't open raw TCP sockets from a browser.
- **No randomizer.** `SOH_DISABLE_RANDOMIZER` (on by default for this build) makes `IS_RANDO` a
  constant 0 and leaves the randomizer's sources out, halving `soh.wasm`. The randomizer quest is
  hidden on file select, and the few randomizer functions the game still calls answer as if no
  randomizer file is loaded (`soh/soh/Enhancements/randomizer/RandomizerDisabled.cpp`). Story
  cutscene skips give their items directly, without the randomizer's get-item entries.
