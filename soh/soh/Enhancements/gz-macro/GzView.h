#pragma once

#include "z64.h"

// Draws gameplay from another camera angle (for watching a gz macro) without touching the game's own camera,
// which Link's movement and much else depend on. Only the picture changes: the game logic, and the screen
// positions actors compute while being drawn, still see the game's camera, so a macro plays out the same.
typedef enum {
    GZ_VIEW_GAME,     // the game's own camera
    GZ_VIEW_OVERHEAD, // straight down onto Link, turned the way the game's camera faces
    GZ_VIEW_FREE,     // from wherever the page puts it (GzView_SetFreeCamera)
} GzViewMode;

#ifdef __cplusplus
extern "C" {
#endif
void GzView_SetMode(GzViewMode mode);
// Where the free camera looks from and at. With an orthoHeight above 0 it draws without perspective, showing that
// many game units above and below what it looks at (only while frozen).
void GzView_SetFreeCamera(float eyeX, float eyeY, float eyeZ, float atX, float atY, float atZ, float orthoHeight);
// Freezes the game on the frame it is on: each frame after only draws it again (for looking around it with the free
// camera), without the HUD, and with the rooms set by GzView_SetRooms drawn as well as the game's own. The game can't
// carry on from there as it would have, so a frozen game is only for looking at.
void GzView_SetFrozen(bool frozen);
// Half the height the view shows in game units while it draws without perspective, or 0
float GzView_OrthoHeight(PlayState* play);
s32 GzView_IsFrozen(void);
// Rooms of the scene to draw while frozen, as JSON, [0, 3, ...]
bool GzView_SetRooms(const char* json);
// Called by Play_Draw: before the view is applied, after the view-projection matrix is made, and once drawing
// is done
void GzView_BeginDraw(PlayState* play);
void GzView_KeepGameProjection(PlayState* play);
void GzView_EndDraw(PlayState* play);
// Called by View_ApplyPerspective once it has made a view's projection, to swap in the free camera's
void GzView_Project(View* view, Mtx* projection, f32 aspect);
// Called by Play_Draw after it draws the game's rooms
void GzView_DrawRooms(PlayState* play, u32 flags);
// Called by Play_Draw after a camera that asks for it updates again once the frame is drawn
void GzView_RedoCamera(PlayState* play);
#ifdef __cplusplus
}
#endif
