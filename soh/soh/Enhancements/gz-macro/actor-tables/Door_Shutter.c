// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Door_Shutter/z_door_shutter.h"

void DoorShutter_Init(void*, void*);
void DoorShutter_Destroy(void*, void*);
void DoorShutter_SetupType(void*, void*);
void DoorShutter_WaitClear(void*, void*);
void DoorShutter_Unopenable(void*, void*);
void DoorShutter_Idle(void*, void*);
void DoorShutter_InitOpeningDoorCam(void*, void*);
void DoorShutter_BarAndWaitSwitchFlag(void*, void*);
void DoorShutter_UnbarredCheckSwitchFlag(void*, void*);
void DoorShutter_Open(void*, void*);
void DoorShutter_Unbar(void*, void*);
void DoorShutter_SetupClosed(void*, void*);
void DoorShutter_Close(void*, void*);
void DoorShutter_JabuDoorClose(void*, void*);
void DoorShutter_WaitPlayerSurprised(void*, void*);
void DoorShutter_GohmaBlockFall(void*, void*);
void DoorShutter_GohmaBlockBounce(void*, void*);
void DoorShutter_PhantomGanonBarsRaise(void*, void*);
void DoorShutter_Update(void*, void*);
void DoorShutter_Draw(void*, void*);

const GzActorSpan gGzDoorShutterSpans[] = {
    { offsetof(DoorShutter, unk_164), 0, 0x154, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorShutter, jabuDoorClosedAmount), 0, 0x156, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorShutter, bossDoorTexIndex), 0, 0x158, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DoorShutter, doorType), 0, 0x15a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorShutter, styleType), 0, 0x15b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorShutter, gfxType), 0, 0x15c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorShutter, requiredObjBankIndex), 0, 0x15d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorShutter, unlockTimer), 0, 0x15e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorShutter, actionTimer), 0, 0x15f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DoorShutter, barsClosedAmount), 0, 0x160, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DoorShutter, actionFunc), 0, 0x164, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzDoorShutterSpanCount = ARRAY_COUNT(gGzDoorShutterSpans);

const GzActorFunction gGzDoorShutterFunctions[] = {
    { 0x0, NULL },
    { 0x10, NULL },
    { 0x1f8, (void*)DoorShutter_Init },
    { 0x410, (void*)DoorShutter_Destroy },
    { 0x480, (void*)DoorShutter_SetupType },
    { 0x5bc, NULL },
    { 0x654, NULL },
    { 0x7d4, (void*)DoorShutter_WaitClear },
    { 0x880, (void*)DoorShutter_Unopenable },
    { 0x890, (void*)DoorShutter_Idle },
    { 0x9e4, (void*)DoorShutter_InitOpeningDoorCam },
    { 0xa9c, NULL },
    { 0xb94, NULL },
    { 0xc78, (void*)DoorShutter_BarAndWaitSwitchFlag },
    { 0xd30, (void*)DoorShutter_UnbarredCheckSwitchFlag },
    { 0xd9c, (void*)DoorShutter_Open },
    { 0xeec, (void*)DoorShutter_Unbar },
    { 0xfbc, (void*)DoorShutter_SetupClosed },
    { 0x1188, (void*)DoorShutter_Close },
    { 0x12cc, (void*)DoorShutter_JabuDoorClose },
    { 0x1310, (void*)DoorShutter_WaitPlayerSurprised },
    { 0x1368, (void*)DoorShutter_GohmaBlockFall },
    { 0x1464, (void*)DoorShutter_GohmaBlockBounce },
    { 0x14f0, (void*)DoorShutter_PhantomGanonBarsRaise },
    { 0x1580, (void*)DoorShutter_Update },
    { 0x15d4, NULL },
    { 0x17c4, NULL },
    { 0x1870, (void*)DoorShutter_Draw },
    { 0x1d78, NULL },
};
const size_t gGzDoorShutterFunctionCount = ARRAY_COUNT(gGzDoorShutterFunctions);
