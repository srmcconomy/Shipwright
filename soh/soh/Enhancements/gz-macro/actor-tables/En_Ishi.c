// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Ishi/z_en_ishi.h"

void EnIshi_InitCollider(void*, void*);
void EnIshi_SpawnFragmentsSmall(void*, void*);
void EnIshi_SpawnFragmentsLarge(void*, void*);
void EnIshi_SpawnDustSmall(void*, void*);
void EnIshi_SpawnDustLarge(void*, void*);
void EnIshi_DropCollectible(void*, void*);
void EnIshi_SpawnBugs(void*, void*);
void EnIshi_Init(void*, void*);
void EnIshi_Destroy(void*, void*);
void EnIshi_Wait(void*, void*);
void EnIshi_LiftedUp(void*, void*);
void EnIshi_Fly(void*, void*);
void EnIshi_Update(void*, void*);
void EnIshi_DrawSmall(void*, void*);
void EnIshi_DrawLarge(void*, void*);
void EnIshi_Draw(void*, void*);

const GzActorSpan gGzEnIshiSpans[] = {
    { offsetof(EnIshi, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnIshi, collider.base.actor), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIshi, collider.base.at), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIshi, collider.base.ac), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIshi, collider.base.oc), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIshi, collider.base.atFlags), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.base.acFlags), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.base.ocFlags1), 0, 0x152, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.base.ocFlags2), 0, 0x153, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.base.colType), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.base.shape), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.info.toucher.dmgFlags), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.info.toucher.effect), 0, 0x15c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.info.toucher.damage), 0, 0x15d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.info.bumper.dmgFlags), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.info.bumper.effect), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.info.bumper.defense), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.info.bumper.hitPos.x), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.info.bumper.hitPos.y), 0, 0x168, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.info.bumper.hitPos.z), 0, 0x16a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.info.elemType), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.info.toucherFlags), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.info.bumperFlags), 0, 0x16e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.info.ocElemFlags), 0, 0x16f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.info.atHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIshi, collider.info.acHit), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIshi, collider.info.atHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIshi, collider.info.acHitInfo), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnIshi, collider.dim.radius), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.dim.height), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.dim.yShift), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.dim.pos.x), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.dim.pos.y), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnIshi, collider.dim.pos.z), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnIshiSpanCount = ARRAY_COUNT(gGzEnIshiSpans);

const GzActorFunction gGzEnIshiFunctions[] = {
    { 0x0, (void*)EnIshi_InitCollider },
    { 0x78, NULL },
    { 0x11c, (void*)EnIshi_SpawnFragmentsSmall },
    { 0x398, (void*)EnIshi_SpawnFragmentsLarge },
    { 0x684, (void*)EnIshi_SpawnDustSmall },
    { 0x778, (void*)EnIshi_SpawnDustLarge },
    { 0x86c, (void*)EnIshi_DropCollectible },
    { 0x8dc, NULL },
    { 0x910, NULL },
    { 0x994, (void*)EnIshi_SpawnBugs },
    { 0xa50, (void*)EnIshi_Init },
    { 0xbec, (void*)EnIshi_Destroy },
    { 0xc18, NULL },
    { 0xc2c, (void*)EnIshi_Wait },
    { 0xe84, NULL },
    { 0xeac, (void*)EnIshi_LiftedUp },
    { 0xf80, NULL },
    { 0x10ac, (void*)EnIshi_Fly },
    { 0x1418, (void*)EnIshi_Update },
    { 0x143c, (void*)EnIshi_DrawSmall },
    { 0x146c, (void*)EnIshi_DrawLarge },
    { 0x1510, (void*)EnIshi_Draw },
};
const size_t gGzEnIshiFunctionCount = ARRAY_COUNT(gGzEnIshiFunctions);
