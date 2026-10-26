// <soh-route>: runs a gz macro from its savestate as fast as the game can, recording where Link is on every frame,
// then shows the scene as it is on the macro's last frame with a red line along Link's route, to look around.
//
//   <script src="soh-route.js"></script>
//   <soh-route savestate="bomb-hover.gzs" macro="bomb-hover.gzm">Bomb hover onto the Fire Temple ledge</soh-route>
//
// savestate and macro are relative to the page. src can instead name a player's file (see soh-player.js), relative
// to the page, for its savestate and macro. poster is an image shown until it runs. The content is the caption.
//
// Dragging turns the view around the route, right-dragging (or shift-dragging, or dragging two fingers) moves it, and
// scrolling (or pinching) zooms. The arrow keys turn it too, + and - zoom, and double-clicking goes back to the first
// view. The Isometric button draws it without perspective, seen from a corner at the isometric angle (it can still be
// turned from there), and again goes back to perspective. Save image downloads the view as it is, drawn again at one
// of a few standard sizes, as a WebP (a PNG where the browser can't make WebP, as in Safari).
//
// route.points is where Link was on each macro frame, [{ frame, scene, room, pos: [x, y, z] }, ...], once it has run;
// the element fires "recorded" then.
//
// The page's one game (see soh-runtime.js) moves to the element that last played, so playing a <soh-player> takes it
// from a route view, which goes back to its poster, and the other way round.

