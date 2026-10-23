// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Lightbox/z_en_lightbox.h"

void EnLightbox_Init(void*, void*);
void EnLightbox_Destroy(void*, void*);
void EnLightbox_Update(void*, void*);
void EnLightbox_Draw(void*, void*);

const GzActorSpan gGzEnLightboxSpans[] = {
};
const size_t gGzEnLightboxSpanCount = ARRAY_COUNT(gGzEnLightboxSpans);

const GzActorFunction gGzEnLightboxFunctions[] = {
    { 0x0, (void*)EnLightbox_Init },
    { 0x12c, (void*)EnLightbox_Destroy },
    { 0x160, (void*)EnLightbox_Update },
    { 0x3e8, (void*)EnLightbox_Draw },
};
const size_t gGzEnLightboxFunctionCount = ARRAY_COUNT(gGzEnLightboxFunctions);
