// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Ma2/z_en_ma2.h"

void EnMa2_UpdateTracking(void*, void*);
void EnMa2_UpdateSinging(void*, void*);
void EnMa2_Init(void*, void*);
void EnMa2_Destroy(void*, void*);
void EnMa2_WaitToEndTalk(void*, void*);
void EnMa2_WaitForOcarina(void*, void*);
void EnMa2_WaitForEponasSong(void*, void*);
void EnMa2_ForceTalkAfterSong(void*, void*);
void EnMa2_Update(void*, void*);
void EnMa2_Draw(void*, void*);

const GzActorSpan gGzEnMa2Spans[] = {
    { offsetof(EnMa2, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMa2, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnMa2, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMa2, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMa2, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMa2, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMa2, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMa2, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMa2, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMa2, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMa2, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMa2, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnMa2, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnMa2, collider.base.actor), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMa2, collider.base.at), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMa2, collider.base.ac), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMa2, collider.base.oc), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMa2, collider.base.atFlags), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.base.acFlags), 0, 0x195, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.base.ocFlags1), 0, 0x196, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.base.ocFlags2), 0, 0x197, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.base.colType), 0, 0x198, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.base.shape), 0, 0x199, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.info.toucher.dmgFlags), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.info.toucher.effect), 0, 0x1a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.info.toucher.damage), 0, 0x1a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.info.bumper.dmgFlags), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.info.bumper.effect), 0, 0x1a8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.info.bumper.defense), 0, 0x1a9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.info.bumper.hitPos.x), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.info.bumper.hitPos.y), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.info.bumper.hitPos.z), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.info.elemType), 0, 0x1b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.info.toucherFlags), 0, 0x1b1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.info.bumperFlags), 0, 0x1b2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.info.ocElemFlags), 0, 0x1b3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.info.atHit), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMa2, collider.info.acHit), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMa2, collider.info.atHitInfo), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMa2, collider.info.acHitInfo), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMa2, collider.dim.radius), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.dim.height), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.dim.yShift), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.dim.pos.x), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.dim.pos.y), 0, 0x1cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, collider.dim.pos.z), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, interactInfo.talkState), 0, 0x1d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, interactInfo.trackingMode), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, interactInfo.autoTurnTimer), 0, 0x1d4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, interactInfo.autoTurnState), 0, 0x1d6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, interactInfo.headRot.x), 0, 0x1d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, interactInfo.headRot.y), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, interactInfo.headRot.z), 0, 0x1dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, interactInfo.torsoRot.x), 0, 0x1de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, interactInfo.torsoRot.y), 0, 0x1e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, interactInfo.torsoRot.z), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, interactInfo.yOffset), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMa2, interactInfo.trackPos.x), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMa2, interactInfo.trackPos.y), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMa2, interactInfo.trackPos.z), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMa2, interactInfo.unk_24[0]), offsetof(EnMa2, interactInfo.unk_24[1]) - offsetof(EnMa2, interactInfo.unk_24[0]), 0x1f4, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnMa2, timer), 0, 0x1f8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, singingDisabled), 0, 0x1fa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, blinkTimer), 0, 0x1fc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, eyeIndex), 0, 0x1fe, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, mouthIndex), 0, 0x200, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, upperBodyRot[0].x), offsetof(EnMa2, upperBodyRot[1].x) - offsetof(EnMa2, upperBodyRot[0].x), 0x202, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, upperBodyRot[0].y), offsetof(EnMa2, upperBodyRot[1].y) - offsetof(EnMa2, upperBodyRot[0].y), 0x204, 0x6, 19, 2, GZ_SPAN_VALUE },
    { offsetof(EnMa2, upperBodyRot[0].z), offsetof(EnMa2, upperBodyRot[1].z) - offsetof(EnMa2, upperBodyRot[0].z), 0x206, 0x6, 19, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnMa2SpanCount = ARRAY_COUNT(gGzEnMa2Spans);

const GzActorFunction gGzEnMa2Functions[] = {
    { 0x0, NULL },
    { 0x98, NULL },
    { 0x148, (void*)EnMa2_UpdateTracking },
    { 0x1bc, NULL },
    { 0x2cc, NULL },
    { 0x324, NULL },
    { 0x3b0, NULL },
    { 0x420, (void*)EnMa2_UpdateSinging },
    { 0x4ac, (void*)EnMa2_Init },
    { 0x650, (void*)EnMa2_Destroy },
    { 0x690, (void*)EnMa2_WaitToEndTalk },
    { 0x6c4, (void*)EnMa2_WaitForOcarina },
    { 0x760, (void*)EnMa2_WaitForEponasSong },
    { 0x84c, (void*)EnMa2_ForceTalkAfterSong },
    { 0x8ec, (void*)EnMa2_Update },
    { 0x9dc, NULL },
    { 0xc1c, NULL },
    { 0xcd0, (void*)EnMa2_Draw },
};
const size_t gGzEnMa2FunctionCount = ARRAY_COUNT(gGzEnMa2Functions);
