// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "overlays/actors/ovl_Demo_Ec/z_demo_ec.h"

void DemoEc_Destroy(void*, void*);
void DemoEc_Init(void*, void*);
void DemoEc_UpdateBgFlags(void*, void*);
void func_8096D594(void*, void*);
void func_8096D5D4(void*, void*);
void func_8096D64C(void*, void*);
void DemoEc_UseDrawObject(void*, void*);
void DemoEc_UseAnimationObject(void*, void*);
void DemoEc_InitIngo(void*, void*);
void DemoEc_UpdateIngo(void*, void*);
void DemoEc_DrawIngo(void*, void*);
void DemoEc_InitTalon(void*, void*);
void DemoEc_UpdateTalon(void*, void*);
void DemoEc_DrawTalon(void*, void*);
void DemoEc_InitWindmillMan(void*, void*);
void DemoEc_UpdateWindmillMan(void*, void*);
void DemoEc_DrawWindmillMan(void*, void*);
void DemoEc_InitKokiriBoy(void*, void*);
void DemoEc_InitDancingKokiriBoy(void*, void*);
void DemoEc_UpdateKokiriBoy(void*, void*);
void DemoEc_UpdateDancingKokiriBoy(void*, void*);
void DemoEc_DrawKokiriBoy(void*, void*);
void DemoEc_InitKokiriGirl(void*, void*);
void DemoEc_InitDancingKokiriGirl(void*, void*);
void DemoEc_UpdateKokiriGirl(void*, void*);
void DemoEc_UpdateDancingKokiriGirl(void*, void*);
void DemoEc_DrawKokiriGirl(void*, void*);
void DemoEc_InitOldMan(void*, void*);
void DemoEc_UpdateOldMan(void*, void*);
void DemoEc_DrawOldMan(void*, void*);
void DemoEc_InitBeardedMan(void*, void*);
void DemoEc_UpdateBeardedMan(void*, void*);
void DemoEc_DrawBeardedMan(void*, void*);
void DemoEc_InitWoman(void*, void*);
void DemoEc_UpdateWoman(void*, void*);
void DemoEc_DrawWoman(void*, void*);
void DemoEc_InitOldWoman(void*, void*);
void DemoEc_UpdateOldWoman(void*, void*);
void DemoEc_DrawOldWoman(void*, void*);
void DemoEc_InitBossCarpenter(void*, void*);
void DemoEc_UpdateBossCarpenter(void*, void*);
void DemoEc_DrawBossCarpenter(void*, void*);
void DemoEc_InitCarpenter(void*, void*);
void DemoEc_UpdateCarpenter(void*, void*);
void DemoEc_DrawCarpenter(void*, void*);
void DemoEc_InitGerudo(void*, void*);
void DemoEc_UpdateGerudo(void*, void*);
void DemoEc_DrawGerudo(void*, void*);
void DemoEc_InitDancingZora(void*, void*);
void DemoEc_UpdateDancingZora(void*, void*);
void DemoEc_DrawDancingZora(void*, void*);
void DemoEc_InitKingZora(void*, void*);
void func_8096F224(void*, void*);
void DemoEc_UpdateKingZora(void*, void*);
void func_8096F378(void*, void*);
void func_8096F3D4(void*, void*);
void DemoEc_DrawKingZora(void*, void*);
void DemoEc_InitMido(void*, void*);
void func_8096F4FC(void*, void*);
void DemoEc_UpdateMido(void*, void*);
void func_8096F640(void*, void*);
void DemoEc_DrawMido(void*, void*);
void DemoEc_InitCucco(void*, void*);
void DemoEc_UpdateCucco(void*, void*);
void DemoEc_DrawCucco(void*, void*);
void DemoEc_InitCuccoLady(void*, void*);
void DemoEc_UpdateCuccoLady(void*, void*);
void DemoEc_DrawCuccoLady(void*, void*);
void DemoEc_InitPotionShopOwner(void*, void*);
void DemoEc_UpdatePotionShopOwner(void*, void*);
void DemoEc_DrawPotionShopOwner(void*, void*);
void DemoEc_InitMaskShopOwner(void*, void*);
void DemoEc_UpdateMaskShopOwner(void*, void*);
void DemoEc_DrawMaskShopOwner(void*, void*);
void DemoEc_InitFishingOwner(void*, void*);
void DemoEc_UpdateFishingOwner(void*, void*);
void DemoEc_DrawFishingOwner(void*, void*);
void DemoEc_InitBombchuShopOwner(void*, void*);
void DempEc_UpdateBombchuShopOwner(void*, void*);
void DemoEc_DrawBombchuShopOwner(void*, void*);
void DemoEc_InitGorons(void*, void*);
void DemoEc_UpdateGorons(void*, void*);
void DemoEc_DrawGorons(void*, void*);
void DemoEc_InitMalon(void*, void*);
void DemoEc_UpdateMalon(void*, void*);
void DemoEc_DrawMalon(void*, void*);
void DemoEc_InitNpc(void*, void*);
void DemoEc_InitCommon(void*, void*);
void DemoEc_Update(void*, void*);
void DemoEc_DrawCommon(void*, void*);
void DemoEc_Draw(void*, void*);

