// Loads the game into the page and drives it: the launcher (index.html) and the macro player
// (soh-player.js) are both built on this. The build has a single game per page, so there is one
// runtime, shared by everything on the page; SohRuntime.load() returns it, loading it the first time.
//
//   const runtime = await SohRuntime.load({ input: false });
//   someElement.append(runtime.canvas);
//   if (!runtime.archives().length) await runtime.importArchive(romFile);
//   await runtime.start();
//   await runtime.playGz({ state: "intro.gzs", macro: "intro.gzm" });

(() => {
  // The game reads and writes everything under /ship, which lives in IndexedDB.
  const HOME = "/ship";
  const ROM_EXTENSIONS = ["z64", "n64", "v64"];

  // soh.js, soh.o2r and the ROM converter sit next to this script, wherever the page is
  const base = new URL(".", document.currentScript.src).href;

  let loading = null;

  function exists(path) {
    try { FS.stat(path); return true; } catch (e) { return false; }
  }

  function syncToDisk() {
    return new Promise((resolve) => FS.syncfs(false, (err) => {
      if (err) console.error("Saving to IndexedDB failed", err);
      resolve();
    }));
  }

  async function bytesOf(src) {
    if (typeof src === "string") {
      const response = await fetch(src);
      if (!response.ok) throw new Error("could not fetch " + src + " (" + response.status + ")");
      return new Uint8Array(await response.arrayBuffer());
    }
    if (src instanceof Blob) return new Uint8Array(await src.arrayBuffer());
    return new Uint8Array(src);
  }

  // Converts a ROM to oot.o2r (or oot-mq.o2r) in a worker, with the game's own extractor.
  // Resolves to the archive's name and bytes.
  function convertRom(rom, onProgress) {
    return new Promise((resolve, reject) => {
      const worker = new Worker(base + "rom-convert-worker.js");
      worker.onmessage = ({ data }) => {
        if (data.type === "progress") {
          onProgress(data.text);
          return;
        }
        worker.terminate();
        if (data.type === "error") reject(new Error(data.message));
        else resolve(data);
      };
      worker.onerror = () => {
        worker.terminate();
        reject(new Error("the converter failed to load"));
      };
      worker.postMessage({ rom }, [rom]);
    });
  }

  const runtime = {
    canvas: null,
    running: false,
    starting: null,

    isRom(file) {
      return ROM_EXTENSIONS.includes(file.name.split(".").pop().toLowerCase());
    },

    // The game archives this browser has, of oot.o2r and oot-mq.o2r
    archives() {
      return ["oot.o2r", "oot-mq.o2r"].filter((f) => exists(HOME + "/" + f));
    },

    mods() {
      return FS.readdir(HOME + "/mods").filter((f) => f !== "." && f !== "..");
    },

    // Stores a game archive for this and later visits, converting a ROM (.z64/.n64/.v64) first.
    // onProgress gets status text while a ROM converts.
    async importArchive(file, onProgress = () => {}) {
      if (this.isRom(file)) {
        onProgress("Reading " + file.name + "…");
        const { name, bytes } = await convertRom(await file.arrayBuffer(), onProgress);
        FS.writeFile(HOME + "/" + name, bytes);
      } else {
        onProgress("Loading " + file.name + "…");
        // The desktop version names Master Quest archives oot-mq.o2r
        const name = /mq/i.test(file.name) ? "oot-mq.o2r" : "oot.o2r";
        FS.writeFile(HOME + "/" + name, await bytesOf(file));
      }
      await syncToDisk();
    },

    async addMods(files) {
      for (const file of files) {
        FS.writeFile(HOME + "/mods/" + file.name, await bytesOf(file));
      }
      await syncToDisk();
    },

    // The save files, as { name, bytes }
    saves() {
      const dir = HOME + "/Save";
      if (!exists(dir)) return [];
      return FS.readdir(dir).filter((f) => f !== "." && f !== "..").map((name) => ({ name, bytes: FS.readFile(dir + "/" + name) }));
    },

    // Deletes everything this browser stores for the game. Reload the page afterwards.
    forgetAll() {
      indexedDB.deleteDatabase(HOME);
    },

    // Starts the game. Needs an archive, and the canvas in the page at the size it should render at.
    start() {
      this.starting ||= (async () => {
        // soh.o2r ships with this build, so always take the copy next to this script
        try {
          FS.writeFile(HOME + "/soh.o2r", await bytesOf(base + "soh.o2r"));
        } catch (err) {
          this.starting = null;
          throw err;
        }

        // Saves and settings are written to the in-memory filesystem; copy them to IndexedDB often
        setInterval(syncToDisk, 5000);
        document.addEventListener("visibilitychange", () => { if (document.hidden) syncToDisk(); });
        window.addEventListener("pagehide", syncToDisk);

        // The game sizes itself on window resizes; tell it when only the canvas changed size,
        // such as when the canvas moves to another player
        new ResizeObserver(() => window.dispatchEvent(new Event("resize"))).observe(this.canvas);

        this.running = true;
        Module.callMain([]);
      })();
      return this.starting;
    },

    // Files dropped on the page, or picked from the game's own Browse buttons, are copied into
    // /ship/dropped and handed to the game like a desktop drag-and-drop (gz macros, savestates...).
    // They live in IndexedDB too, so a path the game remembers still loads after a reload.
    async importFile(file) {
      if (!this.running) return;
      const dir = HOME + "/dropped";
      if (!exists(dir)) FS.mkdir(dir);
      const path = dir + "/" + file.name.replace(/[\\/]/g, "_");
      FS.writeFile(path, await bytesOf(file));
      await syncToDisk();
      Module.ccall("SohWeb_FileDropped", null, ["string"], [path]);
    },

    // Plays a gz macro from its savestate, booting straight into gameplay on a temporary file if no
    // file is loaded. state and macro are File/Blob/ArrayBuffer/Uint8Array or URLs; macro is optional.
    async playGz({ state, macro, speed = 1, inputDisplay = true }) {
      if (!this.running) throw new Error("the game is not running");
      const [stateBytes, macroBytes] = await Promise.all([bytesOf(state), macro ? bytesOf(macro) : null]);
      const dir = HOME + "/player";
      if (!exists(dir)) FS.mkdir(dir);
      FS.writeFile(dir + "/state.gzs", stateBytes);
      if (!Module.ccall("SohWeb_GzLoad", "boolean", ["string"], [dir + "/state.gzs"])) {
        throw new Error("not a valid gz savestate");
      }
      if (macroBytes) {
        FS.writeFile(dir + "/macro.gzm", macroBytes);
        if (!Module.ccall("SohWeb_GzLoad", "boolean", ["string"], [dir + "/macro.gzm"])) {
          throw new Error("not a valid gz macro");
        }
      }
      // The game needs a running game state to boot from, which takes a frame or two after main
      for (let tries = 0; !Module.ccall("SohWeb_GzImport", "boolean", ["boolean"], [!!macroBytes]); tries++) {
        if (tries > 100) throw new Error("the game did not start");
        await new Promise((r) => setTimeout(r, 50));
      }
      this.setSpeed(speed);
      this.setInputDisplay(inputDisplay && !!macroBytes);
    },

    // SoH's Input Viewer, which follows the macro's inputs while one plays
    setInputDisplay(visible) {
      Module.ccall("SohWeb_SetInputDisplay", null, ["boolean"], [visible]);
    },

    // Where the macro and Link are: { macro: { playing, frame, frameCount, ... }, scene, room, pos, ... }
    status() {
      return JSON.parse(Module.ccall("SohWeb_GzStatus", "string", [], []));
    },

    setSpeed(speed) {
      Module.ccall("SohWeb_SetSpeed", null, ["number"], [speed]);
    },

    stopMacro() {
      Module.ccall("SohWeb_GzStop", null, [], []);
    },

    // Stops running frames while nothing shows the game, and picks up again where it was
    paused: false,

    pause() {
      if (!this.running || this.paused) return;
      Module._emscripten_pause_main_loop();
      this.paused = true;
    },

    resume() {
      if (!this.paused) return;
      Module._emscripten_resume_main_loop();
      this.paused = false;
    },
  };

  // Loads the game's code and this browser's stored files, without starting the game.
  //   input: whether the game takes keyboard, mouse and gamepad input (false for a player that only watches)
  //   archiveUrl: for local testing, fetches the game archive from this URL if the browser has none.
  //     Never host a ROM archive publicly.
  function load({ input = true, archiveUrl = null } = {}) {
    loading ||= new Promise((resolve, reject) => {
      const canvas = document.createElement("canvas");
      canvas.className = "soh-canvas";
      canvas.addEventListener("contextmenu", (e) => e.preventDefault());
      if (input) {
        canvas.tabIndex = -1;
      } else {
        canvas.style.pointerEvents = "none";
      }
      runtime.canvas = canvas;

      window.Module = {
        canvas,
        print: (...args) => console.log(...args),
        printErr: (...args) => console.error(...args),
        preRun: [() => {
          // SDL finds its canvas as "#canvas", so point that at ours wherever it is in the page
          specialHTMLTargets["#canvas"] = canvas;
          if (!input) {
            // Keys go to the canvas, which can't be focused, instead of the whole window
            ENV.SDL_EMSCRIPTEN_KEYBOARD_ELEMENT = "#canvas";
            // SDL finds gamepads through navigator.getGamepads(), so a connected one would drive the
            // game. This hides them from the whole page, which only watches.
            navigator.getGamepads = () => [];
          }
          FS.mkdir(HOME);
          FS.mount(IDBFS, { autoPersist: false }, HOME);
          addRunDependency("idbfs");
          FS.syncfs(true, (err) => {
            if (err) console.error("Loading from IndexedDB failed", err);
            if (!exists(HOME + "/mods")) FS.mkdir(HOME + "/mods");
            FS.chdir(HOME);
            removeRunDependency("idbfs");
          });
        }],
        onRuntimeInitialized: async () => {
          try {
            if (archiveUrl && !runtime.archives().length) {
              const name = /mq/i.test(archiveUrl) ? "oot-mq.o2r" : "oot.o2r";
              FS.writeFile(HOME + "/" + name, await bytesOf(archiveUrl));
              await syncToDisk();
            }
          } catch (err) {
            console.error(err);
          }
          window.SohWeb = runtime;
          resolve(runtime);
        },
        onAbort: (what) => alert("The game stopped: " + what),
      };

      const script = document.createElement("script");
      script.src = base + "soh.js";
      script.onerror = () => reject(new Error("soh.js failed to load"));
      document.head.append(script);
    });
    return loading;
  }

  window.SohRuntime = { load };
})();
