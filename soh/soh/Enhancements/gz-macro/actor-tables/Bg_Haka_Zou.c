// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Haka_Zou/z_bg_haka_zou.h"

void BgHakaZou_Init(void*, void*);
void BgHakaZou_Destroy(void*, void*);
void func_808828F4(void*, void*);
void BgHakaZou_Wait(void*, void*);
void BgHakaZou_CrumbleSkullWall(void*, void*);
void BgHakaZou_SpawnSkullWallRubble(void*, void*);
void BgHakaZou_SpawnRubbleParticles(void*, void*);
void BgHakaZou_WaitForHit(void*, void*);
void BgHakaZou_IdleKill(void*, void*);
void BgHakaZou_BirdStatueAnim_Explode(void*, void*);
void BgHakaZou_BirdStatueAnim_Shear(void*, void*);
void BgHakaZou_BirdStatueAnim_Topple(void*, void*);
void BgHakaZou_BirdStatueAnim_Settle(void*, void*);
void BgHakaZou_DoNothing(void*, void*);
void BgHakaZou_Update(void*, void*);
void BgHakaZou_Draw(void*, void*);

const GzActorSpan gGzBgHakaZouSpans[] = {
    { offsetof(BgHakaZou, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgHakaZou, requiredObjBankIndex), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, switchFlag), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, timer), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.base.actor), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaZou, collider.base.at), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaZou, collider.base.ac), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaZou, collider.base.oc), 0, 0x168, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaZou, collider.base.atFlags), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.base.acFlags), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.base.ocFlags1), 0, 0x16e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.base.ocFlags2), 0, 0x16f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.base.colType), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.base.shape), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.info.toucher.dmgFlags), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.info.toucher.effect), 0, 0x178, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.info.toucher.damage), 0, 0x179, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.info.bumper.dmgFlags), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.info.bumper.effect), 0, 0x180, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.info.bumper.defense), 0, 0x181, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.info.bumper.hitPos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.info.bumper.hitPos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.info.bumper.hitPos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.info.elemType), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.info.toucherFlags), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.info.bumperFlags), 0, 0x18a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.info.ocElemFlags), 0, 0x18b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.info.atHit), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaZou, collider.info.acHit), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaZou, collider.info.atHitInfo), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaZou, collider.info.acHitInfo), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgHakaZou, collider.dim.radius), 0, 0x19c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.dim.height), 0, 0x19e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.dim.yShift), 0, 0x1a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.dim.pos.x), 0, 0x1a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.dim.pos.y), 0, 0x1a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgHakaZou, collider.dim.pos.z), 0, 0x1a6, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzBgHakaZouSpanCount = ARRAY_COUNT(gGzBgHakaZouSpans);

const GzActorFunction gGzBgHakaZouFunctions[] = {
    { 0x0, (void*)BgHakaZou_Init },
    { 0x2e8, (void*)BgHakaZou_Destroy },
    { 0x338, (void*)func_808828F4 },
    { 0x4b4, (void*)BgHakaZou_Wait },
    { 0x624, (void*)BgHakaZou_CrumbleSkullWall },
    { 0x70c, (void*)BgHakaZou_SpawnSkullWallRubble },
    { 0x89c, (void*)BgHakaZou_SpawnRubbleParticles },
    { 0xa4c, (void*)BgHakaZou_WaitForHit },
    { 0xb50, (void*)BgHakaZou_IdleKill },
    { 0xb90, (void*)BgHakaZou_BirdStatueAnim_Explode },
    { 0xca0, (void*)BgHakaZou_BirdStatueAnim_Shear },
    { 0xd78, (void*)BgHakaZou_BirdStatueAnim_Topple },
    { 0xf28, (void*)BgHakaZou_BirdStatueAnim_Settle },
    { 0xfb8, (void*)BgHakaZou_DoNothing },
    { 0xfc8, (void*)BgHakaZou_Update },
    { 0x100c, (void*)BgHakaZou_Draw },
};
const size_t gGzBgHakaZouFunctionCount = ARRAY_COUNT(gGzBgHakaZouFunctions);
