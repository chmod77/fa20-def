
void FUN_001046e4(char param_1,char param_2,char param_3,byte param_4,undefined1 *param_5)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 local_3c [9];
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 auStack_30 [8];
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 auStack_20 [8];
  
  cVar1 = -2;
  if (param_3 != -1) {
    cVar1 = param_3;
  }
  bVar4 = cVar1 + 1;
  bVar2 = 0xb;
  if ((bVar4 < 0xc) && (bVar2 = 1, bVar4 != 0)) {
    bVar2 = bVar4;
  }
  bVar3 = 0x10;
  if ((bVar4 < 0x11) && (bVar3 = 1, bVar4 != 0)) {
    bVar3 = bVar4;
  }
  bVar4 = param_4 + 1;
  if (0xfe < param_4) {
    bVar4 = 0xff;
  }
  if (bVar4 < 9) {
    if (bVar4 == 0) {
      bVar4 = 1;
    }
  }
  else {
    bVar4 = 8;
  }
  local_3c[0] = 0;
  local_3c[1] = 1;
  local_3c[2] = 2;
  local_3c[3] = 3;
  local_3c[4] = 4;
  local_3c[5] = 5;
  local_3c[6] = 1;
  local_3c[7] = 0;
  local_3c[8] = DAT_fffeda26;
  uStack_33 = 6;
  uStack_32 = DAT_fffeda26;
  auStack_30[0] = 0;
  auStack_30[1] = 1;
  auStack_30[2] = 2;
  auStack_30[3] = 3;
  auStack_30[4] = 4;
  auStack_30[5] = 5;
  auStack_30[6] = 6;
  auStack_30[7] = DAT_fffeda25;
  uStack_28 = DAT_fffeda25;
  uStack_27 = DAT_fffeda25;
  uStack_26 = DAT_fffeda25;
  uStack_25 = DAT_fffeda25;
  uStack_24 = DAT_fffeda25;
  uStack_23 = 1;
  uStack_22 = 0;
  uStack_21 = DAT_fffeda25;
  DAT_fffeda26 = auStack_30[(byte)(bVar3 - 1)];
  auStack_20[0] = DAT_fffeda24;
  auStack_20[1] = 1;
  auStack_20[2] = 2;
  auStack_20[3] = 3;
  auStack_20[4] = 4;
  auStack_20[5] = 5;
  auStack_20[6] = 6;
  auStack_20[7] = DAT_fffeda24;
  if (((param_1 != '\0') || (param_2 == '\0')) &&
     (DAT_fffeda26 = auStack_20[(byte)(bVar4 - 1)], param_1 == '\0')) {
    DAT_fffeda26 = local_3c[(byte)(bVar2 - 1)];
  }
  *param_5 = DAT_fffeda26;
  DAT_fffeda25 = DAT_fffeda26;
  DAT_fffeda24 = DAT_fffeda26;
  return;
}

