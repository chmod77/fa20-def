
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d4a0c(char param_1,byte param_2,char param_3,undefined1 param_4,undefined1 param_5,
                 undefined1 param_6,undefined2 param_7,byte *param_8,undefined1 *param_9,
                 undefined1 *param_10,undefined1 *param_11,undefined2 *param_12,byte *param_13,
                 undefined1 *param_14,undefined1 *param_15,undefined1 *param_16,undefined2 *param_17
                 )

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  
  bVar1 = false;
  if ((DAT_fffece6d < param_2) && (param_3 != '\0')) {
    bVar1 = true;
  }
  bVar2 = param_2;
  if (!bVar1) {
    bVar2 = DAT_fffece6d;
  }
  if (param_1 != '\0') {
    bVar2 = 0;
  }
  *param_8 = bVar2;
  if (bVar1) {
    DAT_fffece6c = param_4;
  }
  if (param_1 != '\0') {
    DAT_fffece6c = 0;
  }
  *param_9 = DAT_fffece6c;
  uVar3 = param_5;
  if (!bVar1) {
    uVar3 = DAT_fffece74;
  }
  if (param_1 != '\0') {
    uVar3 = 0;
  }
  *param_10 = uVar3;
  uVar4 = param_6;
  if (!bVar1) {
    uVar4 = DAT_fffece72;
  }
  if (param_1 != '\0') {
    uVar4 = 0;
  }
  *param_11 = uVar4;
  uVar5 = param_7;
  if (!bVar1) {
    uVar5 = _DAT_fffece6a;
  }
  if (param_1 != '\0') {
    uVar5 = 0;
  }
  *param_12 = uVar5;
  bVar1 = false;
  if ((param_2 < DAT_fffece73) && (param_3 != '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    DAT_fffece71 = param_4;
    DAT_fffece73 = param_2;
  }
  if (param_1 != '\0') {
    DAT_fffece71 = 0;
  }
  *param_14 = DAT_fffece71;
  if (!bVar1) {
    param_5 = DAT_fffece70;
  }
  if (param_1 != '\0') {
    param_5 = 0;
  }
  *param_15 = param_5;
  if (!bVar1) {
    param_6 = DAT_fffece6f;
  }
  if (param_1 != '\0') {
    param_6 = 0;
  }
  *param_16 = param_6;
  if (!bVar1) {
    param_7 = _DAT_fffece68;
  }
  if (param_1 != '\0') {
    param_7 = 0;
  }
  *param_17 = param_7;
  if ((DAT_fffece6e == '\0') || (param_1 != '\0')) {
    DAT_fffece73 = 0xff;
  }
  *param_13 = DAT_fffece73;
  DAT_fffece6d = bVar2;
  DAT_fffece74 = uVar3;
  DAT_fffece72 = uVar4;
  _DAT_fffece6a = uVar5;
  DAT_fffece70 = param_5;
  DAT_fffece6f = param_6;
  _DAT_fffece68 = param_7;
  DAT_fffece6e = 1;
  return;
}

