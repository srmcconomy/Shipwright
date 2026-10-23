// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_M_Thunder/z_en_m_thunder.h"

void EnMThunder_Init(void*, void*);
void EnMThunder_Destroy(void*, void*);
void EnMThunder_EmptySpinAttack(void*, void*);
void EnMThunder_ChargingSpinAttack(void*, void*);
void EnMThunder_UpdateSpinAttack(void*, void*);
void EnMThunder_SpinAttacking(void*, void*);
void EnMThunder_Update(void*, void*);
void EnMThunder_Draw(void*, void*);

const GzActorSpan gGzEnMThunderSpans[] = {
    { offsetof(EnMThunder, collider.base.actor), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMThunder, collider.base.at), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMThunder, collider.base.ac), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMThunder, collider.base.oc), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMThunder, collider.base.atFlags), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.base.acFlags), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.base.ocFlags1), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.base.ocFlags2), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.base.colType), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.base.shape), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.info.toucher.dmgFlags), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.info.toucher.effect), 0, 0x158, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.info.toucher.damage), 0, 0x159, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.info.bumper.dmgFlags), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.info.bumper.effect), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.info.bumper.defense), 0, 0x161, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.info.bumper.hitPos.x), 0, 0x162, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.info.bumper.hitPos.y), 0, 0x164, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.info.bumper.hitPos.z), 0, 0x166, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.info.elemType), 0, 0x168, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.info.toucherFlags), 0, 0x169, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.info.bumperFlags), 0, 0x16a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.info.ocElemFlags), 0, 0x16b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.info.atHit), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMThunder, collider.info.acHit), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMThunder, collider.info.atHitInfo), 0, 0x174, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMThunder, collider.info.acHitInfo), 0, 0x178, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMThunder, collider.dim.radius), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.dim.height), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.dim.yShift), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.dim.pos.x), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.dim.pos.y), 0, 0x184, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, collider.dim.pos.z), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, lightNode), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnMThunder, lightInfo.type), 0, 0x18c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, lightInfo.params.point.x), 0, 0x18e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, lightInfo.params.point.y), 0, 0x190, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, lightInfo.params.point.z), 0, 0x192, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, lightInfo.params.point.color[0]), offsetof(EnMThunder, lightInfo.params.point.color[1]) - offsetof(EnMThunder, lightInfo.params.point.color[0]), 0x194, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, lightInfo.params.point.drawGlow), 0, 0x197, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, lightInfo.params.point.radius), 0, 0x198, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, spinAttackTimer), 0, 0x19c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, spinAttackAlpha), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, spinTrailTexScroll), 0, 0x1a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, spinChargePercent), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, dimmingIntensity), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, actionFunc), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnMThunder, followPlayerTimer), 0, 0x1b4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, attackStrength), 0, 0x1b6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, swordType), 0, 0x1b7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, chargeAlpha), 0, 0x1b8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, targetScale), 0, 0x1b9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnMThunder, isUsingMagic), 0, 0x1ba, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnMThunderSpanCount = ARRAY_COUNT(gGzEnMThunderSpans);

const GzActorFunction gGzEnMThunderFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnMThunder_Init },
    { 0x2cc, (void*)EnMThunder_Destroy },
    { 0x33c, NULL },
    { 0x378, (void*)EnMThunder_EmptySpinAttack },
    { 0x430, (void*)EnMThunder_ChargingSpinAttack },
    { 0x964, (void*)EnMThunder_UpdateSpinAttack },
    { 0x9e0, (void*)EnMThunder_SpinAttacking },
    { 0xb4c, (void*)EnMThunder_Update },
    { 0xd20, (void*)EnMThunder_Draw },
};
const size_t gGzEnMThunderFunctionCount = ARRAY_COUNT(gGzEnMThunderFunctions);
