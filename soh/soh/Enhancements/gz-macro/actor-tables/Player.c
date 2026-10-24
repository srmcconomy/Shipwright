// Generated from SoH's actor sources and the actor overlays of an N64 OoT 1.2 ROM, by the gz macro tools.
// Do not edit.

#include <stddef.h>
#include "global.h"
#include "soh/Enhancements/gz-macro/GzActorTables.h"
#include "z64player.h"

void Player_InitDefaultIA(void*, void*);
void Player_InitDekuStickIA(void*, void*);
void Player_InitHammerIA(void*, void*);
void Player_InitBowOrSlingshotIA(void*, void*);
void Player_InitExplosiveIA(void*, void*);
void Player_InitHookshotIA(void*, void*);
void Player_InitBoomerangIA(void*, void*);
s32 func_8083485C(void*, void*);
s32 Player_UpperAction_Sword(void*, void*);
s32 Player_UpperAction_ChangeHeldItem(void*, void*);
s32 func_80834B5C(void*, void*);
s32 func_80834BD4(void*, void*);
s32 func_80834C74(void*, void*);
s32 func_8083501C(void*, void*);
s32 func_808351D4(void*, void*);
s32 func_808353D8(void*, void*);
s32 func_80835588(void*, void*);
s32 Player_UpperAction_CarryActor(void*, void*);
s32 func_80835800(void*, void*);
s32 func_80835884(void*, void*);
s32 func_808358F0(void*, void*);
s32 func_808359FC(void*, void*);
s32 func_80835B60(void*, void*);
s32 func_80835C08(void*, void*);
s32 Player_ActionHandler_12(void*, void*);
void func_8083A0F4(void*, void*);
void Player_SetupTalk(void*, void*);
void func_8083A360(void*, void*);
void func_8083A388(void*, void*);
void func_8083A3B0(void*, void*);
void func_8083A40C(void*, void*);
void func_8083A434(void*, void*);
s32 Player_ActionHandler_13(void*, void*);
s32 Player_ActionHandler_Talk(void*, void*);
s32 Player_ActionHandler_0(void*, void*);
s32 Player_ActionHandler_10(void*, void*);
s32 Player_ActionHandler_Roll(void*, void*);
s32 Player_ActionHandler_11(void*, void*);
s32 Player_ActionHandler_8(void*, void*);
void Player_StartMode_Idle(void*, void*);
void Player_StartMode_MoveForwardSlow(void*, void*);
void Player_StartMode_MoveForward(void*, void*);
s32 Player_ActionHandler_3(void*, void*);
s32 Player_ActionHandler_9(void*, void*);
s32 Player_ActionHandler_5(void*, void*);
void Player_Action_80840450(void*, void*);
void Player_Action_808407CC(void*, void*);
void Player_Action_Idle(void*, void*);
void Player_Action_80840DE4(void*, void*);
void Player_Action_808414F8(void*, void*);
void Player_Action_8084170C(void*, void*);
void Player_Action_808417FC(void*, void*);
void Player_Action_8084193C(void*, void*);
void Player_Action_TurnInPlace(void*, void*);
void Player_Action_80842180(void*, void*);
void Player_Action_8084227C(void*, void*);
void Player_Action_808423EC(void*, void*);
void Player_Action_8084251C(void*, void*);
void Player_Action_8084279C(void*, void*);
void Player_Action_80843188(void*, void*);
void Player_Action_808435C4(void*, void*);
void Player_Action_8084370C(void*, void*);
void Player_Action_8084377C(void*, void*);
void Player_Action_80843954(void*, void*);
void Player_Action_80843A38(void*, void*);
void Player_Action_80843CEC(void*, void*);
void Player_Action_8084411C(void*, void*);
void Player_Action_Roll(void*, void*);
void Player_Action_80844A44(void*, void*);
void Player_Action_80844AF4(void*, void*);
void Player_Action_80844E68(void*, void*);
void Player_Action_80845000(void*, void*);
void Player_Action_80845308(void*, void*);
void Player_Action_80845668(void*, void*);
void Player_Action_WaitForPutAway(void*, void*);
void Player_Action_80845CA4(void*, void*);
void Player_Action_80845EF8(void*, void*);
void Player_Action_80846050(void*, void*);
void Player_Action_80846120(void*, void*);
void Player_Action_80846260(void*, void*);
void Player_Action_80846358(void*, void*);
void Player_Action_80846408(void*, void*);
void Player_Action_808464B0(void*, void*);
void Player_Action_80846578(void*, void*);
void func_8084663C(void*, void*);
void Player_StartMode_Nothing(void*, void*);
void Player_StartMode_BlueWarp(void*, void*);
void Player_StartMode_TimeTravel(void*, void*);
void Player_StartMode_Door(void*, void*);
void Player_StartMode_Grotto(void*, void*);
void Player_StartMode_KnockedOver(void*, void*);
void Player_StartMode_WarpSong(void*, void*);
void Player_StartMode_FaroresWind(void*, void*);
void Player_Draw(void*, void*);
void Player_Action_8084B1D8(void*, void*);
void Player_Action_Talk(void*, void*);
void Player_Action_8084B78C(void*, void*);
void Player_Action_8084B898(void*, void*);
void Player_Action_8084B9E4(void*, void*);
void Player_Action_8084BBE4(void*, void*);
void Player_Action_8084BF1C(void*, void*);
void Player_Action_DismountLadder(void*, void*);
void Player_Action_8084C760(void*, void*);
void Player_Action_8084C81C(void*, void*);
void Player_Action_8084CC98(void*, void*);
void Player_Action_8084D3E4(void*, void*);
void Player_Action_8084D610(void*, void*);
void Player_Action_8084D7C4(void*, void*);
void Player_Action_8084D84C(void*, void*);
void Player_Action_8084DAB4(void*, void*);
void Player_Action_8084DC48(void*, void*);
void Player_Action_8084E1EC(void*, void*);
void Player_Action_8084E30C(void*, void*);
void Player_Action_8084E368(void*, void*);
void Player_Action_8084E3C4(void*, void*);
void Player_Action_8084E604(void*, void*);
void Player_Action_8084E6D4(void*, void*);
void Player_Action_8084E9AC(void*, void*);
void Player_Action_8084EAC0(void*, void*);
void Player_Action_SwingBottle(void*, void*);
void Player_Action_8084EED8(void*, void*);
void Player_Action_8084EFC0(void*, void*);
void Player_Action_ExchangeItem(void*, void*);
void Player_Action_8084F308(void*, void*);
void Player_Action_SlideOnSlope(void*, void*);
void Player_Action_WaitForCutscene(void*, void*);
void Player_Action_8084F698(void*, void*);
void Player_Action_8084F710(void*, void*);
void Player_Action_8084F88C(void*, void*);
void Player_Action_8084F9A0(void*, void*);
void Player_Action_8084F9C0(void*, void*);
void Player_Action_8084FA54(void*, void*);
void Player_Action_8084FB10(void*, void*);
void Player_Action_8084FBF4(void*, void*);
s32 Player_ActionHandler_7(void*, void*);
void Player_Action_808502D0(void*, void*);
void Player_Action_808505DC(void*, void*);
void Player_Action_8085063C(void*, void*);
void Player_Action_8085076C(void*, void*);
void Player_Action_808507F4(void*, void*);
void Player_Action_80850AEC(void*, void*);
void Player_Action_80850C68(void*, void*);
void Player_Action_80850E84(void*, void*);
void Player_Action_CsAction(void*, void*);
s32 func_80852F38(void*, void*);
void func_80853080(void*, void*);
void Player_StartTalking(void*, void*);

