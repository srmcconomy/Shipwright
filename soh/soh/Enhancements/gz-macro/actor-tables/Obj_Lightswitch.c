// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Obj_Lightswitch/z_obj_lightswitch.h"

void ObjLightswitch_InitCollider(void*, void*);
void ObjLightswitch_SetSwitchFlag(void*, void*);
void ObjLightswitch_ClearSwitchFlag(void*, void*);
void ObjLightswitch_SpawnDisappearEffects(void*, void*);
void ObjLightswitch_Init(void*, void*);
void ObjLightswitch_Destroy(void*, void*);
void ObjLightswitch_Off(void*, void*);
void ObjLightswitch_TurnOn(void*, void*);
void ObjLightswitch_On(void*, void*);
void ObjLightswitch_TurnOff(void*, void*);
void ObjLightswitch_DisappearDelay(void*, void*);
void ObjLightswitch_Disappear(void*, void*);
void ObjLightswitch_Update(void*, void*);
void ObjLightswitch_DrawOpa(void*, void*);
void ObjLightswitch_DrawXlu(void*, void*);
void ObjLightswitch_Draw(void*, void*);

const GzActorSpan gGzObjLightswitchSpans[] = {
    { offsetof(ObjLightswitch, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(ObjLightswitch, collider.base.actor), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjLightswitch, collider.base.at), 0, 0x144, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjLightswitch, collider.base.ac), 0, 0x148, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjLightswitch, collider.base.oc), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjLightswitch, collider.base.atFlags), 0, 0x150, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, collider.base.acFlags), 0, 0x151, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, collider.base.ocFlags1), 0, 0x152, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, collider.base.ocFlags2), 0, 0x153, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, collider.base.colType), 0, 0x154, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, collider.base.shape), 0, 0x155, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, collider.count), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, collider.elements), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjLightswitch, colliderItems[0].info.toucher.dmgFlags), 0, 0x160, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].info.toucher.effect), 0, 0x164, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].info.toucher.damage), 0, 0x165, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].info.bumper.dmgFlags), 0, 0x168, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].info.bumper.effect), 0, 0x16c, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].info.bumper.defense), 0, 0x16d, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].info.bumper.hitPos.x), 0, 0x16e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].info.bumper.hitPos.y), 0, 0x170, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].info.bumper.hitPos.z), 0, 0x172, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].info.elemType), 0, 0x174, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].info.toucherFlags), 0, 0x175, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].info.bumperFlags), 0, 0x176, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].info.ocElemFlags), 0, 0x177, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].info.atHit), 0, 0x178, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjLightswitch, colliderItems[0].info.acHit), 0, 0x17c, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjLightswitch, colliderItems[0].info.atHitInfo), 0, 0x180, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjLightswitch, colliderItems[0].info.acHitInfo), 0, 0x184, 0x40, 1, 4, GZ_SPAN_POINTER },
    { offsetof(ObjLightswitch, colliderItems[0].dim.modelSphere.center.x), 0, 0x188, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].dim.modelSphere.center.y), 0, 0x18a, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].dim.modelSphere.center.z), 0, 0x18c, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].dim.modelSphere.radius), 0, 0x18e, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].dim.worldSphere.center.x), 0, 0x190, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].dim.worldSphere.center.y), 0, 0x192, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].dim.worldSphere.center.z), 0, 0x194, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].dim.worldSphere.radius), 0, 0x196, 0x40, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].dim.scale), 0, 0x198, 0x40, 1, 4, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, colliderItems[0].dim.limb), 0, 0x19c, 0x40, 1, 1, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, timer), 0, 0x1a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, toggleDelay), 0, 0x1a2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, faceTextureIndex), 0, 0x1a4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, color[0]), offsetof(ObjLightswitch, color[1]) - offsetof(ObjLightswitch, color[0]), 0x1a6, 0x2, 3, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, alpha), 0, 0x1ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, flameRingRot), 0, 0x1ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, flameRingRotSpeed), 0, 0x1b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(ObjLightswitch, prevFrameACflags), 0, 0x1b2, 0x0, 1, 1, GZ_SPAN_VALUE },
};
const size_t gGzObjLightswitchSpanCount = ARRAY_COUNT(gGzObjLightswitchSpans);

const GzActorFunction gGzObjLightswitchFunctions[] = {
    { 0x0, (void*)ObjLightswitch_InitCollider },
    { 0x9c, (void*)ObjLightswitch_SetSwitchFlag },
    { 0x160, (void*)ObjLightswitch_ClearSwitchFlag },
    { 0x1e0, (void*)ObjLightswitch_SpawnDisappearEffects },
    { 0x408, (void*)ObjLightswitch_Init },
    { 0x59c, (void*)ObjLightswitch_Destroy },
    { 0x5c8, NULL },
    { 0x5fc, (void*)ObjLightswitch_Off },
    { 0x6dc, NULL },
    { 0x700, (void*)ObjLightswitch_TurnOn },
    { 0x7f4, NULL },
    { 0x830, (void*)ObjLightswitch_On },
    { 0x944, NULL },
    { 0x970, (void*)ObjLightswitch_TurnOff },
    { 0xa60, NULL },
    { 0xa7c, (void*)ObjLightswitch_DisappearDelay },
    { 0xac4, NULL },
    { 0xae0, (void*)ObjLightswitch_Disappear },
    { 0xb24, (void*)ObjLightswitch_Update },
    { 0xc08, (void*)ObjLightswitch_DrawOpa },
    { 0xf34, (void*)ObjLightswitch_DrawXlu },
    { 0x11e8, (void*)ObjLightswitch_Draw },
};
const size_t gGzObjLightswitchFunctionCount = ARRAY_COUNT(gGzObjLightswitchFunctions);
