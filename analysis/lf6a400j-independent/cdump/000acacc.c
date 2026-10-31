
/* WARNING: Removing unreachable block (ram,0x000acb1c) */

void FUN_000acacc(ushort param_1,ushort param_2,char param_3,char param_4,char param_5,byte param_6,
                 char param_7,char param_8,char param_9,undefined1 *param_10)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  
  if (DAT_fffec503 == '\0') {
    bVar5 = 2;
  }
  else {
    bVar5 = 0xf;
  }
  if (DAT_fffec500 == '\0') {
    uVar3 = 0x9800;
  }
  else {
    uVar3 = 0xa000;
  }
  if (DAT_fffec501 == '\0') {
    bVar6 = 4;
  }
  else {
    bVar6 = 2;
  }
  bVar7 = false;
  bVar1 = true;
  if ((param_3 == '\0') && (param_4 == '\0')) {
    bVar1 = false;
  }
  if ((((!bVar1) && (param_5 != '\0')) && (bVar6 <= param_6)) &&
     ((param_6 < bVar5 && (param_2 < uVar3)))) {
    bVar1 = true;
    if ((param_7 == '\0') && ((param_8 == '\0' && (param_9 == '\0')))) {
      bVar1 = false;
    }
    if (!bVar1) {
      bVar7 = true;
    }
  }
  uVar2 = FUN_0016bc68(&DAT_000145b4);
  if ((param_1 <= uVar2) || (uVar4 = 1, !bVar7)) {
    uVar4 = DAT_fffec502;
  }
  if (!bVar7) {
    uVar4 = 0;
  }
  *param_10 = uVar4;
  DAT_fffec502 = uVar4;
  DAT_fffec503 = param_6 < bVar5;
  DAT_fffec500 = param_2 < uVar3;
  DAT_fffec501 = bVar6 <= param_6;
  return;
}

