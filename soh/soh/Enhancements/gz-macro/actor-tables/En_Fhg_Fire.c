// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Fhg_Fire/z_en_fhg_fire.h"

void EnFhgFire_Init(void*, void*);
void EnFhgFire_Destroy(void*, void*);
void EnFhgFire_LightningStrike(void*, void*);
void EnFhgFire_LightningTrail(void*, void*);
void EnFhgFire_LightningShock(void*, void*);
void EnFhgFire_LightningBurst(void*, void*);
void EnFhgFire_SpearLight(void*, void*);
void EnFhgFire_EnergyBall(void*, void*);
void EnFhgFire_PhantomWarp(void*, void*);
void EnFhgFire_Update(void*, void*);
void EnFhgFire_Draw(void*, void*);

const GzActorSpan gGzEnFhgFireSpans[] = {
    { offsetof(EnFhgFire, updateFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnFhgFire, work[0]), offsetof(EnFhgFire, work[1]) - offsetof(EnFhgFire, work[0]), 0x140, 0x2, 7, 2, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, fwork[0]), offsetof(EnFhgFire, fwork[1]) - offsetof(EnFhgFire, fwork[0]), 0x150, 0x4, 15, 4, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, lightNode), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFhgFire, lightInfo.type), 0, 0x190, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, lightInfo.params.point.x), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, lightInfo.params.point.y), 0, 0x194, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, lightInfo.params.point.z), 0, 0x196, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, lightInfo.params.point.color[0]), offsetof(EnFhgFire, lightInfo.params.point.color[1]) - offsetof(EnFhgFire, lightInfo.params.point.color[0]), 0x198, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, lightInfo.params.point.drawGlow), 0, 0x19b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, lightInfo.params.point.radius), 0, 0x19c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.base.actor), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFhgFire, collider.base.at), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFhgFire, collider.base.ac), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFhgFire, collider.base.oc), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFhgFire, collider.base.atFlags), 0, 0x1b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.base.acFlags), 0, 0x1b1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.base.ocFlags1), 0, 0x1b2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.base.ocFlags2), 0, 0x1b3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.base.colType), 0, 0x1b4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.base.shape), 0, 0x1b5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.info.toucher.dmgFlags), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.info.toucher.effect), 0, 0x1bc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.info.toucher.damage), 0, 0x1bd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.info.bumper.dmgFlags), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.info.bumper.effect), 0, 0x1c4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.info.bumper.defense), 0, 0x1c5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.info.bumper.hitPos.x), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.info.bumper.hitPos.y), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.info.bumper.hitPos.z), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.info.elemType), 0, 0x1cc, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.info.toucherFlags), 0, 0x1cd, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.info.bumperFlags), 0, 0x1ce, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.info.ocElemFlags), 0, 0x1cf, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.info.atHit), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFhgFire, collider.info.acHit), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFhgFire, collider.info.atHitInfo), 0, 0x1d8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFhgFire, collider.info.acHitInfo), 0, 0x1dc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnFhgFire, collider.dim.radius), 0, 0x1e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.dim.height), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.dim.yShift), 0, 0x1e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.dim.pos.x), 0, 0x1e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.dim.pos.y), 0, 0x1e8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, collider.dim.pos.z), 0, 0x1ea, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, lensFlareOn), 0, 0x1ec, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, lensFlareTimer), 0, 0x1ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnFhgFire, lensFlareScale), 0, 0x1f0, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnFhgFireSpanCount = ARRAY_COUNT(gGzEnFhgFireSpans);

const GzActorFunction gGzEnFhgFireFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnFhgFire_Init },
    { 0x41c, (void*)EnFhgFire_Destroy },
    { 0x48c, (void*)EnFhgFire_LightningStrike },
    { 0x824, (void*)EnFhgFire_LightningTrail },
    { 0x9c4, (void*)EnFhgFire_LightningShock },
    { 0xb08, (void*)EnFhgFire_LightningBurst },
    { 0xd84, (void*)EnFhgFire_SpearLight },
    { 0xf78, (void*)EnFhgFire_EnergyBall },
    { 0x1c24, (void*)EnFhgFire_PhantomWarp },
    { 0x1de0, (void*)EnFhgFire_Update },
    { 0x1e30, (void*)EnFhgFire_Draw },
};
const size_t gGzEnFhgFireFunctionCount = ARRAY_COUNT(gGzEnFhgFireFunctions);
