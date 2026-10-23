// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Oceff_Storm/z_oceff_storm.h"

void OceffStorm_Init(void*, void*);
void OceffStorm_Destroy(void*, void*);
void OceffStorm_DefaultAction(void*, void*);
void OceffStorm_UnkAction(void*, void*);
void OceffStorm_Update(void*, void*);
void OceffStorm_Draw2(void*, void*);
void OceffStorm_Draw(void*, void*);

const GzActorSpan gGzOceffStormSpans[] = {
    { offsetof(OceffStorm, counter), 0, 0x13c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(OceffStorm, primColorAlpha), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(OceffStorm, vtxAlpha), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(OceffStorm, posYOff), 0, 0x140, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(OceffStorm, posYOffAdd), 0, 0x142, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(OceffStorm, actionFunc), 0, 0x144, 0x0, 1, 4, GZ_SPAN_FUNCTION },
};
const size_t gGzOceffStormSpanCount = ARRAY_COUNT(gGzOceffStormSpans);

const GzActorFunction gGzOceffStormFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)OceffStorm_Init },
    { 0xdc, (void*)OceffStorm_Destroy },
    { 0x128, (void*)OceffStorm_DefaultAction },
    { 0x2ec, (void*)OceffStorm_UnkAction },
    { 0x30c, (void*)OceffStorm_Update },
    { 0x378, (void*)OceffStorm_Draw2 },
    { 0x520, (void*)OceffStorm_Draw },
};
const size_t gGzOceffStormFunctionCount = ARRAY_COUNT(gGzOceffStormFunctions);