const GzActorSpan gGzPlayerSpans[] = {
    { offsetof(Player, currentTunic), 0, 0x13c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, currentSwordItemId), 0, 0x13d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, currentShield), 0, 0x13e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, currentBoots), 0, 0x13f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, heldItemButton), 0, 0x140, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, heldItemAction), 0, 0x141, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, heldItemId), 0, 0x142, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, prevBoots), 0, 0x143, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, itemAction), 0, 0x144, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, unk_155[0]), offsetof(Player, unk_155[1]) - offsetof(Player, unk_155[0]), 0x145, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(Player, modelGroup), 0, 0x148, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, nextModelGroup), 0, 0x149, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, itemChangeType), 0, 0x14a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, modelAnimType), 0, 0x14b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, leftHandType), 0, 0x14c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, rightHandType), 0, 0x14d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, sheathType), 0, 0x14e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, currentMask), 0, 0x14f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, rightHandDLists), 0, 0x150, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, leftHandDLists), 0, 0x154, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, sheathDLists), 0, 0x158, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, waistDLists), 0, 0x15c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, giObjectLoading), 0, 0x160, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, giObjectDmaRequest.vromAddr), 0, 0x164, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, giObjectDmaRequest.dramAddr), 0, 0x168, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, giObjectDmaRequest.size), 0, 0x16c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, giObjectDmaRequest.filename), 0, 0x170, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, giObjectDmaRequest.line), 0, 0x174, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, giObjectDmaRequest.unk_14), 0, 0x178, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, giObjectDmaRequest.notifyQueue), 0, 0x17c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, giObjectDmaRequest.notifyMsg.data8), 0, 0x180, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, giObjectLoadQueue.mtqueue), 0, 0x184, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, giObjectLoadQueue.fullqueue), 0, 0x188, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, giObjectLoadQueue.validCount), 0, 0x18c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, giObjectLoadQueue.first), 0, 0x190, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, giObjectLoadQueue.msgCount), 0, 0x194, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, giObjectLoadQueue.msg), 0, 0x198, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, giObjectLoadMsg.data8), 0, 0x19c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, giObjectSegment), 0, 0x1a0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, skelAnime.limbCount), 0, 0x1a4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, skelAnime.mode), 0, 0x1a5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, skelAnime.dListCount), 0, 0x1a6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, skelAnime.taper), 0, 0x1a7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, skelAnime.skeleton), 0, 0x1a8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, skelAnime.animation), 0, 0x1ac, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(Player, skelAnime.startFrame), 0, 0x1b0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, skelAnime.endFrame), 0, 0x1b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, skelAnime.animLength), 0, 0x1b8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, skelAnime.curFrame), 0, 0x1bc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, skelAnime.playSpeed), 0, 0x1c0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, skelAnime.jointTable), 0, 0x1c4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, skelAnime.morphTable), 0, 0x1c8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, skelAnime.morphWeight), 0, 0x1cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, skelAnime.morphRate), 0, 0x1d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, skelAnime.update.normal), 0, 0x1d4, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(Player, skelAnime.initFlags), 0, 0x1d8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, skelAnime.movementFlags), 0, 0x1d9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, skelAnime.prevRot), 0, 0x1da, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, skelAnime.prevTransl.x), 0, 0x1dc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, skelAnime.prevTransl.y), 0, 0x1de, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, skelAnime.prevTransl.z), 0, 0x1e0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, skelAnime.baseTransl.x), 0, 0x1e2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, skelAnime.baseTransl.y), 0, 0x1e4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, skelAnime.baseTransl.z), 0, 0x1e6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, jointTable[0].x), offsetof(Player, jointTable[1].x) - offsetof(Player, jointTable[0].x), 0x1e8, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(Player, jointTable[0].y), offsetof(Player, jointTable[1].y) - offsetof(Player, jointTable[0].y), 0x1ea, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(Player, jointTable[0].z), offsetof(Player, jointTable[1].z) - offsetof(Player, jointTable[0].z), 0x1ec, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(Player, morphTable[0].x), offsetof(Player, morphTable[1].x) - offsetof(Player, morphTable[0].x), 0x278, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(Player, morphTable[0].y), offsetof(Player, morphTable[1].y) - offsetof(Player, morphTable[0].y), 0x27a, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(Player, morphTable[0].z), offsetof(Player, morphTable[1].z) - offsetof(Player, morphTable[0].z), 0x27c, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(Player, blendTable[0].x), offsetof(Player, blendTable[1].x) - offsetof(Player, blendTable[0].x), 0x308, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(Player, blendTable[0].y), offsetof(Player, blendTable[1].y) - offsetof(Player, blendTable[0].y), 0x30a, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(Player, blendTable[0].z), offsetof(Player, blendTable[1].z) - offsetof(Player, blendTable[0].z), 0x30c, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(Player, unk_3A8[0]), offsetof(Player, unk_3A8[1]) - offsetof(Player, unk_3A8[0]), 0x398, 0x2, 2, 2, GZ_SPAN_VALUE },
    { offsetof(Player, heldActor), 0, 0x39c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, leftHandPos.x), 0, 0x3a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, leftHandPos.y), 0, 0x3a4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, leftHandPos.z), 0, 0x3a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_3BC.x), 0, 0x3ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, unk_3BC.y), 0, 0x3ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, unk_3BC.z), 0, 0x3b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, unk_3C4), 0, 0x3b4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, unk_3C8.x), 0, 0x3b8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_3C8.y), 0, 0x3bc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_3C8.z), 0, 0x3c0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_3D4[0]), offsetof(Player, unk_3D4[1]) - offsetof(Player, unk_3D4[0]), 0x3c4, 0x1, 88, 1, GZ_SPAN_VALUE },
    { offsetof(Player, doorType), 0, 0x41c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, doorDirection), 0, 0x41d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, doorTimer), 0, 0x41e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, doorActor), 0, 0x420, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, getItemId), 0, 0x424, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, getItemDirection), 0, 0x426, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, interactRangeActor), 0, 0x428, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, mountSide), 0, 0x42c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, unk_43D[0]), offsetof(Player, unk_43D[1]) - offsetof(Player, unk_43D[0]), 0x42d, 0x1, 3, 1, GZ_SPAN_VALUE },
    { offsetof(Player, rideActor), 0, 0x430, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, csAction), 0, 0x434, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, prevCsAction), 0, 0x435, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, cueId), 0, 0x436, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, unk_447), 0, 0x437, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, csActor), 0, 0x438, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, unk_44C[0]), offsetof(Player, unk_44C[1]) - offsetof(Player, unk_44C[0]), 0x43c, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(Player, unk_450.x), 0, 0x440, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_450.y), 0, 0x444, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_450.z), 0, 0x448, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_45C.x), 0, 0x44c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_45C.y), 0, 0x450, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_45C.z), 0, 0x454, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_468[0]), offsetof(Player, unk_468[1]) - offsetof(Player, unk_468[0]), 0x458, 0x1, 2, 1, GZ_SPAN_VALUE },
    { offsetof(Player, cv.haltActorsDuringCsAction), 0, 0x45a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, subCamId), 0, 0x45c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, unk_46E[0]), offsetof(Player, unk_46E[1]) - offsetof(Player, unk_46E[0]), 0x45e, 0x1, 42, 1, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.base.actor), 0, 0x488, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, cylinder.base.at), 0, 0x48c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, cylinder.base.ac), 0, 0x490, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, cylinder.base.oc), 0, 0x494, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, cylinder.base.atFlags), 0, 0x498, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.base.acFlags), 0, 0x499, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.base.ocFlags1), 0, 0x49a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.base.ocFlags2), 0, 0x49b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.base.colType), 0, 0x49c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.base.shape), 0, 0x49d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.info.toucher.dmgFlags), 0, 0x4a0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.info.toucher.effect), 0, 0x4a4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.info.toucher.damage), 0, 0x4a5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.info.bumper.dmgFlags), 0, 0x4a8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.info.bumper.effect), 0, 0x4ac, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.info.bumper.defense), 0, 0x4ad, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.info.bumper.hitPos.x), 0, 0x4ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.info.bumper.hitPos.y), 0, 0x4b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.info.bumper.hitPos.z), 0, 0x4b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.info.elemType), 0, 0x4b4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.info.toucherFlags), 0, 0x4b5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.info.bumperFlags), 0, 0x4b6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.info.ocElemFlags), 0, 0x4b7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.info.atHit), 0, 0x4b8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, cylinder.info.acHit), 0, 0x4bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, cylinder.info.atHitInfo), 0, 0x4c0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, cylinder.info.acHitInfo), 0, 0x4c4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, cylinder.dim.radius), 0, 0x4c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.dim.height), 0, 0x4ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.dim.yShift), 0, 0x4cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.dim.pos.x), 0, 0x4ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.dim.pos.y), 0, 0x4d0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, cylinder.dim.pos.z), 0, 0x4d2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].base.actor), 0, 0x4d4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, meleeWeaponQuads[0].base.at), 0, 0x4d8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, meleeWeaponQuads[0].base.ac), 0, 0x4dc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, meleeWeaponQuads[0].base.oc), 0, 0x4e0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, meleeWeaponQuads[0].base.atFlags), 0, 0x4e4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].base.acFlags), 0, 0x4e5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].base.ocFlags1), 0, 0x4e6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].base.ocFlags2), 0, 0x4e7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].base.colType), 0, 0x4e8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].base.shape), 0, 0x4e9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].info.toucher.dmgFlags), 0, 0x4ec, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].info.toucher.effect), 0, 0x4f0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].info.toucher.damage), 0, 0x4f1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].info.bumper.dmgFlags), 0, 0x4f4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].info.bumper.effect), 0, 0x4f8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].info.bumper.defense), 0, 0x4f9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].info.bumper.hitPos.x), 0, 0x4fa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].info.bumper.hitPos.y), 0, 0x4fc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].info.bumper.hitPos.z), 0, 0x4fe, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].info.elemType), 0, 0x500, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].info.toucherFlags), 0, 0x501, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].info.bumperFlags), 0, 0x502, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].info.ocElemFlags), 0, 0x503, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].info.atHit), 0, 0x504, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, meleeWeaponQuads[0].info.acHit), 0, 0x508, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, meleeWeaponQuads[0].info.atHitInfo), 0, 0x50c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, meleeWeaponQuads[0].info.acHitInfo), 0, 0x510, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, meleeWeaponQuads[0].dim.quad[0].x), offsetof(Player, meleeWeaponQuads[0].dim.quad[1].x) - offsetof(Player, meleeWeaponQuads[0].dim.quad[0].x), 0x514, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].dim.quad[0].y), offsetof(Player, meleeWeaponQuads[0].dim.quad[1].y) - offsetof(Player, meleeWeaponQuads[0].dim.quad[0].y), 0x518, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].dim.quad[0].z), offsetof(Player, meleeWeaponQuads[0].dim.quad[1].z) - offsetof(Player, meleeWeaponQuads[0].dim.quad[0].z), 0x51c, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].dim.dcMid.x), 0, 0x544, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].dim.dcMid.y), 0, 0x546, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].dim.dcMid.z), 0, 0x548, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].dim.baMid.x), 0, 0x54a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].dim.baMid.y), 0, 0x54c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].dim.baMid.z), 0, 0x54e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[0].dim.acDist), 0, 0x550, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].base.actor), 0, 0x554, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, meleeWeaponQuads[1].base.at), 0, 0x558, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, meleeWeaponQuads[1].base.ac), 0, 0x55c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, meleeWeaponQuads[1].base.oc), 0, 0x560, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, meleeWeaponQuads[1].base.atFlags), 0, 0x564, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].base.acFlags), 0, 0x565, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].base.ocFlags1), 0, 0x566, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].base.ocFlags2), 0, 0x567, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].base.colType), 0, 0x568, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].base.shape), 0, 0x569, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].info.toucher.dmgFlags), 0, 0x56c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].info.toucher.effect), 0, 0x570, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].info.toucher.damage), 0, 0x571, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].info.bumper.dmgFlags), 0, 0x574, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].info.bumper.effect), 0, 0x578, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].info.bumper.defense), 0, 0x579, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].info.bumper.hitPos.x), 0, 0x57a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].info.bumper.hitPos.y), 0, 0x57c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].info.bumper.hitPos.z), 0, 0x57e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].info.elemType), 0, 0x580, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].info.toucherFlags), 0, 0x581, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].info.bumperFlags), 0, 0x582, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].info.ocElemFlags), 0, 0x583, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].info.atHit), 0, 0x584, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, meleeWeaponQuads[1].info.acHit), 0, 0x588, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, meleeWeaponQuads[1].info.atHitInfo), 0, 0x58c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, meleeWeaponQuads[1].info.acHitInfo), 0, 0x590, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, meleeWeaponQuads[1].dim.quad[0].x), offsetof(Player, meleeWeaponQuads[1].dim.quad[1].x) - offsetof(Player, meleeWeaponQuads[1].dim.quad[0].x), 0x594, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].dim.quad[0].y), offsetof(Player, meleeWeaponQuads[1].dim.quad[1].y) - offsetof(Player, meleeWeaponQuads[1].dim.quad[0].y), 0x598, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].dim.quad[0].z), offsetof(Player, meleeWeaponQuads[1].dim.quad[1].z) - offsetof(Player, meleeWeaponQuads[1].dim.quad[0].z), 0x59c, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].dim.dcMid.x), 0, 0x5c4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].dim.dcMid.y), 0, 0x5c6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].dim.dcMid.z), 0, 0x5c8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].dim.baMid.x), 0, 0x5ca, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].dim.baMid.y), 0, 0x5cc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].dim.baMid.z), 0, 0x5ce, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponQuads[1].dim.acDist), 0, 0x5d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.base.actor), 0, 0x5d4, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, shieldQuad.base.at), 0, 0x5d8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, shieldQuad.base.ac), 0, 0x5dc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, shieldQuad.base.oc), 0, 0x5e0, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, shieldQuad.base.atFlags), 0, 0x5e4, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.base.acFlags), 0, 0x5e5, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.base.ocFlags1), 0, 0x5e6, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.base.ocFlags2), 0, 0x5e7, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.base.colType), 0, 0x5e8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.base.shape), 0, 0x5e9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.info.toucher.dmgFlags), 0, 0x5ec, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.info.toucher.effect), 0, 0x5f0, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.info.toucher.damage), 0, 0x5f1, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.info.bumper.dmgFlags), 0, 0x5f4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.info.bumper.effect), 0, 0x5f8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.info.bumper.defense), 0, 0x5f9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.info.bumper.hitPos.x), 0, 0x5fa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.info.bumper.hitPos.y), 0, 0x5fc, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.info.bumper.hitPos.z), 0, 0x5fe, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.info.elemType), 0, 0x600, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.info.toucherFlags), 0, 0x601, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.info.bumperFlags), 0, 0x602, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.info.ocElemFlags), 0, 0x603, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.info.atHit), 0, 0x604, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, shieldQuad.info.acHit), 0, 0x608, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, shieldQuad.info.atHitInfo), 0, 0x60c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, shieldQuad.info.acHitInfo), 0, 0x610, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, shieldQuad.dim.quad[0].x), offsetof(Player, shieldQuad.dim.quad[1].x) - offsetof(Player, shieldQuad.dim.quad[0].x), 0x614, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.dim.quad[0].y), offsetof(Player, shieldQuad.dim.quad[1].y) - offsetof(Player, shieldQuad.dim.quad[0].y), 0x618, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.dim.quad[0].z), offsetof(Player, shieldQuad.dim.quad[1].z) - offsetof(Player, shieldQuad.dim.quad[0].z), 0x61c, 0xc, 4, 4, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.dim.dcMid.x), 0, 0x644, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.dim.dcMid.y), 0, 0x646, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.dim.dcMid.z), 0, 0x648, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.dim.baMid.x), 0, 0x64a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.dim.baMid.y), 0, 0x64c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.dim.baMid.z), 0, 0x64e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, shieldQuad.dim.acDist), 0, 0x650, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, focusActor), 0, 0x654, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, unk_668[0]), offsetof(Player, unk_668[1]) - offsetof(Player, unk_668[0]), 0x658, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(Player, zTargetActiveTimer), 0, 0x65c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponEffectIndex), 0, 0x660, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, actionFunc), 0, 0x664, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(Player, ageProperties), 0, 0x668, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, stateFlags1), 0, 0x66c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, stateFlags2), 0, 0x670, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, autoLockOnActor), 0, 0x674, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, boomerangActor), 0, 0x678, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, naviActor), 0, 0x67c, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, naviTextId), 0, 0x680, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, stateFlags3), 0, 0x682, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, exchangeItemId), 0, 0x683, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, talkActor), 0, 0x684, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, talkActorDistance), 0, 0x688, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_69C[0]), offsetof(Player, unk_69C[1]) - offsetof(Player, unk_69C[0]), 0x68c, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(Player, unk_6A0), 0, 0x690, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, closestSecretDistSq), 0, 0x694, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_6A8), 0, 0x698, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, idleType), 0, 0x69c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, unk_6AD), 0, 0x69d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, unk_6AE_rotFlags), 0, 0x69e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, upperLimbYawSecondary), 0, 0x6a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, unk_6B4[0]), offsetof(Player, unk_6B4[1]) - offsetof(Player, unk_6B4[0]), 0x6a2, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(Player, headLimbRot.x), 0, 0x6a6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, headLimbRot.y), 0, 0x6a8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, headLimbRot.z), 0, 0x6aa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, upperLimbRot.x), 0, 0x6ac, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, upperLimbRot.y), 0, 0x6ae, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, upperLimbRot.z), 0, 0x6b0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, unk_6C2), 0, 0x6b2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, unk_6C4), 0, 0x6b4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.limbCount), 0, 0x6b8, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.mode), 0, 0x6b9, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.dListCount), 0, 0x6ba, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.taper), 0, 0x6bb, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.skeleton), 0, 0x6bc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, upperSkelAnime.animation), 0, 0x6c0, 0x0, 1, 4, GZ_SPAN_ANIMATION },
    { offsetof(Player, upperSkelAnime.startFrame), 0, 0x6c4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.endFrame), 0, 0x6c8, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.animLength), 0, 0x6cc, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.curFrame), 0, 0x6d0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.playSpeed), 0, 0x6d4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.jointTable), 0, 0x6d8, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, upperSkelAnime.morphTable), 0, 0x6dc, 0x0, 1, 4, GZ_SPAN_POINTER },
    { offsetof(Player, upperSkelAnime.morphWeight), 0, 0x6e0, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.morphRate), 0, 0x6e4, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.update.normal), 0, 0x6e8, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(Player, upperSkelAnime.initFlags), 0, 0x6ec, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.movementFlags), 0, 0x6ed, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.prevRot), 0, 0x6ee, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.prevTransl.x), 0, 0x6f0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.prevTransl.y), 0, 0x6f2, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.prevTransl.z), 0, 0x6f4, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.baseTransl.x), 0, 0x6f6, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.baseTransl.y), 0, 0x6f8, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, upperSkelAnime.baseTransl.z), 0, 0x6fa, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, upperJointTable[0].x), offsetof(Player, upperJointTable[1].x) - offsetof(Player, upperJointTable[0].x), 0x6fc, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(Player, upperJointTable[0].y), offsetof(Player, upperJointTable[1].y) - offsetof(Player, upperJointTable[0].y), 0x6fe, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(Player, upperJointTable[0].z), offsetof(Player, upperJointTable[1].z) - offsetof(Player, upperJointTable[0].z), 0x700, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(Player, upperMorphTable[0].x), offsetof(Player, upperMorphTable[1].x) - offsetof(Player, upperMorphTable[0].x), 0x78c, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(Player, upperMorphTable[0].y), offsetof(Player, upperMorphTable[1].y) - offsetof(Player, upperMorphTable[0].y), 0x78e, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(Player, upperMorphTable[0].z), offsetof(Player, upperMorphTable[1].z) - offsetof(Player, upperMorphTable[0].z), 0x790, 0x6, 24, 2, GZ_SPAN_VALUE },
    { offsetof(Player, upperActionFunc), 0, 0x81c, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(Player, upperAnimInterpWeight), 0, 0x820, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_834), 0, 0x824, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, unk_836), 0, 0x826, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, putAwayCooldownTimer), 0, 0x827, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, linearVelocity), 0, 0x828, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, yaw), 0, 0x82c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, parallelYaw), 0, 0x82e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, underwaterTimer), 0, 0x830, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponAnimation), 0, 0x832, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponState), 0, 0x833, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, unk_844), 0, 0x834, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, unk_845), 0, 0x835, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, controlStickDataIndex), 0, 0x836, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, controlStickSpinAngles[0]), offsetof(Player, controlStickSpinAngles[1]) - offsetof(Player, controlStickSpinAngles[0]), 0x837, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(Player, controlStickDirections[0]), offsetof(Player, controlStickDirections[1]) - offsetof(Player, controlStickDirections[0]), 0x83b, 0x1, 4, 1, GZ_SPAN_VALUE },
    { offsetof(Player, av1.actionVar1), 0, 0x83f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, av2.actionVar2), 0, 0x840, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, unk_854), 0, 0x844, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_858), 0, 0x848, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_85C), 0, 0x84c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_860), 0, 0x850, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, unk_862), 0, 0x852, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, unk_864), 0, 0x854, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_868), 0, 0x858, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_86C), 0, 0x85c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_870), 0, 0x860, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_874), 0, 0x864, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_878), 0, 0x868, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_87C), 0, 0x86c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, turnRate), 0, 0x86e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, unk_880), 0, 0x870, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, yDistToLedge), 0, 0x874, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, distToInteractWall), 0, 0x878, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, ledgeClimbType), 0, 0x87c, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, ledgeClimbDelayTimer), 0, 0x87d, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, textboxBtnCooldownTimer), 0, 0x87e, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, damageFlickerAnimCounter), 0, 0x87f, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, unk_890), 0, 0x880, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, bodyShockTimer), 0, 0x881, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, unk_892), 0, 0x882, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, hoverBootsTimer), 0, 0x883, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, fallStartHeight), 0, 0x884, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, fallDistance), 0, 0x886, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, floorPitch), 0, 0x888, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, floorPitchAlt), 0, 0x88a, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, unk_89C), 0, 0x88c, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, floorSfxOffset), 0, 0x88e, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, knockbackDamage), 0, 0x890, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, knockbackType), 0, 0x891, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, knockbackRot), 0, 0x892, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, knockbackSpeed), 0, 0x894, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, knockbackYVelocity), 0, 0x898, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, pushedSpeed), 0, 0x89c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, pushedYaw), 0, 0x8a0, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponInfo[0].active), offsetof(Player, meleeWeaponInfo[1].active) - offsetof(Player, meleeWeaponInfo[0].active), 0x8a4, 0x1c, 3, 4, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponInfo[0].tip.x), offsetof(Player, meleeWeaponInfo[1].tip.x) - offsetof(Player, meleeWeaponInfo[0].tip.x), 0x8a8, 0x1c, 3, 4, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponInfo[0].tip.y), offsetof(Player, meleeWeaponInfo[1].tip.y) - offsetof(Player, meleeWeaponInfo[0].tip.y), 0x8ac, 0x1c, 3, 4, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponInfo[0].tip.z), offsetof(Player, meleeWeaponInfo[1].tip.z) - offsetof(Player, meleeWeaponInfo[0].tip.z), 0x8b0, 0x1c, 3, 4, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponInfo[0].base.x), offsetof(Player, meleeWeaponInfo[1].base.x) - offsetof(Player, meleeWeaponInfo[0].base.x), 0x8b4, 0x1c, 3, 4, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponInfo[0].base.y), offsetof(Player, meleeWeaponInfo[1].base.y) - offsetof(Player, meleeWeaponInfo[0].base.y), 0x8b8, 0x1c, 3, 4, GZ_SPAN_VALUE },
    { offsetof(Player, meleeWeaponInfo[0].base.z), offsetof(Player, meleeWeaponInfo[1].base.z) - offsetof(Player, meleeWeaponInfo[0].base.z), 0x8bc, 0x1c, 3, 4, GZ_SPAN_VALUE },
    { offsetof(Player, bodyPartsPos[0].x), offsetof(Player, bodyPartsPos[1].x) - offsetof(Player, bodyPartsPos[0].x), 0x8f8, 0xc, 18, 4, GZ_SPAN_VALUE },
    { offsetof(Player, bodyPartsPos[0].y), offsetof(Player, bodyPartsPos[1].y) - offsetof(Player, bodyPartsPos[0].y), 0x8fc, 0xc, 18, 4, GZ_SPAN_VALUE },
    { offsetof(Player, bodyPartsPos[0].z), offsetof(Player, bodyPartsPos[1].z) - offsetof(Player, bodyPartsPos[0].z), 0x900, 0xc, 18, 4, GZ_SPAN_VALUE },
    { offsetof(Player, mf_9E0.mf[0][0]), offsetof(Player, mf_9E0.mf[0][1]) - offsetof(Player, mf_9E0.mf[0][0]), 0x9d0, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(Player, mf_9E0.mf[1][0]), offsetof(Player, mf_9E0.mf[1][1]) - offsetof(Player, mf_9E0.mf[1][0]), 0x9e0, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(Player, mf_9E0.mf[2][0]), offsetof(Player, mf_9E0.mf[2][1]) - offsetof(Player, mf_9E0.mf[2][0]), 0x9f0, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(Player, mf_9E0.mf[3][0]), offsetof(Player, mf_9E0.mf[3][1]) - offsetof(Player, mf_9E0.mf[3][0]), 0xa00, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(Player, shieldMf.mf[0][0]), offsetof(Player, shieldMf.mf[0][1]) - offsetof(Player, shieldMf.mf[0][0]), 0xa10, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(Player, shieldMf.mf[1][0]), offsetof(Player, shieldMf.mf[1][1]) - offsetof(Player, shieldMf.mf[1][0]), 0xa20, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(Player, shieldMf.mf[2][0]), offsetof(Player, shieldMf.mf[2][1]) - offsetof(Player, shieldMf.mf[2][0]), 0xa30, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(Player, shieldMf.mf[3][0]), offsetof(Player, shieldMf.mf[3][1]) - offsetof(Player, shieldMf.mf[3][0]), 0xa40, 0x4, 4, 4, GZ_SPAN_VALUE },
    { offsetof(Player, bodyIsBurning), 0, 0xa50, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, bodyFlameTimers[0]), offsetof(Player, bodyFlameTimers[1]) - offsetof(Player, bodyFlameTimers[0]), 0xa51, 0x1, 18, 1, GZ_SPAN_VALUE },
    { offsetof(Player, unk_A73), 0, 0xa63, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, afterPutAwayFunc), 0, 0xa64, 0x0, 1, 4, GZ_SPAN_FUNCTION },
    { offsetof(Player, invincibilityTimer), 0, 0xa68, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, floorTypeTimer), 0, 0xa69, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, floorProperty), 0, 0xa6a, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, prevFloorType), 0, 0xa6b, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, prevControlStickMagnitude), 0, 0xa6c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, prevControlStickAngle), 0, 0xa70, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, prevFloorSfxOffset), 0, 0xa72, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, unk_A84), 0, 0xa74, 0x0, 1, 2, GZ_SPAN_VALUE },
    { offsetof(Player, unk_A86), 0, 0xa76, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, unk_A87), 0, 0xa77, 0x0, 1, 1, GZ_SPAN_VALUE },
    { offsetof(Player, unk_A88.x), 0, 0xa78, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_A88.y), 0, 0xa7c, 0x0, 1, 4, GZ_SPAN_VALUE },
    { offsetof(Player, unk_A88.z), 0, 0xa80, 0x0, 1, 4, GZ_SPAN_VALUE },
};
const size_t gGzPlayerSpanCount = ARRAY_COUNT(gGzPlayerSpans);

