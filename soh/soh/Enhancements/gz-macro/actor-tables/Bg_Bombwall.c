// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Bombwall/z_bg_bombwall.h"

void BgBombwall_InitDynapoly(void*, void*);
void BgBombwall_Init(void*, void*);
void BgBombwall_DestroyCollision(void*, void*);
void BgBombwall_Destroy(void*, void*);
void func_8086EB5C(void*, void*);
void func_8086ED50(void*, void*);
void func_8086ED70(void*, void*);
void func_8086EDFC(void*, void*);
void func_8086EE40(void*, void*);
void func_8086EE94(void*, void*);
void BgBombwall_Update(void*, void*);
void BgBombwall_Draw(void*, void*);

const GzActorSpan gGzBgBombwallSpans[] = {
    { offsetof(BgBombwall, collider.base.actor), 0, 0x154, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBombwall, collider.base.at), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBombwall, collider.base.ac), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBombwall, collider.base.oc), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBombwall, collider.base.atFlags), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, collider.base.acFlags), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, collider.base.ocFlags1), 0, 0x166, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, collider.base.ocFlags2), 0, 0x167, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, collider.base.colType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, collider.base.shape), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, collider.count), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, collider.elements), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBombwall, colliderItems[0].info.toucher.dmgFlags), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[0].info.toucher.effect), 0, 0x178, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[0].info.toucher.damage), 0, 0x179, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[0].info.bumper.dmgFlags), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[0].info.bumper.effect), 0, 0x180, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[0].info.bumper.defense), 0, 0x181, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[0].info.bumper.hitPos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[0].info.bumper.hitPos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[0].info.bumper.hitPos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[0].info.elemType), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[0].info.toucherFlags), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[0].info.bumperFlags), 0, 0x18a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[0].info.ocElemFlags), 0, 0x18b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[0].info.atHit), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBombwall, colliderItems[0].info.acHit), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBombwall, colliderItems[0].info.atHitInfo), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBombwall, colliderItems[0].info.acHitInfo), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBombwall, colliderItems[0].dim.vtx[0].x), offsetof(BgBombwall, colliderItems[0].dim.vtx[1].x) - offsetof(BgBombwall, colliderItems[0].dim.vtx[0].x), 0x19c, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[0].dim.vtx[0].y), offsetof(BgBombwall, colliderItems[0].dim.vtx[1].y) - offsetof(BgBombwall, colliderItems[0].dim.vtx[0].y), 0x1a0, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[0].dim.vtx[0].z), offsetof(BgBombwall, colliderItems[0].dim.vtx[1].z) - offsetof(BgBombwall, colliderItems[0].dim.vtx[0].z), 0x1a4, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[0].dim.plane.normal.x), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[0].dim.plane.normal.y), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[0].dim.plane.normal.z), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[0].dim.plane.originDist), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].info.toucher.dmgFlags), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].info.toucher.effect), 0, 0x1d4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].info.toucher.damage), 0, 0x1d5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].info.bumper.dmgFlags), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].info.bumper.effect), 0, 0x1dc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].info.bumper.defense), 0, 0x1dd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].info.bumper.hitPos.x), 0, 0x1de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].info.bumper.hitPos.y), 0, 0x1e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].info.bumper.hitPos.z), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].info.elemType), 0, 0x1e4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].info.toucherFlags), 0, 0x1e5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].info.bumperFlags), 0, 0x1e6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].info.ocElemFlags), 0, 0x1e7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].info.atHit), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBombwall, colliderItems[1].info.acHit), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBombwall, colliderItems[1].info.atHitInfo), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBombwall, colliderItems[1].info.acHitInfo), 0, 0x1f4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBombwall, colliderItems[1].dim.vtx[0].x), offsetof(BgBombwall, colliderItems[1].dim.vtx[1].x) - offsetof(BgBombwall, colliderItems[1].dim.vtx[0].x), 0x1f8, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].dim.vtx[0].y), offsetof(BgBombwall, colliderItems[1].dim.vtx[1].y) - offsetof(BgBombwall, colliderItems[1].dim.vtx[0].y), 0x1fc, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].dim.vtx[0].z), offsetof(BgBombwall, colliderItems[1].dim.vtx[1].z) - offsetof(BgBombwall, colliderItems[1].dim.vtx[0].z), 0x200, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].dim.plane.normal.x), 0, 0x21c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].dim.plane.normal.y), 0, 0x220, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].dim.plane.normal.z), 0, 0x224, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[1].dim.plane.originDist), 0, 0x228, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].info.toucher.dmgFlags), 0, 0x22c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].info.toucher.effect), 0, 0x230, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].info.toucher.damage), 0, 0x231, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].info.bumper.dmgFlags), 0, 0x234, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].info.bumper.effect), 0, 0x238, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].info.bumper.defense), 0, 0x239, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].info.bumper.hitPos.x), 0, 0x23a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].info.bumper.hitPos.y), 0, 0x23c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].info.bumper.hitPos.z), 0, 0x23e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].info.elemType), 0, 0x240, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].info.toucherFlags), 0, 0x241, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].info.bumperFlags), 0, 0x242, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].info.ocElemFlags), 0, 0x243, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].info.atHit), 0, 0x244, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBombwall, colliderItems[2].info.acHit), 0, 0x248, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBombwall, colliderItems[2].info.atHitInfo), 0, 0x24c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBombwall, colliderItems[2].info.acHitInfo), 0, 0x250, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBombwall, colliderItems[2].dim.vtx[0].x), offsetof(BgBombwall, colliderItems[2].dim.vtx[1].x) - offsetof(BgBombwall, colliderItems[2].dim.vtx[0].x), 0x254, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].dim.vtx[0].y), offsetof(BgBombwall, colliderItems[2].dim.vtx[1].y) - offsetof(BgBombwall, colliderItems[2].dim.vtx[0].y), 0x258, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].dim.vtx[0].z), offsetof(BgBombwall, colliderItems[2].dim.vtx[1].z) - offsetof(BgBombwall, colliderItems[2].dim.vtx[0].z), 0x25c, 0xc, 3, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].dim.plane.normal.x), 0, 0x278, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].dim.plane.normal.y), 0, 0x27c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].dim.plane.normal.z), 0, 0x280, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, colliderItems[2].dim.plane.originDist), 0, 0x284, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, actionFunc), 0, 0x288, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgBombwall, dList), 0, 0x28c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBombwall, unk_2A0), 0, 0x290, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, unk_2A2), 0, 0x292, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBombwall, unk_2A3), 0, 0x293, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgBombwallSpanCount = ARRAY_COUNT(gGzBgBombwallSpans);

const GzActorFunction gGzBgBombwallFunctions[] = {
    { 0x0, (void*)BgBombwall_InitDynapoly },
    { 0x58, NULL },
    { 0xac, (void*)BgBombwall_Init },
    { 0x2bc, (void*)BgBombwall_DestroyCollision },
    { 0x338, (void*)BgBombwall_Destroy },
    { 0x358, (void*)func_8086EB5C },
    { 0x54c, (void*)func_8086ED50 },
    { 0x570, (void*)func_8086ED70 },
    { 0x600, (void*)func_8086EDFC },
    { 0x644, (void*)func_8086EE40 },
    { 0x698, (void*)func_8086EE94 },
    { 0x6c8, (void*)BgBombwall_Update },
    { 0x6f4, (void*)BgBombwall_Draw },
};
const size_t gGzBgBombwallFunctionCount = ARRAY_COUNT(gGzBgBombwallFunctions);
