#pragma once

#ifdef __EMSCRIPTEN__

#ifdef __cplusplus
extern "C" {
#endif

// The browser build can't see the user's disk or receive SDL drop events. The page copies a
// dropped or picked file into /ship/dropped and reports it here, which hands the path to the
// FileDropMgr just like a desktop drop.
void SohWeb_FileDropped(const char* path);

// Opens the browser's file picker. The chosen file goes through SohWeb_FileDropped.
// accept is an HTML accept list such as ".gzm,.gzs".
void SohWeb_OpenFilePicker(const char* accept);

#ifdef __cplusplus
}
#endif

#endif
