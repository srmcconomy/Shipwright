#pragma once

// Draws a red line through where Link has been while a gz macro plays, in the game world. The line starts over
// when the macro does (or goes back, as when seeking from the savestate again).
void GzTrail_SetEnabled(bool enabled);
