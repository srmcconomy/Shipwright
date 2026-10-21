#ifdef __EMSCRIPTEN__

#include "WebFiles.h"

#include <emscripten.h>
#include <ship/Context.h>
#include <ship/window/FileDropMgr.h>

#include <string>

extern "C" EMSCRIPTEN_KEEPALIVE void SohWeb_FileDropped(const char* path) {
    std::string copy = path;
    Ship::Context::GetRawInstance()->GetFileDropMgr()->SetDroppedFile(copy.data());
}

// clang-format off
EM_JS(void, SohWeb_OpenFilePicker, (const char* accept), {
    const input = document.createElement("input");
    input.type = "file";
    input.accept = UTF8ToString(accept);
    input.addEventListener("change", () => {
        if (input.files.length) {
            SohWeb.importFile(input.files[0]);
        }
    });
    input.click();
});
// clang-format on

#endif