const GzActorFunction gGzPlayerFunctions[] = {
    { 0x15f8, (void*)Player_InitDefaultIA },
    { 0x1608, (void*)Player_InitDekuStickIA },
    { 0x1624, (void*)Player_InitHammerIA },
    { 0x1634, (void*)Player_InitBowOrSlingshotIA },
    { 0x166c, (void*)Player_InitExplosiveIA },
    { 0x17ac, (void*)Player_InitHookshotIA },
    { 0x181c, (void*)Player_InitBoomerangIA },
    { 0x270c, (void*)func_8083485C },
    { 0x2890, (void*)Player_UpperAction_Sword },
    { 0x28e0, (void*)Player_UpperAction_ChangeHeldItem },
    { 0x2a10, (void*)func_80834B5C },
    { 0x2a8c, (void*)func_80834BD4 },
    { 0x2b30, (void*)func_80834C74 },
    { 0x2ed8, (void*)func_8083501C },
    { 0x3094, (void*)func_808351D4 },
    { 0x32a0, (void*)func_808353D8 },
    { 0x3450, (void*)func_80835588 },
    { 0x35c0, (void*)Player_UpperAction_CarryActor },
    { 0x36dc, (void*)func_80835800 },
    { 0x3760, (void*)func_80835884 },
    { 0x37cc, (void*)func_808358F0 },
    { 0x38e0, (void*)func_808359FC },
    { 0x3a48, (void*)func_80835B60 },
    { 0x3af0, (void*)func_80835C08 },
    { 0x695c, (void*)Player_ActionHandler_12 },
    { 0x775c, (void*)Player_ActionHandler_1 },
    { 0x8060, (void*)func_8083A0F4 },
    { 0x8264, (void*)Player_SetupTalk },
    { 0x82d4, (void*)func_8083A360 },
    { 0x82fc, (void*)func_8083A388 },
    { 0x8324, (void*)func_8083A3B0 },
    { 0x837c, (void*)func_8083A40C },
    { 0x83a4, (void*)func_8083A434 },
    { 0x8f48, (void*)Player_ActionHandler_13 },
    { 0x954c, (void*)Player_ActionHandler_Talk },
    { 0x98a0, (void*)Player_ActionHandler_0 },
    { 0x9cd0, (void*)Player_ActionHandler_10 },
    { 0xa0f8, (void*)Player_ActionHandler_Roll },
    { 0xa1d0, (void*)Player_ActionHandler_11 },
    { 0xa468, (void*)Player_ActionHandler_8 },
    { 0xa950, (void*)Player_StartMode_Idle },
    { 0xa988, (void*)Player_StartMode_MoveForwardSlow },
    { 0xa9d0, (void*)Player_StartMode_MoveForward },
    { 0xc040, (void*)Player_ActionHandler_3 },
    { 0xc4f4, (void*)Player_ActionHandler_2 },
    { 0xca38, (void*)Player_ActionHandler_9 },
    { 0xd6b0, (void*)Player_ActionHandler_5 },
    { 0xe350, (void*)Player_Action_80840450 },
    { 0xe6cc, (void*)Player_Action_808407CC },
    { 0xeac8, (void*)Player_Action_Idle },
    { 0xece8, (void*)Player_Action_80840DE4 },
    { 0xf404, (void*)Player_Action_808414F8 },
    { 0xf624, (void*)Player_Action_8084170C },
    { 0xf714, (void*)Player_Action_808417FC },
    { 0xf854, (void*)Player_Action_8084193C },
    { 0xfab8, (void*)Player_Action_TurnInPlace },
    { 0x1009c, (void*)Player_Action_80842180 },
    { 0x101a0, (void*)Player_Action_8084227C },
    { 0x10314, (void*)Player_Action_808423EC },
    { 0x10444, (void*)Player_Action_8084251C },
    { 0x106c4, (void*)Player_Action_8084279C },
    { 0x110d4, (void*)Player_Action_80843188 },
    { 0x11510, (void*)Player_Action_808435C4 },
    { 0x1165c, (void*)Player_Action_8084370C },
    { 0x116d0, (void*)Player_Action_8084377C },
    { 0x118ac, (void*)Player_Action_80843954 },
    { 0x11994, (void*)Player_Action_80843A38 },
    { 0x11c4c, (void*)Player_Action_80843CEC },
    { 0x1208c, (void*)Player_Action_8084411C },
    { 0x12680, (void*)Player_Action_Roll },
    { 0x129bc, (void*)Player_Action_80844A44 },
    { 0x12a6c, (void*)Player_Action_80844AF4 },
    { 0x12dec, (void*)Player_Action_80844E68 },
    { 0x12f84, (void*)Player_Action_80845000 },
    { 0x1328c, (void*)Player_Action_80845308 },
    { 0x135ec, (void*)Player_Action_80845668 },
    { 0x13858, (void*)Player_Action_WaitForPutAway },
    { 0x13c3c, (void*)Player_Action_80845CA4 },
    { 0x13e9c, (void*)Player_Action_80845EF8 },
    { 0x13ff4, (void*)Player_Action_80846050 },
    { 0x140cc, (void*)Player_Action_80846120 },
    { 0x1420c, (void*)Player_Action_80846260 },
    { 0x1430c, (void*)Player_Action_80846358 },
    { 0x143bc, (void*)Player_Action_80846408 },
    { 0x14464, (void*)Player_Action_808464B0 },
    { 0x14530, (void*)Player_Action_80846578 },
    { 0x145f8, (void*)func_8084663C },
    { 0x14608, (void*)Player_StartMode_Nothing },
    { 0x14624, (void*)Player_StartMode_BlueWarp },
    { 0x14798, (void*)Player_StartMode_TimeTravel },
    { 0x14874, (void*)Player_StartMode_Door },
    { 0x148bc, (void*)Player_StartMode_Grotto },
    { 0x1494c, (void*)Player_StartMode_KnockedOver },
    { 0x14990, (void*)Player_StartMode_WarpSong },
    { 0x14a3c, (void*)Player_StartMode_FaroresWind },
    { 0x14a7c, NULL },
    { 0x16f80, NULL },
    { 0x18544, (void*)Player_Draw },
    { 0x1910c, (void*)Player_Action_8084B1D8 },
    { 0x1946c, (void*)Player_Action_Talk },
    { 0x196d4, (void*)Player_Action_8084B78C },
    { 0x197e4, (void*)Player_Action_8084B898 },
    { 0x19930, (void*)Player_Action_8084B9E4 },
    { 0x19b34, (void*)Player_Action_8084BBE4 },
    { 0x19d48, (void*)Player_Action_8084BDFC },
    { 0x19e68, (void*)Player_Action_8084BF1C },
    { 0x1a548, (void*)Player_Action_DismountLadder },
    { 0x1a6b0, (void*)Player_Action_8084C760 },
    { 0x1a76c, (void*)Player_Action_8084C81C },
    { 0x1abf8, (void*)Player_Action_8084CC98 },
    { 0x1b348, (void*)Player_Action_8084D3E4 },
    { 0x1b58c, (void*)Player_Action_8084D610 },
    { 0x1b73c, (void*)Player_Action_8084D7C4 },
    { 0x1b7cc, (void*)Player_Action_8084D84C },
    { 0x1ba38, (void*)Player_Action_8084DAB4 },
    { 0x1bbcc, (void*)Player_Action_8084DC48 },
    { 0x1c178, (void*)Player_Action_8084E1EC },
    { 0x1c298, (void*)Player_Action_8084E30C },
    { 0x1c2f8, (void*)Player_Action_8084E368 },
    { 0x1c358, (void*)Player_Action_8084E3C4 },
    { 0x1c598, (void*)Player_Action_8084E604 },
    { 0x1c668, (void*)Player_Action_8084E6D4 },
    { 0x1c940, (void*)Player_Action_8084E9AC },
    { 0x1ca54, (void*)Player_Action_8084EAC0 },
    { 0x1cc40, (void*)Player_Action_SwingBottle },
    { 0x1ce78, (void*)Player_Action_8084EED8 },
    { 0x1cf60, (void*)Player_Action_8084EFC0 },
    { 0x1d0a8, (void*)Player_Action_ExchangeItem },
    { 0x1d2b0, (void*)Player_Action_8084F308 },
    { 0x1d338, (void*)Player_Action_SlideOnSlope },
    { 0x1d5b0, (void*)Player_Action_WaitForCutscene },
    { 0x1d640, (void*)Player_Action_8084F698 },
    { 0x1d6b8, (void*)Player_Action_8084F710 },
    { 0x1d834, (void*)Player_Action_8084F88C },
    { 0x1d948, (void*)Player_Action_8084F9A0 },
    { 0x1d968, (void*)Player_Action_8084F9C0 },
    { 0x1d9fc, (void*)Player_Action_8084FA54 },
    { 0x1dab8, (void*)Player_Action_8084FB10 },
    { 0x1db9c, (void*)Player_Action_8084FBF4 },
    { 0x1df00, (void*)Player_ActionHandler_7 },
    { 0x1dfac, (void*)Player_Action_808502D0 },
    { 0x1e2bc, (void*)Player_Action_808505DC },
    { 0x1e31c, (void*)Player_Action_8085063C },
    { 0x1e44c, (void*)Player_Action_8085076C },
    { 0x1e4d4, (void*)Player_Action_808507F4 },
    { 0x1e7d0, (void*)Player_Action_80850AEC },
    { 0x1e950, (void*)Player_Action_80850C68 },
    { 0x1eb6c, (void*)Player_Action_80850E84 },
    { 0x1ecf0, NULL },
    { 0x1ed18, NULL },
    { 0x1ed38, NULL },
    { 0x1ed7c, NULL },
    { 0x1ed9c, NULL },
    { 0x1edbc, NULL },
    { 0x1eddc, NULL },
    { 0x1edfc, NULL },
    { 0x1ee1c, NULL },
    { 0x1ee3c, NULL },
    { 0x1ee5c, NULL },
    { 0x1ee7c, NULL },
    { 0x1ee9c, NULL },
    { 0x1eebc, NULL },
    { 0x1eee8, NULL },
    { 0x1ef3c, NULL },
    { 0x1ef90, NULL },
    { 0x1efe4, NULL },
    { 0x1f070, NULL },
    { 0x1f0c4, NULL },
    { 0x1f1cc, NULL },
    { 0x1f288, NULL },
    { 0x1f2b4, NULL },
    { 0x1f398, NULL },
    { 0x1f468, NULL },
    { 0x1f4a4, NULL },
    { 0x1f544, NULL },
    { 0x1f5fc, NULL },
    { 0x1f630, NULL },
    { 0x1f6bc, NULL },
    { 0x1f6e4, NULL },
    { 0x1f710, NULL },
    { 0x1f774, NULL },
    { 0x1f8b4, NULL },
    { 0x1f910, NULL },
    { 0x1f9d0, NULL },
    { 0x1fa5c, NULL },
    { 0x1fab4, NULL },
    { 0x1fb28, NULL },
    { 0x1fb68, NULL },
    { 0x1fba8, NULL },
    { 0x1fbd4, NULL },
    { 0x1fc14, NULL },
    { 0x1fcd8, NULL },
    { 0x1fd04, NULL },
    { 0x1fda0, NULL },
    { 0x1fddc, NULL },
    { 0x1fed4, NULL },
    { 0x1ff20, NULL },
    { 0x1ff60, NULL },
    { 0x1ffa0, NULL },
    { 0x1ffcc, NULL },
    { 0x1fff0, NULL },
    { 0x2000c, NULL },
    { 0x200a0, NULL },
    { 0x200d0, NULL },
    { 0x20100, NULL },
    { 0x201d0, NULL },
    { 0x20200, NULL },
    { 0x20230, NULL },
    { 0x20254, NULL },
    { 0x2029c, NULL },
    { 0x202d0, NULL },
    { 0x202e4, NULL },
    { 0x202f8, NULL },
    { 0x2035c, NULL },
    { 0x203a8, NULL },
    { 0x203f0, NULL },
    { 0x20498, NULL },
    { 0x205f0, NULL },
    { 0x20680, NULL },
    { 0x20700, NULL },
    { 0x20a10, NULL },
    { 0x20bcc, (void*)Player_Action_CsAction },
    { 0x20c74, NULL },
    { 0x20ca8, NULL },
    { 0x20ce4, (void*)func_80852F38 },
    { 0x20db0, NULL },
    { 0x20e34, (void*)func_80853080 },
    { 0x20e90, NULL },
    { 0x20ef8, (void*)Player_StartTalking },
};
const size_t gGzPlayerFunctionCount = ARRAY_COUNT(gGzPlayerFunctions);
