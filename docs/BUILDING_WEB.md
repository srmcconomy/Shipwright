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
ninja -C build-web soh
```

`build-web/soh/` then holds everything to serve: `index.html`, `soh.js`, `soh.wasm` and `soh.o2r`.

## Run

```sh
python3 -m http.server 8123 --directory build-web/soh
```

Open <http://127.0.0.1:8123/>, choose your `oot.o2r` (or `oot-mq.o2r`), and press Play.
The archive, mods, saves and settings are kept in the browser's IndexedDB, so you only pick
the archive once. "Download saves" exports the save files.

Files dropped on the page, or chosen with a Browse button in the game (such as in gz Tools),
are copied into the browser's storage under `/ship/dropped` and handed to the game like a
desktop drag-and-drop. Because they are stored, a path the game remembers still loads after a reload.

For local testing you can copy `oot.o2r` next to the page and open
`/?archive=oot.o2r` to skip the file picker. Never host a ROM archive publicly.

## How it differs from the desktop build

- **No ROM extraction.** Generate `oot.o2r` with the desktop version first.
- **No threads.** The audio mixer runs once per frame on the main thread. Resource loading,
  custom-audio decoding and randomizer generation run inline. The thread pool is swapped
  for an inline stand-in (`libultraship/cmake/dependencies/emscripten/BS_thread_pool.hpp`),
  so generating a randomizer seed pauses the game until it finishes.
- **The browser owns the main loop.** `Graph_ThreadEntry` hands `RunFrame` to
  `emscripten_set_main_loop` and runs it at the game's own update rate. Frame interpolation
  is fixed at 20 FPS, because only the last frame drawn before returning to the browser is shown.
- **Networking** (Anchor, Sail, Crowd Control) compiles but can't open raw TCP sockets from a browser.
