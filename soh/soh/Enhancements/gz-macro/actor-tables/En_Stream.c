// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Stream/z_en_stream.h"

void EnStream_Init(void*, void*);
void EnStream_Destroy(void*, void*);
void EnStream_SuckPlayer(void*, void*);
void EnStream_WaitForPlayer(void*, void*);
void EnStream_Update(void*, void*);
void EnStream_Draw(void*, void*);

const GzActorSpan gGzEnStreamSpans[] = {
    { offsetof(EnStream, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnStream, unk_150), 0, 0x140, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnStream, unk_154[0]), offsetof(EnStream, unk_154[1]) - offsetof(EnStream, unk_154[0]), 0x144, 0x1, 4, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnStreamSpanCount = ARRAY_COUNT(gGzEnStreamSpans);

const GzActorFunction gGzEnStreamFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnStream_Init },
    { 0x74, (void*)EnStream_Destroy },
    { 0x84, NULL },
    { 0x1a4, (void*)EnStream_SuckPlayer },
    { 0x33c, (void*)EnStream_WaitForPlayer },
    { 0x390, (void*)EnStream_Update },
    { 0x3c4, (void*)EnStream_Draw },
};
const size_t gGzEnStreamFunctionCount = ARRAY_COUNT(gGzEnStreamFunctions);
