#pragma once

// Markers the page shows in the game world on chosen macro frames: a ring on the ground, or an arrow pointing down at
// a spot. Set as JSON, a list of
//   { "from": 95, "until": 204, "shape": "circle" | "arrow", "pos": [x, y, z], "size": 25, "color": [r, g, b] }
// Each shows while the playing macro's frame is in [from, until). An empty list clears them.
bool GzMarkers_Set(const char* json);
