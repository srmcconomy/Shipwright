// <soh-player>: plays a gz macro from its savestate in the page, for showing tricks and routes.
//
//   <script src="soh-player.js"></script>
//   <soh-player state="tricks/bomb-hover.gzs" macro="tricks/bomb-hover.gzm" poster="bomb-hover.jpg">
//     Bomb hover onto the Fire Temple ledge
//   </soh-player>
//
// Attributes: state (required) and macro are URLs. poster is an image shown until it plays.
// speed is the playback speed: 0.5, 1 (the default), 1.5 or 2. inputs="off" hides the Input Viewer.
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

  const SPEAKER = `<svg viewBox="0 0 24 24"><path fill="currentColor" d="M3 9v6h4l5 5V4L7 9H3zm13.5 3c0-1.77-1.02-3.29-2.5-4.03v8.05c1.48-.73 2.5-2.25 2.5-4.02zM14 3.23v2.06c2.89.86 5 3.54 5 6.71s-2.11 5.85-5 6.71v2.06c4.01-.91 7-4.49 7-8.77s-2.99-7.86-7-8.77z"/></svg>`;
  const SPEAKER_OFF = `<svg viewBox="0 0 24 24"><path fill="currentColor" d="M16.5 12c0-1.77-1.02-3.29-2.5-4.03v2.21l2.45 2.45c.03-.2.05-.41.05-.63zm2.5 0c0 .94-.2 1.82-.54 2.64l1.51 1.51C20.63 14.91 21 13.5 21 12c0-4.28-2.99-7.86-7-8.77v2.06c2.89.86 5 3.54 5 6.71zM4.27 3L3 4.27 7.73 9H3v6h4l5 5v-6.73l4.25 4.25c-.67.52-1.42.93-2.25 1.18v2.06c1.38-.31 2.63-.95 3.69-1.81L19.73 21 21 19.73l-9-9L4.27 3zM12 4L9.91 6.09 12 8.18V4z"/></svg>`;

  const template = document.createElement("template");
  template.innerHTML = `
<style>
  :host { display: block; position: relative; aspect-ratio: 4 / 3; max-width: 100%; background: #000; color: #e8e6e1;
          font: 14px/1.4 system-ui, sans-serif; border-radius: 8px; overflow: hidden; }
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
  .mute { padding: 4px 7px; }
  .mute svg { width: 16px; height: 16px; display: block; }
  .bar { position: absolute; left: 0; right: 0; bottom: 0; display: flex; align-items: center; gap: 8px; padding: 6px 8px;
         background: linear-gradient(transparent, #000000c0); opacity: 0; transition: opacity .2s; }
  :host(:hover) .bar, .bar.show { opacity: 1; }
  .progress { flex: 1; height: 4px; border-radius: 2px; background: #ffffff30; overflow: hidden; }
  .progress div { height: 100%; width: 0; background: #e0b34a; }
  .frames { font-size: 12px; font-variant-numeric: tabular-nums; color: #c9c6be; min-width: 7em; text-align: right; }
</style>
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
  <button class="small restart" title="Play again from the start">Restart</button>
  <button class="small speed" title="Playback speed">1×</button>
  <button class="small mute"></button>
  <div class="progress"><div></div></div>
  <div class="frames"></div>
</div>`;

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
      this.progressBar = $(".progress");
      this.progress = $(".progress div");
      this.frames = $(".frames");
      this.speed = Number(this.getAttribute("speed")) || 1;

      $(".play").addEventListener("click", () => this.play());
      $(".restart").addEventListener("click", () => this.play());
      $(".replay").addEventListener("click", () => this.play());
      this.speedButton.addEventListener("click", () => {
        this.speed = SPEEDS[(SPEEDS.indexOf(this.speed) + 1) % SPEEDS.length];
        this.showSpeed();
        this.runtime?.setSpeed(this.speed);
      });
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

    showMuted() {
      const label = SohPlayer.muted ? "Unmute" : "Mute";
      this.muteButton.innerHTML = SohPlayer.muted ? SPEAKER_OFF : SPEAKER;
      this.muteButton.title = label;
      this.muteButton.setAttribute("aria-label", label);
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
        this.runtime.resume();
        this.runtime.setMuted(SohPlayer.muted);
        await this.runtime.playGz({
          state: this.getAttribute("state"),
          macro,
          speed: this.speed,
          inputDisplay: this.getAttribute("inputs") !== "off",
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
      const update = () => {
        this.frameRequest = requestAnimationFrame(update);
        const { macro } = this.runtime.status();
        if (!macro.loaded) return;
        started ||= macro.playing;
        const frame = started ? Math.min(macro.frame, macro.frameCount) : 0;
        if (frame !== shown) {
          shown = frame;
          this.progress.style.width = (macro.frameCount ? (100 * frame) / macro.frameCount : 0) + "%";
          this.frames.textContent = frame + " / " + macro.frameCount;
        }
        if (started && !macro.playing) {
          this.unwatch();
          this.runtime.pause();
          this.ended.hidden = false;
          this.bar.classList.add("show");
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
      if (SohPlayer.active === this) SohPlayer.active = null;
    }
  }

  customElements.define("soh-player", SohPlayer);
})();
