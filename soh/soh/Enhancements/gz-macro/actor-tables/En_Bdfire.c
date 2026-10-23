// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Bdfire/z_en_bdfire.h"

void EnBdfire_Init(void*, void*);
void EnBdfire_Destroy(void*, void*);
void func_809BC2A4(void*, void*);
void func_809BC598(void*, void*);
void EnBdfire_Update(void*, void*);
void EnBdfire_DrawFire(void*, void*);
void EnBdfire_Draw(void*, void*);

const GzActorSpan gGzEnBdfireSpans[] = {
    { offsetof(EnBdfire, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnBdfire, drawFunc), 0, 0x140, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnBdfire, unk_154), 0, 0x144, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBdfire, unk_156), 0, 0x146, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBdfire, unk_158), 0, 0x148, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBdfire, unk_15A[0]), offsetof(EnBdfire, unk_15A[1]) - offsetof(EnBdfire, unk_15A[0]), 0x14a, 0x1, 46, 1, GZ_SPAN_VALUE },
    { offsetof(EnBdfire, unk_188), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBdfire, unk_18C), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBdfire, unk_190), 0, 0x180, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBdfire, unk_194), 0, 0x184, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnBdfire, unk_198[0]), offsetof(EnBdfire, unk_198[1]) - offsetof(EnBdfire, unk_198[0]), 0x188, 0x1, 56, 1, GZ_SPAN_VALUE },
    { offsetof(EnBdfire, lightNode), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(EnBdfire, lightInfoNoGlow.type), 0, 0x1c4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBdfire, lightInfoNoGlow.params.point.x), 0, 0x1c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBdfire, lightInfoNoGlow.params.point.y), 0, 0x1c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBdfire, lightInfoNoGlow.params.point.z), 0, 0x1ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(EnBdfire, lightInfoNoGlow.params.point.color[0]), offsetof(EnBdfire, lightInfoNoGlow.params.point.color[1]) - offsetof(EnBdfire, lightInfoNoGlow.params.point.color[0]), 0x1cc, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(EnBdfire, lightInfoNoGlow.params.point.drawGlow), 0, 0x1cf, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(EnBdfire, lightInfoNoGlow.params.point.radius), 0, 0x1d0, 0x0, 1, 2, GZ_SPAN_VALUE },
};
const size_t gGzEnBdfireSpanCount = ARRAY_COUNT(gGzEnBdfireSpans);

const GzActorFunction gGzEnBdfireFunctions[] = {
    { 0x0, NULL },
    { 0xc, NULL },
    { 0x18, (void*)EnBdfire_Init },
    { 0x248, (void*)EnBdfire_Destroy },
    { 0x280, (void*)func_809BC2A4 },
    { 0x574, (void*)func_809BC598 },
    { 0x864, (void*)EnBdfire_Update },
    { 0x8a0, (void*)EnBdfire_DrawFire },
    { 0xa58, (void*)EnBdfire_Draw },
};
const size_t gGzEnBdfireFunctionCount = ARRAY_COUNT(gGzEnBdfireFunctions);
