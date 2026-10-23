// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Gs/z_en_gs.h"

void EnGs_Init(void*, void*);
void EnGs_Destroy(void*, void*);
void func_80A4E470(void*, void*);
void func_80A4E648(void*, void*);
void func_80A4E910(void*, void*);
void func_80A4EA08(void*, void*);
void func_80A4EB3C(void*, void*);
void func_80A4ED34(void*, void*);
void func_80A4F13C(void*, void*);
void func_80A4F700(void*, void*);
void func_80A4F734(void*, void*);
void EnGs_Update(void*, void*);
void EnGs_Draw(void*, void*);

const GzActorSpan gGzEnGsSpans[] = {
    { offsetof(EnGs, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGs, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGs, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGs, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGs, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGs, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGs, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGs, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGs, collider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGs, collider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGs, actionFunc), 0, 0x188, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnGs, unk_19C), 0, 0x18c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_19D), 0, 0x18d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_19E), 0, 0x18e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_19F), 0, 0x18f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_1A0[0].x), offsetof(EnGs, unk_1A0[1].x) - offsetof(EnGs, unk_1A0[0].x), 0x190, 0x6, 3, 2, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_1A0[0].y), offsetof(EnGs, unk_1A0[1].y) - offsetof(EnGs, unk_1A0[0].y), 0x192, 0x6, 3, 2, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_1A0[0].z), offsetof(EnGs, unk_1A0[1].z) - offsetof(EnGs, unk_1A0[0].z), 0x194, 0x6, 3, 2, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_1B4[0].x), offsetof(EnGs, unk_1B4[1].x) - offsetof(EnGs, unk_1B4[0].x), 0x1a4, 0xc, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_1B4[0].y), offsetof(EnGs, unk_1B4[1].y) - offsetof(EnGs, unk_1B4[0].y), 0x1a8, 0xc, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_1B4[0].z), offsetof(EnGs, unk_1B4[1].z) - offsetof(EnGs, unk_1B4[0].z), 0x1ac, 0xc, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_1CC[0]), offsetof(EnGs, unk_1CC[1]) - offsetof(EnGs, unk_1CC[0]), 0x1bc, 0x1, 12, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_1D8.x), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_1D8.y), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_1D8.z), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGs, flashColor.r), 0, 0x1d4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, flashColor.g), 0, 0x1d5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, flashColor.b), 0, 0x1d6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, flashColor.a), 0, 0x1d7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_1E8), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_1EC), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_1F0), 0, 0x1e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_1F4), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_1F8), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_1FC), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_200), 0, 0x1f0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGs, unk_202[0]), offsetof(EnGs, unk_202[1]) - offsetof(EnGs, unk_202[0]), 0x1f2, 0x1, 6, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnGsSpanCount = ARRAY_COUNT(gGzEnGsSpans);

const GzActorFunction gGzEnGsFunctions[] = {
    { 0x0, (void*)EnGs_Init },
    { 0xc4, (void*)EnGs_Destroy },
    { 0xd4, NULL },
    { 0x15c, (void*)func_80A4E470 },
    { 0x31c, (void*)func_80A4E648 },
    { 0x42c, NULL },
    { 0x5ec, (void*)func_80A4E910 },
    { 0x6e8, (void*)func_80A4EA08 },
    { 0x81c, (void*)func_80A4EB3C },
    { 0xa14, (void*)func_80A4ED34 },
    { 0xe20, (void*)func_80A4F13C },
    { 0x1414, (void*)func_80A4F700 },
    { 0x1448, (void*)func_80A4F734 },
    { 0x1490, NULL },
    { 0x150c, (void*)EnGs_Update },
    { 0x16a4, (void*)EnGs_Draw },
};
const size_t gGzEnGsFunctionCount = ARRAY_COUNT(gGzEnGsFunctions);