(() => {
  // soh-runtime.js sits next to this script
  const base = new URL(".", document.currentScript.src).href;
  let runtimeScript = null;

  function loadRuntime() {
    runtimeScript ||= new Promise((resolve, reject) => {
      if (window.SohRuntime) return resolve();
      const script = document.createElement("script");
      script.src = base + "soh-runtime.js";
      script.onload = resolve;
      script.onerror = () => reject(new Error("soh-runtime.js failed to load"));
      document.head.append(script);
    });
    return runtimeScript.then(() => SohRuntime.load({ input: false }));
  }

  // The savestate and macro to run, as URLs
  async function loadFiles(element) {
    const src = element.getAttribute("src");
    if (src) {
      const url = new URL(src, document.baseURI);
      const response = await fetch(url);
      if (!response.ok) throw new Error(`could not load ${src} (${response.status})`);
      const data = await response.json();
      if (!data.savestate || !data.macro) throw new Error(src + " needs a savestate and a macro");
      return { savestate: new URL(data.savestate, url).href, macro: new URL(data.macro, url).href };
    }
    const savestate = element.getAttribute("savestate");
    const macro = element.getAttribute("macro");
    if (!savestate || !macro) throw new Error("the route needs a savestate and a macro");
    return { savestate: new URL(savestate, document.baseURI).href, macro: new URL(macro, document.baseURI).href };
  }

  async function fetchBytes(url) {
    const response = await fetch(url);
    if (!response.ok) throw new Error(`could not load ${url} (${response.status})`);
    return new Uint8Array(await response.arrayBuffer());
  }

  const DEGREES = Math.PI / 180;
  // How far up the view looks down at first, and the most it can look up or down
  const START_PITCH = 50 * DEGREES;
  const MAX_PITCH = 89 * DEGREES;
  // The isometric angle: looking down a cube's diagonal, which tilts 35.26° down
  const ISO_PITCH = Math.atan(1 / Math.SQRT2);
  // Closest and furthest from what it looks at, in game units
  const MIN_DISTANCE = 20;
  const MAX_DISTANCE = 20000;

  // The sizes Save image offers, all the shape of the view
  const IMAGE_SIZES = [
    { label: "720p", width: 1280, height: 720 },
    { label: "1080p", width: 1920, height: 1080 },
    { label: "1440p", width: 2560, height: 1440 },
    { label: "4K", width: 3840, height: 2160 },
  ];
  const WEBP_QUALITY = 0.92;

  // Runs the game this long at a time while recording, then lets the page update
  const RUN_SLICE_MS = 40;

  const template = document.createElement("template");
  template.innerHTML = `
<style>
  :host { display: block; max-width: 100%; background: #000; color: #e8e6e1; font: 14px/1.4 system-ui, sans-serif;
          border-radius: 8px; overflow: hidden; }
  .stage { position: relative; aspect-ratio: 16 / 9; }
  .screen { position: absolute; inset: 0; }
  .screen ::slotted(*) { width: 100%; height: 100%; display: block; }
  .look { position: absolute; inset: 0; cursor: grab; touch-action: none; outline: none; }
  .look.dragging { cursor: grabbing; }
  .look:focus-visible { box-shadow: inset 0 0 0 2px #e0b34a; }
  .cover { position: absolute; inset: 0; display: flex; flex-direction: column; align-items: center; justify-content: center;
           gap: 12px; padding: 16px; text-align: center; background: #0d0f12 center / cover no-repeat; }
  .cover[hidden], .look[hidden], .tools[hidden], .note[hidden], .busy[hidden], label.btn[hidden] { display: none; }
  .caption { max-width: 32em; text-shadow: 0 1px 3px #000; }
  .run { display: grid; place-items: center; width: 64px; height: 64px; padding: 0; border-radius: 50%; border: none;
         background: #e0b34acc; color: #1a1406; cursor: pointer; }
  .run:hover { background: #e0b34a; }
  .run svg { display: block; width: 30px; height: 30px; }
  .busy { width: min(280px, 80%); display: flex; flex-direction: column; gap: 8px; font-size: 13px; color: #c9c6be;
          text-shadow: 0 1px 3px #000; }
  .bar { height: 4px; border-radius: 2px; background: #ffffff30; overflow: hidden; }
  .bar div { height: 100%; width: 0; background: #e0b34a; }
  .count { font-variant-numeric: tabular-nums; }
  .note { font-size: 13px; color: #c9c6be; max-width: 30em; text-shadow: 0 1px 3px #000; }
  .note.err { color: #f09080; }
  label.btn, .tools button { font: inherit; font-size: 13px; cursor: pointer; border-radius: 6px; padding: 4px 10px;
                             border: 1px solid #ffffff40; background: #000000a0; color: inherit; }
  .tools button:hover { background: #000000d0; border-color: #ffffff70; }
  .tools button[aria-pressed="true"] { background: #e0b34a; border-color: #e0b34a; color: #1a1406; }
  label.btn input { display: none; }
  .tools { position: absolute; top: 8px; right: 8px; display: flex; gap: 6px; }
  .tools .menu { position: relative; }
  .sizes { position: absolute; right: 0; top: calc(100% + 4px); display: flex; flex-direction: column; min-width: 100%;
           padding: 4px; gap: 2px; border-radius: 6px; background: #000000e0; border: 1px solid #ffffff40; z-index: 1; }
  .sizes[hidden] { display: none; }
  .tools .sizes button { border: none; background: none; text-align: left; white-space: nowrap; }
  .tools .sizes button:hover { background: #ffffff20; }
  .sizes span { color: #9a978f; margin-left: 6px; font-variant-numeric: tabular-nums; }
  .frozen { position: absolute; inset: 0; width: 100%; height: 100%; }
  .frozen[hidden] { display: none; }
  .hint { position: absolute; left: 8px; bottom: 8px; padding: 3px 8px; border-radius: 6px; font-size: 12px;
          background: #000000a0; color: #c9c6be; pointer-events: none; transition: opacity .3s; }
  .hint.faded { opacity: 0; }
  .hint[hidden] { display: none; }
</style>
<div class="stage">
  <div class="screen"><slot name="screen"></slot></div>
  <canvas class="frozen" hidden></canvas>
  <div class="look" tabindex="0" role="img" aria-label="Link's route, in the game. Drag to turn the view, right-drag to move it, scroll to zoom." hidden></div>
  <div class="tools" hidden>
    <button class="iso" title="Draw without perspective, from a corner" aria-pressed="false">Isometric</button>
    <button class="top" title="Look straight down">Top</button>
    <div class="menu">
      <button class="save" title="Download this view as an image" aria-haspopup="true" aria-expanded="false">Save image</button>
      <div class="sizes" role="menu" hidden>${IMAGE_SIZES.map((size, i) => `<button role="menuitem" data-size="${i}">${size.label}<span>${size.width}×${size.height}</span></button>`).join("")}</div>
    </div>
    <button class="reset" title="Back to the first view (or double-click)">Reset view</button>
    <button class="again" title="Run the macro again">Run again</button>
  </div>
  <div class="hint" hidden>Drag to turn · right-drag to move · scroll to zoom</div>
  <div class="cover" part="cover">
    <button class="run" title="Show the route" aria-label="Show the route"><svg viewBox="0 0 24 24"><path fill="currentColor" d="M20.5 3l-.16.03L15 5.1 9 3 3.36 4.9c-.21.07-.36.25-.36.48V20.5c0 .28.22.5.5.5l.16-.03L9 18.9l6 2.1 5.64-1.9c.21-.07.36-.25.36-.48V3.5c0-.28-.22-.5-.5-.5zM15 19l-6-2.11V5l6 2.11V19z"/></svg></button>
    <div class="caption"><slot></slot></div>
    <div class="busy" hidden><div class="status">Running the macro…</div><div class="bar"><div></div></div><div class="count"></div></div>
    <div class="note" hidden></div>
    <label class="btn rom" hidden>Choose ROM…<input type="file" accept=".z64,.n64,.v64,.o2r"></label>
  </div>
</div>`;

  class SohRoute extends HTMLElement {
    constructor() {
      super();
      this.attachShadow({ mode: "open" }).append(template.content.cloneNode(true));
      const $ = (selector) => this.shadowRoot.querySelector(selector);
      this.cover = $(".cover");
      this.runButton = $(".run");
      this.busy = $(".busy");
      this.busyStatus = $(".busy .status");
      this.busyBar = $(".busy .bar div");
      this.busyCount = $(".busy .count");
      this.note = $(".note");
      this.romPicker = $(".rom");
      this.look = $(".look");
      this.tools = $(".tools");
      this.hint = $(".hint");
      this.points = null;
      // What the view orbits, and from where: a direction (yaw), how far up it looks down (pitch), and how far away
      this.camera = null;
      this.firstCamera = null;
      // Whether it draws without perspective
      this.isometric = false;
      this.isoButton = $(".iso");

      this.runButton.addEventListener("click", () => this.run());
      $(".again").addEventListener("click", () => this.run());
      $(".reset").addEventListener("click", () => this.resetView());
      this.isoButton.addEventListener("click", () => this.setIsometric(!this.isometric));
      const save = $(".save");
      const sizes = $(".sizes");
      const showSizes = (shown) => {
        sizes.hidden = !shown;
        save.setAttribute("aria-expanded", String(shown));
      };
      save.addEventListener("click", () => showSizes(sizes.hidden));
      sizes.addEventListener("click", (e) => {
        const item = e.target.closest("[data-size]");
        if (!item) return;
        showSizes(false);
        this.saveImage(IMAGE_SIZES[item.dataset.size]);
      });
      // Clicking anywhere else closes it
      document.addEventListener("pointerdown", (e) => {
        if (!sizes.hidden && !e.composedPath().includes($(".menu"))) showSizes(false);
      });
      this.frozenView = $(".frozen");
      $(".top").addEventListener("click", () => {
        this.camera.pitch = MAX_PITCH;
        this.requestDraw();
      });
      $(".rom input").addEventListener("change", (e) => {
        if (e.target.files[0]) this.useArchive(e.target.files[0]);
        e.target.value = "";
      });
      this.addEventListener("dragover", (e) => e.preventDefault());
      this.addEventListener("drop", (e) => {
        e.preventDefault();
        if (e.dataTransfer.files[0] && !this.romPicker.hidden) this.useArchive(e.dataTransfer.files[0]);
      });
      this.listenToLook();
      // The game draws at the canvas's size, and a resized canvas starts blank, so it draws again
      new ResizeObserver(() => this.requestDraw(2)).observe($(".stage"));
    }

    connectedCallback() {
      const poster = this.getAttribute("poster");
      if (poster) {
        this.cover.style.backgroundImage =
          `linear-gradient(#000000a0, #000000a0), url("${new URL(poster, document.baseURI).href}")`;
      }
    }

    disconnectedCallback() {
      if (this.runtime?.owner !== this) return;
      this.release();
      this.runtime.unclaim(this);
      // The game went with this element, so nothing shows it until something else plays
      this.runtime.pause();
    }

    get owns() {
      return this.runtime?.owner === this;
    }

    setNote(text, kind) {
      this.note.hidden = !text;
      this.note.textContent = text || "";
      this.note.className = "note" + (kind ? " " + kind : "");
    }

    async useArchive(file) {
      this.romPicker.hidden = true;
      try {
        await this.runtime.importArchive(file, (text) => this.setNote(text));
      } catch (err) {
        this.setNote(err.message, "err");
        this.romPicker.hidden = false;
        return;
      }
      this.run();
    }

    // Runs the macro from its savestate to its end without drawing it, noting where Link is on each frame, then
    // freezes the game there to look around
    async run() {
      if (this.running) return;
      this.running = true;
      try {
        await this.record();
      } finally {
        this.running = false;
      }
    }

    async record() {
      this.setNote("Loading the game…");
      try {
        this.runtime = await loadRuntime();
      } catch (err) {
        this.setNote(err.message, "err");
        return;
      }
      const runtime = this.runtime;
      if (!runtime.archives().length) {
        this.setNote("This needs your Ocarina of Time ROM (.z64, .n64 or .v64). It is converted once and kept in this browser.");
        this.romPicker.hidden = false;
        return;
      }
      this.romPicker.hidden = true;

      if (!this.owns) {
        runtime.claim(this);
        // The game renders at the canvas's size, so it moves in before the game starts
        runtime.canvas.slot = "screen";
        this.append(runtime.canvas);
      }
      // Nothing is drawn until it is frozen again
      this.camera = null;
      this.showCover(true);
      this.runButton.hidden = true;
      this.busy.hidden = false;
      this.showProgress(0, 0);
      let finished = false;
      try {
        const files = await loadFiles(this);
        this.macroBytes ||= fetchBytes(files.macro);
        const macro = await this.macroBytes;
        await runtime.start();
        if (!this.owns) return;
        this.setNote(null);
        runtime.setFrozen(false);
        runtime.setView("game");
        runtime.setMarkers([]);
        runtime.setBreakFrame(-1);
        runtime.setMuted(true);
        // The trail notes where Link is on every frame
        runtime.setTrail(true);
        runtime.resume();
        await runtime.playGz({ state: files.savestate, macro, inputDisplay: false, notifications: false });
        runtime.pause();
        runtime.setSkipRender(true);
        finished = await this.runToEnd();
      } catch (err) {
        console.error("Running the route failed", err);
        // Try loading the macro again next time
        this.macroBytes = null;
        if (this.owns) this.setNote("Could not run the macro: " + err.message, "err");
      } finally {
        if (this.owns) runtime.setSkipRender(false);
      }
      if (!finished || !this.owns) {
        this.busy.hidden = true;
        this.runButton.hidden = false;
        return;
      }
      this.freeze();
    }

    // Steps the game until the macro has played and stopped, a slice at a time so the page keeps up. Resolves to
    // whether it got there (not if something else took the game).
    async runToEnd() {
      const runtime = this.runtime;
      let started = false;
      for (let waited = 0; this.owns;) {
        const until = performance.now() + RUN_SLICE_MS;
        let macro;
        do {
          runtime.step();
          macro = runtime.status().macro;
          if (!started && !macro.playing && ++waited > 3000) throw new Error("the macro did not start");
          started ||= macro.playing;
          if (started && !macro.playing) {
            this.showProgress(macro.frameCount, macro.frameCount);
            return true;
          }
        } while (performance.now() < until);
        this.showProgress(started ? macro.frame : 0, macro.frameCount);
        await new Promise((resolve) => setTimeout(resolve));
      }
      return false;
    }

    showProgress(frame, frameCount) {
      this.busyBar.style.width = (frameCount ? (100 * frame) / frameCount : 0) + "%";
      this.busyCount.textContent = frameCount ? `Frame ${frame} of ${frameCount}` : "";
    }

    // Holds the game on the macro's last frame, drawn from the free camera, with the rooms the route went through
    freeze() {
      const runtime = this.runtime;
      const status = runtime.status();
      this.points = runtime.trailPoints();
      const here = this.points.filter((point) => point.scene === status.scene);
      runtime.setFrozen(true, [...new Set(here.map((point) => point.room))]);
      runtime.setView("free");
      this.firstCamera = this.fitCamera(here.length ? here.map((point) => point.pos) : [status.pos], status.camera);
      this.camera = { ...this.firstCamera, target: [...this.firstCamera.target] };
      this.fovy = status.camera?.fovy ?? 60;
      this.showCover(false);
      this.hint.classList.remove("faded");
      this.requestDraw(2);
      this.dispatchEvent(new CustomEvent("recorded", { detail: { points: this.points } }));
    }

    // A view of the whole route: around the middle of it, facing the way the game's camera faced, and far enough
    // away for all of it to fit
    fitCamera(positions, gameCamera) {
      const min = [0, 1, 2].map((axis) => Math.min(...positions.map((p) => p[axis])));
      const max = [0, 1, 2].map((axis) => Math.max(...positions.map((p) => p[axis])));
      const target = min.map((low, axis) => (low + max[axis]) / 2);
      const radius = Math.max(120, ...positions.map((p) => Math.hypot(p[0] - target[0], p[1] - target[1], p[2] - target[2])));
      const fovy = gameCamera?.fovy ?? 60;
      const distance = Math.min(MAX_DISTANCE, (radius / Math.tan((fovy / 2) * DEGREES)) * 1.15);
      let yaw = 0;
      if (gameCamera) {
        const [eye, at] = [gameCamera.eye, gameCamera.at];
        if (Math.hypot(eye[0] - at[0], eye[2] - at[2]) > 0.01) yaw = Math.atan2(eye[0] - at[0], eye[2] - at[2]);
      }
      return { target, yaw, pitch: START_PITCH, distance };
    }

    eye() {
      const { target, yaw, pitch, distance } = this.camera;
      return [
        target[0] + distance * Math.cos(pitch) * Math.sin(yaw),
        target[1] + distance * Math.sin(pitch),
        target[2] + distance * Math.cos(pitch) * Math.cos(yaw),
      ];
    }

    resetView() {
      if (!this.firstCamera) return;
      this.camera = { ...this.firstCamera, target: [...this.firstCamera.target] };
      if (this.isometric) this.isoAngle();
      this.requestDraw();
    }

    setIsometric(on) {
      this.isometric = on;
      this.isoButton.setAttribute("aria-pressed", String(on));
      if (!this.camera) return;
      if (on) this.isoAngle();
      this.requestDraw();
    }

    // Turns the view to the isometric corner nearest the way it faces
    isoAngle() {
      const quarter = Math.PI / 2;
      this.camera.yaw = Math.round((this.camera.yaw - quarter / 2) / quarter) * quarter + quarter / 2;
      this.camera.pitch = ISO_PITCH;
    }

    // How many game units above and below what the view looks at are on screen, at that distance from it. Without
    // perspective it shows the same, so zooming and moving feel the same in both.
    halfHeight() {
      return this.camera.distance * Math.tan((this.fovy / 2) * DEGREES);
    }

    // Draws the frozen frame again from the camera, on the next animation frame, this many times (the game takes
    // a frame to notice the canvas changed size)
    requestDraw(times = 1) {
      this.drawsLeft = Math.max(this.drawsLeft ?? 0, times);
      if (this.drawRequest) return;
      const draw = () => {
        this.drawRequest = 0;
        // Saving an image draws on its own, and asks for a draw once it is done
        if (!this.camera || !this.owns || this.saving) return;
        this.drawFrame();
        if (--this.drawsLeft > 0) this.drawRequest = requestAnimationFrame(draw);
      };
      this.drawRequest = requestAnimationFrame(draw);
    }

    drawFrame() {
      this.runtime.setFreeCamera(this.eye(), this.camera.target, this.isometric ? this.halfHeight() : 0);
      this.runtime.step();
    }

    // Draws the view again at this size and downloads it. The game draws at its canvas's size, so the canvas grows
    // to that size for a moment, under a still of the view so nothing seems to move.
    async saveImage({ width, height }) {
      if (!this.camera || !this.owns || this.saving) return;
      this.saving = true;
      const canvas = this.runtime.canvas;
      const nextFrame = () => new Promise((resolve) => requestAnimationFrame(resolve));
      try {
        // A canvas's picture can only be read right after the game draws it
        this.drawFrame();
        this.frozenView.width = canvas.width;
        this.frozenView.height = canvas.height;
        this.frozenView.getContext("2d").drawImage(canvas, 0, 0);
        this.frozenView.hidden = false;

        // The game sizes itself from the canvas's size on the page, times the screen's pixel ratio, maybe; set
        // it, see what the game made of it, and correct for that once
        let scale = 1 / (window.devicePixelRatio || 1);
        const image = document.createElement("canvas");
        image.width = width;
        image.height = height;
        for (let attempt = 0; attempt < 2; attempt++) {
          canvas.style.width = width * scale + "px";
          canvas.style.height = height * scale + "px";
          let settled = 0;
          for (let i = 0; i < 30 && settled < 2; i++) {
            await nextFrame();
            if (!this.owns) return;
            const before = canvas.width;
            this.drawFrame();
            settled = canvas.width === before ? settled + 1 : 0;
          }
          if (canvas.width === width && canvas.height === height) break;
          scale *= width / canvas.width;
        }
        this.drawFrame();
        image.getContext("2d").drawImage(canvas, 0, 0, width, height);
        let blob = await new Promise((resolve) => image.toBlob(resolve, "image/webp", WEBP_QUALITY));
        if (!blob) throw new Error("the image could not be made");
        const type = blob.type === "image/webp" ? "webp" : "png";
        const link = document.createElement("a");
        link.href = URL.createObjectURL(blob);
        link.download = `${this.imageName()}-${width}x${height}.${type}`;
        document.body.append(link);
        link.click();
        link.remove();
        setTimeout(() => URL.revokeObjectURL(link.href), 10000);
      } catch (err) {
        console.error("Saving the image failed", err);
      } finally {
        canvas.style.width = "";
        canvas.style.height = "";
        this.saving = false;
        if (this.owns && this.camera) {
          // Back at its own size; the still goes once the game has drawn at it again
          this.requestDraw(3);
          setTimeout(() => { this.frozenView.hidden = true; }, 150);
        } else {
          this.frozenView.hidden = true;
        }
      }
    }

    // A name for saved images: the macro's folder or file
    imageName() {
      const from = this.getAttribute("src") || this.getAttribute("macro") || "route";
      const parts = new URL(from, document.baseURI).pathname.split("/").filter(Boolean);
      const file = parts.at(-1)?.replace(/\.[^.]*$/, "") || "route";
      const name = (["route", "macro"].includes(file) && parts.length > 1 ? parts.at(-2) : file);
      return decodeURIComponent(name).replace(/[^\w.-]+/g, "-") + "-route";
    }

    orbit(dx, dy) {
      this.camera.yaw -= dx * 0.008;
      this.camera.pitch = Math.max(-MAX_PITCH, Math.min(MAX_PITCH, this.camera.pitch + dy * 0.008));
      this.requestDraw();
    }

    // Moves what the view looks at across the screen, by pixels
    pan(dx, dy) {
      const { yaw, pitch, target } = this.camera;
      const perPixel = (2 * this.halfHeight()) / Math.max(1, this.look.clientHeight);
      const right = [Math.cos(yaw), 0, -Math.sin(yaw)];
      const up = [-Math.sin(pitch) * Math.sin(yaw), Math.cos(pitch), -Math.sin(pitch) * Math.cos(yaw)];
      for (let axis = 0; axis < 3; axis++) target[axis] += (-right[axis] * dx + up[axis] * dy) * perPixel;
      this.requestDraw();
    }

    zoom(factor) {
      this.camera.distance = Math.max(MIN_DISTANCE, Math.min(MAX_DISTANCE, this.camera.distance * factor));
      this.requestDraw();
    }

    listenToLook() {
      const look = this.look;
      const pointers = new Map();
      let panning = false;
      // The middle of the pointers down and how far apart they are, for two-finger moves and pinches
      const spread = () => {
        const all = [...pointers.values()];
        const x = all.reduce((sum, p) => sum + p.x, 0) / all.length;
        const y = all.reduce((sum, p) => sum + p.y, 0) / all.length;
        return { x, y, size: all.length > 1 ? Math.hypot(all[0].x - all[1].x, all[0].y - all[1].y) : 0 };
      };
      let last = null;
      look.addEventListener("pointerdown", (e) => {
        if (!this.camera) return;
        look.setPointerCapture(e.pointerId);
        pointers.set(e.pointerId, { x: e.clientX, y: e.clientY });
        panning = e.button === 2 || e.button === 1 || e.shiftKey || e.ctrlKey || e.metaKey;
        last = spread();
        look.classList.add("dragging");
        this.hint.classList.add("faded");
      });
      look.addEventListener("pointermove", (e) => {
        if (!pointers.has(e.pointerId)) return;
        pointers.set(e.pointerId, { x: e.clientX, y: e.clientY });
        const now = spread();
        const dx = now.x - last.x;
        const dy = now.y - last.y;
        if (pointers.size > 1) {
          this.pan(dx, dy);
          if (last.size > 0 && now.size > 0) this.zoom(last.size / now.size);
        } else if (panning) {
          this.pan(dx, dy);
        } else {
          this.orbit(dx, dy);
        }
        last = now;
      });
      const up = (e) => {
        pointers.delete(e.pointerId);
        last = pointers.size ? spread() : null;
        if (!pointers.size) look.classList.remove("dragging");
      };
      look.addEventListener("pointerup", up);
      look.addEventListener("pointercancel", up);
      look.addEventListener("contextmenu", (e) => e.preventDefault());
      look.addEventListener("dblclick", () => this.resetView());
      look.addEventListener("wheel", (e) => {
        if (!this.camera) return;
        e.preventDefault();
        const lines = e.deltaMode === 1 ? 16 : e.deltaMode === 2 ? 400 : 1;
        this.zoom(Math.exp(e.deltaY * lines * 0.0015));
        this.hint.classList.add("faded");
      }, { passive: false });
      look.addEventListener("keydown", (e) => {
        if (!this.camera) return;
        const moves = {
          ArrowLeft: () => this.orbit(-20, 0), ArrowRight: () => this.orbit(20, 0),
          ArrowUp: () => this.orbit(0, 15), ArrowDown: () => this.orbit(0, -15),
          "+": () => this.zoom(0.85), "=": () => this.zoom(0.85), "-": () => this.zoom(1 / 0.85),
        };
        if (!moves[e.key]) return;
        e.preventDefault();
        moves[e.key]();
      });
    }

    showCover(shown) {
      this.cover.hidden = !shown;
      this.look.hidden = shown;
      this.tools.hidden = shown;
      this.hint.hidden = shown;
    }

    // For the runtime, when something else takes the game: puts back what this changed, and goes back to the poster
    release() {
      cancelAnimationFrame(this.drawRequest);
      this.drawRequest = 0;
      this.camera = null;
      const runtime = this.runtime;
      runtime.setFrozen(false);
      runtime.setView("game");
      runtime.setSkipRender(false);
      runtime.setTrail(false);
      runtime.stopMacro();
      this.showCover(true);
      this.busy.hidden = true;
      this.runButton.hidden = false;
      this.setNote(null);
    }
  }

  customElements.define("soh-route", SohRoute);
})();
