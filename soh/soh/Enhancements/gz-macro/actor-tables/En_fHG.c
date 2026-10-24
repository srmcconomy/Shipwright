// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_fHG/z_en_fhg.h"

void EnfHG_Init(void*, void*);
void EnfHG_Destroy(void*, void*);
void EnfHG_SetupIntro(void*, void*);
void EnfHG_Intro(void*, void*);
void EnfHG_Approach(void*, void*);
void EnfHG_Attack(void*, void*);
void EnfHG_Damage(void*, void*);
void EnfHG_Retreat(void*, void*);
void EnfHG_Done(void*, void*);
void EnfHG_Update(void*, void*);
void EnfHG_Draw(void*, void*);

const GzActorSpan gGzEnfHGSpans[] = {
    { offsetof(EnfHG, bossGndSignal), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnfHG, bossGndInPainting), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnfHG, killActor), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnfHG, fhgFireKillWarp), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnfHG, cameraEye.x), 0, 0x140, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, cameraEye.y), 0, 0x144, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, cameraEye.z), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, cameraAt.x), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, cameraAt.y), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, cameraAt.z), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, cameraEyeVel.x), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, cameraEyeVel.y), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, cameraEyeVel.z), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, cameraAtVel.x), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, cameraAtVel.y), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, cameraAtVel.z), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, hoofSfxPos.x), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, hoofSfxPos.y), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, hoofSfxPos.z), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, inPaintingPos.x), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, inPaintingPos.y), 0, 0x180, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, inPaintingPos.z), 0, 0x184, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, inPaintingVelX), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, inPaintingVelZ), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, damageSpeedMod), 0, 0x190, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, approachRate), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, cameraSpeedMod), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, cameraPanZ), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, unk_1B0[0]), offsetof(EnfHG, unk_1B0[1]) - offsetof(EnfHG, unk_1B0[0]), 0x1a0, 0x1, 16, 1, GZ_SPAN_VALUE },
    { offsetof(EnfHG, gallopTimer), 0, 0x1b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnfHG, curPainting), 0, 0x1b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnfHG, targetPainting), 0, 0x1b4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnfHG, turnTarget), 0, 0x1b6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnfHG, spawnedWarp), 0, 0x1b8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnfHG, cutsceneState), 0, 0x1ba, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnfHG, cutsceneCamera), 0, 0x1bc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnfHG, unk_1CE[0]), offsetof(EnfHG, unk_1CE[1]) - offsetof(EnfHG, unk_1CE[0]), 0x1be, 0x1, 6, 1, GZ_SPAN_VALUE },
    { offsetof(EnfHG, timers[0]), offsetof(EnfHG, timers[1]) - offsetof(EnfHG, timers[0]), 0x1c4, 0x2, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnfHG, hitTimer), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnfHG, turnRot), 0, 0x1d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnfHG, unk_1E2[0]), offsetof(EnfHG, unk_1E2[1]) - offsetof(EnfHG, unk_1E2[0]), 0x1d2, 0x1, 6, 1, GZ_SPAN_VALUE },
    { offsetof(EnfHG, warpColorFilterR), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, warpColorFilterG), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, warpColorFilterB), 0, 0x1e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, warpColorFilterUnk1), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, warpColorFilterUnk2), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, actionFunc), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnfHG, unk_200[0]), offsetof(EnfHG, unk_200[1]) - offsetof(EnfHG, unk_200[0]), 0x1f0, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skeletonHeader), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnfHG, skin.mtx.mf[0][0]), offsetof(EnfHG, skin.mtx.mf[0][1]) - offsetof(EnfHG, skin.mtx.mf[0][0]), 0x1f8, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.mtx.mf[1][0]), offsetof(EnfHG, skin.mtx.mf[1][1]) - offsetof(EnfHG, skin.mtx.mf[1][0]), 0x208, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.mtx.mf[2][0]), offsetof(EnfHG, skin.mtx.mf[2][1]) - offsetof(EnfHG, skin.mtx.mf[2][0]), 0x218, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.mtx.mf[3][0]), offsetof(EnfHG, skin.mtx.mf[3][1]) - offsetof(EnfHG, skin.mtx.mf[3][0]), 0x228, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.limbCount), 0, 0x238, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.vtxTable), 0, 0x23c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnfHG, skin.skelAnime.limbCount), 0, 0x240, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skelAnime.mode), 0, 0x241, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skelAnime.dListCount), 0, 0x242, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skelAnime.taper), 0, 0x243, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skelAnime.skeleton), 0, 0x244, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnfHG, skin.skelAnime.animation), 0, 0x248, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnfHG, skin.skelAnime.startFrame), 0, 0x24c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skelAnime.endFrame), 0, 0x250, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skelAnime.animLength), 0, 0x254, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skelAnime.curFrame), 0, 0x258, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skelAnime.playSpeed), 0, 0x25c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skelAnime.jointTable), 0, 0x260, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnfHG, skin.skelAnime.morphTable), 0, 0x264, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnfHG, skin.skelAnime.morphWeight), 0, 0x268, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skelAnime.morphRate), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skelAnime.update.normal), 0, 0x270, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnfHG, skin.skelAnime.initFlags), 0, 0x274, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skelAnime.movementFlags), 0, 0x275, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skelAnime.prevRot), 0, 0x276, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skelAnime.prevTransl.x), 0, 0x278, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skelAnime.prevTransl.y), 0, 0x27a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skelAnime.prevTransl.z), 0, 0x27c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skelAnime.baseTransl.x), 0, 0x27e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skelAnime.baseTransl.y), 0, 0x280, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnfHG, skin.skelAnime.baseTransl.z), 0, 0x282, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnfHGSpanCount = ARRAY_COUNT(gGzEnfHGSpans);

const GzActorFunction gGzEnfHGFunctions[] = {
    { 0x0, (void*)EnfHG_Init },
    { 0x100, (void*)EnfHG_Destroy },
    { 0x12c, (void*)EnfHG_SetupIntro },
    { 0x190, (void*)EnfHG_Intro },
    { 0x139c, NULL },
    { 0x15e8, (void*)EnfHG_Approach },
    { 0x178c, (void*)EnfHG_Attack },
    { 0x1c10, (void*)EnfHG_Damage },
    { 0x1f40, (void*)EnfHG_Retreat },
    { 0x2174, (void*)EnfHG_Done },
    { 0x2184, (void*)EnfHG_Update },
    { 0x2318, NULL },
    { 0x232c, (void*)EnfHG_Draw },
};
const size_t gGzEnfHGFunctionCount = ARRAY_COUNT(gGzEnfHGFunctions);
