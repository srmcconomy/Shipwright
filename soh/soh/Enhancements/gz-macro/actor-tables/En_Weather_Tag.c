// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_En_Weather_Tag/z_en_weather_tag.h"

void EnWeatherTag_Destroy(void*, void*);
void EnWeatherTag_Init(void*, void*);
void EnWeatherTag_DisabledCloudyHyruleMarket(void*, void*);
void EnWeatherTag_EnabledCloudyHyruleMarket(void*, void*);
void EnWeatherTag_DisabledCloudyLonLonRanch(void*, void*);
void EnWeatherTag_EnabledCloudyLonLonRanch(void*, void*);
void EnWeatherTag_DisabledCloudyDeathMountain(void*, void*);
void EnWeatherTag_EnabledCloudyDeathMountain(void*, void*);
void EnWeatherTag_DisabledCloudySnow(void*, void*);
void EnWeatherTag_EnabledCloudySnow(void*, void*);
void EnWeatherTag_DisabledRainLakeHylia(void*, void*);
void EnWeatherTag_EnabledRainLakeHylia(void*, void*);
void EnWeatherTag_DisabledCloudyRainThunderKakariko(void*, void*);
void EnWeatherTag_EnabledCloudyRainThunderKakariko(void*, void*);
void EnWeatherTag_SetSandstormIntensity(void*, void*);
void EnWeatherTag_DisabledRainThunder(void*, void*);
void EnWeatherTag_EnabledRainThunder(void*, void*);
void EnWeatherTag_Update(void*, void*);

const GzActorSpan gGzEnWeatherTagSpans[] = {
    { offsetof(EnWeatherTag, actionFunc), 0, 0x13c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(EnWeatherTag, unk_150[0]), offsetof(EnWeatherTag, unk_150[1]) - offsetof(EnWeatherTag, unk_150[0]), 0x140, 0x1, 4, 1, GZ_SPAN_VALUE },
};
const size_t gGzEnWeatherTagSpanCount = ARRAY_COUNT(gGzEnWeatherTagSpans);

const GzActorFunction gGzEnWeatherTagFunctions[] = {
    { 0x0, NULL },
    { 0xc, (void*)EnWeatherTag_Destroy },
    { 0x1c, (void*)EnWeatherTag_Init },
    { 0x1f0, NULL },
    { 0x3c8, NULL },
    { 0x588, (void*)EnWeatherTag_DisabledCloudyHyruleMarket },
    { 0x5e4, (void*)EnWeatherTag_EnabledCloudyHyruleMarket },
    { 0x638, (void*)EnWeatherTag_DisabledCloudyLonLonRanch },
    { 0x694, (void*)EnWeatherTag_EnabledCloudyLonLonRanch },
    { 0x6e8, (void*)EnWeatherTag_DisabledCloudyDeathMountain },
    { 0x744, (void*)EnWeatherTag_EnabledCloudyDeathMountain },
    { 0x798, (void*)EnWeatherTag_DisabledCloudySnow },
    { 0x810, (void*)EnWeatherTag_EnabledCloudySnow },
    { 0x87c, (void*)EnWeatherTag_DisabledRainLakeHylia },
    { 0x900, (void*)EnWeatherTag_EnabledRainLakeHylia },
    { 0x978, (void*)EnWeatherTag_DisabledCloudyRainThunderKakariko },
    { 0xa10, (void*)EnWeatherTag_EnabledCloudyRainThunderKakariko },
    { 0xa9c, (void*)EnWeatherTag_SetSandstormIntensity },
    { 0xb98, (void*)EnWeatherTag_DisabledRainThunder },
    { 0xc3c, (void*)EnWeatherTag_EnabledRainThunder },
    { 0xcf0, (void*)EnWeatherTag_Update },
};
const size_t gGzEnWeatherTagFunctionCount = ARRAY_COUNT(gGzEnWeatherTagFunctions);
