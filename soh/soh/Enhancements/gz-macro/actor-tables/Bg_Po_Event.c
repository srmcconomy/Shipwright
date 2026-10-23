// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Po_Event/z_bg_po_event.h"

void BgPoEvent_InitPaintings(void*, void*);
void BgPoEvent_InitBlocks(void*, void*);
void BgPoEvent_Init(void*, void*);
void BgPoEvent_Destroy(void*, void*);
void BgPoEvent_BlockWait(void*, void*);
void BgPoEvent_BlockShake(void*, void*);
void BgPoEvent_BlockFall(void*, void*);
void BgPoEvent_BlockIdle(void*, void*);
void BgPoEvent_BlockPush(void*, void*);
void BgPoEvent_BlockReset(void*, void*);
void BgPoEvent_BlockSolved(void*, void*);
void BgPoEvent_AmyWait(void*, void*);
void BgPoEvent_AmyPuzzle(void*, void*);
void BgPoEvent_PaintingEmpty(void*, void*);
void BgPoEvent_PaintingAppear(void*, void*);
void BgPoEvent_PaintingVanish(void*, void*);
void BgPoEvent_PaintingPresent(void*, void*);
void BgPoEvent_PaintingBurn(void*, void*);
void BgPoEvent_Update(void*, void*);
void BgPoEvent_Draw(void*, void*);

const GzActorSpan gGzBgPoEventSpans[] = {
    { offsetof(BgPoEvent, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgPoEvent, type), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, index), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, direction), 0, 0x15a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, timer), 0, 0x15c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, collider.base.actor), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoEvent, collider.base.at), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoEvent, collider.base.ac), 0, 0x168, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoEvent, collider.base.oc), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoEvent, collider.base.atFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, collider.base.acFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, collider.base.ocFlags1), 0, 0x172, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, collider.base.ocFlags2), 0, 0x173, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, collider.base.colType), 0, 0x174, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, collider.base.shape), 0, 0x175, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, collider.count), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, collider.elements), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoEvent, colliderItems[0].info.toucher.dmgFlags), 0, 0x180, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[0].info.toucher.effect), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[0].info.toucher.damage), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[0].info.bumper.dmgFlags), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[0].info.bumper.effect), 0, 0x18c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[0].info.bumper.defense), 0, 0x18d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[0].info.bumper.hitPos.x), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[0].info.bumper.hitPos.y), 0, 0x190, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[0].info.bumper.hitPos.z), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[0].info.elemType), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[0].info.toucherFlags), 0, 0x195, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[0].info.bumperFlags), 0, 0x196, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[0].info.ocElemFlags), 0, 0x197, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[0].info.atHit), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoEvent, colliderItems[0].info.acHit), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoEvent, colliderItems[0].info.atHitInfo), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoEvent, colliderItems[0].info.acHitInfo), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoEvent, colliderItems[0].dim.vtx[0].x), offsetof(BgPoEvent, colliderItems[0].dim.vtx[1].x) - offsetof(BgPoEvent, colliderItems[0].dim.vtx[0].x), 0x1a8, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[0].dim.vtx[0].y), offsetof(BgPoEvent, colliderItems[0].dim.vtx[1].y) - offsetof(BgPoEvent, colliderItems[0].dim.vtx[0].y), 0x1ac, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[0].dim.vtx[0].z), offsetof(BgPoEvent, colliderItems[0].dim.vtx[1].z) - offsetof(BgPoEvent, colliderItems[0].dim.vtx[0].z), 0x1b0, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[0].dim.plane.normal.x), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[0].dim.plane.normal.y), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[0].dim.plane.normal.z), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[0].dim.plane.originDist), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].info.toucher.dmgFlags), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].info.toucher.effect), 0, 0x1e0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].info.toucher.damage), 0, 0x1e1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].info.bumper.dmgFlags), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].info.bumper.effect), 0, 0x1e8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].info.bumper.defense), 0, 0x1e9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].info.bumper.hitPos.x), 0, 0x1ea, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].info.bumper.hitPos.y), 0, 0x1ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].info.bumper.hitPos.z), 0, 0x1ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].info.elemType), 0, 0x1f0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].info.toucherFlags), 0, 0x1f1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].info.bumperFlags), 0, 0x1f2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].info.ocElemFlags), 0, 0x1f3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].info.atHit), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoEvent, colliderItems[1].info.acHit), 0, 0x1f8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoEvent, colliderItems[1].info.atHitInfo), 0, 0x1fc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoEvent, colliderItems[1].info.acHitInfo), 0, 0x200, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgPoEvent, colliderItems[1].dim.vtx[0].x), offsetof(BgPoEvent, colliderItems[1].dim.vtx[1].x) - offsetof(BgPoEvent, colliderItems[1].dim.vtx[0].x), 0x204, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].dim.vtx[0].y), offsetof(BgPoEvent, colliderItems[1].dim.vtx[1].y) - offsetof(BgPoEvent, colliderItems[1].dim.vtx[0].y), 0x208, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].dim.vtx[0].z), offsetof(BgPoEvent, colliderItems[1].dim.vtx[1].z) - offsetof(BgPoEvent, colliderItems[1].dim.vtx[0].z), 0x20c, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].dim.plane.normal.x), 0, 0x228, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].dim.plane.normal.y), 0, 0x22c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].dim.plane.normal.z), 0, 0x230, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgPoEvent, colliderItems[1].dim.plane.originDist), 0, 0x234, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgPoEventSpanCount = ARRAY_COUNT(gGzBgPoEventSpans);

const GzActorFunction gGzBgPoEventFunctions[] = {
    { 0x0, (void*)BgPoEvent_InitPaintings },
    { 0x37c, (void*)BgPoEvent_InitBlocks },
    { 0x52c, (void*)BgPoEvent_Init },
    { 0x63c, (void*)BgPoEvent_Destroy },
    { 0x6c0, (void*)BgPoEvent_BlockWait },
    { 0x7cc, (void*)BgPoEvent_BlockShake },
    { 0x884, NULL },
    { 0x9bc, (void*)BgPoEvent_BlockFall },
    { 0xac0, (void*)BgPoEvent_BlockIdle },
    { 0xd74, (void*)BgPoEvent_BlockPush },
    { 0xf34, (void*)BgPoEvent_BlockReset },
    { 0x1034, (void*)BgPoEvent_BlockSolved },
    { 0x10ac, (void*)BgPoEvent_AmyWait },
    { 0x1128, (void*)BgPoEvent_AmyPuzzle },
    { 0x1244, NULL },
    { 0x1300, (void*)BgPoEvent_PaintingEmpty },
    { 0x1330, (void*)BgPoEvent_PaintingAppear },
    { 0x1368, (void*)BgPoEvent_PaintingVanish },
    { 0x13b8, (void*)BgPoEvent_PaintingPresent },
    { 0x1614, (void*)BgPoEvent_PaintingBurn },
    { 0x17c0, (void*)BgPoEvent_Update },
    { 0x1830, (void*)BgPoEvent_Draw },
};
const size_t gGzBgPoEventFunctionCount = ARRAY_COUNT(gGzBgPoEventFunctions);
