// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Bg_Bdan_Objects/z_bg_bdan_objects.h"

void BgBdanObjects_Init(void*, void*);
void BgBdanObjects_Destroy(void*, void*);
void BgBdanObjects_OctoPlatform_WaitForRutoToStartCutscene(void*, void*);
void BgBdanObjects_OctoPlatform_RaiseToUpperPosition(void*, void*);
void BgBdanObjects_OctoPlatform_WaitForRutoToAdvanceCutscene(void*, void*);
void BgBdanObjects_OctoPlatform_DescendWithBigOcto(void*, void*);
void BgBdanObjects_OctoPlatform_PauseBeforeDescending(void*, void*);
void BgBdanObjects_OctoPlatform_WaitForBigOctoToStartBattle(void*, void*);
void BgBdanObjects_OctoPlatform_BattleInProgress(void*, void*);
void BgBdanObjects_SinkToFloorHeight(void*, void*);
void BgBdanObjects_WaitForPlayerInRange(void*, void*);
void BgBdanObjects_RaiseToUpperPosition(void*, void*);
void BgBdanObjects_DoNothing(void*, void*);
void BgBdanObjects_ElevatorOscillate(void*, void*);
void BgBdanObjects_WaitForSwitch(void*, void*);
void BgBdanObjects_ChangeWaterBoxLevel(void*, void*);
void BgBdanObjects_WaitForTimerExpired(void*, void*);
void BgBdanObjects_WaitForPlayerOnTop(void*, void*);
void BgBdanObjects_FallToLowerPos(void*, void*);
void BgBdanObjects_Update(void*, void*);
void BgBdanObjects_Draw(void*, void*);

const GzActorSpan gGzBgBdanObjectsSpans[] = {
    { offsetof(BgBdanObjects, actionFunc), 0, 0x154, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(BgBdanObjects, switchFlag), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, timer), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.base.actor), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBdanObjects, collider.base.at), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBdanObjects, collider.base.ac), 0, 0x164, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBdanObjects, collider.base.oc), 0, 0x168, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBdanObjects, collider.base.atFlags), 0, 0x16c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.base.acFlags), 0, 0x16d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.base.ocFlags1), 0, 0x16e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.base.ocFlags2), 0, 0x16f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.base.colType), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.base.shape), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.info.toucher.dmgFlags), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.info.toucher.effect), 0, 0x178, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.info.toucher.damage), 0, 0x179, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.info.bumper.dmgFlags), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.info.bumper.effect), 0, 0x180, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.info.bumper.defense), 0, 0x181, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.info.bumper.hitPos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.info.bumper.hitPos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.info.bumper.hitPos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.info.elemType), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.info.toucherFlags), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.info.bumperFlags), 0, 0x18a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.info.ocElemFlags), 0, 0x18b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.info.atHit), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBdanObjects, collider.info.acHit), 0, 0x190, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBdanObjects, collider.info.atHitInfo), 0, 0x194, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBdanObjects, collider.info.acHitInfo), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(BgBdanObjects, collider.dim.radius), 0, 0x19c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.dim.height), 0, 0x19e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.dim.yShift), 0, 0x1a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.dim.pos.x), 0, 0x1a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.dim.pos.y), 0, 0x1a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, collider.dim.pos.z), 0, 0x1a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(BgBdanObjects, cameraSetting), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzBgBdanObjectsSpanCount = ARRAY_COUNT(gGzBgBdanObjectsSpans);

const GzActorFunction gGzBgBdanObjectsFunctions[] = {
    { 0x0, NULL },
    { 0x54, NULL },
    { 0xa8, (void*)BgBdanObjects_Init },
    { 0x32c, (void*)BgBdanObjects_Destroy },
    { 0x37c, (void*)BgBdanObjects_OctoPlatform_WaitForRutoToStartCutscene },
    { 0x4d0, (void*)BgBdanObjects_OctoPlatform_RaiseToUpperPosition },
    { 0x5cc, (void*)BgBdanObjects_OctoPlatform_WaitForRutoToAdvanceCutscene },
    { 0x708, (void*)BgBdanObjects_OctoPlatform_DescendWithBigOcto },
    { 0x88c, (void*)BgBdanObjects_OctoPlatform_PauseBeforeDescending },
    { 0x8f0, (void*)BgBdanObjects_OctoPlatform_WaitForBigOctoToStartBattle },
    { 0x94c, (void*)BgBdanObjects_OctoPlatform_BattleInProgress },
    { 0xa24, (void*)BgBdanObjects_SinkToFloorHeight },
    { 0xaa4, (void*)BgBdanObjects_WaitForPlayerInRange },
    { 0xb10, (void*)BgBdanObjects_RaiseToUpperPosition },
    { 0xba8, (void*)BgBdanObjects_DoNothing },
    { 0xbb8, (void*)BgBdanObjects_ElevatorOscillate },
    { 0xcec, (void*)BgBdanObjects_WaitForSwitch },
    { 0xd38, (void*)BgBdanObjects_ChangeWaterBoxLevel },
    { 0xe00, (void*)BgBdanObjects_WaitForTimerExpired },
    { 0xe54, (void*)BgBdanObjects_WaitForPlayerOnTop },
    { 0xed8, (void*)BgBdanObjects_FallToLowerPos },
    { 0xf94, (void*)BgBdanObjects_Update },
    { 0xfd0, (void*)BgBdanObjects_Draw },
};
const size_t gGzBgBdanObjectsFunctionCount = ARRAY_COUNT(gGzBgBdanObjectsFunctions);
