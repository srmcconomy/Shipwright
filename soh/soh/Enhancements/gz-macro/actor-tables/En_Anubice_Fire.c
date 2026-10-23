// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Anubice_Fire/z_en_anubice_fire.h"

void EnAnubiceFire_Init(void*, void*);
void EnAnubiceFire_Destroy(void*, void*);
void func_809B26EC(void*, void*);
void func_809B27D8(void*, void*);
void func_809B2B48(void*, void*);
void EnAnubiceFire_Update(void*, void*);
void EnAnubiceFire_Draw(void*, void*);

const GzActorSpan gGzEnAnubiceFireSpans[] = {
    { offsetof(EnAnubiceFire, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnAnubiceFire, scale), 0, 0x140, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, unk_154), 0, 0x144, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, unused), 0, 0x148, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, unk_15A), 0, 0x14a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, unk_15C), 0, 0x14c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, unk_15E), 0, 0x14e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, unk_160[0].x), offsetof(EnAnubiceFire, unk_160[1].x) - offsetof(EnAnubiceFire, unk_160[0].x), 0x150, 0xc, 6, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, unk_160[0].y), offsetof(EnAnubiceFire, unk_160[1].y) - offsetof(EnAnubiceFire, unk_160[0].y), 0x154, 0xc, 6, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, unk_160[0].z), offsetof(EnAnubiceFire, unk_160[1].z) - offsetof(EnAnubiceFire, unk_160[0].z), 0x158, 0xc, 6, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.base.actor), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubiceFire, cylinder.base.at), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubiceFire, cylinder.base.ac), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubiceFire, cylinder.base.oc), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubiceFire, cylinder.base.atFlags), 0, 0x1a8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.base.acFlags), 0, 0x1a9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.base.ocFlags1), 0, 0x1aa, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.base.ocFlags2), 0, 0x1ab, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.base.colType), 0, 0x1ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.base.shape), 0, 0x1ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.info.toucher.dmgFlags), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.info.toucher.effect), 0, 0x1b4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.info.toucher.damage), 0, 0x1b5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.info.bumper.dmgFlags), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.info.bumper.effect), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.info.bumper.defense), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.info.bumper.hitPos.x), 0, 0x1be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.info.bumper.hitPos.y), 0, 0x1c0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.info.bumper.hitPos.z), 0, 0x1c2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.info.elemType), 0, 0x1c4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.info.toucherFlags), 0, 0x1c5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.info.bumperFlags), 0, 0x1c6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.info.ocElemFlags), 0, 0x1c7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.info.atHit), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubiceFire, cylinder.info.acHit), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubiceFire, cylinder.info.atHitInfo), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubiceFire, cylinder.info.acHitInfo), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnAnubiceFire, cylinder.dim.radius), 0, 0x1d8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.dim.height), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.dim.yShift), 0, 0x1dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.dim.pos.x), 0, 0x1de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.dim.pos.y), 0, 0x1e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnAnubiceFire, cylinder.dim.pos.z), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnAnubiceFireSpanCount = ARRAY_COUNT(gGzEnAnubiceFireSpans);

const GzActorFunction gGzEnAnubiceFireFunctions[] = {
    { 0x0, (void*)EnAnubiceFire_Init },
    { 0x120, (void*)EnAnubiceFire_Destroy },
    { 0x14c, (void*)func_809B26EC },
    { 0x238, (void*)func_809B27D8 },
    { 0x5a8, (void*)func_809B2B48 },
    { 0x754, (void*)EnAnubiceFire_Update },
    { 0x950, (void*)EnAnubiceFire_Draw },
};
const size_t gGzEnAnubiceFireFunctionCount = ARRAY_COUNT(gGzEnAnubiceFireFunctions);
