// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Bb/z_en_bb.h"

void EnBb_Init(void*, void*);
void EnBb_Destroy(void*, void*);
void EnBb_FlameTrail(void*, void*);
void EnBb_SetupDeath(void*, void*);
void EnBb_Death(void*, void*);
void EnBb_Damage(void*, void*);
void EnBb_Blue(void*, void*);
void EnBb_Down(void*, void*);
void EnBb_SetupRed(void*, void*);
void EnBb_Red(void*, void*);
void EnBb_SetWaypoint(void*, void*);
void EnBb_SetupWhite(void*, void*);
void EnBb_White(void*, void*);
void EnBb_InitGreen(void*, void*);
void EnBb_Green(void*, void*);
void EnBb_Stunned(void*, void*);
void EnBb_CollisionCheck(void*, void*);
void EnBb_Update(void*, void*);
void EnBb_Draw(void*, void*);

const GzActorSpan gGzEnBbSpans[] = {
    { offsetof(EnBb, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBb, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnBb, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBb, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBb, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnBb, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, jointTable[0].x), offsetof(EnBb, jointTable[1].x) - offsetof(EnBb, jointTable[0].x), 0x180, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, jointTable[0].y), offsetof(EnBb, jointTable[1].y) - offsetof(EnBb, jointTable[0].y), 0x182, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, jointTable[0].z), offsetof(EnBb, jointTable[1].z) - offsetof(EnBb, jointTable[0].z), 0x184, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, morphTable[0].x), offsetof(EnBb, morphTable[1].x) - offsetof(EnBb, morphTable[0].x), 0x1e0, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, morphTable[0].y), offsetof(EnBb, morphTable[1].y) - offsetof(EnBb, morphTable[0].y), 0x1e2, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, morphTable[0].z), offsetof(EnBb, morphTable[1].z) - offsetof(EnBb, morphTable[0].z), 0x1e4, 0x6, 16, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, action), 0, 0x240, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, unk_254), 0, 0x244, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, actionFunc), 0, 0x248, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnBb, moveMode), 0, 0x24c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, timer), 0, 0x250, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, unk_264), 0, 0x254, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, actionState), 0, 0x258, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, charge), 0, 0x25a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, actionVar1), 0, 0x25c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, actionVar2), 0, 0x25e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, flameScrollMod), 0, 0x260, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, bobPhase), 0, 0x264, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, bobSize), 0, 0x268, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, maxSpeed), 0, 0x26c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, flyHeightMod), 0, 0x270, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, bobSpeedMod), 0, 0x274, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, flameScaleY), 0, 0x278, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, flameScaleX), 0, 0x27c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, waypointPos.x), 0, 0x280, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, waypointPos.y), 0, 0x284, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, waypointPos.z), 0, 0x288, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, path), 0, 0x28c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, waypoint), 0, 0x28d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, flamePrimBlue), 0, 0x28e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, flamePrimAlpha), 0, 0x28f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, flameEnvColor.r), 0, 0x290, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, flameEnvColor.g), 0, 0x291, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, flameEnvColor.b), 0, 0x292, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, blureIdx), 0, 0x294, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, fireIceTimer), 0, 0x298, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, dmgEffect), 0, 0x29a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, collider.base.actor), 0, 0x29c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBb, collider.base.at), 0, 0x2a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBb, collider.base.ac), 0, 0x2a4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBb, collider.base.oc), 0, 0x2a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBb, collider.base.atFlags), 0, 0x2ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, collider.base.acFlags), 0, 0x2ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, collider.base.ocFlags1), 0, 0x2ae, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, collider.base.ocFlags2), 0, 0x2af, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, collider.base.colType), 0, 0x2b0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, collider.base.shape), 0, 0x2b1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, collider.count), 0, 0x2b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, collider.elements), 0, 0x2b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBb, elements[0].info.toucher.dmgFlags), 0, 0x2bc, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].info.toucher.effect), 0, 0x2c0, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].info.toucher.damage), 0, 0x2c1, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].info.bumper.dmgFlags), 0, 0x2c4, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].info.bumper.effect), 0, 0x2c8, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].info.bumper.defense), 0, 0x2c9, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].info.bumper.hitPos.x), 0, 0x2ca, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].info.bumper.hitPos.y), 0, 0x2cc, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].info.bumper.hitPos.z), 0, 0x2ce, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].info.elemType), 0, 0x2d0, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].info.toucherFlags), 0, 0x2d1, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].info.bumperFlags), 0, 0x2d2, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].info.ocElemFlags), 0, 0x2d3, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].info.atHit), 0, 0x2d4, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBb, elements[0].info.acHit), 0, 0x2d8, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBb, elements[0].info.atHitInfo), 0, 0x2dc, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBb, elements[0].info.acHitInfo), 0, 0x2e0, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBb, elements[0].dim.modelSphere.center.x), 0, 0x2e4, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].dim.modelSphere.center.y), 0, 0x2e6, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].dim.modelSphere.center.z), 0, 0x2e8, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].dim.modelSphere.radius), 0, 0x2ea, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].dim.worldSphere.center.x), 0, 0x2ec, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].dim.worldSphere.center.y), 0, 0x2ee, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].dim.worldSphere.center.z), 0, 0x2f0, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].dim.worldSphere.radius), 0, 0x2f2, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].dim.scale), 0, 0x2f4, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, elements[0].dim.limb), 0, 0x2f8, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBb, bodyBreak.matrices), 0, 0x2fc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBb, bodyBreak.objectIds), 0, 0x300, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBb, bodyBreak.count), 0, 0x304, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBb, bodyBreak.dLists), 0, 0x308, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBb, bodyBreak.val), 0, 0x30c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, bodyBreak.prevLimbIndex), 0, 0x310, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBb, targetActor), 0, 0x314, 0x0, 1, 4, GZ_SPAN_POINTER },
};
const size_t gGzEnBbSpanCount = ARRAY_COUNT(gGzEnBbSpans);

const GzActorFunction gGzEnBbFunctions[] = {
    { 0x0, NULL },
    { 0xc, NULL },
    { 0xa0, NULL },
    { 0x23c, NULL },
    { 0x288, (void*)EnBb_Init },
    { 0x630, (void*)EnBb_Destroy },
    { 0x65c, NULL },
    { 0x6b0, (void*)EnBb_FlameTrail },
    { 0x82c, (void*)EnBb_SetupDeath },
    { 0x8c0, (void*)EnBb_Death },
    { 0xa3c, NULL },
    { 0xafc, (void*)EnBb_Damage },
    { 0xb68, NULL },
    { 0xc28, (void*)EnBb_Blue },
    { 0x141c, NULL },
    { 0x14ac, (void*)EnBb_Down },
    { 0x1780, (void*)EnBb_SetupRed },
    { 0x1890, (void*)EnBb_Red },
    { 0x1c58, NULL },
    { 0x1c8c, (void*)EnBb_SetWaypoint },
    { 0x1d58, (void*)EnBb_SetupWhite },
    { 0x1e08, (void*)EnBb_White },
    { 0x218c, (void*)EnBb_InitGreen },
    { 0x22c4, NULL },
    { 0x235c, (void*)EnBb_Green },
    { 0x29cc, NULL },
    { 0x2ae0, (void*)EnBb_Stunned },
    { 0x2c84, (void*)EnBb_CollisionCheck },
    { 0x2fb8, (void*)EnBb_Update },
    { 0x3238, NULL },
    { 0x3288, (void*)EnBb_Draw },
};
const size_t gGzEnBbFunctionCount = ARRAY_COUNT(gGzEnBbFunctions);
