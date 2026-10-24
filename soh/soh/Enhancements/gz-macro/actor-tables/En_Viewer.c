// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Viewer/z_en_viewer.h"

void EnViewer_Init(void*, void*);
void EnViewer_Destroy(void*, void*);
void EnViewer_InitImpl(void*, void*);
void EnViewer_UpdateImpl(void*, void*);
void EnViewer_Update(void*, void*);
void EnViewer_DrawGanondorf(void*, void*);
void EnViewer_DrawHorse(void*, void*);
void EnViewer_DrawZelda(void*, void*);
void EnViewer_DrawImpa(void*, void*);
void EnViewer_Draw(void*, void*);
void EnViewer_UpdatePosition(void*, void*);
void EnViewer_DrawFireEffects(void*, void*);
void EnViewer_UpdateGanondorfCape(void*, void*);

const GzActorSpan gGzEnViewerSpans[] = {
    { offsetof(EnViewer, skin.skeletonHeader), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnViewer, skin.mtx.mf[0][0]), offsetof(EnViewer, skin.mtx.mf[0][1]) - offsetof(EnViewer, skin.mtx.mf[0][0]), 0x140, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.mtx.mf[1][0]), offsetof(EnViewer, skin.mtx.mf[1][1]) - offsetof(EnViewer, skin.mtx.mf[1][0]), 0x150, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.mtx.mf[2][0]), offsetof(EnViewer, skin.mtx.mf[2][1]) - offsetof(EnViewer, skin.mtx.mf[2][0]), 0x160, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.mtx.mf[3][0]), offsetof(EnViewer, skin.mtx.mf[3][1]) - offsetof(EnViewer, skin.mtx.mf[3][0]), 0x170, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.limbCount), 0, 0x180, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.vtxTable), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnViewer, skin.skelAnime.limbCount), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.skelAnime.mode), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.skelAnime.dListCount), 0, 0x18a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.skelAnime.taper), 0, 0x18b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.skelAnime.skeleton), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnViewer, skin.skelAnime.animation), 0, 0x190, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnViewer, skin.skelAnime.startFrame), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.skelAnime.endFrame), 0, 0x198, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.skelAnime.animLength), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.skelAnime.curFrame), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.skelAnime.playSpeed), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.skelAnime.jointTable), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnViewer, skin.skelAnime.morphTable), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnViewer, skin.skelAnime.morphWeight), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.skelAnime.morphRate), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.skelAnime.update.normal), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnViewer, skin.skelAnime.initFlags), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.skelAnime.movementFlags), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.skelAnime.prevRot), 0, 0x1be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.skelAnime.prevTransl.x), 0, 0x1c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.skelAnime.prevTransl.y), 0, 0x1c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.skelAnime.prevTransl.z), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.skelAnime.baseTransl.x), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.skelAnime.baseTransl.y), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnViewer, skin.skelAnime.baseTransl.z), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnViewer, animObjBankIndex), 0, 0x1cc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnViewer, drawFuncIndex), 0, 0x1cd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnViewer, actionFunc), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnViewer, unused), 0, 0x1d4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnViewer, state), 0, 0x1d5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnViewer, isVisible), 0, 0x1d6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnViewer, fireEffects[0].startPos.x), offsetof(EnViewer, fireEffects[1].startPos.x) - offsetof(EnViewer, fireEffects[0].startPos.x), 0x1d8, 0x34, 20, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, fireEffects[0].startPos.y), offsetof(EnViewer, fireEffects[1].startPos.y) - offsetof(EnViewer, fireEffects[0].startPos.y), 0x1dc, 0x34, 20, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, fireEffects[0].startPos.z), offsetof(EnViewer, fireEffects[1].startPos.z) - offsetof(EnViewer, fireEffects[0].startPos.z), 0x1e0, 0x34, 20, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, fireEffects[0].endPos.x), offsetof(EnViewer, fireEffects[1].endPos.x) - offsetof(EnViewer, fireEffects[0].endPos.x), 0x1e4, 0x34, 20, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, fireEffects[0].endPos.y), offsetof(EnViewer, fireEffects[1].endPos.y) - offsetof(EnViewer, fireEffects[0].endPos.y), 0x1e8, 0x34, 20, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, fireEffects[0].endPos.z), offsetof(EnViewer, fireEffects[1].endPos.z) - offsetof(EnViewer, fireEffects[0].endPos.z), 0x1ec, 0x34, 20, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, fireEffects[0].pos.x), offsetof(EnViewer, fireEffects[1].pos.x) - offsetof(EnViewer, fireEffects[0].pos.x), 0x1f0, 0x34, 20, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, fireEffects[0].pos.y), offsetof(EnViewer, fireEffects[1].pos.y) - offsetof(EnViewer, fireEffects[0].pos.y), 0x1f4, 0x34, 20, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, fireEffects[0].pos.z), offsetof(EnViewer, fireEffects[1].pos.z) - offsetof(EnViewer, fireEffects[0].pos.z), 0x1f8, 0x34, 20, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, fireEffects[0].lerpFactorSpeed), offsetof(EnViewer, fireEffects[1].lerpFactorSpeed) - offsetof(EnViewer, fireEffects[0].lerpFactorSpeed), 0x1fc, 0x34, 20, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, fireEffects[0].scale), offsetof(EnViewer, fireEffects[1].scale) - offsetof(EnViewer, fireEffects[0].scale), 0x200, 0x34, 20, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, fireEffects[0].lerpFactor), offsetof(EnViewer, fireEffects[1].lerpFactor) - offsetof(EnViewer, fireEffects[0].lerpFactor), 0x204, 0x34, 20, 4, GZ_SPAN_VALUE },
    { offsetof(EnViewer, fireEffects[0].state), offsetof(EnViewer, fireEffects[1].state) - offsetof(EnViewer, fireEffects[0].state), 0x208, 0x34, 20, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnViewerSpanCount = ARRAY_COUNT(gGzEnViewerSpans);

const GzActorFunction gGzEnViewerFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnViewer_Init },
    { 0xe0, (void*)EnViewer_Destroy },
    { 0x10c, NULL },
    { 0x258, NULL },
    { 0x2e8, NULL },
    { 0x380, (void*)EnViewer_InitImpl },
    { 0x53c, (void*)EnViewer_UpdateImpl },
    { 0x1094, (void*)EnViewer_Update },
    { 0x10e8, NULL },
    { 0x1158, NULL },
    { 0x121c, NULL },
    { 0x125c, (void*)EnViewer_DrawGanondorf },
    { 0x168c, (void*)EnViewer_DrawHorse },
    { 0x16b8, NULL },
    { 0x1738, NULL },
    { 0x1780, (void*)EnViewer_DrawZelda },
    { 0x1e28, NULL },
    { 0x1e50, (void*)EnViewer_DrawImpa },
    { 0x1f64, (void*)EnViewer_Draw },
    { 0x2054, (void*)EnViewer_UpdatePosition },
    { 0x2424, NULL },
    { 0x256c, (void*)EnViewer_DrawFireEffects },
    { 0x28b0, (void*)EnViewer_UpdateGanondorfCape },
};
const size_t gGzEnViewerFunctionCount = ARRAY_COUNT(gGzEnViewerFunctions);
