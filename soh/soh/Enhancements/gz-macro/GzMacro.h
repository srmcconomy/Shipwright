#pragma once

#include "z64.h"

#ifdef __cplusplus
extern "C" {
#endif
// Playback of gz practice ROM macros (.gzm). Each hook mirrors one of gz's own macro hooks so a
// macro plays back the same way it does in gz.

// Advances the macro by one frame and overwrites the game's input with it.
void GzMacro_UpdateInput(Input* input);
// Returns the seed Play_Init should use, which is the recorded seed when one is due.
u32 GzMacro_FilterRandSeed(u32 seed);
// Overwrites the ocarina's controller input with the recorded one.
void GzMacro_UpdateOcarinaInput(Input* input);
// When playing, sets audioFrames to the recorded number of audio frames the ocarina should advance by
// this frame (leaving the passed in default when there is no record) and returns true.
bool GzMacro_GetOcarinaSync(s32* audioFrames);
// Deterministic replacement for the audio rng in the ocarina memory game.
u32 GzMacro_OcarinaMemoryGameRand(u8 songLength);
// Whether a room load should take another frame, as it did when the macro was recorded.
bool GzMacro_ShouldDelayRoomLoad(void);
bool GzMacro_IsPlaying(void);
// The N64 never sets a new scene's frame counter, which carries on from the last scene's in the same memory, and
// some things happen only on even frames. While a macro plays, the counter carries on the same way.
void GzMacro_NoteGameplayFrames(u32 frames);
u32 GzMacro_FilterGameplayFrames(u32 frames);
// The controller input the macro gave the game this frame, for the input viewer. Returns false when no macro is
// playing.
bool GzMacro_GetCurrentInput(u16* button, s8* stickX, s8* stickY);
#ifdef __cplusplus
}; // extern "C"
#endif

#ifdef __cplusplus
#include <ship/window/gui/GuiWindow.h>

void GzMacro_OnSaveStateLoaded();

#include <string>

bool GzMacro_Load(const std::string& path);
void GzMacro_Play();
void GzMacro_Stop();

struct GzMacroStatus {
    bool loaded;
    bool playing;
    int32_t frame;
    int32_t frameCount;
    int32_t rngMismatches;
};
GzMacroStatus GzMacro_GetStatus();

class GzMacroWindow final : public Ship::GuiWindow {
  public:
    using GuiWindow::GuiWindow;

    void InitElement() override{};
    void DrawElement() override;
    void UpdateElement() override{};
};
#endif
