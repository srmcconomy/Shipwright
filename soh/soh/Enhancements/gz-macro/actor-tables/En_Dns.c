// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Dns/z_en_dns.h"

void EnDns_Init(void*, void*);
void EnDns_Destroy(void*, void*);
void EnDns_SetupIdle(void*, void*);
void EnDns_Idle(void*, void*);
void EnDns_Talk(void*, void*);
void EnDns_OfferSaleItem(void*, void*);
void EnDns_SetupSale(void*, void*);
void EnDns_Sale(void*, void*);
void EnDns_SetupBurrow(void*, void*);
void EnDns_SetupNoSaleBurrow(void*, void*);
void EnDns_Burrow(void*, void*);
void EnDns_PostBurrow(void*, void*);
void EnDns_Update(void*, void*);
void EnDns_Draw(void*, void*);

const GzActorSpan gGzEnDnsSpans[] = {
    { offsetof(EnDns, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDns, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnDns, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDns, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDns, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDns, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDns, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDns, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDns, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDns, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDns, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDns, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDns, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, jointTable[0].x), offsetof(EnDns, jointTable[1].x) - offsetof(EnDns, jointTable[0].x), 0x180, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, jointTable[0].y), offsetof(EnDns, jointTable[1].y) - offsetof(EnDns, jointTable[0].y), 0x182, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, jointTable[0].z), offsetof(EnDns, jointTable[1].z) - offsetof(EnDns, jointTable[0].z), 0x184, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, morphTable[0].x), offsetof(EnDns, morphTable[1].x) - offsetof(EnDns, morphTable[0].x), 0x1ec, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, morphTable[0].y), offsetof(EnDns, morphTable[1].y) - offsetof(EnDns, morphTable[0].y), 0x1ee, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, morphTable[0].z), offsetof(EnDns, morphTable[1].z) - offsetof(EnDns, morphTable[0].z), 0x1f0, 0x6, 18, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, actionFunc), 0, 0x258, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDns, collider.base.actor), 0, 0x25c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDns, collider.base.at), 0, 0x260, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDns, collider.base.ac), 0, 0x264, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDns, collider.base.oc), 0, 0x268, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDns, collider.base.atFlags), 0, 0x26c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.base.acFlags), 0, 0x26d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.base.ocFlags1), 0, 0x26e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.base.ocFlags2), 0, 0x26f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.base.colType), 0, 0x270, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.base.shape), 0, 0x271, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.info.toucher.dmgFlags), 0, 0x274, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.info.toucher.effect), 0, 0x278, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.info.toucher.damage), 0, 0x279, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.info.bumper.dmgFlags), 0, 0x27c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.info.bumper.effect), 0, 0x280, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.info.bumper.defense), 0, 0x281, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.info.bumper.hitPos.x), 0, 0x282, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.info.bumper.hitPos.y), 0, 0x284, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.info.bumper.hitPos.z), 0, 0x286, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.info.elemType), 0, 0x288, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.info.toucherFlags), 0, 0x289, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.info.bumperFlags), 0, 0x28a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.info.ocElemFlags), 0, 0x28b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.info.atHit), 0, 0x28c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDns, collider.info.acHit), 0, 0x290, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDns, collider.info.atHitInfo), 0, 0x294, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDns, collider.info.acHitInfo), 0, 0x298, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDns, collider.dim.radius), 0, 0x29c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.dim.height), 0, 0x29e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.dim.yShift), 0, 0x2a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.dim.pos.x), 0, 0x2a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.dim.pos.y), 0, 0x2a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, collider.dim.pos.z), 0, 0x2a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, dustTimer), 0, 0x2a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDns, animIndex), 0, 0x2aa, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, maintainCollider), 0, 0x2ab, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, standOnGround), 0, 0x2ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, dropCollectible), 0, 0x2ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDns, dnsItemEntry), 0, 0x2b0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDns, yInitPos), 0, 0x2b4, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnDnsSpanCount = ARRAY_COUNT(gGzEnDnsSpans);

const GzActorFunction gGzEnDnsFunctions[] = {
    { 0x0, (void*)EnDns_Init },
    { 0x174, (void*)EnDns_Destroy },
    { 0x1a0, NULL },
    { 0x228, NULL },
    { 0x2e0, NULL },
    { 0x398, NULL },
    { 0x3c8, NULL },
    { 0x490, NULL },
    { 0x4e4, NULL },
    { 0x584, NULL },
    { 0x634, NULL },
    { 0x68c, NULL },
    { 0x6c0, NULL },
    { 0x6f4, NULL },
    { 0x73c, NULL },
    { 0x770, NULL },
    { 0x7a4, NULL },
    { 0x7ec, NULL },
    { 0x834, (void*)EnDns_SetupIdle },
    { 0x878, (void*)EnDns_Idle },
    { 0x94c, (void*)EnDns_Talk },
    { 0xa84, (void*)EnDns_OfferSaleItem },
    { 0xb9c, (void*)EnDns_SetupSale },
    { 0xc08, (void*)EnDns_Sale },
    { 0xc54, (void*)EnDns_SetupBurrow },
    { 0xd48, (void*)EnDns_SetupNoSaleBurrow },
    { 0xdc0, (void*)EnDns_Burrow },
    { 0xe3c, (void*)EnDns_PostBurrow },
    { 0xf40, (void*)EnDns_Update },
    { 0x1030, (void*)EnDns_Draw },
};
const size_t gGzEnDnsFunctionCount = ARRAY_COUNT(gGzEnDnsFunctions);
