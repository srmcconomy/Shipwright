// Converts an OoT ROM to oot.o2r (or oot-mq.o2r) in the background, with soh-extract: SoH's
// torch extractor built for the browser. The build fills in the version, which must match the
// game's or it will ask for the archive to be regenerated.
//
// Message in:  { rom: ArrayBuffer }
// Messages out: { type: "progress", text }, { type: "done", name, bytes }, { type: "error", message }

const PORT_VERSION = "@CMAKE_PROJECT_VERSION@";

importScripts("soh-extract.js");

function progress(text) {
  postMessage({ type: "progress", text });
}

// Reads a tar archive into the module's filesystem under root. Handles the ustar, GNU long name
// and pax headers that CMake's tar writes.
function untar(FS, tar, root) {
  const decoder = new TextDecoder();
  const field = (offset, length) => {
    const bytes = tar.subarray(offset, offset + length);
    const end = bytes.indexOf(0);
    return decoder.decode(end < 0 ? bytes : bytes.subarray(0, end));
  };
  let longName = null;
  let offset = 0;
  let count = 0;
  while (offset + 512 <= tar.length && tar[offset] !== 0) {
    const size = parseInt(field(offset + 124, 12).trim() || "0", 8);
    const type = String.fromCharCode(tar[offset + 156] || 48);
    const prefix = field(offset + 345, 155);
    let name = longName || (prefix ? prefix + "/" : "") + field(offset, 100);
    longName = null;
    const data = tar.subarray(offset + 512, offset + 512 + size);

    if (type === "L") {
      longName = decoder.decode(data).replace(/\0+$/, "");
    } else if (type === "x") {
      const match = /\d+ path=([^\n]*)\n/.exec(decoder.decode(data));
      if (match) longName = match[1];
    } else if (/(^|\/)\._/.test(name)) {
      // macOS AppleDouble metadata, which torch would try to parse as yml
    } else if (type === "0" || type === "5") {
      const path = root + "/" + name.replace(/\/$/, "");
      const dir = type === "5" ? path : path.slice(0, path.lastIndexOf("/"));
      FS.mkdirTree(dir);
      if (type === "0") {
        FS.writeFile(path, data);
        count++;
      }
    }
    offset += 512 + Math.ceil(size / 512) * 512;
  }
  return count;
}

self.onmessage = async ({ data }) => {
  try {
    progress("Loading the converter…");
    const output = [];
    const module = await SohExtract({
      print: (text) => output.push(text),
      printErr: (text) => output.push(text),
    });

    progress("Unpacking asset definitions…");
    const response = await fetch("soh-extract-yml.tar.gz");
    if (!response.ok) throw new Error("soh-extract-yml.tar.gz is missing (" + response.status + ")");
    const tar = new Uint8Array(await new Response(response.body.pipeThrough(new DecompressionStream("gzip"))).arrayBuffer());
    const assetCount = untar(module.FS, tar, "/assets");

    progress("Converting the ROM…");
    module.FS.writeFile("/rom.z64", new Uint8Array(data.rom));
    module.FS.mkdirTree("/out");
    const status = module.callMain(["--src", "/assets/yml", "--dest", "/out", "--version", PORT_VERSION, "/rom.z64"]);

    const name = module.FS.readdir("/out").find((file) => file.endsWith(".o2r"));
    if (status !== 0 || !name) {
      throw new Error("this ROM could not be converted. Check that it is a supported Ocarina of Time ROM.\n\n" +
        `(exit ${status}, ${assetCount} asset files)\n` + output.slice(-8).join("\n"));
    }
    const bytes = module.FS.readFile("/out/" + name);
    postMessage({ type: "done", name, bytes }, [bytes.buffer]);
  } catch (err) {
    postMessage({ type: "error", message: err.message || String(err) });
  }
};
