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
  <div class="progress"><div></div></div>
  <div class="frames"></div>
</div>`;

  class SohPlayer extends HTMLElement {
    static active = null;

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

    // Follows the macro's progress. Once it ends, the game pauses on its last frame and offers to replay it.
    watch() {
      clearInterval(this.timer);
      this.bar.classList.remove("show");
      // The macro starts a few frames after it is imported; it has ended once it played and stopped
      let started = false;
      this.timer = setInterval(() => {
        const { macro } = this.runtime.status();
        if (!macro.loaded) return;
        started ||= macro.playing;
        const frame = started ? Math.min(macro.frame, macro.frameCount) : 0;
        this.progress.style.width = (macro.frameCount ? (100 * frame) / macro.frameCount : 0) + "%";
        this.frames.textContent = frame + " / " + macro.frameCount;
        if (started && !macro.playing) {
          clearInterval(this.timer);
          this.runtime.pause();
          this.ended.hidden = false;
          this.bar.classList.add("show");
        }
      }, 250);
    }

    // Another player took the game, or this one left the page; go back to the poster
    deactivate() {
      clearInterval(this.timer);
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
