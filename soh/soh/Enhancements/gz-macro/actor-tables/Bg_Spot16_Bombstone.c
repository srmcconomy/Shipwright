// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Spot16_Bombstone/z_bg_spot16_bombstone.h"

void func_808B4C4C(void*, void*);
void func_808B4D04(void*, void*);
s32 func_808B4D9C(void*, void*);
s32 func_808B4E58(void*, void*);
void BgSpot16Bombstone_Init(void*, void*);
void BgSpot16Bombstone_Destroy(void*, void*);
void BgSpot16Bombstone_SpawnDust(void*, void*);
void func_808B5240(void*, void*);
void BgSpot16Bombstone_SpawnFragments(void*, void*);
void func_808B561C(void*, void*);
void func_808B56BC(void*, void*);
void func_808B57E0(void*, void*);
void func_808B5950(void*, void*);
void func_808B5A94(void*, void*);
void func_808B5B04(void*, void*);
void func_808B5B6C(void*, void*);
void BgSpot16Bombstone_Update(void*, void*);
void BgSpot16Bombstone_Draw(void*, void*);

const GzActorSpan gGzBgSpot16BombstoneSpans[] = {
    { offsetof(BgSpot16Bombstone, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgSpot16Bombstone, dList), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot16Bombstone, unk_154), 0, 0x144, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, switchFlag), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, unk_158), 0, 0x148, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, sinRotation), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, cosRotation), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderJntSph.base.actor), 0, 0x154, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot16Bombstone, colliderJntSph.base.at), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot16Bombstone, colliderJntSph.base.ac), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot16Bombstone, colliderJntSph.base.oc), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot16Bombstone, colliderJntSph.base.atFlags), 0, 0x164, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderJntSph.base.acFlags), 0, 0x165, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderJntSph.base.ocFlags1), 0, 0x166, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderJntSph.base.ocFlags2), 0, 0x167, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderJntSph.base.colType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderJntSph.base.shape), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderJntSph.count), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderJntSph.elements), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot16Bombstone, colliderElements[0].info.toucher.dmgFlags), 0, 0x174, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].info.toucher.effect), 0, 0x178, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].info.toucher.damage), 0, 0x179, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].info.bumper.dmgFlags), 0, 0x17c, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].info.bumper.effect), 0, 0x180, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].info.bumper.defense), 0, 0x181, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].info.bumper.hitPos.x), 0, 0x182, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].info.bumper.hitPos.y), 0, 0x184, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].info.bumper.hitPos.z), 0, 0x186, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].info.elemType), 0, 0x188, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].info.toucherFlags), 0, 0x189, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].info.bumperFlags), 0, 0x18a, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].info.ocElemFlags), 0, 0x18b, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].info.atHit), 0, 0x18c, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot16Bombstone, colliderElements[0].info.acHit), 0, 0x190, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot16Bombstone, colliderElements[0].info.atHitInfo), 0, 0x194, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot16Bombstone, colliderElements[0].info.acHitInfo), 0, 0x198, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot16Bombstone, colliderElements[0].dim.modelSphere.center.x), 0, 0x19c, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].dim.modelSphere.center.y), 0, 0x19e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].dim.modelSphere.center.z), 0, 0x1a0, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].dim.modelSphere.radius), 0, 0x1a2, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].dim.worldSphere.center.x), 0, 0x1a4, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].dim.worldSphere.center.y), 0, 0x1a6, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].dim.worldSphere.center.z), 0, 0x1a8, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].dim.worldSphere.radius), 0, 0x1aa, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].dim.scale), 0, 0x1ac, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderElements[0].dim.limb), 0, 0x1b0, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.base.actor), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot16Bombstone, colliderCylinder.base.at), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot16Bombstone, colliderCylinder.base.ac), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot16Bombstone, colliderCylinder.base.oc), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot16Bombstone, colliderCylinder.base.atFlags), 0, 0x1c4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.base.acFlags), 0, 0x1c5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.base.ocFlags1), 0, 0x1c6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.base.ocFlags2), 0, 0x1c7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.base.colType), 0, 0x1c8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.base.shape), 0, 0x1c9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.info.toucher.dmgFlags), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.info.toucher.effect), 0, 0x1d0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.info.toucher.damage), 0, 0x1d1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.info.bumper.dmgFlags), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.info.bumper.effect), 0, 0x1d8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.info.bumper.defense), 0, 0x1d9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.info.bumper.hitPos.x), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.info.bumper.hitPos.y), 0, 0x1dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.info.bumper.hitPos.z), 0, 0x1de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.info.elemType), 0, 0x1e0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.info.toucherFlags), 0, 0x1e1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.info.bumperFlags), 0, 0x1e2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.info.ocElemFlags), 0, 0x1e3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.info.atHit), 0, 0x1e4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot16Bombstone, colliderCylinder.info.acHit), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot16Bombstone, colliderCylinder.info.atHitInfo), 0, 0x1ec, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot16Bombstone, colliderCylinder.info.acHitInfo), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgSpot16Bombstone, colliderCylinder.dim.radius), 0, 0x1f4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.dim.height), 0, 0x1f6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.dim.yShift), 0, 0x1f8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.dim.pos.x), 0, 0x1fa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.dim.pos.y), 0, 0x1fc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, colliderCylinder.dim.pos.z), 0, 0x1fe, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, unk_210), 0, 0x200, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, unk_212), 0, 0x202, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgSpot16Bombstone, bombiwaBankIndex), 0, 0x204, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzBgSpot16BombstoneSpanCount = ARRAY_COUNT(gGzBgSpot16BombstoneSpans);

const GzActorFunction gGzBgSpot16BombstoneFunctions[] = {
    { 0x0, NULL },
    { 0x20, (void*)func_808B4C4C },
    { 0xd4, (void*)func_808B4D04 },
    { 0x168, (void*)func_808B4D9C },
    { 0x218, (void*)func_808B4E58 },
    { 0x414, (void*)BgSpot16Bombstone_Init },
    { 0x4c8, (void*)BgSpot16Bombstone_Destroy },
    { 0x514, (void*)BgSpot16Bombstone_SpawnDust },
    { 0x5b0, (void*)func_808B5240 },
    { 0x718, (void*)BgSpot16Bombstone_SpawnFragments },
    { 0x990, (void*)func_808B561C },
    { 0xa30, (void*)func_808B56BC },
    { 0xb2c, (void*)func_808B57E0 },
    { 0xc84, NULL },
    { 0xca4, (void*)func_808B5950 },
    { 0xd90, NULL },
    { 0xdb0, (void*)func_808B5A94 },
    { 0xe14, NULL },
    { 0xe2c, (void*)func_808B5B04 },
    { 0xe84, NULL },
    { 0xe9c, (void*)func_808B5B6C },
    { 0xf98, (void*)BgSpot16Bombstone_Update },
    { 0xfcc, (void*)BgSpot16Bombstone_Draw },
};
const size_t gGzBgSpot16BombstoneFunctionCount = ARRAY_COUNT(gGzBgSpot16BombstoneFunctions);
