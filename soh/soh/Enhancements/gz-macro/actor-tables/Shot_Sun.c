// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Shot_Sun/z_shot_sun.h"

void ShotSun_Init(void*, void*);
void ShotSun_Destroy(void*, void*);
void ShotSun_SpawnFairy(void*, void*);
void ShotSun_TriggerFairy(void*, void*);
void ShotSun_UpdateFairySpawner(void*, void*);
void ShotSun_UpdateHyliaSun(void*, void*);
void ShotSun_Update(void*, void*);

const GzActorSpan gGzShotSunSpans[] = {
    { offsetof(ShotSun, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ShotSun, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ShotSun, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ShotSun, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ShotSun, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ShotSun, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ShotSun, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ShotSun, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ShotSun, collider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ShotSun, collider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ShotSun, actionFunc), 0, 0x188, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ShotSun, hitboxPos.x), 0, 0x18c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ShotSun, hitboxPos.y), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ShotSun, hitboxPos.z), 0, 0x190, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ShotSun, timer), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ShotSun, fairySpawnerState), 0, 0x194, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzShotSunSpanCount = ARRAY_COUNT(gGzShotSunSpans);

const GzActorFunction gGzShotSunFunctions[] = {
    { 0x0, (void*)ShotSun_Init },
    { 0xbc, (void*)ShotSun_Destroy },
    { 0x100, (void*)ShotSun_SpawnFairy },
    { 0x1a8, (void*)ShotSun_TriggerFairy },
    { 0x244, (void*)ShotSun_UpdateFairySpawner },
    { 0x394, (void*)ShotSun_UpdateHyliaSun },
    { 0x5cc, (void*)ShotSun_Update },
};
const size_t gGzShotSunFunctionCount = ARRAY_COUNT(gGzShotSunFunctions);
