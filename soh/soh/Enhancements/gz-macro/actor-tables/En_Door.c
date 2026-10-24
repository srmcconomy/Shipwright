// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Door/z_en_door.h"

void EnDoor_Init(void*, void*);
void EnDoor_Destroy(void*, void*);
void EnDoor_Idle(void*, void*);
void EnDoor_WaitForCheck(void*, void*);
void EnDoor_Check(void*, void*);
void EnDoor_AjarWait(void*, void*);
void EnDoor_AjarOpen(void*, void*);
void EnDoor_AjarClose(void*, void*);
void EnDoor_Open(void*, void*);
void EnDoor_Update(void*, void*);
void EnDoor_Draw(void*, void*);

const GzActorSpan gGzEnDoorSpans[] = {
    { offsetof(EnDoor, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDoor, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDoor, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDoor, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDoor, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDoor, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(EnDoor, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDoor, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDoor, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDoor, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDoor, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDoor, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDoor, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnDoor, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDoor, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnDoor, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnDoor, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDoor, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDoor, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDoor, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDoor, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDoor, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDoor, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDoor, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDoor, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDoor, animStyle), 0, 0x180, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDoor, playerIsOpening), 0, 0x181, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDoor, unk_192), 0, 0x182, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDoor, requiredObjBankIndex), 0, 0x183, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDoor, dListIndex), 0, 0x184, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnDoor, lockTimer), 0, 0x186, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnDoor, jointTable[0].x), offsetof(EnDoor, jointTable[1].x) - offsetof(EnDoor, jointTable[0].x), 0x188, 0x6, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnDoor, jointTable[0].y), offsetof(EnDoor, jointTable[1].y) - offsetof(EnDoor, jointTable[0].y), 0x18a, 0x6, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnDoor, jointTable[0].z), offsetof(EnDoor, jointTable[1].z) - offsetof(EnDoor, jointTable[0].z), 0x18c, 0x6, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnDoor, morphTable[0].x), offsetof(EnDoor, morphTable[1].x) - offsetof(EnDoor, morphTable[0].x), 0x1a6, 0x6, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnDoor, morphTable[0].y), offsetof(EnDoor, morphTable[1].y) - offsetof(EnDoor, morphTable[0].y), 0x1a8, 0x6, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnDoor, morphTable[0].z), offsetof(EnDoor, morphTable[1].z) - offsetof(EnDoor, morphTable[0].z), 0x1aa, 0x6, 5, 2, GZ_SPAN_VALUE },
    { offsetof(EnDoor, actionFunc), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnDoorSpanCount = ARRAY_COUNT(gGzEnDoorSpans);

const GzActorFunction gGzEnDoorFunctions[] = {
    { 0x0, (void*)EnDoor_Init },
    { 0x21c, (void*)EnDoor_Destroy },
    { 0x250, (void*)EnDoor_SetupType },
    { 0x408, (void*)EnDoor_Idle },
    { 0x6c0, (void*)EnDoor_WaitForCheck },
    { 0x70c, (void*)EnDoor_Check },
    { 0x744, (void*)EnDoor_AjarWait },
    { 0x778, (void*)EnDoor_AjarOpen },
    { 0x7e8, (void*)EnDoor_AjarClose },
    { 0x830, (void*)EnDoor_Open },
    { 0xa84, (void*)EnDoor_Update },
    { 0xaa8, NULL },
    { 0xbdc, (void*)EnDoor_Draw },
};
const size_t gGzEnDoorFunctionCount = ARRAY_COUNT(gGzEnDoorFunctions);