const GzActorSpan gGzDemoEcSpans[] = {
    { offsetof(DemoEc, skelAnime.limbCount), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoEc, skelAnime.mode), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoEc, skelAnime.dListCount), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoEc, skelAnime.taper), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoEc, skelAnime.skeleton), 0, 0x140, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoEc, skelAnime.animation), 0, 0x144, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(DemoEc, skelAnime.startFrame), 0, 0x148, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoEc, skelAnime.endFrame), 0, 0x14c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoEc, skelAnime.animLength), 0, 0x150, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoEc, skelAnime.curFrame), 0, 0x154, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoEc, skelAnime.playSpeed), 0, 0x158, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoEc, skelAnime.jointTable), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoEc, skelAnime.morphTable), 0, 0x160, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(DemoEc, skelAnime.morphWeight), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoEc, skelAnime.morphRate), 0, 0x168, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoEc, skelAnime.update.normal), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(DemoEc, skelAnime.initFlags), 0, 0x170, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoEc, skelAnime.movementFlags), 0, 0x171, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(DemoEc, skelAnime.prevRot), 0, 0x172, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoEc, skelAnime.prevTransl.x), 0, 0x174, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoEc, skelAnime.prevTransl.y), 0, 0x176, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoEc, skelAnime.prevTransl.z), 0, 0x178, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoEc, skelAnime.baseTransl.x), 0, 0x17a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoEc, skelAnime.baseTransl.y), 0, 0x17c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoEc, skelAnime.baseTransl.z), 0, 0x17e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoEc, eyeTexIndex), 0, 0x180, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoEc, blinkTimer), 0, 0x182, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(DemoEc, updateMode), 0, 0x184, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoEc, drawConfig), 0, 0x188, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoEc, npcAction), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoEc, drawObjBankIndex), 0, 0x190, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(DemoEc, animObjBankIndex), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzDemoEcSpanCount = ARRAY_COUNT(gGzDemoEcSpans);

