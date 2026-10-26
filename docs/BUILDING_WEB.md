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

`build-web/soh/` then holds the game:

- `soh.js` and `soh.wasm`: the game, and `soh.o2r` copied from the repository root
- `soh-extract.js`, `soh-extract.wasm` and `soh-extract-yml.tar.gz`: the ROM converter, which is
  SoH's own torch extractor built for the browser. It turns a ROM into the same `oot.o2r` the
  desktop version makes, in a few seconds.

## Playing it

The pages and scripts that run the build live in **soh-player**, a JavaScript library with this
repository as a submodule. Its build runs both builds above and puts the game next to its modules:
`<soh-player>` and `<soh-route>` for showing gz macros on a page, the runtime they share, the ROM
converter's worker, and a launcher page that runs the whole game. Its README covers using them.

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
