// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Ice_Turara/z_bg_ice_turara.h"

void BgIceTurara_Init(void*, void*);
void BgIceTurara_Destroy(void*, void*);
void BgIceTurara_Stalagmite(void*, void*);
void BgIceTurara_Wait(void*, void*);
void BgIceTurara_Shiver(void*, void*);
void BgIceTurara_Fall(void*, void*);
void BgIceTurara_Regrow(void*, void*);
void BgIceTurara_Update(void*, void*);
void BgIceTurara_Draw(void*, void*);

const GzActorSpan gGzBgIceTuraraSpans[] = {
    { offsetof(BgIceTurara, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgIceTurara, shiverTimer), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.base.actor), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceTurara, collider.base.at), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceTurara, collider.base.ac), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceTurara, collider.base.oc), 0, 0x168, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceTurara, collider.base.atFlags), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.base.acFlags), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.base.ocFlags1), 0, 0x16e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.base.ocFlags2), 0, 0x16f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.base.colType), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.base.shape), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.info.toucher.dmgFlags), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.info.toucher.effect), 0, 0x178, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.info.toucher.damage), 0, 0x179, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.info.bumper.dmgFlags), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.info.bumper.effect), 0, 0x180, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.info.bumper.defense), 0, 0x181, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.info.bumper.hitPos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.info.bumper.hitPos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.info.bumper.hitPos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.info.elemType), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.info.toucherFlags), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.info.bumperFlags), 0, 0x18a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.info.ocElemFlags), 0, 0x18b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.info.atHit), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceTurara, collider.info.acHit), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceTurara, collider.info.atHitInfo), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceTurara, collider.info.acHitInfo), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceTurara, collider.dim.radius), 0, 0x19c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.dim.height), 0, 0x19e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.dim.yShift), 0, 0x1a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.dim.pos.x), 0, 0x1a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.dim.pos.y), 0, 0x1a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceTurara, collider.dim.pos.z), 0, 0x1a6, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgIceTuraraSpanCount = ARRAY_COUNT(gGzBgIceTuraraSpans);

const GzActorFunction gGzBgIceTuraraFunctions[] = {
    { 0x0, (void*)BgIceTurara_Init },
    { 0xdc, (void*)BgIceTurara_Destroy },
    { 0x124, NULL },
    { 0x304, (void*)BgIceTurara_Stalagmite },
    { 0x36c, (void*)BgIceTurara_Wait },
    { 0x3a4, (void*)BgIceTurara_Shiver },
    { 0x510, (void*)BgIceTurara_Fall },
    { 0x668, (void*)BgIceTurara_Regrow },
    { 0x6b8, (void*)BgIceTurara_Update },
    { 0x6dc, (void*)BgIceTurara_Draw },
};
const size_t gGzBgIceTuraraFunctionCount = ARRAY_COUNT(gGzBgIceTuraraFunctions);
