// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Mu/z_en_mu.h"

void EnMu_Interact(void*, void*);
void EnMu_Init(void*, void*);
void EnMu_Destroy(void*, void*);
void EnMu_Pose(void*, void*);
void EnMu_Update(void*, void*);
void EnMu_Draw(void*, void*);

const GzActorSpan gGzEnMuSpans[] = {
    { offsetof(EnMu, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMu, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMu, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMu, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMu, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMu, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMu, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMu, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMu, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMu, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMu, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMu, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnMu, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnMu, collider.base.actor), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMu, collider.base.at), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMu, collider.base.ac), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMu, collider.base.oc), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMu, collider.base.atFlags), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.base.acFlags), 0, 0x195, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.base.ocFlags1), 0, 0x196, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.base.ocFlags2), 0, 0x197, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.base.colType), 0, 0x198, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.base.shape), 0, 0x199, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.info.toucher.dmgFlags), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.info.toucher.effect), 0, 0x1a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.info.toucher.damage), 0, 0x1a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.info.bumper.dmgFlags), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.info.bumper.effect), 0, 0x1a8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.info.bumper.defense), 0, 0x1a9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.info.bumper.hitPos.x), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.info.bumper.hitPos.y), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.info.bumper.hitPos.z), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.info.elemType), 0, 0x1b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.info.toucherFlags), 0, 0x1b1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.info.bumperFlags), 0, 0x1b2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.info.ocElemFlags), 0, 0x1b3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.info.atHit), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMu, collider.info.acHit), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMu, collider.info.atHitInfo), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMu, collider.info.acHitInfo), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMu, collider.dim.radius), 0, 0x1c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.dim.height), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.dim.yShift), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.dim.pos.x), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.dim.pos.y), 0, 0x1cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, collider.dim.pos.z), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, npcInfo.talkState), 0, 0x1d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, npcInfo.trackingMode), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, npcInfo.autoTurnTimer), 0, 0x1d4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, npcInfo.autoTurnState), 0, 0x1d6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, npcInfo.headRot.x), 0, 0x1d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, npcInfo.headRot.y), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, npcInfo.headRot.z), 0, 0x1dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, npcInfo.torsoRot.x), 0, 0x1de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, npcInfo.torsoRot.y), 0, 0x1e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, npcInfo.torsoRot.z), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, npcInfo.yOffset), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMu, npcInfo.trackPos.x), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMu, npcInfo.trackPos.y), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMu, npcInfo.trackPos.z), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMu, npcInfo.unk_24[0]), offsetof(EnMu, npcInfo.unk_24[1]) - offsetof(EnMu, npcInfo.unk_24[0]), 0x1f4, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnMu, defFaceReaction), 0, 0x1f8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, fidgetTableY[0]), offsetof(EnMu, fidgetTableY[1]) - offsetof(EnMu, fidgetTableY[0]), 0x1fa, 0x2, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnMu, fidgetTableZ[0]), offsetof(EnMu, fidgetTableZ[1]) - offsetof(EnMu, fidgetTableZ[0]), 0x21a, 0x2, 17, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnMuSpanCount = ARRAY_COUNT(gGzEnMuSpans);

const GzActorFunction gGzEnMuFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnMu_Interact },
    { 0x16c, NULL },
    { 0x1b0, NULL },
    { 0x21c, (void*)EnMu_Init },
    { 0x2f4, (void*)EnMu_Destroy },
    { 0x318, (void*)EnMu_Pose },
    { 0x350, (void*)EnMu_Update },
    { 0x498, NULL },
    { 0x584, NULL },
    { 0x59c, NULL },
    { 0x608, (void*)EnMu_Draw },
};
const size_t gGzEnMuFunctionCount = ARRAY_COUNT(gGzEnMuFunctions);
