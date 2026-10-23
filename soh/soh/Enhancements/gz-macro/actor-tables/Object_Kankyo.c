// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Object_Kankyo/z_object_kankyo.h"

void ObjectKankyo_Init(void*, void*);
void ObjectKankyo_Destroy(void*, void*);
void ObjectKankyo_Snow(void*, void*);
void ObjectKankyo_Fairies(void*, void*);
void ObjectKankyo_Update(void*, void*);
void ObjectKankyo_Draw(void*, void*);
void ObjectKankyo_DrawFairies(void*, void*);
void ObjectKankyo_DrawSnow(void*, void*);
void ObjectKankyo_Lightning(void*, void*);
void ObjectKankyo_DrawLightning(void*, void*);
void ObjectKankyo_SunGraveSparkInit(void*, void*);
void ObjectKankyo_WaitForSunGraveSparkObject(void*, void*);
void ObjectKankyo_SunGraveSpark(void*, void*);
void ObjectKankyo_DrawSunGraveSpark(void*, void*);
void ObjectKankyo_InitBeams(void*, void*);
void ObjectKankyo_WaitForBeamObject(void*, void*);
void ObjectKankyo_Beams(void*, void*);
void ObjectKankyo_DrawBeams(void*, void*);

const GzActorSpan gGzObjectKankyoSpans[] = {
    { offsetof(ObjectKankyo, effects[0].state), offsetof(ObjectKankyo, effects[1].state) - offsetof(ObjectKankyo, effects[0].state), 0x13c, 0x54, 64, 1, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].pos.x), offsetof(ObjectKankyo, effects[1].pos.x) - offsetof(ObjectKankyo, effects[0].pos.x), 0x140, 0x54, 64, 4, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].pos.y), offsetof(ObjectKankyo, effects[1].pos.y) - offsetof(ObjectKankyo, effects[0].pos.y), 0x144, 0x54, 64, 4, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].pos.z), offsetof(ObjectKankyo, effects[1].pos.z) - offsetof(ObjectKankyo, effects[0].pos.z), 0x148, 0x54, 64, 4, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].prevPos.x), offsetof(ObjectKankyo, effects[1].prevPos.x) - offsetof(ObjectKankyo, effects[0].prevPos.x), 0x14c, 0x54, 64, 4, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].prevPos.y), offsetof(ObjectKankyo, effects[1].prevPos.y) - offsetof(ObjectKankyo, effects[0].prevPos.y), 0x150, 0x54, 64, 4, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].prevPos.z), offsetof(ObjectKankyo, effects[1].prevPos.z) - offsetof(ObjectKankyo, effects[0].prevPos.z), 0x154, 0x54, 64, 4, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].base.x), offsetof(ObjectKankyo, effects[1].base.x) - offsetof(ObjectKankyo, effects[0].base.x), 0x158, 0x54, 64, 4, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].base.y), offsetof(ObjectKankyo, effects[1].base.y) - offsetof(ObjectKankyo, effects[0].base.y), 0x15c, 0x54, 64, 4, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].base.z), offsetof(ObjectKankyo, effects[1].base.z) - offsetof(ObjectKankyo, effects[0].base.z), 0x160, 0x54, 64, 4, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].dirPhase.x), offsetof(ObjectKankyo, effects[1].dirPhase.x) - offsetof(ObjectKankyo, effects[0].dirPhase.x), 0x164, 0x54, 64, 4, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].dirPhase.y), offsetof(ObjectKankyo, effects[1].dirPhase.y) - offsetof(ObjectKankyo, effects[0].dirPhase.y), 0x168, 0x54, 64, 4, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].dirPhase.z), offsetof(ObjectKankyo, effects[1].dirPhase.z) - offsetof(ObjectKankyo, effects[0].dirPhase.z), 0x16c, 0x54, 64, 4, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].speed), offsetof(ObjectKankyo, effects[1].speed) - offsetof(ObjectKankyo, effects[0].speed), 0x170, 0x54, 64, 4, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].targetSpeed), offsetof(ObjectKankyo, effects[1].targetSpeed) - offsetof(ObjectKankyo, effects[0].targetSpeed), 0x174, 0x54, 64, 4, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].alphaTimer), offsetof(ObjectKankyo, effects[1].alphaTimer) - offsetof(ObjectKankyo, effects[0].alphaTimer), 0x178, 0x54, 64, 2, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].angle), offsetof(ObjectKankyo, effects[1].angle) - offsetof(ObjectKankyo, effects[0].angle), 0x17a, 0x54, 64, 2, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].alpha), offsetof(ObjectKankyo, effects[1].alpha) - offsetof(ObjectKankyo, effects[0].alpha), 0x17c, 0x54, 64, 1, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].size), offsetof(ObjectKankyo, effects[1].size) - offsetof(ObjectKankyo, effects[0].size), 0x180, 0x54, 64, 4, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].angleVel), offsetof(ObjectKankyo, effects[1].angleVel) - offsetof(ObjectKankyo, effects[0].angleVel), 0x184, 0x54, 64, 2, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].flightRadius), offsetof(ObjectKankyo, effects[1].flightRadius) - offsetof(ObjectKankyo, effects[0].flightRadius), 0x186, 0x54, 64, 2, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].amplitude), offsetof(ObjectKankyo, effects[1].amplitude) - offsetof(ObjectKankyo, effects[0].amplitude), 0x188, 0x54, 64, 4, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, effects[0].timer), offsetof(ObjectKankyo, effects[1].timer) - offsetof(ObjectKankyo, effects[0].timer), 0x18c, 0x54, 64, 2, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, prevEyePos.x), 0, 0x163c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, prevEyePos.y), 0, 0x1640, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, prevEyePos.z), 0, 0x1644, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, requiredObjBankIndex), 0, 0x1648, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, requiredObjectLoaded), 0, 0x1649, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjectKankyo, actionFunc), 0, 0x164c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzObjectKankyoSpanCount = ARRAY_COUNT(gGzObjectKankyoSpans);

const GzActorFunction gGzObjectKankyoFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)ObjectKankyo_Init },
    { 0x30c, (void*)ObjectKankyo_Destroy },
    { 0x330, (void*)ObjectKankyo_Snow },
    { 0x340, (void*)ObjectKankyo_Fairies },
    { 0x1158, (void*)ObjectKankyo_Update },
    { 0x117c, (void*)ObjectKankyo_Draw },
    { 0x1200, (void*)ObjectKankyo_DrawFairies },
    { 0x1680, (void*)ObjectKankyo_DrawSnow },
    { 0x1e18, (void*)ObjectKankyo_Lightning },
    { 0x1ec0, (void*)ObjectKankyo_DrawLightning },
    { 0x20bc, (void*)ObjectKankyo_SunGraveSparkInit },
    { 0x2108, (void*)ObjectKankyo_WaitForSunGraveSparkObject },
    { 0x2178, (void*)ObjectKankyo_SunGraveSpark },
    { 0x2224, (void*)ObjectKankyo_DrawSunGraveSpark },
    { 0x2754, (void*)ObjectKankyo_InitBeams },
    { 0x27a0, (void*)ObjectKankyo_WaitForBeamObject },
    { 0x2800, (void*)ObjectKankyo_Beams },
    { 0x28e0, (void*)ObjectKankyo_DrawBeams },
};
const size_t gGzObjectKankyoFunctionCount = ARRAY_COUNT(gGzObjectKankyoFunctions);
