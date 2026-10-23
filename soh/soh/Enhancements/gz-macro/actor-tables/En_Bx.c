// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Bx/z_en_bx.h"

void EnBx_Init(void*, void*);
void EnBx_Destroy(void*, void*);
void func_809D1D0C(void*, void*);
void EnBx_Update(void*, void*);
void EnBx_Draw(void*, void*);

const GzActorSpan gGzEnBxSpans[] = {
    { offsetof(EnBx, unk_14C), 0, 0x13c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, unk_14E), 0, 0x13e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, unk_150[0]), offsetof(EnBx, unk_150[1]) - offsetof(EnBx, unk_150[0]), 0x140, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, unk_154[0].x), offsetof(EnBx, unk_154[1].x) - offsetof(EnBx, unk_154[0].x), 0x144, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnBx, unk_154[0].y), offsetof(EnBx, unk_154[1].y) - offsetof(EnBx, unk_154[0].y), 0x148, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnBx, unk_154[0].z), offsetof(EnBx, unk_154[1].z) - offsetof(EnBx, unk_154[0].z), 0x14c, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnBx, unk_184[0].x), offsetof(EnBx, unk_184[1].x) - offsetof(EnBx, unk_184[0].x), 0x174, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnBx, unk_184[0].y), offsetof(EnBx, unk_184[1].y) - offsetof(EnBx, unk_184[0].y), 0x178, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnBx, unk_184[0].z), offsetof(EnBx, unk_184[1].z) - offsetof(EnBx, unk_184[0].z), 0x17c, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnBx, unk_1B4[0].x), offsetof(EnBx, unk_1B4[1].x) - offsetof(EnBx, unk_1B4[0].x), 0x1a4, 0x6, 4, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, unk_1B4[0].y), offsetof(EnBx, unk_1B4[1].y) - offsetof(EnBx, unk_1B4[0].y), 0x1a6, 0x6, 4, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, unk_1B4[0].z), offsetof(EnBx, unk_1B4[1].z) - offsetof(EnBx, unk_1B4[0].z), 0x1a8, 0x6, 4, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.base.actor), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBx, collider.base.at), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBx, collider.base.ac), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBx, collider.base.oc), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBx, collider.base.atFlags), 0, 0x1cc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.base.acFlags), 0, 0x1cd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.base.ocFlags1), 0, 0x1ce, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.base.ocFlags2), 0, 0x1cf, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.base.colType), 0, 0x1d0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.base.shape), 0, 0x1d1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.info.toucher.dmgFlags), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.info.toucher.effect), 0, 0x1d8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.info.toucher.damage), 0, 0x1d9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.info.bumper.dmgFlags), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.info.bumper.effect), 0, 0x1e0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.info.bumper.defense), 0, 0x1e1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.info.bumper.hitPos.x), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.info.bumper.hitPos.y), 0, 0x1e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.info.bumper.hitPos.z), 0, 0x1e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.info.elemType), 0, 0x1e8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.info.toucherFlags), 0, 0x1e9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.info.bumperFlags), 0, 0x1ea, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.info.ocElemFlags), 0, 0x1eb, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.info.atHit), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBx, collider.info.acHit), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBx, collider.info.atHitInfo), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBx, collider.info.acHitInfo), 0, 0x1f8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBx, collider.dim.radius), 0, 0x1fc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.dim.height), 0, 0x1fe, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.dim.yShift), 0, 0x200, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.dim.pos.x), 0, 0x202, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.dim.pos.y), 0, 0x204, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, collider.dim.pos.z), 0, 0x206, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.base.actor), 0, 0x208, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBx, colliderQuad.base.at), 0, 0x20c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBx, colliderQuad.base.ac), 0, 0x210, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBx, colliderQuad.base.oc), 0, 0x214, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBx, colliderQuad.base.atFlags), 0, 0x218, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.base.acFlags), 0, 0x219, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.base.ocFlags1), 0, 0x21a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.base.ocFlags2), 0, 0x21b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.base.colType), 0, 0x21c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.base.shape), 0, 0x21d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.info.toucher.dmgFlags), 0, 0x220, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.info.toucher.effect), 0, 0x224, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.info.toucher.damage), 0, 0x225, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.info.bumper.dmgFlags), 0, 0x228, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.info.bumper.effect), 0, 0x22c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.info.bumper.defense), 0, 0x22d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.info.bumper.hitPos.x), 0, 0x22e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.info.bumper.hitPos.y), 0, 0x230, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.info.bumper.hitPos.z), 0, 0x232, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.info.elemType), 0, 0x234, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.info.toucherFlags), 0, 0x235, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.info.bumperFlags), 0, 0x236, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.info.ocElemFlags), 0, 0x237, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.info.atHit), 0, 0x238, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBx, colliderQuad.info.acHit), 0, 0x23c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBx, colliderQuad.info.atHitInfo), 0, 0x240, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBx, colliderQuad.info.acHitInfo), 0, 0x244, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBx, colliderQuad.dim.quad[0].x), offsetof(EnBx, colliderQuad.dim.quad[1].x) - offsetof(EnBx, colliderQuad.dim.quad[0].x), 0x248, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.dim.quad[0].y), offsetof(EnBx, colliderQuad.dim.quad[1].y) - offsetof(EnBx, colliderQuad.dim.quad[0].y), 0x24c, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.dim.quad[0].z), offsetof(EnBx, colliderQuad.dim.quad[1].z) - offsetof(EnBx, colliderQuad.dim.quad[0].z), 0x250, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.dim.dcMid.x), 0, 0x278, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.dim.dcMid.y), 0, 0x27a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.dim.dcMid.z), 0, 0x27c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.dim.baMid.x), 0, 0x27e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.dim.baMid.y), 0, 0x280, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.dim.baMid.z), 0, 0x282, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBx, colliderQuad.dim.acDist), 0, 0x284, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnBxSpanCount = ARRAY_COUNT(gGzEnBxSpans);

const GzActorFunction gGzEnBxFunctions[] = {
    { 0x0, (void*)EnBx_Init },
    { 0x208, (void*)EnBx_Destroy },
    { 0x234, (void*)func_809D1D0C },
    { 0x304, (void*)EnBx_Update },
    { 0x628, (void*)EnBx_Draw },
};
const size_t gGzEnBxFunctionCount = ARRAY_COUNT(gGzEnBxFunctions);
