// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Demo_Kekkai/z_demo_kekkai.h"

void DemoKekkai_Init(void*, void*);
void DemoKekkai_Destroy(void*, void*);
void DemoKekkai_SpawnParticles(void*, void*);
void DemoKekkai_TowerBarrier(void*, void*);
void DemoKekkai_Update(void*, void*);
void DemoKekkai_TrialBarrierDispel(void*, void*);
void DemoKekkai_TrialBarrierIdle(void*, void*);
void DemoKekkai_DrawTrialBarrier(void*, void*);
void DemoKekkai_DrawTowerBarrier(void*, void*);

const GzActorSpan gGzDemoKekkaiSpans[] = {
    { offsetof(DemoKekkai, collider1.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoKekkai, collider1.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoKekkai, collider1.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoKekkai, collider1.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoKekkai, collider1.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoKekkai, collider1.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoKekkai, collider1.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoKekkai, collider1.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoKekkai, collider1.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider1.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.base.actor), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoKekkai, collider2.base.at), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoKekkai, collider2.base.ac), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoKekkai, collider2.base.oc), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoKekkai, collider2.base.atFlags), 0, 0x198, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.base.acFlags), 0, 0x199, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.base.ocFlags1), 0, 0x19a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.base.ocFlags2), 0, 0x19b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.base.colType), 0, 0x19c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.base.shape), 0, 0x19d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.info.toucher.dmgFlags), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.info.toucher.effect), 0, 0x1a4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.info.toucher.damage), 0, 0x1a5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.info.bumper.dmgFlags), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.info.bumper.effect), 0, 0x1ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.info.bumper.defense), 0, 0x1ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.info.bumper.hitPos.x), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.info.bumper.hitPos.y), 0, 0x1b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.info.bumper.hitPos.z), 0, 0x1b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.info.elemType), 0, 0x1b4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.info.toucherFlags), 0, 0x1b5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.info.bumperFlags), 0, 0x1b6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.info.ocElemFlags), 0, 0x1b7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.info.atHit), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoKekkai, collider2.info.acHit), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoKekkai, collider2.info.atHitInfo), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoKekkai, collider2.info.acHitInfo), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoKekkai, collider2.dim.radius), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.dim.height), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.dim.yShift), 0, 0x1cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.dim.pos.x), 0, 0x1ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.dim.pos.y), 0, 0x1d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, collider2.dim.pos.z), 0, 0x1d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, energyAlpha), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, orbScale), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, barrierScroll), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, barrierScrollRate), 0, 0x1e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, timer), 0, 0x1e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, sfxFlag), 0, 0x1e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoKekkai, updateFunc), 0, 0x1e8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzDemoKekkaiSpanCount = ARRAY_COUNT(gGzDemoKekkaiSpans);

const GzActorFunction gGzDemoKekkaiFunctions[] = {
    { 0x0, NULL },
    { 0x44, (void*)DemoKekkai_Init },
    { 0x274, (void*)DemoKekkai_Destroy },
    { 0x2b4, (void*)DemoKekkai_SpawnParticles },
    { 0x508, (void*)DemoKekkai_TowerBarrier },
    { 0x624, (void*)DemoKekkai_Update },
    { 0x750, (void*)DemoKekkai_TrialBarrierDispel },
    { 0x8b0, (void*)DemoKekkai_TrialBarrierIdle },
    { 0x9d4, (void*)DemoKekkai_DrawTrialBarrier },
    { 0xed0, (void*)DemoKekkai_DrawTowerBarrier },
};
const size_t gGzDemoKekkaiFunctionCount = ARRAY_COUNT(gGzDemoKekkaiFunctions);
