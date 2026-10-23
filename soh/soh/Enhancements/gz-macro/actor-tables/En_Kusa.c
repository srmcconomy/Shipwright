// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Kusa/z_en_kusa.h"

void EnKusa_DropCollectible(void*, void*);
void EnKusa_SpawnFragments(void*, void*);
void EnKusa_SpawnBugs(void*, void*);
void EnKusa_InitCollider(void*, void*);
void EnKusa_Init(void*, void*);
void EnKusa_Destroy(void*, void*);
void EnKusa_WaitObject(void*, void*);
void EnKusa_Main(void*, void*);
void EnKusa_LiftedUp(void*, void*);
void EnKusa_Fall(void*, void*);
void EnKusa_CutWaitRegrow(void*, void*);
void EnKusa_DoNothing(void*, void*);
void EnKusa_UprootedWaitRegrow(void*, void*);
void EnKusa_Regrow(void*, void*);
void EnKusa_Update(void*, void*);
void EnKusa_Draw(void*, void*);

const GzActorSpan gGzEnKusaSpans[] = {
    { offsetof(EnKusa, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnKusa, collider.base.actor), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKusa, collider.base.at), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKusa, collider.base.ac), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKusa, collider.base.oc), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKusa, collider.base.atFlags), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.base.acFlags), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.base.ocFlags1), 0, 0x152, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.base.ocFlags2), 0, 0x153, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.base.colType), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.base.shape), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.info.toucher.dmgFlags), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.info.toucher.effect), 0, 0x15c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.info.toucher.damage), 0, 0x15d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.info.bumper.dmgFlags), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.info.bumper.effect), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.info.bumper.defense), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.info.bumper.hitPos.x), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.info.bumper.hitPos.y), 0, 0x168, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.info.bumper.hitPos.z), 0, 0x16a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.info.elemType), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.info.toucherFlags), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.info.bumperFlags), 0, 0x16e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.info.ocElemFlags), 0, 0x16f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.info.atHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKusa, collider.info.acHit), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKusa, collider.info.atHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKusa, collider.info.acHitInfo), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnKusa, collider.dim.radius), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.dim.height), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.dim.yShift), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.dim.pos.x), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.dim.pos.y), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKusa, collider.dim.pos.z), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKusa, timer), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnKusa, objBankIndex), 0, 0x18e, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnKusaSpanCount = ARRAY_COUNT(gGzEnKusaSpans);

const GzActorFunction gGzEnKusaFunctions[] = {
    { 0x0, NULL },
    { 0x10, NULL },
    { 0xb4, (void*)EnKusa_DropCollectible },
    { 0x180, NULL },
    { 0x1b4, NULL },
    { 0x238, NULL },
    { 0x25c, (void*)EnKusa_SpawnFragments },
    { 0x5b4, (void*)EnKusa_SpawnBugs },
    { 0x670, (void*)EnKusa_InitCollider },
    { 0x6c8, (void*)EnKusa_Init },
    { 0x7f0, (void*)EnKusa_Destroy },
    { 0x81c, NULL },
    { 0x840, (void*)EnKusa_WaitObject },
    { 0x8d0, NULL },
    { 0x908, (void*)EnKusa_Main },
    { 0xad0, NULL },
    { 0xb0c, (void*)EnKusa_LiftedUp },
    { 0xbec, NULL },
    { 0xc58, (void*)EnKusa_Fall },
    { 0xee8, NULL },
    { 0xf38, (void*)EnKusa_CutWaitRegrow },
    { 0xf6c, (void*)EnKusa_DoNothing },
    { 0xf7c, NULL },
    { 0xfe8, (void*)EnKusa_UprootedWaitRegrow },
    { 0x104c, NULL },
    { 0x10a4, (void*)EnKusa_Regrow },
    { 0x113c, (void*)EnKusa_Update },
    { 0x11a0, (void*)EnKusa_Draw },
};
const size_t gGzEnKusaFunctionCount = ARRAY_COUNT(gGzEnKusaFunctions);
