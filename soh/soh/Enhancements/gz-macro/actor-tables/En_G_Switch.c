// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_G_Switch/z_en_g_switch.h"

void EnGSwitch_Init(void*, void*);
void EnGSwitch_Destroy(void*, void*);
void EnGSwitch_Break(void*, void*);
void EnGSwitch_WaitForObject(void*, void*);
void EnGSwitch_SilverRupeeTracker(void*, void*);
void EnGSwitch_SilverRupeeIdle(void*, void*);
void EnGSwitch_SilverRupeeCollected(void*, void*);
void EnGSwitch_GalleryRupee(void*, void*);
void EnGSwitch_ArcheryPot(void*, void*);
void EnGSwitch_Kill(void*, void*);
void EnGSwitch_Update(void*, void*);
void EnGSwitch_DrawPot(void*, void*);
void EnGSwitch_DrawRupee(void*, void*);
void EnGSwitch_UpdateEffects(void*, void*);
void EnGSwitch_DrawEffects(void*, void*);

const GzActorSpan gGzEnGSwitchSpans[] = {
    { offsetof(EnGSwitch, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnGSwitch, type), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, silverCount), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, switchFlag), 0, 0x144, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, killTimer), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, colorIdx), 0, 0x148, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, broken), 0, 0x14a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, numEffects), 0, 0x14c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, objId), 0, 0x14e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, index), 0, 0x150, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, delayTimer), 0, 0x152, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, waitTimer), 0, 0x154, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, moveMode), 0, 0x156, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, moveState), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, noteIndex), 0, 0x15a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, targetPos.x), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, targetPos.y), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, targetPos.z), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, objIndex), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.base.actor), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGSwitch, collider.base.at), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGSwitch, collider.base.ac), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGSwitch, collider.base.oc), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGSwitch, collider.base.atFlags), 0, 0x17c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.base.acFlags), 0, 0x17d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.base.ocFlags1), 0, 0x17e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.base.ocFlags2), 0, 0x17f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.base.colType), 0, 0x180, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.base.shape), 0, 0x181, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.info.toucher.dmgFlags), 0, 0x184, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.info.toucher.effect), 0, 0x188, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.info.toucher.damage), 0, 0x189, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.info.bumper.dmgFlags), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.info.bumper.effect), 0, 0x190, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.info.bumper.defense), 0, 0x191, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.info.bumper.hitPos.x), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.info.bumper.hitPos.y), 0, 0x194, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.info.bumper.hitPos.z), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.info.elemType), 0, 0x198, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.info.toucherFlags), 0, 0x199, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.info.bumperFlags), 0, 0x19a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.info.ocElemFlags), 0, 0x19b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.info.atHit), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGSwitch, collider.info.acHit), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGSwitch, collider.info.atHitInfo), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGSwitch, collider.info.acHitInfo), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnGSwitch, collider.dim.radius), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.dim.height), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.dim.yShift), 0, 0x1b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.dim.pos.x), 0, 0x1b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.dim.pos.y), 0, 0x1b4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, collider.dim.pos.z), 0, 0x1b6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, effects[0].pos.x), offsetof(EnGSwitch, effects[1].pos.x) - offsetof(EnGSwitch, effects[0].pos.x), 0x1b8, 0x2c, 100, 4, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, effects[0].pos.y), offsetof(EnGSwitch, effects[1].pos.y) - offsetof(EnGSwitch, effects[0].pos.y), 0x1bc, 0x2c, 100, 4, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, effects[0].pos.z), offsetof(EnGSwitch, effects[1].pos.z) - offsetof(EnGSwitch, effects[0].pos.z), 0x1c0, 0x2c, 100, 4, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, effects[0].scale), offsetof(EnGSwitch, effects[1].scale) - offsetof(EnGSwitch, effects[0].scale), 0x1c4, 0x2c, 100, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, effects[0].timer), offsetof(EnGSwitch, effects[1].timer) - offsetof(EnGSwitch, effects[0].timer), 0x1c6, 0x2c, 100, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, effects[0].colorIdx), offsetof(EnGSwitch, effects[1].colorIdx) - offsetof(EnGSwitch, effects[0].colorIdx), 0x1c8, 0x2c, 100, 2, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, effects[0].flag), offsetof(EnGSwitch, effects[1].flag) - offsetof(EnGSwitch, effects[0].flag), 0x1ca, 0x2c, 100, 1, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, effects[0].velocity.x), offsetof(EnGSwitch, effects[1].velocity.x) - offsetof(EnGSwitch, effects[0].velocity.x), 0x1cc, 0x2c, 100, 4, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, effects[0].velocity.y), offsetof(EnGSwitch, effects[1].velocity.y) - offsetof(EnGSwitch, effects[0].velocity.y), 0x1d0, 0x2c, 100, 4, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, effects[0].velocity.z), offsetof(EnGSwitch, effects[1].velocity.z) - offsetof(EnGSwitch, effects[0].velocity.z), 0x1d4, 0x2c, 100, 4, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, effects[0].rot.x), offsetof(EnGSwitch, effects[1].rot.x) - offsetof(EnGSwitch, effects[0].rot.x), 0x1d8, 0x2c, 100, 4, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, effects[0].rot.y), offsetof(EnGSwitch, effects[1].rot.y) - offsetof(EnGSwitch, effects[0].rot.y), 0x1dc, 0x2c, 100, 4, GZ_SPAN_VALUE },
    { offsetof(EnGSwitch, effects[0].rot.z), offsetof(EnGSwitch, effects[1].rot.z) - offsetof(EnGSwitch, effects[0].rot.z), 0x1e0, 0x2c, 100, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnGSwitchSpanCount = ARRAY_COUNT(gGzEnGSwitchSpans);

const GzActorFunction gGzEnGSwitchFunctions[] = {
    { 0x0, (void*)EnGSwitch_Init },
    { 0x298, (void*)EnGSwitch_Destroy },
    { 0x2c4, (void*)EnGSwitch_Break },
    { 0x46c, (void*)EnGSwitch_WaitForObject },
    { 0x504, (void*)EnGSwitch_SilverRupeeTracker },
    { 0x5e8, (void*)EnGSwitch_SilverRupeeIdle },
    { 0x6d0, (void*)EnGSwitch_SilverRupeeCollected },
    { 0x7b4, (void*)EnGSwitch_GalleryRupee },
    { 0xb54, (void*)EnGSwitch_ArcheryPot },
    { 0xe3c, (void*)EnGSwitch_Kill },
    { 0xe6c, (void*)EnGSwitch_Update },
    { 0xfa0, (void*)EnGSwitch_DrawPot },
    { 0x1030, (void*)EnGSwitch_DrawRupee },
    { 0x1158, NULL },
    { 0x126c, (void*)EnGSwitch_UpdateEffects },
    { 0x142c, (void*)EnGSwitch_DrawEffects },
};
const size_t gGzEnGSwitchFunctionCount = ARRAY_COUNT(gGzEnGSwitchFunctions);
