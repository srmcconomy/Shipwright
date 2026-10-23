// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Ydan_Sp/z_bg_ydan_sp.h"

void BgYdanSp_Init(void*, void*);
void BgYdanSp_Destroy(void*, void*);
void BgYdanSp_BurnWeb(void*, void*);
void BgYdanSp_BurnFloorWeb(void*, void*);
void BgYdanSp_FloorWebBroken(void*, void*);
void BgYdanSp_FloorWebBreaking(void*, void*);
void BgYdanSp_FloorWebIdle(void*, void*);
void BgYdanSp_BurnWallWeb(void*, void*);
void BgYdanSp_WallWebIdle(void*, void*);
void BgYdanSp_Update(void*, void*);
void BgYdanSp_Draw(void*, void*);

const GzActorSpan gGzBgYdanSpSpans[] = {
    { offsetof(BgYdanSp, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgYdanSp, isDestroyedSwitchFlag), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, burnSwitchFlag), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, timer), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, unk_16C), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisCollider.base.actor), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanSp, trisCollider.base.at), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanSp, trisCollider.base.ac), 0, 0x168, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanSp, trisCollider.base.oc), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanSp, trisCollider.base.atFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisCollider.base.acFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisCollider.base.ocFlags1), 0, 0x172, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisCollider.base.ocFlags2), 0, 0x173, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisCollider.base.colType), 0, 0x174, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisCollider.base.shape), 0, 0x175, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisCollider.count), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisCollider.elements), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanSp, trisColliderItems[0].info.toucher.dmgFlags), 0, 0x180, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[0].info.toucher.effect), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[0].info.toucher.damage), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[0].info.bumper.dmgFlags), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[0].info.bumper.effect), 0, 0x18c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[0].info.bumper.defense), 0, 0x18d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[0].info.bumper.hitPos.x), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[0].info.bumper.hitPos.y), 0, 0x190, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[0].info.bumper.hitPos.z), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[0].info.elemType), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[0].info.toucherFlags), 0, 0x195, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[0].info.bumperFlags), 0, 0x196, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[0].info.ocElemFlags), 0, 0x197, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[0].info.atHit), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanSp, trisColliderItems[0].info.acHit), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanSp, trisColliderItems[0].info.atHitInfo), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanSp, trisColliderItems[0].info.acHitInfo), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanSp, trisColliderItems[0].dim.vtx[0].x), offsetof(BgYdanSp, trisColliderItems[0].dim.vtx[1].x) - offsetof(BgYdanSp, trisColliderItems[0].dim.vtx[0].x), 0x1a8, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[0].dim.vtx[0].y), offsetof(BgYdanSp, trisColliderItems[0].dim.vtx[1].y) - offsetof(BgYdanSp, trisColliderItems[0].dim.vtx[0].y), 0x1ac, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[0].dim.vtx[0].z), offsetof(BgYdanSp, trisColliderItems[0].dim.vtx[1].z) - offsetof(BgYdanSp, trisColliderItems[0].dim.vtx[0].z), 0x1b0, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[0].dim.plane.normal.x), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[0].dim.plane.normal.y), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[0].dim.plane.normal.z), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[0].dim.plane.originDist), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].info.toucher.dmgFlags), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].info.toucher.effect), 0, 0x1e0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].info.toucher.damage), 0, 0x1e1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].info.bumper.dmgFlags), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].info.bumper.effect), 0, 0x1e8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].info.bumper.defense), 0, 0x1e9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].info.bumper.hitPos.x), 0, 0x1ea, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].info.bumper.hitPos.y), 0, 0x1ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].info.bumper.hitPos.z), 0, 0x1ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].info.elemType), 0, 0x1f0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].info.toucherFlags), 0, 0x1f1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].info.bumperFlags), 0, 0x1f2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].info.ocElemFlags), 0, 0x1f3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].info.atHit), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanSp, trisColliderItems[1].info.acHit), 0, 0x1f8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanSp, trisColliderItems[1].info.atHitInfo), 0, 0x1fc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanSp, trisColliderItems[1].info.acHitInfo), 0, 0x200, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgYdanSp, trisColliderItems[1].dim.vtx[0].x), offsetof(BgYdanSp, trisColliderItems[1].dim.vtx[1].x) - offsetof(BgYdanSp, trisColliderItems[1].dim.vtx[0].x), 0x204, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].dim.vtx[0].y), offsetof(BgYdanSp, trisColliderItems[1].dim.vtx[1].y) - offsetof(BgYdanSp, trisColliderItems[1].dim.vtx[0].y), 0x208, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].dim.vtx[0].z), offsetof(BgYdanSp, trisColliderItems[1].dim.vtx[1].z) - offsetof(BgYdanSp, trisColliderItems[1].dim.vtx[0].z), 0x20c, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].dim.plane.normal.x), 0, 0x228, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].dim.plane.normal.y), 0, 0x22c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].dim.plane.normal.z), 0, 0x230, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgYdanSp, trisColliderItems[1].dim.plane.originDist), 0, 0x234, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgYdanSpSpanCount = ARRAY_COUNT(gGzBgYdanSpSpans);

const GzActorFunction gGzBgYdanSpFunctions[] = {
    { 0x0, (void*)BgYdanSp_Init },
    { 0x3e8, (void*)BgYdanSp_Destroy },
    { 0x430, NULL },
    { 0x504, (void*)BgYdanSp_BurnWeb },
    { 0x574, (void*)BgYdanSp_BurnFloorWeb },
    { 0x848, (void*)BgYdanSp_FloorWebBroken },
    { 0x888, (void*)BgYdanSp_FloorWebBreaking },
    { 0xa48, (void*)BgYdanSp_FloorWebIdle },
    { 0xd24, (void*)BgYdanSp_BurnWallWeb },
    { 0x105c, (void*)BgYdanSp_WallWebIdle },
    { 0x119c, (void*)BgYdanSp_Update },
    { 0x11c0, (void*)BgYdanSp_Draw },
};
const size_t gGzBgYdanSpFunctionCount = ARRAY_COUNT(gGzBgYdanSpFunctions);
