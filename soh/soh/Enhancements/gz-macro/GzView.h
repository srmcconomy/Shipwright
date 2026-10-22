#pragma once

#include "z64.h"

// Draws gameplay from another camera angle (for watching a gz macro) without touching the game's own camera,
// which Link's movement and much else depend on. Only the picture changes: the game logic, and the screen
// positions actors compute while being drawn, still see the game's camera, so a macro plays out the same.
typedef enum {
    GZ_VIEW_GAME,     // the game's own camera
    GZ_VIEW_OVERHEAD, // straight down onto Link, turned the way the game's camera faces
} GzViewMode;

#ifdef __cplusplus
extern "C" {
#endif
void GzView_SetMode(GzViewMode mode);
// Called by Play_Draw: before the view is applied, after the view-projection matrix is made, and once drawing
// is done
void GzView_BeginDraw(PlayState* play);
void GzView_KeepGameProjection(PlayState* play);
void GzView_EndDraw(PlayState* play);
#ifdef __cplusplus
}
#endif
