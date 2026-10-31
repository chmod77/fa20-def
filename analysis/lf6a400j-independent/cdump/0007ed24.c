
void FUN_0007ed24(uint param_1,char param_2,char param_3,byte param_4,ushort param_5,byte param_6,
                 uint param_7,undefined1 *param_8,byte *param_9,undefined1 *param_10,
                 undefined1 *param_11,undefined1 *param_12,undefined1 *param_13)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_2 == '\0') {
    if (DAT_fffeba43 == '\0') {
      DAT_fffeba44 = 0;
      DAT_fffeba43 = '\x01';
    }
    DAT_fffeba3d = DAT_fffeba44;
    bVar7 = 0xff;
    if (DAT_fffeba44 != 0xff) {
      bVar7 = DAT_fffeba44 + 1;
    }
  }
  else {
    DAT_fffeba43 = '\0';
    bVar7 = DAT_fffeba44;
  }
  DAT_fffeba44 = bVar7;
  uVar9 = (int)(param_7 & 0xffff) >> 2;
  uVar8 = (uint)(short)((short)uVar9 - (param_5 & 0xff));
  bVar1 = true;
  if (((short)((param_5 & 0xff) - (short)uVar9) < 4) && (param_2 == '\0')) {
    bVar1 = false;
  }
  cVar6 = '\0';
  if ((((param_3 == '\x03') && (param_2 == '\0')) && (param_1 < 0x50)) &&
     ((param_6 < param_4 && (5 < (int)uVar8)))) {
    cVar6 = '\x01';
  }
  if (cVar6 == '\0') {
    cVar6 = DAT_fffeba41;
  }
  if (bVar1) {
    cVar6 = '\0';
  }
  uVar2 = uVar9;
  if (5 < (int)uVar8) {
    uVar2 = (uint)DAT_fffeba40;
  }
  if (cVar6 == '\0') {
    DAT_fffeba42 = '\0';
  }
  else {
    if (DAT_fffeba42 == '\0') {
      DAT_fffeba3e = 0;
      DAT_fffeba3f = 0;
      DAT_fffeba42 = '\x01';
    }
    uVar3 = LK_133B38((uint)&T_02C17C,param_1);
    DAT_fffeba3a = (undefined1)uVar3;
    uVar4 = LK_133B38((uint)&T_02C188,param_1);
    DAT_fffeba3b = (undefined1)uVar4;
    uVar5 = LK_133B38((uint)&T_02C194,param_1);
    DAT_fffeba3c = (undefined1)uVar5;
    bVar7 = 0;
    if (param_2 == '\0') {
      bVar7 = DAT_fffeba3d;
    }
    bVar1 = true;
    if ((10 < bVar7) && ((uVar5 & 0xff) <= uVar9)) {
      bVar1 = false;
    }
    DAT_fffeba38 = 0x10;
    if (!bVar1) {
      DAT_fffeba38 = DAT_fffeba3e;
    }
    if ((int)(uint)DAT_fffeba3f < (int)uVar8) {
      uVar5 = 0xff;
      if (((int)uVar8 < 0x100) && (uVar5 = uVar8, (int)uVar8 < 0)) {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = (int)(char)DAT_fffeba3f;
    }
    DAT_fffeba39 = (byte)uVar5;
    DAT_fffeba3f = DAT_fffeba39;
    if ((((uVar2 & 0xff) < (uVar3 & 0xff)) && (7 < (uVar5 & 0xff))) && ((uVar4 & 0xff) <= uVar9)) {
      DAT_fffeba38 = 0x40;
      DAT_fffeba3e = DAT_fffeba38;
    }
    else if ((bVar1) && (9 < (uVar5 & 0xff))) {
      DAT_fffeba38 = 0x30;
      DAT_fffeba3e = DAT_fffeba38;
    }
    else {
      DAT_fffeba3e = DAT_fffeba38;
      if ((bVar1) && (4 < (uVar5 & 0xff))) {
        DAT_fffeba38 = 0x20;
        DAT_fffeba3e = DAT_fffeba38;
      }
    }
  }
  if (cVar6 == '\0') {
    *param_8 = 0;
    *param_9 = 0;
  }
  else {
    *param_8 = DAT_fffeba38;
    *param_9 = DAT_fffeba39;
  }
  *param_11 = DAT_fffeba3a;
  *param_12 = DAT_fffeba3b;
  *param_13 = DAT_fffeba3c;
  *param_10 = (char)uVar2;
  DAT_fffeba41 = cVar6;
  DAT_fffeba40 = (char)uVar2;
  return;
}

