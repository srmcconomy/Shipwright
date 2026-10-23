// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Scene_Change/z_en_scene_change.h"

void EnSceneChange_Init(void*, void*);
void EnSceneChange_Destroy(void*, void*);
void EnSceneChange_DoNothing(void*, void*);
void EnSceneChange_Update(void*, void*);
void EnSceneChange_Draw(void*, void*);

const GzActorSpan gGzEnSceneChangeSpans[] = {
    { offsetof(EnSceneChange, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzEnSceneChangeSpanCount = ARRAY_COUNT(gGzEnSceneChangeSpans);

const GzActorFunction gGzEnSceneChangeFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnSceneChange_Init },
    { 0x34, (void*)EnSceneChange_Destroy },
    { 0x44, (void*)EnSceneChange_DoNothing },
    { 0x54, (void*)EnSceneChange_Update },
    { 0x78, (void*)EnSceneChange_Draw },
};
const size_t gGzEnSceneChangeFunctionCount = ARRAY_COUNT(gGzEnSceneChangeFunctions);
