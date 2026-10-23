// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Ice_Hono/z_en_ice_hono.h"

void EnIceHono_InitCapturableFlame(void*, void*);
void EnIceHono_InitDroppedFlame(void*, void*);
void EnIceHono_InitSmallFlame(void*, void*);
void EnIceHono_Init(void*, void*);
void EnIceHono_Destroy(void*, void*);
void EnIceHono_CapturableFlame(void*, void*);
void EnIceHono_DropFlame(void*, void*);
void EnIceHono_SpreadFlames(void*, void*);
void EnIceHono_SmallFlameMove(void*, void*);
void EnIceHono_Update(void*, void*);
void EnIceHono_Draw(void*, void*);

const GzActorSpan gGzEnIceHonoSpans[] = {
    { offsetof(EnIceHono, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnIceHono, alpha), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, timer), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, unk_154), 0, 0x144, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, unk_156), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, smallFlameTargetYScale), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.base.actor), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIceHono, collider.base.at), 0, 0x150, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIceHono, collider.base.ac), 0, 0x154, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIceHono, collider.base.oc), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIceHono, collider.base.atFlags), 0, 0x15c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.base.acFlags), 0, 0x15d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.base.ocFlags1), 0, 0x15e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.base.ocFlags2), 0, 0x15f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.base.colType), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.base.shape), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.info.toucher.dmgFlags), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.info.toucher.effect), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.info.toucher.damage), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.info.bumper.dmgFlags), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.info.bumper.effect), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.info.bumper.defense), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.info.bumper.hitPos.x), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.info.bumper.hitPos.y), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.info.bumper.hitPos.z), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.info.elemType), 0, 0x178, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.info.toucherFlags), 0, 0x179, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.info.bumperFlags), 0, 0x17a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.info.ocElemFlags), 0, 0x17b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.info.atHit), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIceHono, collider.info.acHit), 0, 0x180, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIceHono, collider.info.atHitInfo), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIceHono, collider.info.acHitInfo), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIceHono, collider.dim.radius), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.dim.height), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.dim.yShift), 0, 0x190, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.dim.pos.x), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.dim.pos.y), 0, 0x194, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, collider.dim.pos.z), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, lightNode), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIceHono, lightInfo.type), 0, 0x19c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, lightInfo.params.point.x), 0, 0x19e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, lightInfo.params.point.y), 0, 0x1a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, lightInfo.params.point.z), 0, 0x1a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, lightInfo.params.point.color[0]), offsetof(EnIceHono, lightInfo.params.point.color[1]) - offsetof(EnIceHono, lightInfo.params.point.color[0]), 0x1a4, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, lightInfo.params.point.drawGlow), 0, 0x1a7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIceHono, lightInfo.params.point.radius), 0, 0x1a8, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnIceHonoSpanCount = ARRAY_COUNT(gGzEnIceHonoSpans);

const GzActorFunction gGzEnIceHonoFunctions[] = {
    { 0x0, NULL },
    { 0x30, (void*)EnIceHono_InitCapturableFlame },
    { 0xd4, (void*)EnIceHono_InitDroppedFlame },
    { 0x1dc, (void*)EnIceHono_InitSmallFlame },
    { 0x244, (void*)EnIceHono_Init },
    { 0x3a4, (void*)EnIceHono_Destroy },
    { 0x3fc, NULL },
    { 0x4ec, NULL },
    { 0x514, (void*)EnIceHono_CapturableFlame },
    { 0x5c4, NULL },
    { 0x5e8, (void*)EnIceHono_DropFlame },
    { 0x7a8, NULL },
    { 0x7cc, (void*)EnIceHono_SpreadFlames },
    { 0xa28, NULL },
    { 0xafc, (void*)EnIceHono_SmallFlameMove },
    { 0xc54, (void*)EnIceHono_Update },
    { 0xde8, (void*)EnIceHono_Draw },
};
const size_t gGzEnIceHonoFunctionCount = ARRAY_COUNT(gGzEnIceHonoFunctions);
