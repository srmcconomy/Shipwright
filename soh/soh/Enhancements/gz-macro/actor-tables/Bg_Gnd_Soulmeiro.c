// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Gnd_Soulmeiro/z_bg_gnd_soulmeiro.h"

void BgGndSoulmeiro_Init(void*, void*);
void BgGndSoulmeiro_Destroy(void*, void*);
void func_8087AF38(void*, void*);
void func_8087B284(void*, void*);
void func_8087B350(void*, void*);
void BgGndSoulmeiro_Update(void*, void*);
void BgGndSoulmeiro_Draw(void*, void*);

const GzActorSpan gGzBgGndSoulmeiroSpans[] = {
    { offsetof(BgGndSoulmeiro, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgGndSoulmeiro, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgGndSoulmeiro, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgGndSoulmeiro, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgGndSoulmeiro, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgGndSoulmeiro, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgGndSoulmeiro, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgGndSoulmeiro, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgGndSoulmeiro, collider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, collider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, unk_198), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgGndSoulmeiro, actionFunc), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzBgGndSoulmeiroSpanCount = ARRAY_COUNT(gGzBgGndSoulmeiroSpans);

const GzActorFunction gGzBgGndSoulmeiroFunctions[] = {
    { 0x0, (void*)BgGndSoulmeiro_Init },
    { 0x144, (void*)BgGndSoulmeiro_Destroy },
    { 0x180, (void*)func_8087AF38 },
    { 0x4cc, (void*)func_8087B284 },
    { 0x598, (void*)func_8087B350 },
    { 0x5ec, (void*)BgGndSoulmeiro_Update },
    { 0x618, (void*)BgGndSoulmeiro_Draw },
};
const size_t gGzBgGndSoulmeiroFunctionCount = ARRAY_COUNT(gGzBgGndSoulmeiroFunctions);
