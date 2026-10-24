// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Bigokuta/z_en_bigokuta.h"

void EnBigokuta_Init(void*, void*);
void EnBigokuta_Destroy(void*, void*);
void func_809BCEBC(void*, void*);
void func_809BCF68(void*, void*);
void func_809BD1C8(void*, void*);
void func_809BD7F0(void*, void*);
void func_809BD84C(void*, void*);
void func_809BD8DC(void*, void*);
void func_809BDAE8(void*, void*);
void func_809BDB90(void*, void*);
void func_809BDC08(void*, void*);
void func_809BDF34(void*, void*);
void func_809BDFC8(void*, void*);
void func_809BE058(void*, void*);
void func_809BE180(void*, void*);
void func_809BE26C(void*, void*);
void func_809BE3E4(void*, void*);
void func_809BE4A4(void*, void*);
void func_809BE518(void*, void*);
void func_809BE798(void*, void*);
void EnBigokuta_UpdateDamage(void*, void*);
void EnBigokuta_Update(void*, void*);
void EnBigokuta_Draw(void*, void*);

const GzActorSpan gGzEnBigokutaSpans[] = {
    { offsetof(EnBigokuta, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnBigokuta, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnBigokuta, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, actionFunc), 0, 0x180, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnBigokuta, unk_194), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, unk_195), 0, 0x185, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, unk_196), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, unk_198), 0, 0x188, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, unk_19A), 0, 0x18a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, jointTable[0].x), offsetof(EnBigokuta, jointTable[1].x) - offsetof(EnBigokuta, jointTable[0].x), 0x18c, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, jointTable[0].y), offsetof(EnBigokuta, jointTable[1].y) - offsetof(EnBigokuta, jointTable[0].y), 0x18e, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, jointTable[0].z), offsetof(EnBigokuta, jointTable[1].z) - offsetof(EnBigokuta, jointTable[0].z), 0x190, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, morphTable[0].x), offsetof(EnBigokuta, morphTable[1].x) - offsetof(EnBigokuta, morphTable[0].x), 0x204, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, morphTable[0].y), offsetof(EnBigokuta, morphTable[1].y) - offsetof(EnBigokuta, morphTable[0].y), 0x206, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, morphTable[0].z), offsetof(EnBigokuta, morphTable[1].z) - offsetof(EnBigokuta, morphTable[0].z), 0x208, 0x6, 20, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, collider.base.actor), 0, 0x27c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, collider.base.at), 0, 0x280, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, collider.base.ac), 0, 0x284, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, collider.base.oc), 0, 0x288, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, collider.base.atFlags), 0, 0x28c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, collider.base.acFlags), 0, 0x28d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, collider.base.ocFlags1), 0, 0x28e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, collider.base.ocFlags2), 0, 0x28f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, collider.base.colType), 0, 0x290, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, collider.base.shape), 0, 0x291, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, collider.count), 0, 0x294, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, collider.elements), 0, 0x298, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, element.info.toucher.dmgFlags), 0, 0x29c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.info.toucher.effect), 0, 0x2a0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.info.toucher.damage), 0, 0x2a1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.info.bumper.dmgFlags), 0, 0x2a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.info.bumper.effect), 0, 0x2a8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.info.bumper.defense), 0, 0x2a9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.info.bumper.hitPos.x), 0, 0x2aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.info.bumper.hitPos.y), 0, 0x2ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.info.bumper.hitPos.z), 0, 0x2ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.info.elemType), 0, 0x2b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.info.toucherFlags), 0, 0x2b1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.info.bumperFlags), 0, 0x2b2, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.info.ocElemFlags), 0, 0x2b3, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.info.atHit), 0, 0x2b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, element.info.acHit), 0, 0x2b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, element.info.atHitInfo), 0, 0x2bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, element.info.acHitInfo), 0, 0x2c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, element.dim.modelSphere.center.x), 0, 0x2c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.dim.modelSphere.center.y), 0, 0x2c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.dim.modelSphere.center.z), 0, 0x2c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.dim.modelSphere.radius), 0, 0x2ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.dim.worldSphere.center.x), 0, 0x2cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.dim.worldSphere.center.y), 0, 0x2ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.dim.worldSphere.center.z), 0, 0x2d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.dim.worldSphere.radius), 0, 0x2d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.dim.scale), 0, 0x2d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, element.dim.limb), 0, 0x2d8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].base.actor), offsetof(EnBigokuta, cylinder[1].base.actor) - offsetof(EnBigokuta, cylinder[0].base.actor), 0x2dc, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, cylinder[0].base.at), offsetof(EnBigokuta, cylinder[1].base.at) - offsetof(EnBigokuta, cylinder[0].base.at), 0x2e0, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, cylinder[0].base.ac), offsetof(EnBigokuta, cylinder[1].base.ac) - offsetof(EnBigokuta, cylinder[0].base.ac), 0x2e4, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, cylinder[0].base.oc), offsetof(EnBigokuta, cylinder[1].base.oc) - offsetof(EnBigokuta, cylinder[0].base.oc), 0x2e8, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, cylinder[0].base.atFlags), offsetof(EnBigokuta, cylinder[1].base.atFlags) - offsetof(EnBigokuta, cylinder[0].base.atFlags), 0x2ec, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].base.acFlags), offsetof(EnBigokuta, cylinder[1].base.acFlags) - offsetof(EnBigokuta, cylinder[0].base.acFlags), 0x2ed, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].base.ocFlags1), offsetof(EnBigokuta, cylinder[1].base.ocFlags1) - offsetof(EnBigokuta, cylinder[0].base.ocFlags1), 0x2ee, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].base.ocFlags2), offsetof(EnBigokuta, cylinder[1].base.ocFlags2) - offsetof(EnBigokuta, cylinder[0].base.ocFlags2), 0x2ef, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].base.colType), offsetof(EnBigokuta, cylinder[1].base.colType) - offsetof(EnBigokuta, cylinder[0].base.colType), 0x2f0, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].base.shape), offsetof(EnBigokuta, cylinder[1].base.shape) - offsetof(EnBigokuta, cylinder[0].base.shape), 0x2f1, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].info.toucher.dmgFlags), offsetof(EnBigokuta, cylinder[1].info.toucher.dmgFlags) - offsetof(EnBigokuta, cylinder[0].info.toucher.dmgFlags), 0x2f4, 0x4c, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].info.toucher.effect), offsetof(EnBigokuta, cylinder[1].info.toucher.effect) - offsetof(EnBigokuta, cylinder[0].info.toucher.effect), 0x2f8, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].info.toucher.damage), offsetof(EnBigokuta, cylinder[1].info.toucher.damage) - offsetof(EnBigokuta, cylinder[0].info.toucher.damage), 0x2f9, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].info.bumper.dmgFlags), offsetof(EnBigokuta, cylinder[1].info.bumper.dmgFlags) - offsetof(EnBigokuta, cylinder[0].info.bumper.dmgFlags), 0x2fc, 0x4c, 2, 4, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].info.bumper.effect), offsetof(EnBigokuta, cylinder[1].info.bumper.effect) - offsetof(EnBigokuta, cylinder[0].info.bumper.effect), 0x300, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].info.bumper.defense), offsetof(EnBigokuta, cylinder[1].info.bumper.defense) - offsetof(EnBigokuta, cylinder[0].info.bumper.defense), 0x301, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].info.bumper.hitPos.x), offsetof(EnBigokuta, cylinder[1].info.bumper.hitPos.x) - offsetof(EnBigokuta, cylinder[0].info.bumper.hitPos.x), 0x302, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].info.bumper.hitPos.y), offsetof(EnBigokuta, cylinder[1].info.bumper.hitPos.y) - offsetof(EnBigokuta, cylinder[0].info.bumper.hitPos.y), 0x304, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].info.bumper.hitPos.z), offsetof(EnBigokuta, cylinder[1].info.bumper.hitPos.z) - offsetof(EnBigokuta, cylinder[0].info.bumper.hitPos.z), 0x306, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].info.elemType), offsetof(EnBigokuta, cylinder[1].info.elemType) - offsetof(EnBigokuta, cylinder[0].info.elemType), 0x308, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].info.toucherFlags), offsetof(EnBigokuta, cylinder[1].info.toucherFlags) - offsetof(EnBigokuta, cylinder[0].info.toucherFlags), 0x309, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].info.bumperFlags), offsetof(EnBigokuta, cylinder[1].info.bumperFlags) - offsetof(EnBigokuta, cylinder[0].info.bumperFlags), 0x30a, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].info.ocElemFlags), offsetof(EnBigokuta, cylinder[1].info.ocElemFlags) - offsetof(EnBigokuta, cylinder[0].info.ocElemFlags), 0x30b, 0x4c, 2, 1, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].info.atHit), offsetof(EnBigokuta, cylinder[1].info.atHit) - offsetof(EnBigokuta, cylinder[0].info.atHit), 0x30c, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, cylinder[0].info.acHit), offsetof(EnBigokuta, cylinder[1].info.acHit) - offsetof(EnBigokuta, cylinder[0].info.acHit), 0x310, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, cylinder[0].info.atHitInfo), offsetof(EnBigokuta, cylinder[1].info.atHitInfo) - offsetof(EnBigokuta, cylinder[0].info.atHitInfo), 0x314, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, cylinder[0].info.acHitInfo), offsetof(EnBigokuta, cylinder[1].info.acHitInfo) - offsetof(EnBigokuta, cylinder[0].info.acHitInfo), 0x318, 0x4c, 2, 4, GZ_SPAN_POINTER },
    { offsetof(EnBigokuta, cylinder[0].dim.radius), offsetof(EnBigokuta, cylinder[1].dim.radius) - offsetof(EnBigokuta, cylinder[0].dim.radius), 0x31c, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].dim.height), offsetof(EnBigokuta, cylinder[1].dim.height) - offsetof(EnBigokuta, cylinder[0].dim.height), 0x31e, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].dim.yShift), offsetof(EnBigokuta, cylinder[1].dim.yShift) - offsetof(EnBigokuta, cylinder[0].dim.yShift), 0x320, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].dim.pos.x), offsetof(EnBigokuta, cylinder[1].dim.pos.x) - offsetof(EnBigokuta, cylinder[0].dim.pos.x), 0x322, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].dim.pos.y), offsetof(EnBigokuta, cylinder[1].dim.pos.y) - offsetof(EnBigokuta, cylinder[0].dim.pos.y), 0x324, 0x4c, 2, 2, GZ_SPAN_VALUE },
    { offsetof(EnBigokuta, cylinder[0].dim.pos.z), offsetof(EnBigokuta, cylinder[1].dim.pos.z) - offsetof(EnBigokuta, cylinder[0].dim.pos.z), 0x326, 0x4c, 2, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnBigokutaSpanCount = ARRAY_COUNT(gGzEnBigokutaSpans);

const GzActorFunction gGzEnBigokutaFunctions[] = {
    { 0x0, (void*)EnBigokuta_Init },
    { 0x16c, (void*)EnBigokuta_Destroy },
    { 0x1e0, NULL },
    { 0x25c, (void*)func_809BCEBC },
    { 0x30c, (void*)func_809BCF68 },
    { 0x574, (void*)func_809BD1C8 },
    { 0x690, NULL },
    { 0x6c4, NULL },
    { 0x71c, NULL },
    { 0x758, NULL },
    { 0x790, NULL },
    { 0x7ac, NULL },
    { 0x830, NULL },
    { 0x85c, NULL },
    { 0x8dc, NULL },
    { 0x998, NULL },
    { 0xa10, NULL },
    { 0xa70, NULL },
    { 0xb20, NULL },
    { 0xba8, (void*)func_809BD7F0 },
    { 0xc08, (void*)func_809BD84C },
    { 0xc98, (void*)func_809BD8DC },
    { 0xea4, (void*)func_809BDAE8 },
    { 0xf4c, (void*)func_809BDB90 },
    { 0xfc4, (void*)func_809BDC08 },
    { 0x12f4, (void*)func_809BDF34 },
    { 0x1388, (void*)func_809BDFC8 },
    { 0x1418, (void*)func_809BE058 },
    { 0x1540, (void*)func_809BE180 },
    { 0x162c, (void*)func_809BE26C },
    { 0x17a4, (void*)func_809BE3E4 },
    { 0x1864, (void*)func_809BE4A4 },
    { 0x18d8, (void*)func_809BE518 },
    { 0x1928, NULL },
    { 0x1b58, (void*)func_809BE798 },
    { 0x1c9c, (void*)EnBigokuta_UpdateDamage },
    { 0x1d8c, (void*)EnBigokuta_Update },
    { 0x1f84, NULL },
    { 0x2404, (void*)EnBigokuta_Draw },
};
const size_t gGzEnBigokutaFunctionCount = ARRAY_COUNT(gGzEnBigokutaFunctions);
