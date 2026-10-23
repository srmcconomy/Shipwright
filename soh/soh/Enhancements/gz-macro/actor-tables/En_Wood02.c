// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Wood02/z_en_wood02.h"

void EnWood02_SpawnOffspring(void*, void*);
void EnWood02_Init(void*, void*);
void EnWood02_Destroy(void*, void*);
void EnWood02_Update(void*, void*);
void EnWood02_Draw(void*, void*);

const GzActorSpan gGzEnWood02Spans[] = {
    { offsetof(EnWood02, unk_14C), 0, 0x13c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWood02, unk_14E[0]), offsetof(EnWood02, unk_14E[1]) - offsetof(EnWood02, unk_14E[0]), 0x13e, 0x1, 5, 1, GZ_SPAN_VALUE },
    { offsetof(EnWood02, spawnType), 0, 0x143, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWood02, drawType), 0, 0x144, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.base.actor), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWood02, collider.base.at), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWood02, collider.base.ac), 0, 0x150, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWood02, collider.base.oc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWood02, collider.base.atFlags), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.base.acFlags), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.base.ocFlags1), 0, 0x15a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.base.ocFlags2), 0, 0x15b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.base.colType), 0, 0x15c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.base.shape), 0, 0x15d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.info.toucher.dmgFlags), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.info.toucher.effect), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.info.toucher.damage), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.info.bumper.dmgFlags), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.info.bumper.effect), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.info.bumper.defense), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.info.bumper.hitPos.x), 0, 0x16e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.info.bumper.hitPos.y), 0, 0x170, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.info.bumper.hitPos.z), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.info.elemType), 0, 0x174, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.info.toucherFlags), 0, 0x175, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.info.bumperFlags), 0, 0x176, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.info.ocElemFlags), 0, 0x177, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.info.atHit), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWood02, collider.info.acHit), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWood02, collider.info.atHitInfo), 0, 0x180, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWood02, collider.info.acHitInfo), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnWood02, collider.dim.radius), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.dim.height), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.dim.yShift), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.dim.pos.x), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.dim.pos.y), 0, 0x190, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnWood02, collider.dim.pos.z), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnWood02SpanCount = ARRAY_COUNT(gGzEnWood02Spans);

const GzActorFunction gGzEnWood02Functions[] = {
    { 0x0, NULL },
    { 0x128, (void*)EnWood02_SpawnOffspring },
    { 0x340, (void*)EnWood02_Init },
    { 0x77c, (void*)EnWood02_Destroy },
    { 0x7b8, (void*)EnWood02_Update },
    { 0xcb0, (void*)EnWood02_Draw },
};
const size_t gGzEnWood02FunctionCount = ARRAY_COUNT(gGzEnWood02Functions);
