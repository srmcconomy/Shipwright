// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_It/z_en_it.h"

void EnIt_Init(void*, void*);
void EnIt_Destroy(void*, void*);
void EnIt_Update(void*, void*);

const GzActorSpan gGzEnItSpans[] = {
    { offsetof(EnIt, unk_14C), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.base.actor), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIt, collider.base.at), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIt, collider.base.ac), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIt, collider.base.oc), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIt, collider.base.atFlags), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.base.acFlags), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.base.ocFlags1), 0, 0x152, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.base.ocFlags2), 0, 0x153, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.base.colType), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.base.shape), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.info.toucher.dmgFlags), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.info.toucher.effect), 0, 0x15c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.info.toucher.damage), 0, 0x15d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.info.bumper.dmgFlags), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.info.bumper.effect), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.info.bumper.defense), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.info.bumper.hitPos.x), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.info.bumper.hitPos.y), 0, 0x168, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.info.bumper.hitPos.z), 0, 0x16a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.info.elemType), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.info.toucherFlags), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.info.bumperFlags), 0, 0x16e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.info.ocElemFlags), 0, 0x16f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.info.atHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIt, collider.info.acHit), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIt, collider.info.atHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIt, collider.info.acHitInfo), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIt, collider.dim.radius), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.dim.height), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.dim.yShift), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.dim.pos.x), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.dim.pos.y), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIt, collider.dim.pos.z), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnItSpanCount = ARRAY_COUNT(gGzEnItSpans);

const GzActorFunction gGzEnItFunctions[] = {
    { 0x0, (void*)EnIt_Init },
    { 0x6c, (void*)EnIt_Destroy },
    { 0x98, (void*)EnIt_Update },
};
const size_t gGzEnItFunctionCount = ARRAY_COUNT(gGzEnItFunctions);
