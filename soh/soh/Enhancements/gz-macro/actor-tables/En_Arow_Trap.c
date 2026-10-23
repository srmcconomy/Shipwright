// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Arow_Trap/z_en_arow_trap.h"

void EnArowTrap_Init(void*, void*);
void EnArowTrap_Destroy(void*, void*);
void EnArowTrap_Update(void*, void*);

const GzActorSpan gGzEnArowTrapSpans[] = {
    { offsetof(EnArowTrap, unk_14C), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(EnArowTrap, attackTimer), 0, 0x140, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzEnArowTrapSpanCount = ARRAY_COUNT(gGzEnArowTrapSpans);

const GzActorFunction gGzEnArowTrapFunctions[] = {
    { 0x0, (void*)EnArowTrap_Init },
    { 0x50, (void*)EnArowTrap_Destroy },
    { 0x60, (void*)EnArowTrap_Update },
};
const size_t gGzEnArowTrapFunctionCount = ARRAY_COUNT(gGzEnArowTrapFunctions);
