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

- `soh.js`, `soh.wasm` and `soh.o2r`: the game
- `soh-runtime.js`: loads the game into a page and drives it. The pages below are built on it.
- `index.html`: the start page, which runs the game full window
- `soh-player.js` and `player-demo.html`: the embeddable macro player and a page to try it
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

`soh-runtime.js` exposes the same through JavaScript. A page has one game, so
`SohRuntime.load()` always returns the same runtime, loading it the first time; the first call's
options win. The start page also sets it as `window.SohWeb`.

```js
const runtime = await SohRuntime.load({ input: false });  // input: false only watches
someElement.append(runtime.canvas);   // the game renders at the canvas's size
if (!runtime.archives().length) await runtime.importArchive(romFile);
await runtime.start();
await runtime.playGz({ state, macro, speed });  // File, Blob, ArrayBuffer, Uint8Array or URL
runtime.status();      // { macro: { playing, frame, frameCount, rngMismatches }, scene, room, pos, ... }
runtime.setSpeed(2);   // a multiple of the game's speed: 0.5 is half, 2 double; silent away from 1
runtime.stopMacro();
runtime.pause();       // stops running frames while nothing shows the game; resume() continues
```

With `input: false` the game ignores the keyboard, mouse and gamepads, so the page around it
scrolls and types as usual. It hides gamepads from the whole page to do that.

## Embedding macro players

`soh-player.js` defines `<soh-player>`, for pages that show tricks or routes:

```html
<script src="soh-player.js"></script>
<soh-player state="tricks/bomb-hover.gzs" macro="tricks/bomb-hover.gzm" poster="bomb-hover.jpg">
  Bomb hover onto the Fire Temple ledge
</soh-player>
```

`state` is required; `macro`, `poster` (an image), `speed` (0.5, 1, 1.5 or 2) and
`inputs="off"` are optional. The element's content is the caption on its poster. It loads the
game on the first Play, and asks for the visitor's ROM once if the browser has no archive.
Each player has play/pause, next frame, Restart, speed, mute (on to start with) and the macro's
progress. Under the game it shows the macro's controller inputs frame by frame, unless
`inputs="off"`. When the macro ends, it pauses on the last frame and offers to replay it.

All players share the page's one game, so one plays at a time: playing another moves the game
to it and sends the first back to its poster. Removing the playing element pauses the game.
`soh-runtime.js` must sit next to `soh-player.js`.

`player-demo.html` lists players from its URL, one `p` per player:
`player-demo.html?p=state.gzs,macro.gzm,Caption&p=other.gzs,,State only`. Add
`&archive=oot.o2r` to test locally as above.

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
