// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Ba/z_en_ba.h"

void EnBa_Init(void*, void*);
void EnBa_Destroy(void*, void*);
void EnBa_Idle(void*, void*);
void EnBa_FallAsBlob(void*, void*);
void EnBa_SwingAtPlayer(void*, void*);
void EnBa_RecoilFromDamage(void*, void*);
void func_809B75A0(void*, void*);
void EnBa_Die(void*, void*);
void EnBa_Update(void*, void*);
void EnBa_Draw(void*, void*);

const GzActorSpan gGzEnBaSpans[] = {
    { offsetof(EnBa, unk_14C), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBa, actionFunc), 0, 0x140, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnBa, upperParams), 0, 0x144, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_156), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_158[0].x), offsetof(EnBa, unk_158[1].x) - offsetof(EnBa, unk_158[0].x), 0x148, 0xc, 14, 4, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_158[0].y), offsetof(EnBa, unk_158[1].y) - offsetof(EnBa, unk_158[0].y), 0x14c, 0xc, 14, 4, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_158[0].z), offsetof(EnBa, unk_158[1].z) - offsetof(EnBa, unk_158[0].z), 0x150, 0xc, 14, 4, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_200[0].x), offsetof(EnBa, unk_200[1].x) - offsetof(EnBa, unk_200[0].x), 0x1f0, 0xc, 14, 4, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_200[0].y), offsetof(EnBa, unk_200[1].y) - offsetof(EnBa, unk_200[0].y), 0x1f4, 0xc, 14, 4, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_200[0].z), offsetof(EnBa, unk_200[1].z) - offsetof(EnBa, unk_200[0].z), 0x1f8, 0xc, 14, 4, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_2A8[0].x), offsetof(EnBa, unk_2A8[1].x) - offsetof(EnBa, unk_2A8[0].x), 0x298, 0x6, 14, 2, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_2A8[0].y), offsetof(EnBa, unk_2A8[1].y) - offsetof(EnBa, unk_2A8[0].y), 0x29a, 0x6, 14, 2, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_2A8[0].z), offsetof(EnBa, unk_2A8[1].z) - offsetof(EnBa, unk_2A8[0].z), 0x29c, 0x6, 14, 2, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_2FC.x), 0, 0x2ec, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_2FC.y), 0, 0x2f0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_2FC.z), 0, 0x2f4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_308.x), 0, 0x2f8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_308.y), 0, 0x2fc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_308.z), 0, 0x300, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_314), 0, 0x304, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_318), 0, 0x308, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_31A), 0, 0x30a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBa, unk_31C), 0, 0x30c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBa, collider.base.actor), 0, 0x310, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBa, collider.base.at), 0, 0x314, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBa, collider.base.ac), 0, 0x318, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBa, collider.base.oc), 0, 0x31c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBa, collider.base.atFlags), 0, 0x320, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBa, collider.base.acFlags), 0, 0x321, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBa, collider.base.ocFlags1), 0, 0x322, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBa, collider.base.ocFlags2), 0, 0x323, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBa, collider.base.colType), 0, 0x324, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBa, collider.base.shape), 0, 0x325, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBa, collider.count), 0, 0x328, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBa, collider.elements), 0, 0x32c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBa, colliderItems[0].info.toucher.dmgFlags), offsetof(EnBa, colliderItems[1].info.toucher.dmgFlags) - offsetof(EnBa, colliderItems[0].info.toucher.dmgFlags), 0x330, 0x40, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].info.toucher.effect), offsetof(EnBa, colliderItems[1].info.toucher.effect) - offsetof(EnBa, colliderItems[0].info.toucher.effect), 0x334, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].info.toucher.damage), offsetof(EnBa, colliderItems[1].info.toucher.damage) - offsetof(EnBa, colliderItems[0].info.toucher.damage), 0x335, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].info.bumper.dmgFlags), offsetof(EnBa, colliderItems[1].info.bumper.dmgFlags) - offsetof(EnBa, colliderItems[0].info.bumper.dmgFlags), 0x338, 0x40, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].info.bumper.effect), offsetof(EnBa, colliderItems[1].info.bumper.effect) - offsetof(EnBa, colliderItems[0].info.bumper.effect), 0x33c, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].info.bumper.defense), offsetof(EnBa, colliderItems[1].info.bumper.defense) - offsetof(EnBa, colliderItems[0].info.bumper.defense), 0x33d, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].info.bumper.hitPos.x), offsetof(EnBa, colliderItems[1].info.bumper.hitPos.x) - offsetof(EnBa, colliderItems[0].info.bumper.hitPos.x), 0x33e, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].info.bumper.hitPos.y), offsetof(EnBa, colliderItems[1].info.bumper.hitPos.y) - offsetof(EnBa, colliderItems[0].info.bumper.hitPos.y), 0x340, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].info.bumper.hitPos.z), offsetof(EnBa, colliderItems[1].info.bumper.hitPos.z) - offsetof(EnBa, colliderItems[0].info.bumper.hitPos.z), 0x342, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].info.elemType), offsetof(EnBa, colliderItems[1].info.elemType) - offsetof(EnBa, colliderItems[0].info.elemType), 0x344, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].info.toucherFlags), offsetof(EnBa, colliderItems[1].info.toucherFlags) - offsetof(EnBa, colliderItems[0].info.toucherFlags), 0x345, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].info.bumperFlags), offsetof(EnBa, colliderItems[1].info.bumperFlags) - offsetof(EnBa, colliderItems[0].info.bumperFlags), 0x346, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].info.ocElemFlags), offsetof(EnBa, colliderItems[1].info.ocElemFlags) - offsetof(EnBa, colliderItems[0].info.ocElemFlags), 0x347, 0x40, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].info.atHit), offsetof(EnBa, colliderItems[1].info.atHit) - offsetof(EnBa, colliderItems[0].info.atHit), 0x348, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBa, colliderItems[0].info.acHit), offsetof(EnBa, colliderItems[1].info.acHit) - offsetof(EnBa, colliderItems[0].info.acHit), 0x34c, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBa, colliderItems[0].info.atHitInfo), offsetof(EnBa, colliderItems[1].info.atHitInfo) - offsetof(EnBa, colliderItems[0].info.atHitInfo), 0x350, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBa, colliderItems[0].info.acHitInfo), offsetof(EnBa, colliderItems[1].info.acHitInfo) - offsetof(EnBa, colliderItems[0].info.acHitInfo), 0x354, 0x40, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBa, colliderItems[0].dim.modelSphere.center.x), offsetof(EnBa, colliderItems[1].dim.modelSphere.center.x) - offsetof(EnBa, colliderItems[0].dim.modelSphere.center.x), 0x358, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].dim.modelSphere.center.y), offsetof(EnBa, colliderItems[1].dim.modelSphere.center.y) - offsetof(EnBa, colliderItems[0].dim.modelSphere.center.y), 0x35a, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].dim.modelSphere.center.z), offsetof(EnBa, colliderItems[1].dim.modelSphere.center.z) - offsetof(EnBa, colliderItems[0].dim.modelSphere.center.z), 0x35c, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].dim.modelSphere.radius), offsetof(EnBa, colliderItems[1].dim.modelSphere.radius) - offsetof(EnBa, colliderItems[0].dim.modelSphere.radius), 0x35e, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].dim.worldSphere.center.x), offsetof(EnBa, colliderItems[1].dim.worldSphere.center.x) - offsetof(EnBa, colliderItems[0].dim.worldSphere.center.x), 0x360, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].dim.worldSphere.center.y), offsetof(EnBa, colliderItems[1].dim.worldSphere.center.y) - offsetof(EnBa, colliderItems[0].dim.worldSphere.center.y), 0x362, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].dim.worldSphere.center.z), offsetof(EnBa, colliderItems[1].dim.worldSphere.center.z) - offsetof(EnBa, colliderItems[0].dim.worldSphere.center.z), 0x364, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].dim.worldSphere.radius), offsetof(EnBa, colliderItems[1].dim.worldSphere.radius) - offsetof(EnBa, colliderItems[0].dim.worldSphere.radius), 0x366, 0x40, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].dim.scale), offsetof(EnBa, colliderItems[1].dim.scale) - offsetof(EnBa, colliderItems[0].dim.scale), 0x368, 0x40, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnBa, colliderItems[0].dim.limb), offsetof(EnBa, colliderItems[1].dim.limb) - offsetof(EnBa, colliderItems[0].dim.limb), 0x36c, 0x40, 2, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnBaSpanCount = ARRAY_COUNT(gGzEnBaSpans);

const GzActorFunction gGzEnBaFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnBa_Init },
    { 0x1f8, (void*)EnBa_Destroy },
    { 0x224, NULL },
    { 0x264, (void*)EnBa_Idle },
    { 0x690, NULL },
    { 0x700, (void*)EnBa_FallAsBlob },
    { 0x7c0, NULL },
    { 0x814, (void*)EnBa_SwingAtPlayer },
    { 0xe34, NULL },
    { 0xeb0, (void*)EnBa_RecoilFromDamage },
    { 0x1264, (void*)func_809B75A0 },
    { 0x14e0, (void*)EnBa_Die },
    { 0x1810, (void*)EnBa_Update },
    { 0x18f0, (void*)EnBa_Draw },
};
const size_t gGzEnBaFunctionCount = ARRAY_COUNT(gGzEnBaFunctions);
