#pragma once

#include <string>

// Recreates the situation in a gz savestate (.gzs): its save data, scene and room, and Link's position and
// movement. Actors, effects and timers are not carried over, since gz states only hold them as N64 memory.
bool GzState_Load(const std::string& path);
void GzState_DrawTab();
