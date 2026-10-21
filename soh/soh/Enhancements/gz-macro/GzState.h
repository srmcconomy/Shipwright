#pragma once

#include <string>

// Recreates the situation in a gz savestate (.gzs): its save data, scene and room, and Link's position and
// movement. Actors, effects and timers are not carried over, since gz states only hold them as N64 memory.
bool GzState_Load(const std::string& path);
// Imports the loaded savestate into the current file. onArrived runs once Link is in place, which is where
// a macro recorded from this state starts. With boot set and no file loaded, starts gameplay from the state on a
// temporary file that is never saved, from the title screen or anywhere else. Returns false when no state is
// loaded, or no file is and boot is not set.
bool GzState_Import(void (*onArrived)() = nullptr, bool boot = false);
// Where the loaded savestate puts Link. Returns false when none is loaded.
bool GzState_GetSummary(int* sceneId, int* roomNum, float pos[3]);
void GzState_DrawTab();
