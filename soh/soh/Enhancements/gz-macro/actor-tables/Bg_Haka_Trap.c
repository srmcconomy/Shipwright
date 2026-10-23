// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Haka_Trap/z_bg_haka_trap.h"

void BgHakaTrap_Init(void*, void*);
void BgHakaTrap_Destroy(void*, void*);
void BgHakaTrap_UpdateBodyColliderPos(void*, void*);
void BgHakaTrap_SpikedWall_CloseIn(void*, void*);
void BgHakaTrap_SpikedWall_Burn(void*, void*);
void BgHakaTrap_Guillotine_Fall(void*, void*);
void BgHakaTrap_Guillotine_Lift(void*, void*);
void BgHakaTrap_SpikedCrusher_Fall(void*, void*);
void BgHakaTrap_SpikedCrusher_Lift(void*, void*);
void BgHakaTrap_FanBlade_Idle(void*, void*);
void BgHakaTrap_FireBarrier_Idle(void*, void*);
void BgHakaTrap_FireBarrier_UpdateLayout(void*, void*);
void BgHakaTrap_Update(void*, void*);
void BgHakaTrap_Draw(void*, void*);

const GzActorSpan gGzBgHakaTrapSpans[] = {
    { offsetof(BgHakaTrap, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgHakaTrap, timer), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, isSpikedCrusherStationary), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, unk_16A), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, chainLiftSfxPos.x), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, chainLiftSfxPos.y), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, chainLiftSfxPos.z), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.base.actor), 0, 0x168, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderCylinder.base.at), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderCylinder.base.ac), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderCylinder.base.oc), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderCylinder.base.atFlags), 0, 0x178, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.base.acFlags), 0, 0x179, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.base.ocFlags1), 0, 0x17a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.base.ocFlags2), 0, 0x17b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.base.colType), 0, 0x17c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.base.shape), 0, 0x17d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.info.toucher.dmgFlags), 0, 0x180, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.info.toucher.effect), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.info.toucher.damage), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.info.bumper.dmgFlags), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.info.bumper.effect), 0, 0x18c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.info.bumper.defense), 0, 0x18d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.info.bumper.hitPos.x), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.info.bumper.hitPos.y), 0, 0x190, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.info.bumper.hitPos.z), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.info.elemType), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.info.toucherFlags), 0, 0x195, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.info.bumperFlags), 0, 0x196, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.info.ocElemFlags), 0, 0x197, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.info.atHit), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderCylinder.info.acHit), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderCylinder.info.atHitInfo), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderCylinder.info.acHitInfo), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderCylinder.dim.radius), 0, 0x1a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.dim.height), 0, 0x1aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.dim.yShift), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.dim.pos.x), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.dim.pos.y), 0, 0x1b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderCylinder.dim.pos.z), 0, 0x1b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikes.base.actor), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderSpikes.base.at), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderSpikes.base.ac), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderSpikes.base.oc), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderSpikes.base.atFlags), 0, 0x1c4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikes.base.acFlags), 0, 0x1c5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikes.base.ocFlags1), 0, 0x1c6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikes.base.ocFlags2), 0, 0x1c7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikes.base.colType), 0, 0x1c8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikes.base.shape), 0, 0x1c9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikes.count), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikes.elements), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].info.toucher.dmgFlags), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].info.toucher.effect), 0, 0x1d8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].info.toucher.damage), 0, 0x1d9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].info.bumper.dmgFlags), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].info.bumper.effect), 0, 0x1e0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].info.bumper.defense), 0, 0x1e1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].info.bumper.hitPos.x), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].info.bumper.hitPos.y), 0, 0x1e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].info.bumper.hitPos.z), 0, 0x1e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].info.elemType), 0, 0x1e8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].info.toucherFlags), 0, 0x1e9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].info.bumperFlags), 0, 0x1ea, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].info.ocElemFlags), 0, 0x1eb, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].info.atHit), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].info.acHit), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].info.atHitInfo), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].info.acHitInfo), 0, 0x1f8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].dim.vtx[0].x), offsetof(BgHakaTrap, colliderSpikesItem[0].dim.vtx[1].x) - offsetof(BgHakaTrap, colliderSpikesItem[0].dim.vtx[0].x), 0x1fc, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].dim.vtx[0].y), offsetof(BgHakaTrap, colliderSpikesItem[0].dim.vtx[1].y) - offsetof(BgHakaTrap, colliderSpikesItem[0].dim.vtx[0].y), 0x200, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].dim.vtx[0].z), offsetof(BgHakaTrap, colliderSpikesItem[0].dim.vtx[1].z) - offsetof(BgHakaTrap, colliderSpikesItem[0].dim.vtx[0].z), 0x204, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].dim.plane.normal.x), 0, 0x220, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].dim.plane.normal.y), 0, 0x224, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].dim.plane.normal.z), 0, 0x228, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[0].dim.plane.originDist), 0, 0x22c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].info.toucher.dmgFlags), 0, 0x230, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].info.toucher.effect), 0, 0x234, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].info.toucher.damage), 0, 0x235, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].info.bumper.dmgFlags), 0, 0x238, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].info.bumper.effect), 0, 0x23c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].info.bumper.defense), 0, 0x23d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].info.bumper.hitPos.x), 0, 0x23e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].info.bumper.hitPos.y), 0, 0x240, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].info.bumper.hitPos.z), 0, 0x242, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].info.elemType), 0, 0x244, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].info.toucherFlags), 0, 0x245, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].info.bumperFlags), 0, 0x246, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].info.ocElemFlags), 0, 0x247, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].info.atHit), 0, 0x248, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].info.acHit), 0, 0x24c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].info.atHitInfo), 0, 0x250, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].info.acHitInfo), 0, 0x254, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].dim.vtx[0].x), offsetof(BgHakaTrap, colliderSpikesItem[1].dim.vtx[1].x) - offsetof(BgHakaTrap, colliderSpikesItem[1].dim.vtx[0].x), 0x258, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].dim.vtx[0].y), offsetof(BgHakaTrap, colliderSpikesItem[1].dim.vtx[1].y) - offsetof(BgHakaTrap, colliderSpikesItem[1].dim.vtx[0].y), 0x25c, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].dim.vtx[0].z), offsetof(BgHakaTrap, colliderSpikesItem[1].dim.vtx[1].z) - offsetof(BgHakaTrap, colliderSpikesItem[1].dim.vtx[0].z), 0x260, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].dim.plane.normal.x), 0, 0x27c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].dim.plane.normal.y), 0, 0x280, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].dim.plane.normal.z), 0, 0x284, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaTrap, colliderSpikesItem[1].dim.plane.originDist), 0, 0x288, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgHakaTrapSpanCount = ARRAY_COUNT(gGzBgHakaTrapSpans);

