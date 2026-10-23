// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Ice_Shelter/z_bg_ice_shelter.h"

void BgIceShelter_InitColliders(void*, void*);
void BgIceShelter_Init(void*, void*);
void BgIceShelter_Destroy(void*, void*);
void BgIceShelter_Idle(void*, void*);
void BgIceShelter_Melt(void*, void*);
void BgIceShelter_Update(void*, void*);
void BgIceShelter_Draw(void*, void*);

const GzActorSpan gGzBgIceShelterSpans[] = {
    { offsetof(BgIceShelter, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgIceShelter, cylinder1.base.actor), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceShelter, cylinder1.base.at), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceShelter, cylinder1.base.ac), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceShelter, cylinder1.base.oc), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceShelter, cylinder1.base.atFlags), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.base.acFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.base.ocFlags1), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.base.ocFlags2), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.base.colType), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.base.shape), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.info.toucher.dmgFlags), 0, 0x170, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.info.toucher.effect), 0, 0x174, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.info.toucher.damage), 0, 0x175, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.info.bumper.dmgFlags), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.info.bumper.effect), 0, 0x17c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.info.bumper.defense), 0, 0x17d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.info.bumper.hitPos.x), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.info.bumper.hitPos.y), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.info.bumper.hitPos.z), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.info.elemType), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.info.toucherFlags), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.info.bumperFlags), 0, 0x186, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.info.ocElemFlags), 0, 0x187, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.info.atHit), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceShelter, cylinder1.info.acHit), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceShelter, cylinder1.info.atHitInfo), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceShelter, cylinder1.info.acHitInfo), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceShelter, cylinder1.dim.radius), 0, 0x198, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.dim.height), 0, 0x19a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.dim.yShift), 0, 0x19c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.dim.pos.x), 0, 0x19e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.dim.pos.y), 0, 0x1a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder1.dim.pos.z), 0, 0x1a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.base.actor), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceShelter, cylinder2.base.at), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceShelter, cylinder2.base.ac), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceShelter, cylinder2.base.oc), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceShelter, cylinder2.base.atFlags), 0, 0x1b4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.base.acFlags), 0, 0x1b5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.base.ocFlags1), 0, 0x1b6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.base.ocFlags2), 0, 0x1b7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.base.colType), 0, 0x1b8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.base.shape), 0, 0x1b9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.info.toucher.dmgFlags), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.info.toucher.effect), 0, 0x1c0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.info.toucher.damage), 0, 0x1c1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.info.bumper.dmgFlags), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.info.bumper.effect), 0, 0x1c8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.info.bumper.defense), 0, 0x1c9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.info.bumper.hitPos.x), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.info.bumper.hitPos.y), 0, 0x1cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.info.bumper.hitPos.z), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.info.elemType), 0, 0x1d0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.info.toucherFlags), 0, 0x1d1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.info.bumperFlags), 0, 0x1d2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.info.ocElemFlags), 0, 0x1d3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.info.atHit), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceShelter, cylinder2.info.acHit), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceShelter, cylinder2.info.atHitInfo), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceShelter, cylinder2.info.acHitInfo), 0, 0x1e0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgIceShelter, cylinder2.dim.radius), 0, 0x1e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.dim.height), 0, 0x1e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.dim.yShift), 0, 0x1e8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.dim.pos.x), 0, 0x1ea, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.dim.pos.y), 0, 0x1ec, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, cylinder2.dim.pos.z), 0, 0x1ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgIceShelter, alpha), 0, 0x1f0, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgIceShelterSpanCount = ARRAY_COUNT(gGzBgIceShelterSpans);

const GzActorFunction gGzBgIceShelterFunctions[] = {
    { 0x0, (void*)BgIceShelter_InitColliders },
    { 0x134, NULL },
    { 0x18c, NULL },
    { 0x20c, (void*)BgIceShelter_Init },
    { 0x388, (void*)BgIceShelter_Destroy },
    { 0x414, NULL },
    { 0x688, NULL },
    { 0x8ec, NULL },
    { 0x908, (void*)BgIceShelter_Idle },
    { 0xa48, NULL },
    { 0xa64, (void*)BgIceShelter_Melt },
    { 0xc28, (void*)BgIceShelter_Update },
    { 0xc4c, (void*)BgIceShelter_Draw },
};
const size_t gGzBgIceShelterFunctionCount = ARRAY_COUNT(gGzBgIceShelterFunctions);
