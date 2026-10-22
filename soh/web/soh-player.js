// <soh-player>: plays a gz macro from its savestate in the page, for showing tricks and routes.
//
//   <script src="soh-player.js"></script>
//   <soh-player src="tricks/bomb-hover.json" poster="bomb-hover.jpg">
//     Bomb hover onto the Fire Temple ledge
//   </soh-player>
//
// src (required) is a JSON file describing what to play, with paths relative to it:
//
//   {
//     "savestate": "bomb-hover.gzs",
//     "macro": "bomb-hover.gzm",
//     "speeds": [{ "frame": 120, "speed": 0.5 }, { "frame": 200, "speed": 1 }],
//     "pauses": [{ "frame": 150, "seconds": 2 }],
//     "annotations": [{ "frame": 120, "until": 200, "text": "Z-target the wall..." }]
//   }
//
// macro and the lists are optional. Frames are the macro's, as the player counts them. A speed holds from its
// frame on. A pause stops on its frame for that long, then plays on. An annotation shows beside the game from
// its frame until "until", or until the next annotation starts.
//
// poster is an image shown until it plays. speed is the playback speed, 0.5, 1 (the default), 1.5 or 2, which
// multiplies the file's speeds. inputs="off" hides the macro's inputs, which are shown beside the game.
// The element's content is the caption shown before it plays.
//
// Clicking or dragging along the progress bar goes to that frame. When the macro ends, the game pauses on its last
// frame and the player offers to replay it.
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

  // The controller inputs in a gz macro (.gzm), one per frame. gz writes it as big-endian N64 structs: the input
  // and rng seed counts, the controller at the start, then 6 bytes an input (buttons, stick x and y, and
  // within-frame presses, which aren't shown).
  function macroInputs(bytes) {
    const view = new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);
    const count = view.getUint32(0);
    if (bytes.byteLength < 12 + count * 6) throw new Error("not a valid gz macro");
    return Array.from({ length: count }, (_, i) => ({
      buttons: view.getUint16(12 + i * 6),
      x: view.getInt8(14 + i * 6),
      y: view.getInt8(15 + i * 6),
    }));
  }

  async function fetchBytes(url) {
    const response = await fetch(url);
    if (!response.ok) throw new Error(`could not load ${url} (${response.status})`);
    return new Uint8Array(await response.arrayBuffer());
  }

  const NO_INPUT = { buttons: 0, x: 0, y: 0 };

  // Reads a player's JSON file, resolving its paths against it and putting its lists in frame order
  async function loadTimeline(src) {
    const url = new URL(src, document.baseURI);
    const response = await fetch(url);
    if (!response.ok) throw new Error(`could not load ${src} (${response.status})`);
    const data = await response.json();
    if (!data.savestate) throw new Error(src + " names no savestate");
    const byFrame = (list) => (Array.isArray(list) ? [...list] : []).sort((a, b) => a.frame - b.frame);
    const annotations = byFrame(data.annotations);
    return {
      savestate: new URL(data.savestate, url).href,
      macro: data.macro ? new URL(data.macro, url).href : null,
      speeds: byFrame(data.speeds),
      pauses: byFrame(data.pauses),
      annotations: annotations.map((note, i) => ({
        frame: note.frame,
        until: note.until ?? annotations[i + 1]?.frame ?? Infinity,
        text: String(note.text ?? ""),
      })),
    };
  }

  const PLAY = `<svg viewBox="0 0 24 24"><path fill="currentColor" d="M8 5v14l11-7z"/></svg>`;
  const PAUSE = `<svg viewBox="0 0 24 24"><path fill="currentColor" d="M6 19h4V5H6v14zm8-14v14h4V5h-4z"/></svg>`;
  const SPEAKER = `<svg viewBox="0 0 24 24"><path fill="currentColor" d="M3 9v6h4l5 5V4L7 9H3zm13.5 3c0-1.77-1.02-3.29-2.5-4.03v8.05c1.48-.73 2.5-2.25 2.5-4.02zM14 3.23v2.06c2.89.86 5 3.54 5 6.71s-2.11 5.85-5 6.71v2.06c4.01-.91 7-4.49 7-8.77s-2.99-7.86-7-8.77z"/></svg>`;
  const SPEAKER_OFF = `<svg viewBox="0 0 24 24"><path fill="currentColor" d="M16.5 12c0-1.77-1.02-3.29-2.5-4.03v2.21l2.45 2.45c.03-.2.05-.41.05-.63zm2.5 0c0 .94-.2 1.82-.54 2.64l1.51 1.51C20.63 14.91 21 13.5 21 12c0-4.28-2.99-7.86-7-8.77v2.06c2.89.86 5 3.54 5 6.71zM4.27 3L3 4.27 7.73 9H3v6h4l5 5v-6.73l4.25 4.25c-.67.52-1.42.93-2.25 1.18v2.06c1.38-.31 2.63-.95 3.69-1.81L19.73 21 21 19.73l-9-9L4.27 3zM12 4L9.91 6.09 12 8.18V4z"/></svg>`;

  // The macro's controller under the game: N64 button bits, and where each is drawn
  const BUTTONS = {
    a: 0x8000, b: 0x4000, z: 0x2000, start: 0x1000, r: 0x0010, cup: 0x0008, cdown: 0x0004, cleft: 0x0002, cright: 0x0001,
  };
  const trigger = (name, x, y) =>
    `<g class="key trigger" data-button="${name}"><rect x="${x}" y="${y}" width="32" height="22" rx="6"/>` +
    `<text x="${x + 16}" y="${y + 15}">${name.toUpperCase()}</text></g>`;
  const round = (name, x, y, r, color) =>
    `<circle class="key" data-button="${name}" style="--color: ${color}" cx="${x}" cy="${y}" r="${r}"/>`;
  // Where the stick's gate is drawn; the stick moves around it
  const STICK = { x: 18, y: 72, reach: 11 };
  const CONTROLLER = `
<svg viewBox="0 0 160 92" preserveAspectRatio="xMidYMid meet" aria-hidden="true">
  ${round("start", 10, 24, 7, "#d8433b")}
  ${round("b", 49, 15, 11, "#34a853")}${round("a", 74, 33, 11, "#4061e0")}
  ${round("cup", 128, 8, 7, "#e0b52a")}${round("cdown", 128, 40, 7, "#e0b52a")}
  ${round("cleft", 112, 24, 7, "#e0b52a")}${round("cright", 144, 24, 7, "#e0b52a")}
  <circle class="gate" cx="${STICK.x}" cy="${STICK.y}" r="16"/>
  <circle class="stick" cx="${STICK.x}" cy="${STICK.y}" r="4"/>
  <text class="axis" x="40" y="69">X <tspan class="x">0</tspan></text>
  <text class="axis" x="40" y="83">Y <tspan class="y">0</tspan></text>
  ${trigger("z", 86, 61)}${trigger("r", 124, 61)}
</svg>`;

  const template = document.createElement("template");
  template.innerHTML = `
<style>
  :host { --shade: #000000a0; display: block; max-width: 100%; background: #000; color: #e8e6e1;
          font: 14px/1.4 system-ui, sans-serif; border-radius: 8px; overflow: hidden; container-type: inline-size; }
  .layout { display: grid; grid-template-columns: minmax(0, 1fr); }
  .layout.with-side { grid-template-columns: minmax(0, 1fr) minmax(0, 3fr); }
  /* The macro's inputs above the notes, beside the game: as tall as it and no taller, so long notes scroll */
  .side { contain: size; display: flex; flex-direction: column; background: #111317; border-right: 1px solid #ffffff14; }
  .side[hidden], .inputs[hidden], .notes[hidden] { display: none; }
  .inputs { padding: 10px 12px; }
  .inputs svg { display: block; width: 100%; max-width: 200px; margin: 0 auto; }
  .notes { flex: 1; min-height: 0; padding: 12px 14px; overflow-y: auto; }
  .inputs:not([hidden]) + .notes { border-top: 1px solid #ffffff14; }
  .notes-label { font-size: 11px; font-weight: 600; letter-spacing: .06em; text-transform: uppercase; color: #9a9890; }
  .notes p { margin: 8px 0 0; white-space: pre-line; animation: appear .2s; }
  @keyframes appear { from { opacity: 0; } }
  /* Too narrow for them beside the game: they go under it, side by side */
  @container (max-width: 560px) {
    .layout.with-side { grid-template-columns: minmax(0, 1fr); }
    .side { contain: none; order: 1; flex-direction: row; border-right: none; border-top: 1px solid #ffffff14; }
    .inputs { flex: none; width: 140px; }
    .notes { min-height: 4.5em; }
    .inputs:not([hidden]) + .notes { border-top: none; border-left: 1px solid #ffffff14; }
  }
  .stage { position: relative; aspect-ratio: 4 / 3; }
  .screen { position: absolute; inset: 0; }
  .screen ::slotted(*), .screen canvas { width: 100%; height: 100%; display: block; }
  .cover { position: absolute; inset: 0; display: flex; flex-direction: column; align-items: center; justify-content: center;
           gap: 12px; padding: 16px; text-align: center; background: #0d0f12 center / cover no-repeat; }
  .ended { position: absolute; inset: 0; display: flex; flex-direction: column; align-items: center; justify-content: center;
           gap: 8px; background: var(--shade); text-shadow: 0 1px 3px #000; }
  .cover[hidden], .ended[hidden], .bar[hidden], .note[hidden], .seek[hidden], .frames[hidden] { display: none; }
  .caption { max-width: 32em; text-shadow: 0 1px 3px #000; }
  .play, .replay { display: grid; place-items: center; width: 64px; height: 64px; padding: 0; border-radius: 50%; border: none;
                   background: #e0b34acc; color: #1a1406; cursor: pointer; }
  .play:hover, .replay:hover { background: #e0b34a; }
  .play svg, .replay svg { display: block; width: 28px; height: 28px; }
  .note { font-size: 13px; color: #c9c6be; max-width: 30em; text-shadow: 0 1px 3px #000; }
  .note.err { color: #f09080; }
  label.btn, button.small { font: inherit; font-size: 13px; cursor: pointer; border-radius: 6px; padding: 4px 10px;
                            border: 1px solid #ffffff40; background: #00000080; color: inherit; }
  label.btn input { display: none; }
  /* The bar's buttons are all the same square */
  .bar button.small { display: grid; place-items: center; width: 26px; height: 26px; padding: 0; }
  .speed { font-size: 10px; letter-spacing: -.02em; }
  .icon svg { width: 16px; height: 16px; display: block; }
  button.small:disabled { opacity: .4; cursor: default; }
  .bar { position: absolute; left: 0; right: 0; bottom: 0; display: flex; align-items: center; gap: 4px; padding: 6px;
         background: linear-gradient(transparent, #000000c0); opacity: 0; transition: opacity .2s; }
  :host(:hover) .bar, .bar.show, .bar.menu-open { opacity: 1; }
  .menu-wrap { position: relative; }
  .menu { position: absolute; left: 0; bottom: calc(100% + 6px); display: flex; flex-direction: column; padding: 4px;
          min-width: 72px; border-radius: 8px; border: 1px solid #ffffff30; background: #15181dee; white-space: nowrap; }
  .more-menu .menu { left: auto; right: 0; }
  .menu[hidden], .menu [hidden] { display: none; }
  .menu button, .menu a { font: inherit; font-size: 13px; text-align: left; padding: 4px 8px; border: none; border-radius: 5px;
                          background: none; color: inherit; text-decoration: none; cursor: pointer; }
  .menu button:hover, .menu button:focus-visible, .menu a:hover, .menu a:focus-visible { background: #ffffff1a; outline: none; }
  .menu button[aria-checked="true"] { color: #e0b34a; }
  .menu button[aria-checked="true"]::after { content: " ✓"; }
  /* The progress bar, with room around it to click or drag to a frame */
  .seek { position: relative; flex: 1; padding: 8px 0; cursor: pointer; touch-action: none; }
  .seek-tip { position: absolute; bottom: calc(100% + 2px); transform: translateX(-50%); padding: 2px 6px; border-radius: 4px;
              background: #15181dee; border: 1px solid #ffffff30; font-size: 12px; font-variant-numeric: tabular-nums;
              white-space: nowrap; pointer-events: none; }
  .seek-tip[hidden] { display: none; }
  .progress { height: 4px; border-radius: 2px; background: #ffffff30; overflow: hidden; }
  .seek:hover .progress { height: 6px; margin: -1px 0; }
  .progress div { height: 100%; width: 0; background: #e0b34a; }
  .frames { font-size: 12px; font-variant-numeric: tabular-nums; color: #c9c6be; white-space: pre; }
  .inputs text { font: 600 13px system-ui, sans-serif; fill: #c9c6be; text-anchor: middle; }
  .inputs .axis { text-anchor: start; font-size: 11px; font-variant-numeric: tabular-nums; }
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
<div class="layout">
<aside class="side" hidden>
  <div class="inputs" hidden>${CONTROLLER}</div>
  <div class="notes" hidden><div class="notes-label">Notes</div><div class="notes-text" aria-live="polite"></div></div>
</aside>
<div class="game">
<div class="stage">
<div class="screen"><slot name="screen"></slot></div>
<div class="cover" part="cover">
  <button class="play" title="Play" aria-label="Play"><svg viewBox="0 0 24 24"><path fill="currentColor" d="M7 4v16l13-8z"/></svg></button>
  <div class="caption"><slot></slot></div>
  <div class="note" hidden></div>
  <label class="btn rom" hidden>Choose ROM…<input type="file" accept=".z64,.n64,.v64,.o2r"></label>
</div>
<div class="ended" hidden>
  <button class="replay" title="Replay" aria-label="Replay"><svg viewBox="0 0 24 24"><path fill="currentColor" transform="translate(0 1)" d="M12 5V1L7 6l5 5V7c3.31 0 6 2.69 6 6s-2.69 6-6 6-6-2.69-6-6H4c0 4.42 3.58 8 8 8s8-3.58 8-8-3.58-8-8-8z"/></svg></button>
  <div>Replay</div>
</div>
<div class="bar" hidden>
  <button class="small icon pause"></button>
  <button class="small icon step" title="Next frame" aria-label="Next frame" disabled><svg viewBox="0 0 24 24"><path fill="currentColor" d="M6 18l8.5-6L6 6v12zM16 6v12h2V6h-2z"/></svg></button>
  <button class="small icon restart" title="Play again from the start" aria-label="Play again from the start"><svg viewBox="0 0 24 24"><path fill="currentColor" d="M12 5V2L8 6l4 4V7c3.31 0 6 2.69 6 6 0 2.97-2.17 5.43-5 5.91v2.02c3.95-.49 7-3.85 7-7.93 0-4.42-3.58-8-8-8zm-6 8c0-1.65.67-3.15 1.76-4.24L6.34 7.34C4.9 8.79 4 10.79 4 13c0 4.08 3.05 7.44 7 7.93v-2.02c-2.83-.48-5-2.94-5-5.91z"/></svg></button>
  <div class="menu-wrap speed-menu">
    <button class="small speed" title="Playback speed" aria-haspopup="menu" aria-expanded="false">1×</button>
    <div class="menu" role="menu" hidden>
      ${SPEEDS.map((speed) => `<button role="menuitemradio" data-speed="${speed}">${speed}×</button>`).join("")}
    </div>
  </div>
  <button class="small icon mute"></button>
  <div class="seek"><div class="progress"><div></div></div><div class="seek-tip" hidden></div></div>
  <div class="frames"></div>
  <div class="menu-wrap more-menu">
    <button class="small icon more" title="More" aria-label="More" aria-haspopup="menu" aria-expanded="false"><svg viewBox="0 0 24 24"><path fill="currentColor" d="M12 8c1.1 0 2-.9 2-2s-.9-2-2-2-2 .9-2 2 .9 2 2 2zm0 2c-1.1 0-2 .9-2 2s.9 2 2 2 2-.9 2-2-.9-2-2-2zm0 6c-1.1 0-2 .9-2 2s.9 2 2 2 2-.9 2-2-.9-2-2-2z"/></svg></button>
    <div class="menu" role="menu" hidden>
      <a role="menuitem" class="download-macro" download>Download macro</a>
      <a role="menuitem" class="download-state" download>Download savestate</a>
    </div>
  </div>
</div>
</div>
</div>
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
      this.speedMenu = $(".speed-menu .menu");
      this.moreMenu = $(".more-menu .menu");
      this.muteButton = $(".mute");
      this.pauseButton = $(".pause");
      this.stepButton = $(".step");
      this.seekBar = $(".seek");
      this.progress = $(".progress div");
      this.frames = $(".frames");
      this.inputs = $(".inputs");
      this.stick = $(".stick");
      this.stickX = $(".x");
      this.stickY = $(".y");
      this.keys = [...this.shadowRoot.querySelectorAll("[data-button]")];
      this.layout = $(".layout");
      this.side = $(".side");
      this.notes = $(".notes");
      this.notesText = $(".notes-text");
      this.speed = Number(this.getAttribute("speed")) || 1;
      this.scriptedSpeed = 1;
      this.frame = 0;

      $(".play").addEventListener("click", () => this.play());
      $(".restart").addEventListener("click", () => this.play());
      $(".replay").addEventListener("click", () => this.play());
      this.speedButton.addEventListener("click", () => this.toggleMenu(this.speedMenu));
      $(".more").addEventListener("click", () => this.toggleMenu(this.moreMenu));
      this.moreMenu.addEventListener("click", () => this.closeMenu());
      this.speedMenu.addEventListener("click", (e) => {
        const choice = e.target.closest("[data-speed]");
        if (!choice) return;
        this.speed = Number(choice.dataset.speed);
        this.showSpeed();
        this.applySpeed();
        this.closeMenu();
      });
      // Clicking anywhere else, or Escape, closes the open menu
      this.closeMenuOutside = (e) => {
        if (e.type === "keydown" ? e.key === "Escape" : !e.composedPath().includes(this.openMenu.parentNode)) {
          this.closeMenu();
        }
      };
      this.pauseButton.addEventListener("click", () => {
        // Once the macro has ended, playing starts it over
        if (!this.ended.hidden) this.play();
        else this.setPaused(!this.paused);
      });
      this.stepButton.addEventListener("click", () => {
        // Stepping during a pause from the file keeps it paused
        clearTimeout(this.resumeTimer);
        this.runtime.step();
      });
      this.muteButton.addEventListener("click", () => {
        SohPlayer.muted = !SohPlayer.muted;
        this.runtime?.setMuted(SohPlayer.muted);
        for (const player of document.querySelectorAll("soh-player")) player.showMuted?.();
      });
      // Clicking or dragging along the progress bar goes to that frame; hovering shows which frame that is
      const seekTip = $(".seek-tip");
      const frameAt = (e) => {
        const box = this.seekBar.getBoundingClientRect();
        const fraction = Math.max(0, Math.min(1, (e.clientX - box.left) / box.width));
        seekTip.style.left = fraction * 100 + "%";
        return Math.round(fraction * (this.macroInputs?.length ?? 0));
      };
      this.seekBar.addEventListener("pointerdown", (e) => {
        this.seekBar.setPointerCapture(e.pointerId);
        this.seek(frameAt(e));
      });
      this.seekBar.addEventListener("pointermove", (e) => {
        const frame = frameAt(e);
        seekTip.textContent = "Frame " + frame;
        seekTip.hidden = !this.macroInputs;
        if (this.seekBar.hasPointerCapture(e.pointerId)) this.seek(frame);
      });
      this.seekBar.addEventListener("pointerleave", () => (seekTip.hidden = true));
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
      // Shaded like the last frame under Replay, so the button and caption stand out
      if (poster) {
        this.cover.style.backgroundImage =
          `linear-gradient(var(--shade), var(--shade)), url("${new URL(poster, document.baseURI).href}")`;
      }
      this.showSpeed();
      this.showMuted();
      this.timeline ||= loadTimeline(this.getAttribute("src"));
      this.timeline.then((timeline) => {
        this.inputs.hidden = !timeline.macro || this.getAttribute("inputs") === "off";
        this.notes.hidden = !timeline.annotations.length;
        this.side.hidden = this.inputs.hidden && this.notes.hidden;
        this.layout.classList.toggle("with-side", !this.side.hidden);
        // The ⋮ menu downloads the files, under their own names
        const offer = (link, url) => {
          link.hidden = !url;
          if (!url) return;
          link.href = url;
          link.download = decodeURIComponent(new URL(url).pathname.split("/").pop());
        };
        offer(this.shadowRoot.querySelector(".download-macro"), timeline.macro);
        offer(this.shadowRoot.querySelector(".download-state"), timeline.savestate);
      }, (err) => this.setNote(err.message, "err"));
    }

    disconnectedCallback() {
      if (SohPlayer.active !== this) return;
      this.deactivate();
      // The game went with this element, so nothing shows it until another player plays
      this.runtime.pause();
    }

    showSpeed() {
      this.speedButton.textContent = this.speed + "×";
      for (const choice of this.speedMenu.children) {
        choice.setAttribute("aria-checked", String(Number(choice.dataset.speed) === this.speed));
      }
    }

    // Opens one of the bar's menus, closing any other; its button closes it again
    toggleMenu(menu) {
      const opening = this.openMenu !== menu;
      this.closeMenu();
      if (!opening) return;
      this.openMenu = menu;
      menu.hidden = false;
      menu.previousElementSibling.setAttribute("aria-expanded", "true");
      this.bar.classList.add("menu-open");
      for (const type of ["pointerdown", "keydown"]) document.addEventListener(type, this.closeMenuOutside);
    }

    closeMenu() {
      if (!this.openMenu) return;
      this.openMenu.hidden = true;
      this.openMenu.previousElementSibling.setAttribute("aria-expanded", "false");
      this.openMenu = null;
      this.bar.classList.remove("menu-open");
      for (const type of ["pointerdown", "keydown"]) document.removeEventListener(type, this.closeMenuOutside);
    }

    // Pauses or resumes the game, which can then be stepped a frame at a time. The controls stay up while paused,
    // unless showControls says otherwise (as for a pause from the player's file, which plays on by itself).
    setPaused(paused, showControls = paused) {
      this.paused = paused;
      clearTimeout(this.resumeTimer);
      if (paused) {
        this.runtime?.pause();
      } else {
        this.holdAtNextPause();
        this.runtime?.resume();
      }
      this.pauseButton.innerHTML = paused ? PLAY : PAUSE;
      this.pauseButton.title = paused ? "Play" : "Pause";
      this.pauseButton.setAttribute("aria-label", this.pauseButton.title);
      this.stepButton.disabled = !paused;
      this.bar.classList.toggle("show", showControls);
    }

    // The game holds on the file's next pause frame, so the player stops on exactly that frame
    holdAtNextPause() {
      this.nextPause = this.loaded?.pauses.find((pause) => pause.frame > this.frame);
      this.runtime?.setBreakFrame(this.nextPause ? this.nextPause.frame : -1);
    }

    // The file's speed at a frame, times the speed chosen in the menu
    applySpeed() {
      this.runtime?.setSpeed(this.speed * this.scriptedSpeed);
    }

    scriptedSpeedAt(frame) {
      return this.loaded?.speeds.findLast((change) => change.frame <= frame)?.speed ?? 1;
    }

    showAnnotations(frame) {
      const active = this.loaded ? this.loaded.annotations.filter((note) => note.frame <= frame && frame < note.until) : [];
      if (this.shownAnnotations && active.length === this.shownAnnotations.length &&
          active.every((note, i) => note === this.shownAnnotations[i])) return;
      this.shownAnnotations = active;
      this.notesText.replaceChildren(...active.map((note) => {
        const paragraph = document.createElement("p");
        paragraph.textContent = note.text;
        return paragraph;
      }));
    }

    showMuted() {
      const label = SohPlayer.muted ? "Unmute" : "Mute";
      this.muteButton.innerHTML = SohPlayer.muted ? SPEAKER_OFF : SPEAKER;
      this.muteButton.title = label;
      this.muteButton.setAttribute("aria-label", label);
    }

    // Shows a controller input from the macro under the game
    showInput({ buttons, x, y }) {
      if (this.shownInput && buttons === this.shownInput.buttons && x === this.shownInput.x && y === this.shownInput.y) return;
      this.shownInput = { buttons, x, y };
      for (const key of this.keys) key.classList.toggle("on", (buttons & BUTTONS[key.dataset.button]) !== 0);
      // An N64 stick reaches about 80 either way
      const clamp = (v) => Math.max(-1, Math.min(1, v / 80));
      this.stick.setAttribute("cx", STICK.x + STICK.reach * clamp(x));
      this.stick.setAttribute("cy", STICK.y - STICK.reach * clamp(y));
      this.stickX.textContent = x;
      this.stickY.textContent = y;
    }

    setNote(text, kind) {
      this.note.hidden = !text;
      this.note.textContent = text || "";
      this.note.className = "note" + (kind ? " " + kind : "");
    }

    async play() {
      if (this.seeking) return;
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
      let macro;
      try {
        this.loaded = await this.timeline;
        // The player reads the macro's inputs itself, and hands the game the same bytes
        this.macroBytes ||= this.loaded.macro && fetchBytes(this.loaded.macro);
        macro = await this.macroBytes;
        this.macroInputs = macro && macroInputs(macro);
        await this.runtime.start();
        this.frame = 0;
        this.scriptedSpeed = this.scriptedSpeedAt(0);
        this.setPaused(false);
        this.runtime.setMuted(SohPlayer.muted);
        await this.runtime.playGz({
          state: this.loaded.savestate,
          macro,
          speed: this.speed * this.scriptedSpeed,
          // The player shows the inputs itself, beside the game instead of over it
          inputDisplay: false,
          notifications: false,
        });
      } catch (err) {
        // Try loading the macro again next time
        this.macroBytes = null;
        this.setNote("Could not play: " + err.message, "err");
        return;
      }
      this.setNote(null);
      this.cover.hidden = true;
      this.ended.hidden = true;
      this.bar.hidden = false;
      // A savestate alone has no progress; the game's status still holds the last macro played
      this.seekBar.hidden = this.frames.hidden = !macro;
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
      this.showInput(NO_INPUT);
      const update = () => {
        this.frameRequest = requestAnimationFrame(update);
        const { macro } = this.runtime.status();
        if (!macro.loaded) return;
        started ||= macro.playing;
        const frame = started ? Math.min(macro.frame, macro.frameCount) : 0;
        this.frame = frame;
        // One frame early: on a frame, the input the game reads next, which is what you'd be holding (as in pause
        // buffering) going into it. Nothing is left once the macro ends.
        this.showInput(this.macroInputs[frame] ?? NO_INPUT);
        if (frame !== shown) {
          shown = frame;
          this.showProgress(frame, macro.frameCount);
          this.showAnnotations(frame);
          const speed = this.scriptedSpeedAt(frame);
          if (speed !== this.scriptedSpeed) {
            this.scriptedSpeed = speed;
            this.applySpeed();
          }
        }
        // The game holds on the pause's frame until the player pauses it there
        const pause = this.nextPause;
        if (pause && started && macro.playing && frame >= pause.frame && !this.paused) {
          this.setPaused(true, false);
          this.resumeTimer = setTimeout(() => this.setPaused(false), (pause.seconds ?? 1) * 1000);
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

    showProgress(frame, frameCount) {
      this.progress.style.width = (frameCount ? (100 * frame) / frameCount : 0) + "%";
      // Next to the seek bar, and padded after with figure spaces (as wide as digits), so the count keeps its width
      // as the frame grows
      const padding = "\u2007".repeat(String(frameCount).length - String(frame).length);
      this.frames.textContent = frame + " / " + frameCount + padding;
    }

    // Goes to a macro frame by playing on to it as fast as the game runs, from the savestate again if the frame is
    // behind. A seek already running moves on to the new frame. Afterwards it plays on if it was playing.
    async seek(frame) {
      if (!this.macroInputs || SohPlayer.active !== this) return;
      // The macro has stopped by its last frame, so the furthest it can be held is the one before
      this.seekTarget = Math.max(0, Math.min(frame, this.macroInputs.length - 1));
      if (this.seeking) return;
      this.seeking = true;
      const wasPlaying = !this.paused && this.ended.hidden;
      this.unwatch();
      clearTimeout(this.resumeTimer);
      this.ended.hidden = true;
      this.runtime.setMuted(true);
      this.runtime.pause();
      const breather = () => new Promise((resolve) => setTimeout(resolve));
      try {
        let reloaded = false;
        for (let i = 0; SohPlayer.active === this; i++) {
          const target = this.seekTarget;
          const { macro } = this.runtime.status();
          if (!macro.playing || (macro.frame > target && !reloaded)) {
            await this.reloadMacro(breather);
            reloaded = true;
            continue;
          }
          this.frame = macro.frame;
          this.showProgress(macro.frame, macro.frameCount);
          if (macro.frame >= target) {
            // A newer target behind this frame starts it over again
            if (this.seekTarget === target) break;
            reloaded = false;
            continue;
          }
          this.runtime.step();
          if (i % 20 === 19) await breather();
        }
      } catch (err) {
        console.error("Seeking failed", err);
      } finally {
        this.seeking = false;
      }
      if (SohPlayer.active !== this) return;
      this.runtime.setMuted(SohPlayer.muted);
      this.scriptedSpeed = this.scriptedSpeedAt(this.frame);
      this.applySpeed();
      this.watch();
      this.setPaused(!wasPlaying);
    }

    // Loads the savestate and macro again and runs the game up to the macro's start, with the game paused
    async reloadMacro(breather) {
      this.runtime.resume();
      await this.runtime.playGz({
        state: this.loaded.savestate,
        macro: await this.macroBytes,
        speed: this.speed * this.scriptedSpeedAt(0),
        inputDisplay: false,
        notifications: false,
      });
      this.runtime.pause();
      for (let i = 0; !this.runtime.status().macro.playing; i++) {
        if (i > 3000) throw new Error("the macro did not start");
        this.runtime.step();
        if (i % 20 === 19) await breather();
      }
    }

    // Another player took the game, or this one left the page; go back to the poster
    deactivate() {
      this.unwatch();
      this.closeMenu();
      clearTimeout(this.resumeTimer);
      this.runtime.setBreakFrame(-1);
      this.runtime.stopMacro();
      this.frame = 0;
      // Notes show while a macro plays
      this.showAnnotations(-1);
      this.bar.hidden = true;
      this.bar.classList.remove("show");
      this.ended.hidden = true;
      this.cover.hidden = false;
      this.paused = false;
      this.showInput(NO_INPUT);
      if (SohPlayer.active === this) SohPlayer.active = null;
    }
  }

  customElements.define("soh-player", SohPlayer);
})();
