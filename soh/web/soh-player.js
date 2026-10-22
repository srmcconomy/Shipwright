// <soh-player>: plays a gz macro from its savestate in the page, for showing tricks and routes.
//
//   <script src="soh-player.js"></script>
//   <soh-player state="tricks/bomb-hover.gzs" macro="tricks/bomb-hover.gzm" poster="bomb-hover.jpg">
//     Bomb hover onto the Fire Temple ledge
//   </soh-player>
//
// Attributes: state (required) and macro are URLs. poster is an image shown until it plays.
// speed is the playback speed: 0.5, 1 (the default), 1.5 or 2. inputs="off" hides the macro's inputs,
// which are shown under the game.
// The element's content is the caption shown before it plays.
//
// When the macro ends, the game pauses on its last frame and the player offers to replay it.
//
// A page has one game (see soh-runtime.js), so one player plays at a time: playing another moves
// the game to it, and this one goes back to its poster. The game is only watched, never controlled.
// The visitor's own ROM is needed once; it is converted and kept in the browser like the launcher's.

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

  const SPEEDS = [0.5, 1, 1.5, 2];

  const PLAY = `<svg viewBox="0 0 24 24"><path fill="currentColor" d="M8 5v14l11-7z"/></svg>`;
  const PAUSE = `<svg viewBox="0 0 24 24"><path fill="currentColor" d="M6 19h4V5H6v14zm8-14v14h4V5h-4z"/></svg>`;
  const SPEAKER = `<svg viewBox="0 0 24 24"><path fill="currentColor" d="M3 9v6h4l5 5V4L7 9H3zm13.5 3c0-1.77-1.02-3.29-2.5-4.03v8.05c1.48-.73 2.5-2.25 2.5-4.02zM14 3.23v2.06c2.89.86 5 3.54 5 6.71s-2.11 5.85-5 6.71v2.06c4.01-.91 7-4.49 7-8.77s-2.99-7.86-7-8.77z"/></svg>`;
  const SPEAKER_OFF = `<svg viewBox="0 0 24 24"><path fill="currentColor" d="M16.5 12c0-1.77-1.02-3.29-2.5-4.03v2.21l2.45 2.45c.03-.2.05-.41.05-.63zm2.5 0c0 .94-.2 1.82-.54 2.64l1.51 1.51C20.63 14.91 21 13.5 21 12c0-4.28-2.99-7.86-7-8.77v2.06c2.89.86 5 3.54 5 6.71zM4.27 3L3 4.27 7.73 9H3v6h4l5 5v-6.73l4.25 4.25c-.67.52-1.42.93-2.25 1.18v2.06c1.38-.31 2.63-.95 3.69-1.81L19.73 21 21 19.73l-9-9L4.27 3zM12 4L9.91 6.09 12 8.18V4z"/></svg>`;

  // The macro's controller under the game: N64 button bits, and where each is drawn
  const BUTTONS = {
    a: 0x8000, b: 0x4000, z: 0x2000, start: 0x1000, dup: 0x0800, ddown: 0x0400, dleft: 0x0200, dright: 0x0100,
    l: 0x0020, r: 0x0010, cup: 0x0008, cdown: 0x0004, cleft: 0x0002, cright: 0x0001,
  };
  const trigger = (name, x) =>
    `<g class="key trigger" data-button="${name}"><rect x="${x}" y="21" width="32" height="22" rx="6"/>` +
    `<text x="${x + 16}" y="36">${name.toUpperCase()}</text></g>`;
  const round = (name, x, y, r, color) =>
    `<circle class="key" data-button="${name}" style="--color: ${color}" cx="${x}" cy="${y}" r="${r}"/>`;
  const dpad = (name, x, y) => `<rect class="key" data-button="${name}" x="${x}" y="${y}" width="11" height="11" rx="2"/>`;
  const CONTROLLER = `
<svg viewBox="0 0 490 64" preserveAspectRatio="xMidYMid meet" aria-hidden="true">
  <circle class="gate" cx="34" cy="32" r="24"/>
  <circle class="stick" cx="34" cy="32" r="6"/>
  <text class="axis" x="68" y="28">X <tspan class="x">0</tspan></text>
  <text class="axis" x="68" y="46">Y <tspan class="y">0</tspan></text>
  ${trigger("l", 124)}${trigger("z", 162)}${trigger("r", 200)}
  ${dpad("dup", 261, 14)}${dpad("ddown", 261, 39)}${dpad("dleft", 248, 26)}${dpad("dright", 274, 26)}
  ${round("start", 314, 32, 8, "#d8433b")}
  ${round("b", 352, 22, 11, "#34a853")}${round("a", 380, 40, 13, "#4061e0")}
  ${round("cup", 446, 14, 8, "#e0b52a")}${round("cdown", 446, 50, 8, "#e0b52a")}
  ${round("cleft", 428, 32, 8, "#e0b52a")}${round("cright", 464, 32, 8, "#e0b52a")}
</svg>`;

  const template = document.createElement("template");
  template.innerHTML = `
<style>
  :host { display: block; max-width: 100%; background: #000; color: #e8e6e1;
          font: 14px/1.4 system-ui, sans-serif; border-radius: 8px; overflow: hidden; }
  .stage { position: relative; aspect-ratio: 4 / 3; }
  .screen { position: absolute; inset: 0; }
  .screen ::slotted(*), .screen canvas { width: 100%; height: 100%; display: block; }
  .cover { position: absolute; inset: 0; display: flex; flex-direction: column; align-items: center; justify-content: center;
           gap: 12px; padding: 16px; text-align: center; background: #0d0f12 center / cover no-repeat; }
  .ended { position: absolute; inset: 0; display: flex; flex-direction: column; align-items: center; justify-content: center;
           gap: 8px; background: #000000a0; text-shadow: 0 1px 3px #000; }
  .cover[hidden], .ended[hidden], .bar[hidden], .note[hidden], .progress[hidden], .frames[hidden] { display: none; }
  .caption { max-width: 32em; text-shadow: 0 1px 3px #000; }
  .play, .replay { width: 64px; height: 64px; border-radius: 50%; border: none; background: #e0b34acc; color: #1a1406; cursor: pointer; }
  .play:hover, .replay:hover { background: #e0b34a; }
  .play svg, .replay svg { width: 28px; height: 28px; }
  .play svg { margin-left: 4px; }
  .note { font-size: 13px; color: #c9c6be; max-width: 30em; text-shadow: 0 1px 3px #000; }
  .note.err { color: #f09080; }
  label.btn, button.small { font: inherit; font-size: 13px; cursor: pointer; border-radius: 6px; padding: 4px 10px;
                            border: 1px solid #ffffff40; background: #00000080; color: inherit; }
  label.btn input { display: none; }
  .icon { padding: 4px 7px; }
  .icon svg { width: 16px; height: 16px; display: block; }
  button.small:disabled { opacity: .4; cursor: default; }
  .bar { position: absolute; left: 0; right: 0; bottom: 0; display: flex; align-items: center; gap: 8px; padding: 6px 8px;
         background: linear-gradient(transparent, #000000c0); opacity: 0; transition: opacity .2s; }
  :host(:hover) .bar, .bar.show { opacity: 1; }
  .progress { flex: 1; height: 4px; border-radius: 2px; background: #ffffff30; overflow: hidden; }
  .progress div { height: 100%; width: 0; background: #e0b34a; }
  .frames { font-size: 12px; font-variant-numeric: tabular-nums; color: #c9c6be; min-width: 7em; text-align: right; }
  .inputs { padding: 6px 8px; background: #111317; border-top: 1px solid #ffffff14; }
  .inputs[hidden] { display: none; }
  .inputs svg { display: block; width: 100%; max-height: 56px; }
  .inputs text { font: 600 13px system-ui, sans-serif; fill: #c9c6be; text-anchor: middle; }
  .inputs .axis { text-anchor: start; font-variant-numeric: tabular-nums; }
  .gate { fill: #ffffff0a; stroke: #ffffff40; stroke-width: 2; }
  .stick { fill: #c9c6be; }
  .key { --color: #c9c6be; fill: transparent; stroke: var(--color); stroke-width: 2; opacity: .45; }
  .key.on { fill: var(--color); opacity: 1; }
  .trigger { fill: none; }
  .trigger rect { fill: transparent; stroke: #c9c6be; stroke-width: 2; }
  .trigger.on rect { fill: #c9c6be; }
  .trigger.on text { fill: #111317; }
  .trigger text { stroke: none; }
</style>
<div class="stage">
<div class="screen"><slot name="screen"></slot></div>
<div class="cover" part="cover">
  <button class="play" title="Play" aria-label="Play"><svg viewBox="0 0 24 24"><path fill="currentColor" d="M7 4v16l13-8z"/></svg></button>
  <div class="caption"><slot></slot></div>
  <div class="note" hidden></div>
  <label class="btn rom" hidden>Choose ROM…<input type="file" accept=".z64,.n64,.v64,.o2r"></label>
</div>
<div class="ended" hidden>
  <button class="replay" title="Replay" aria-label="Replay"><svg viewBox="0 0 24 24"><path fill="currentColor" d="M12 5V1L7 6l5 5V7c3.31 0 6 2.69 6 6s-2.69 6-6 6-6-2.69-6-6H4c0 4.42 3.58 8 8 8s8-3.58 8-8-3.58-8-8-8z"/></svg></button>
  <div>Replay</div>
</div>
<div class="bar" hidden>
  <button class="small icon pause"></button>
  <button class="small icon step" title="Next frame" aria-label="Next frame" disabled><svg viewBox="0 0 24 24"><path fill="currentColor" d="M6 18l8.5-6L6 6v12zM16 6v12h2V6h-2z"/></svg></button>
  <button class="small restart" title="Play again from the start">Restart</button>
  <button class="small speed" title="Playback speed">1×</button>
  <button class="small icon mute"></button>
  <div class="progress"><div></div></div>
  <div class="frames"></div>
</div>
</div>
<div class="inputs">${CONTROLLER}</div>`;

  class SohPlayer extends HTMLElement {
    static active = null;
    // The page's one game is muted or not for every player; players start muted
    static muted = true;

    constructor() {
      super();
      this.attachShadow({ mode: "open" }).append(template.content.cloneNode(true));
      const $ = (selector) => this.shadowRoot.querySelector(selector);
      this.cover = $(".cover");
      this.ended = $(".ended");
      this.note = $(".note");
      this.romPicker = $(".rom");
      this.bar = $(".bar");
      this.speedButton = $(".speed");
      this.muteButton = $(".mute");
      this.pauseButton = $(".pause");
      this.stepButton = $(".step");
      this.progressBar = $(".progress");
      this.progress = $(".progress div");
      this.frames = $(".frames");
      this.inputs = $(".inputs");
      this.stick = $(".stick");
      this.stickX = $(".x");
      this.stickY = $(".y");
      this.keys = [...this.shadowRoot.querySelectorAll("[data-button]")];
      this.speed = Number(this.getAttribute("speed")) || 1;

      $(".play").addEventListener("click", () => this.play());
      $(".restart").addEventListener("click", () => this.play());
      $(".replay").addEventListener("click", () => this.play());
      this.speedButton.addEventListener("click", () => {
        this.speed = SPEEDS[(SPEEDS.indexOf(this.speed) + 1) % SPEEDS.length];
        this.showSpeed();
        this.runtime?.setSpeed(this.speed);
      });
      this.pauseButton.addEventListener("click", () => {
        // Once the macro has ended, playing starts it over
        if (!this.ended.hidden) this.play();
        else this.setPaused(!this.paused);
      });
      this.stepButton.addEventListener("click", () => this.runtime.step());
      this.muteButton.addEventListener("click", () => {
        SohPlayer.muted = !SohPlayer.muted;
        this.runtime?.setMuted(SohPlayer.muted);
        for (const player of document.querySelectorAll("soh-player")) player.showMuted?.();
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
    }

    connectedCallback() {
      const poster = this.getAttribute("poster");
      if (poster) this.cover.style.backgroundImage = `url("${new URL(poster, document.baseURI).href}")`;
      this.showSpeed();
      this.showMuted();
      this.inputs.hidden = !this.getAttribute("macro") || this.getAttribute("inputs") === "off";
    }

    disconnectedCallback() {
      if (SohPlayer.active !== this) return;
      this.deactivate();
      // The game went with this element, so nothing shows it until another player plays
      this.runtime.pause();
    }

    showSpeed() {
      this.speedButton.textContent = this.speed + "×";
    }

    // Pauses or resumes the game, which can then be stepped a frame at a time
    setPaused(paused) {
      this.paused = paused;
      if (paused) this.runtime?.pause();
      else this.runtime?.resume();
      this.pauseButton.innerHTML = paused ? PLAY : PAUSE;
      this.pauseButton.title = paused ? "Play" : "Pause";
      this.pauseButton.setAttribute("aria-label", this.pauseButton.title);
      this.stepButton.disabled = !paused;
      this.bar.classList.toggle("show", paused);
    }

    showMuted() {
      const label = SohPlayer.muted ? "Unmute" : "Mute";
      this.muteButton.innerHTML = SohPlayer.muted ? SPEAKER_OFF : SPEAKER;
      this.muteButton.title = label;
      this.muteButton.setAttribute("aria-label", label);
    }

    // Shows the controller input the macro gave the game this frame
    showInput({ buttons, x, y }) {
      if (this.shownInput && buttons === this.shownInput.buttons && x === this.shownInput.x && y === this.shownInput.y) return;
      this.shownInput = { buttons, x, y };
      for (const key of this.keys) key.classList.toggle("on", (buttons & BUTTONS[key.dataset.button]) !== 0);
      // An N64 stick reaches about 80 either way
      const clamp = (v) => Math.max(-1, Math.min(1, v / 80));
      this.stick.setAttribute("cx", 34 + 18 * clamp(x));
      this.stick.setAttribute("cy", 32 - 18 * clamp(y));
      this.stickX.textContent = x;
      this.stickY.textContent = y;
    }

    setNote(text, kind) {
      this.note.hidden = !text;
      this.note.textContent = text || "";
      this.note.className = "note" + (kind ? " " + kind : "");
    }

    async play() {
      this.setNote("Loading the game…");
      try {
        this.runtime = await loadRuntime();
      } catch (err) {
        this.setNote(err.message, "err");
        return;
      }
      if (!this.runtime.archives().length) {
        this.setNote("This player needs your Ocarina of Time ROM (.z64, .n64 or .v64). It is converted once and kept in this browser.");
        this.romPicker.hidden = false;
        return;
      }
      this.romPicker.hidden = true;

      if (SohPlayer.active !== this) {
        SohPlayer.active?.deactivate();
        SohPlayer.active = this;
        // The game renders at the canvas's size, so it moves in before the game starts
        this.runtime.canvas.slot = "screen";
        this.append(this.runtime.canvas);
      }
      const macro = this.getAttribute("macro");
      try {
        await this.runtime.start();
        this.setPaused(false);
        this.runtime.setMuted(SohPlayer.muted);
        await this.runtime.playGz({
          state: this.getAttribute("state"),
          macro,
          speed: this.speed,
          // The player shows the inputs itself, under the game instead of over it
          inputDisplay: false,
          notifications: false,
        });
      } catch (err) {
        this.setNote("Could not play: " + err.message, "err");
        return;
      }
      this.setNote(null);
      this.cover.hidden = true;
      this.ended.hidden = true;
      this.bar.hidden = false;
      // A savestate alone has no progress; the game's status still holds the last macro played
      this.progressBar.hidden = this.frames.hidden = !macro;
      if (macro) this.watch();
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
      this.play();
    }

    // Follows the macro's progress on every browser frame, so the count keeps up with the game. Once it ends,
    // the game pauses on its last frame and offers to replay it.
    watch() {
      this.unwatch();
      this.bar.classList.remove("show");
      // The macro starts a few frames after it is imported; it has ended once it played and stopped
      let started = false;
      let shown = null;
      this.showInput({ buttons: 0, x: 0, y: 0 });
      const update = () => {
        this.frameRequest = requestAnimationFrame(update);
        const { macro, input } = this.runtime.status();
        if (!macro.loaded) return;
        // Read on the frame the game drew, so the inputs match the picture; it keeps the last one once it ends
        if (input) this.showInput(input);
        started ||= macro.playing;
        const frame = started ? Math.min(macro.frame, macro.frameCount) : 0;
        if (frame !== shown) {
          shown = frame;
          this.progress.style.width = (macro.frameCount ? (100 * frame) / macro.frameCount : 0) + "%";
          this.frames.textContent = frame + " / " + macro.frameCount;
        }
        if (started && !macro.playing) {
          this.unwatch();
          this.setPaused(true);
          this.stepButton.disabled = true;
          this.ended.hidden = false;
        }
      };
      update();
    }

    unwatch() {
      cancelAnimationFrame(this.frameRequest);
    }

    // Another player took the game, or this one left the page; go back to the poster
    deactivate() {
      this.unwatch();
      this.runtime.stopMacro();
      this.bar.hidden = true;
      this.bar.classList.remove("show");
      this.ended.hidden = true;
      this.cover.hidden = false;
      this.paused = false;
      this.showInput({ buttons: 0, x: 0, y: 0 });
      if (SohPlayer.active === this) SohPlayer.active = null;
    }
  }

  customElements.define("soh-player", SohPlayer);
})();
