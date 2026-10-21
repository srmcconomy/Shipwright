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
#ifdef __cplusplus
}; // extern "C"
#endif

#ifdef __cplusplus
#include <ship/window/gui/GuiWindow.h>

void GzMacro_OnSaveStateLoaded();

class GzMacroWindow final : public Ship::GuiWindow {
  public:
    using GuiWindow::GuiWindow;

    void InitElement() override{};
    void DrawElement() override;
    void UpdateElement() override{};
};
#endif
