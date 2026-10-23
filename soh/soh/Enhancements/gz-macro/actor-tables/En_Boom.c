// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Boom/z_en_boom.h"

void EnBoom_Init(void*, void*);
void EnBoom_Destroy(void*, void*);
void EnBoom_Fly(void*, void*);
void EnBoom_Update(void*, void*);
void EnBoom_Draw(void*, void*);

const GzActorSpan gGzEnBoomSpans[] = {
    { offsetof(EnBoom, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBoom, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBoom, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBoom, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBoom, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBoom, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBoom, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBoom, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBoom, collider.dim.quad[0].x), offsetof(EnBoom, collider.dim.quad[1].x) - offsetof(EnBoom, collider.dim.quad[0].x), 0x17c, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.dim.quad[0].y), offsetof(EnBoom, collider.dim.quad[1].y) - offsetof(EnBoom, collider.dim.quad[0].y), 0x180, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.dim.quad[0].z), offsetof(EnBoom, collider.dim.quad[1].z) - offsetof(EnBoom, collider.dim.quad[0].z), 0x184, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.dim.dcMid.x), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.dim.dcMid.y), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.dim.dcMid.z), 0, 0x1b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.dim.baMid.x), 0, 0x1b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.dim.baMid.y), 0, 0x1b4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.dim.baMid.z), 0, 0x1b6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBoom, collider.dim.acDist), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBoom, moveTo), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBoom, grabbed), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBoom, returnTimer), 0, 0x1c4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBoom, activeTimer), 0, 0x1c5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBoom, effectIndex), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBoom, boomerangInfo.active), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBoom, boomerangInfo.tip.x), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBoom, boomerangInfo.tip.y), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBoom, boomerangInfo.tip.z), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBoom, boomerangInfo.base.x), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBoom, boomerangInfo.base.y), 0, 0x1e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBoom, boomerangInfo.base.z), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBoom, actionFunc), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnBoomSpanCount = ARRAY_COUNT(gGzEnBoomSpans);

const GzActorFunction gGzEnBoomFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnBoom_Init },
    { 0x128, (void*)EnBoom_Destroy },
    { 0x168, (void*)EnBoom_Fly },
    { 0x5a8, (void*)EnBoom_Update },
    { 0x600, (void*)EnBoom_Draw },
};
const size_t gGzEnBoomFunctionCount = ARRAY_COUNT(gGzEnBoomFunctions);
