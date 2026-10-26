#pragma once

// Draws a red line through where Link has been while a gz macro plays, in the game world. The line starts over
// when the macro does (or goes back, as when seeking from the savestate again).
void GzTrail_SetEnabled(bool enabled);

// Turns the line on and off on macro frames, as JSON: [[frame, on, [r, g, b]], ...], the color optional. Each change
// holds from its frame on, and the line is off before the first. Off hides the line; on again, it starts afresh. A
// change that leaves it on with another color carries the line on in that color.
bool GzTrail_SetChanges(const char* json);

// Where Link was on each macro frame the line has recorded (since it was last enabled, or the macro last started
// over), as JSON: [[frame, scene, room, x, y, z], ...]. The string lives until the next call.
const char* GzTrail_GetPoints();