const GzActorFunction gGzDemoEcFunctions[] = {
    { 0x0, (void*)DemoEc_Destroy },
    { 0x24, (void*)DemoEc_Init },
    { 0x6c, NULL },
    { 0x90, (void*)DemoEc_UpdateBgFlags },
    { 0xd8, (void*)func_8096D594 },
    { 0x118, (void*)func_8096D5D4 },
    { 0x190, (void*)func_8096D64C },
    { 0x1d0, NULL },
    { 0x258, NULL },
    { 0x270, NULL },
    { 0x2e8, NULL },
    { 0x3a4, NULL },
    { 0x3fc, NULL },
    { 0x58c, NULL },
    { 0x7ec, (void*)DemoEc_UseDrawObject },
    { 0x848, (void*)DemoEc_UseAnimationObject },
    { 0x880, NULL },
    { 0x8a8, NULL },
    { 0x928, (void*)DemoEc_InitIngo },
    { 0x9c8, (void*)DemoEc_UpdateIngo },
    { 0xa08, (void*)DemoEc_DrawIngo },
    { 0xa3c, (void*)DemoEc_InitTalon },
    { 0xadc, (void*)DemoEc_UpdateTalon },
    { 0xb1c, (void*)DemoEc_DrawTalon },
    { 0xb50, (void*)DemoEc_InitWindmillMan },
    { 0xbf0, (void*)DemoEc_UpdateWindmillMan },
    { 0xc30, (void*)DemoEc_DrawWindmillMan },
    { 0xc64, (void*)DemoEc_InitKokiriBoy },
    { 0xd04, (void*)DemoEc_InitDancingKokiriBoy },
    { 0xda8, (void*)DemoEc_UpdateKokiriBoy },
    { 0xde8, (void*)DemoEc_UpdateDancingKokiriBoy },
    { 0xe08, (void*)DemoEc_DrawKokiriBoy },
    { 0xe4c, (void*)DemoEc_InitKokiriGirl },
    { 0xeec, (void*)DemoEc_InitDancingKokiriGirl },
    { 0xf90, (void*)DemoEc_UpdateKokiriGirl },
    { 0xfd8, (void*)DemoEc_UpdateDancingKokiriGirl },
    { 0xff8, (void*)DemoEc_DrawKokiriGirl },
    { 0x104c, (void*)DemoEc_InitOldMan },
    { 0x10ec, (void*)DemoEc_UpdateOldMan },
    { 0x1134, (void*)DemoEc_DrawOldMan },
    { 0x1188, (void*)DemoEc_InitBeardedMan },
    { 0x1228, (void*)DemoEc_UpdateBeardedMan },
    { 0x1270, (void*)DemoEc_DrawBeardedMan },
    { 0x12c4, (void*)DemoEc_InitWoman },
    { 0x1364, (void*)DemoEc_UpdateWoman },
    { 0x13ac, (void*)DemoEc_DrawWoman },
    { 0x13e8, (void*)DemoEc_InitOldWoman },
    { 0x1488, (void*)DemoEc_UpdateOldWoman },
    { 0x14c8, (void*)DemoEc_DrawOldWoman },
    { 0x14f8, (void*)DemoEc_InitBossCarpenter },
    { 0x1598, (void*)DemoEc_UpdateBossCarpenter },
    { 0x15d8, (void*)DemoEc_DrawBossCarpenter },
    { 0x1604, (void*)DemoEc_InitCarpenter },
    { 0x16a4, (void*)DemoEc_UpdateCarpenter },
    { 0x16e4, NULL },
    { 0x17e8, NULL },
    { 0x1850, NULL },
    { 0x18d4, (void*)DemoEc_DrawCarpenter },
    { 0x1910, (void*)DemoEc_InitGerudo },
    { 0x19b4, (void*)DemoEc_UpdateGerudo },
    { 0x19fc, NULL },
    { 0x1a50, NULL },
    { 0x1ad4, (void*)DemoEc_DrawGerudo },
    { 0x1b18, (void*)DemoEc_InitDancingZora },
    { 0x1bbc, (void*)DemoEc_UpdateDancingZora },
    { 0x1c04, (void*)DemoEc_DrawDancingZora },
    { 0x1c40, (void*)DemoEc_InitKingZora },
    { 0x1cf0, NULL },
    { 0x1d40, (void*)func_8096F224 },
    { 0x1d88, NULL },
    { 0x1dd0, NULL },
    { 0x1e34, (void*)DemoEc_UpdateKingZora },
    { 0x1e9c, (void*)func_8096F378 },
    { 0x1efc, (void*)func_8096F3D4 },
    { 0x1f44, (void*)DemoEc_DrawKingZora },
    { 0x1f80, (void*)DemoEc_InitMido },
    { 0x2030, (void*)func_8096F4FC },
    { 0x2078, NULL },
    { 0x20ac, NULL },
    { 0x2110, (void*)DemoEc_UpdateMido },
    { 0x2178, (void*)func_8096F640 },
    { 0x21d8, (void*)DemoEc_DrawMido },
    { 0x2214, (void*)DemoEc_InitCucco },
    { 0x22e4, (void*)DemoEc_UpdateCucco },
    { 0x2324, (void*)DemoEc_DrawCucco },
    { 0x2350, (void*)DemoEc_InitCuccoLady },
    { 0x23f4, (void*)DemoEc_UpdateCuccoLady },
    { 0x243c, (void*)DemoEc_DrawCuccoLady },
    { 0x2478, (void*)DemoEc_InitPotionShopOwner },
    { 0x251c, (void*)DemoEc_UpdatePotionShopOwner },
    { 0x2564, (void*)DemoEc_DrawPotionShopOwner },
    { 0x25a0, (void*)DemoEc_InitMaskShopOwner },
    { 0x2644, (void*)DemoEc_UpdateMaskShopOwner },
    { 0x2684, (void*)DemoEc_DrawMaskShopOwner },
    { 0x26b4, (void*)DemoEc_InitFishingOwner },
    { 0x2758, (void*)DemoEc_UpdateFishingOwner },
    { 0x27a0, NULL },
    { 0x2820, (void*)DemoEc_DrawFishingOwner },
    { 0x2864, (void*)DemoEc_InitBombchuShopOwner },
    { 0x2908, (void*)DempEc_UpdateBombchuShopOwner },
    { 0x2950, (void*)DemoEc_DrawBombchuShopOwner },
    { 0x298c, (void*)DemoEc_InitGorons },
    { 0x2ac4, (void*)DemoEc_UpdateGorons },
    { 0x2b0c, (void*)DemoEc_DrawGorons },
    { 0x2b4c, (void*)DemoEc_InitMalon },
    { 0x2bf0, (void*)DemoEc_UpdateMalon },
    { 0x2c38, (void*)DemoEc_DrawMalon },
    { 0x2c78, (void*)DemoEc_InitNpc },
    { 0x2cc4, (void*)DemoEc_InitCommon },
    { 0x2d98, (void*)DemoEc_Update },
    { 0x2e10, (void*)DemoEc_DrawCommon },
    { 0x2e20, (void*)DemoEc_Draw },
};
const size_t gGzDemoEcFunctionCount = ARRAY_COUNT(gGzDemoEcFunctions);
