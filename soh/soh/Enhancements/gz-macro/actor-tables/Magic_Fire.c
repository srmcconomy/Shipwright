// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Magic_Fire/z_magic_fire.h"

void MagicFire_Init(void*, void*);
void MagicFire_Destroy(void*, void*);
void MagicFire_UpdateBeforeCast(void*, void*);
void MagicFire_Update(void*, void*);
void MagicFire_Draw(void*, void*);

const GzActorSpan gGzMagicFireSpans[] = {
    { offsetof(MagicFire, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(MagicFire, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(MagicFire, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(MagicFire, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(MagicFire, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(MagicFire, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(MagicFire, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(MagicFire, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(MagicFire, collider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(MagicFire, collider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(MagicFire, alphaMultiplier), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(MagicFire, screenTintIntensity), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(MagicFire, scalingSpeed), 0, 0x190, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(MagicFire, action), 0, 0x194, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(MagicFire, screenTintBehaviour), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(MagicFire, actionTimer), 0, 0x198, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(MagicFire, screenTintBehaviourTimer), 0, 0x19a, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzMagicFireSpanCount = ARRAY_COUNT(gGzMagicFireSpans);

const GzActorFunction gGzMagicFireFunctions[] = {
    { 0x0, (void*)MagicFire_Init },
    { 0xac, (void*)MagicFire_Destroy },
    { 0xd0, (void*)MagicFire_UpdateBeforeCast },
    { 0x174, (void*)MagicFire_Update },
    { 0x508, (void*)MagicFire_Draw },
};
const size_t gGzMagicFireFunctionCount = ARRAY_COUNT(gGzMagicFireFunctions);
