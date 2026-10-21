#ifdef SOH_DISABLE_RANDOMIZER

// Built without the randomizer (SOH_DISABLE_RANDOMIZER), IS_RANDO is a constant 0 and the randomizer's sources are
// left out. These stand in for the randomizer functions that game code still calls, answering as if no randomizer
// file is loaded: every setting off, no seed, no item placements.

#include "soh/OTRGlobals.h"
#include "soh/Enhancements/randomizer/randomizerTypes.h"
#include "soh/Enhancements/randomizer/randomizer_entrance.h"
#include "soh/Enhancements/randomizer/draw.h"

extern "C" {
#include "functions.h"
}

// OTRGlobals.h only declares this for C
extern "C" GetItemEntry ItemTable_Retrieve(int16_t getItemID);

extern "C" u8 Randomizer_GetSettingValue(RandomizerSettingKey randoSettingKey) {
    return 0;
}

extern "C" void Randomizer_InitSaveFile() {
}

extern "C" uint8_t Randomizer_IsSeedGenerated() {
    return 0;
}

extern "C" uint8_t Randomizer_IsSpoilerLoaded() {
    return 0;
}

extern "C" void Randomizer_SetSpoilerLoaded(bool spoilerLoaded) {
}

extern "C" void Randomizer_ParseSpoiler(const char* fileLoc) {
}

extern "C" u32 SpoilerFileExists(const char* spoilerFileName) {
    return 0;
}

extern "C" uint8_t Randomizer_GenerateRandomizer() {
    return 0;
}

extern "C" bool Randomizer_IsGenerating() {
    return false;
}

extern "C" void Randomizer_WaitForGeneration() {
}

extern "C" uint8_t GetSeedIconIndex(uint8_t index) {
    return 0;
}

extern "C" Sprite* GetSeedTexture(uint8_t index) {
    return nullptr;
}

extern "C" void Entrance_SetEntranceDiscovered(uint16_t entranceIndex, uint8_t isReversedEntrance) {
}

extern "C" u16 Randomizer_Item_Give(PlayState* play, GetItemEntry giEntry) {
    return ITEM_NONE;
}

extern "C" void Randomizer_DrawMysteryItem(PlayState* play, GetItemEntry* getItemEntry) {
}

extern "C" void Randomizer_DrawTriforcePieceGI(PlayState* play, GetItemEntry getItemEntry) {
}

extern "C" GetItemEntry Randomizer_GetItemFromKnownCheckWithoutObtainabilityCheck(RandomizerCheck randomizerCheck,
                                                                                  GetItemID ogId) {
    return ItemTable_Retrieve(ogId);
}

extern "C" ItemObtainability Randomizer_GetItemObtainabilityFromRandomizerCheck(RandomizerCheck randomizerCheck) {
    return CAN_OBTAIN;
}

extern "C" ShopItemIdentity Randomizer_IdentifyShopItem(s32 sceneNum, u8 slotIndex) {
    ShopItemIdentity shopItem = {};
    shopItem.identity.randomizerInf = RAND_INF_MAX;
    shopItem.identity.randomizerCheck = RC_UNKNOWN_CHECK;
    shopItem.ogItemId = GI_NONE;
    shopItem.enGirlAShopItem = -1;
    shopItem.itemPrice = -1;
    return shopItem;
}

#endif