const GzActorFunction gGzBgHakaTrapFunctions[] = {
    { 0x0, (void*)BgHakaTrap_Init },
    { 0x2a0, (void*)BgHakaTrap_Destroy },
    { 0x324, (void*)BgHakaTrap_UpdateBodyColliderPos },
    { 0x524, (void*)BgHakaTrap_SpikedWall_CloseIn },
    { 0x648, (void*)BgHakaTrap_SpikedWall_Burn },
    { 0x7f4, (void*)BgHakaTrap_Guillotine_Fall },
    { 0x930, (void*)BgHakaTrap_Guillotine_Lift },
    { 0xa2c, (void*)BgHakaTrap_SpikedCrusher_Fall },
    { 0xc64, (void*)BgHakaTrap_SpikedCrusher_Lift },
    { 0xd24, (void*)BgHakaTrap_FanBlade_Idle },
    { 0xd58, NULL },
    { 0xe64, (void*)BgHakaTrap_FireBarrier_Idle },
    { 0xf88, (void*)BgHakaTrap_FireBarrier_UpdateLayout },
    { 0xffc, (void*)BgHakaTrap_Update },
    { 0x10ec, NULL },
    { 0x1188, (void*)BgHakaTrap_Draw },
};
const size_t gGzBgHakaTrapFunctionCount = ARRAY_COUNT(gGzBgHakaTrapFunctions);
