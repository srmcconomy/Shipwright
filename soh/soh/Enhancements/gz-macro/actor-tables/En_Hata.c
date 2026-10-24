// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Hata/z_en_hata.h"

void EnHata_Init(void*, void*);
void EnHata_Destroy(void*, void*);
void EnHata_Update(void*, void*);
void EnHata_Draw(void*, void*);

const GzActorSpan gGzEnHataSpans[] = {
    { offsetof(EnHata, skelAnime.limbCount), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, skelAnime.mode), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, skelAnime.dListCount), 0, 0x156, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, skelAnime.taper), 0, 0x157, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, skelAnime.skeleton), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHata, skelAnime.animation), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnHata, skelAnime.startFrame), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHata, skelAnime.endFrame), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHata, skelAnime.animLength), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHata, skelAnime.curFrame), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHata, skelAnime.playSpeed), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHata, skelAnime.jointTable), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHata, skelAnime.morphTable), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHata, skelAnime.morphWeight), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHata, skelAnime.morphRate), 0, 0x180, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHata, skelAnime.update.normal), 0, 0x184, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnHata, skelAnime.initFlags), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, skelAnime.movementFlags), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, skelAnime.prevRot), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, skelAnime.prevTransl.x), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, skelAnime.prevTransl.y), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, skelAnime.prevTransl.z), 0, 0x190, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, skelAnime.baseTransl.x), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, skelAnime.baseTransl.y), 0, 0x194, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, skelAnime.baseTransl.z), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.base.actor), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHata, collider.base.at), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHata, collider.base.ac), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHata, collider.base.oc), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHata, collider.base.atFlags), 0, 0x1a8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.base.acFlags), 0, 0x1a9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.base.ocFlags1), 0, 0x1aa, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.base.ocFlags2), 0, 0x1ab, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.base.colType), 0, 0x1ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.base.shape), 0, 0x1ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.info.toucher.dmgFlags), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.info.toucher.effect), 0, 0x1b4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.info.toucher.damage), 0, 0x1b5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.info.bumper.dmgFlags), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.info.bumper.effect), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.info.bumper.defense), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.info.bumper.hitPos.x), 0, 0x1be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.info.bumper.hitPos.y), 0, 0x1c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.info.bumper.hitPos.z), 0, 0x1c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.info.elemType), 0, 0x1c4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.info.toucherFlags), 0, 0x1c5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.info.bumperFlags), 0, 0x1c6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.info.ocElemFlags), 0, 0x1c7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.info.atHit), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHata, collider.info.acHit), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHata, collider.info.atHitInfo), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHata, collider.info.acHitInfo), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnHata, collider.dim.radius), 0, 0x1d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.dim.height), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.dim.yShift), 0, 0x1dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.dim.pos.x), 0, 0x1de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.dim.pos.y), 0, 0x1e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, collider.dim.pos.z), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, limbs[0].x), offsetof(EnHata, limbs[1].x) - offsetof(EnHata, limbs[0].x), 0x1e4, 0x6, 21, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, limbs[0].y), offsetof(EnHata, limbs[1].y) - offsetof(EnHata, limbs[0].y), 0x1e6, 0x6, 21, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, limbs[0].z), offsetof(EnHata, limbs[1].z) - offsetof(EnHata, limbs[0].z), 0x1e8, 0x6, 21, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, invScale), 0, 0x262, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, maxStep), 0, 0x264, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, minStep), 0, 0x266, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnHata, unk_278), 0, 0x268, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnHataSpanCount = ARRAY_COUNT(gGzEnHataSpans);

const GzActorFunction gGzEnHataFunctions[] = {
    { 0x0, (void*)EnHata_Init },
    { 0x138, (void*)EnHata_Destroy },
    { 0x180, (void*)EnHata_Update },
    { 0x39c, NULL },
    { 0x420, NULL },
    { 0x438, (void*)EnHata_Draw },
};
const size_t gGzEnHataFunctionCount = ARRAY_COUNT(gGzEnHataFunctions);
