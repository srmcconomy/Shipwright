// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Ny/z_en_ny.h"

void EnNy_Init(void*, void*);
void EnNy_Destroy(void*, void*);
void func_80ABCE50(void*, void*);
void func_80ABCE90(void*, void*);
void func_80ABCEEC(void*, void*);
void EnNy_Move(void*, void*);
void EnNy_TurnToStone(void*, void*);
void func_80ABD11C(void*, void*);
void EnNy_Update(void*, void*);
void EnNy_SetupDie(void*, void*);
void EnNy_Die(void*, void*);
void EnNy_UpdateDeath(void*, void*);
void EnNy_UpdateUnused(void*, void*);
void EnNy_Draw(void*, void*);
void EnNy_DrawDeathEffect(void*, void*);

const GzActorSpan gGzEnNySpans[] = {
    { offsetof(EnNy, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnNy, collider.base.actor), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnNy, collider.base.at), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnNy, collider.base.ac), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnNy, collider.base.oc), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnNy, collider.base.atFlags), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNy, collider.base.acFlags), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNy, collider.base.ocFlags1), 0, 0x152, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNy, collider.base.ocFlags2), 0, 0x153, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNy, collider.base.colType), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNy, collider.base.shape), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNy, collider.count), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnNy, collider.elements), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnNy, elements[0].info.toucher.dmgFlags), 0, 0x160, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].info.toucher.effect), 0, 0x164, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].info.toucher.damage), 0, 0x165, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].info.bumper.dmgFlags), 0, 0x168, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].info.bumper.effect), 0, 0x16c, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].info.bumper.defense), 0, 0x16d, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].info.bumper.hitPos.x), 0, 0x16e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].info.bumper.hitPos.y), 0, 0x170, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].info.bumper.hitPos.z), 0, 0x172, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].info.elemType), 0, 0x174, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].info.toucherFlags), 0, 0x175, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].info.bumperFlags), 0, 0x176, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].info.ocElemFlags), 0, 0x177, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].info.atHit), 0, 0x178, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnNy, elements[0].info.acHit), 0, 0x17c, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnNy, elements[0].info.atHitInfo), 0, 0x180, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnNy, elements[0].info.acHitInfo), 0, 0x184, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnNy, elements[0].dim.modelSphere.center.x), 0, 0x188, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].dim.modelSphere.center.y), 0, 0x18a, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].dim.modelSphere.center.z), 0, 0x18c, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].dim.modelSphere.radius), 0, 0x18e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].dim.worldSphere.center.x), 0, 0x190, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].dim.worldSphere.center.y), 0, 0x192, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].dim.worldSphere.center.z), 0, 0x194, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].dim.worldSphere.radius), 0, 0x196, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].dim.scale), 0, 0x198, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnNy, elements[0].dim.limb), 0, 0x19c, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNy, unk_1B0[0]), offsetof(EnNy, unk_1B0[1]) - offsetof(EnNy, unk_1B0[0]), 0x1a0, 0x1, 24, 1, GZ_SPAN_VALUE },
    { offsetof(EnNy, timer), 0, 0x1b8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNy, unk_1CA), 0, 0x1ba, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNy, hitPlayer), 0, 0x1bc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNy, unk_1CE), 0, 0x1be, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnNy, unk_1D0), 0, 0x1c0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNy, unk_1D1), 0, 0x1c1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnNy, unk_1D4), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnNy, unk_1D8), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnNy, stoneTimer), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnNy, unk_1E0), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnNy, unk_1E4), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnNy, unk_1E8), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnNy, unk_1EC), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnNy, unk_1F0), 0, 0x1e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnNy, unk_1F4), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnNy, unk_1F8[0].x), offsetof(EnNy, unk_1F8[1].x) - offsetof(EnNy, unk_1F8[0].x), 0x1e8, 0xc, 16, 4, GZ_SPAN_VALUE },
    { offsetof(EnNy, unk_1F8[0].y), offsetof(EnNy, unk_1F8[1].y) - offsetof(EnNy, unk_1F8[0].y), 0x1ec, 0xc, 16, 4, GZ_SPAN_VALUE },
    { offsetof(EnNy, unk_1F8[0].z), offsetof(EnNy, unk_1F8[1].z) - offsetof(EnNy, unk_1F8[0].z), 0x1f0, 0xc, 16, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnNySpanCount = ARRAY_COUNT(gGzEnNySpans);

const GzActorFunction gGzEnNyFunctions[] = {
    { 0x0, (void*)EnNy_Init },
    { 0x13c, (void*)EnNy_Destroy },
    { 0x168, NULL },
    { 0x1b0, NULL },
    { 0x1c4, NULL },
    { 0x1e0, NULL },
    { 0x1f4, NULL },
    { 0x238, NULL },
    { 0x274, NULL },
    { 0x290, (void*)func_80ABCE50 },
    { 0x2d0, (void*)func_80ABCE90 },
    { 0x32c, (void*)func_80ABCEEC },
    { 0x38c, (void*)EnNy_Move },
    { 0x4a0, (void*)EnNy_TurnToStone },
    { 0x560, (void*)func_80ABD11C },
    { 0x5d4, NULL },
    { 0x7fc, NULL },
    { 0x8e4, (void*)EnNy_Update },
    { 0xb70, (void*)EnNy_SetupDie },
    { 0xdf4, (void*)EnNy_Die },
    { 0x1000, (void*)EnNy_UpdateDeath },
    { 0x1040, (void*)EnNy_UpdateUnused },
    { 0x1170, (void*)EnNy_Draw },
    { 0x1438, (void*)EnNy_DrawDeathEffect },
};
const size_t gGzEnNyFunctionCount = ARRAY_COUNT(gGzEnNyFunctions);
