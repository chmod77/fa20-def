
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000da0dc(short param_1,uint param_2,char param_3,uint param_4,short param_5,char param_6,
                 short *param_7)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_2 & 0xff;
  uVar5 = param_4 & 0xff;
  if (param_3 == '\0') {
    bVar1 = DAT_fffecfd7;
    if (DAT_fffecfd4 != '\0') {
      DAT_fffecfd0 = 0;
      DAT_fffecfd4 = '\0';
      DAT_fffecfd5 = '\0';
    }
  }
  else {
    if (DAT_fffecfd5 == '\0') {
      DAT_fffecfd7 = 0;
      DAT_fffecfd5 = '\x01';
      DAT_fffecfd4 = '\x01';
    }
    DAT_fffecfd0 = 0xff;
    bVar1 = DAT_fffecfd0;
    if (DAT_fffecfd7 != 0xff) {
      DAT_fffecfd0 = DAT_fffecfd7 + 1;
      bVar1 = DAT_fffecfd0;
    }
  }
  DAT_fffecfd7 = bVar1;
  if (uVar6 == 0) {
    param_1 = _DAT_fffecfd2;
  }
  iVar2 = (int)param_1 - (int)param_5;
  bVar1 = DAT_fffecfd6;
  if (((uVar6 != 0) && (4 < DAT_fffecfd0)) &&
     (DAT_fffecfd1 = 0xff, bVar1 = DAT_fffecfd1, DAT_fffecfd6 != 0xff)) {
    DAT_fffecfd1 = DAT_fffecfd6 + 1;
    bVar1 = DAT_fffecfd1;
  }
  DAT_fffecfd6 = bVar1;
  uVar7 = iVar2 * 0xd;
  uVar3 = uVar7;
  if ((int)uVar7 < 0) {
    uVar3 = iVar2 * -0xd;
  }
  if (iVar2 < 0) {
    param_4 = uVar7 - 0xff;
    if (((int)uVar7 < 0) && (-1 < (int)param_4)) {
      param_4 = 0x80000000;
    }
  }
  else {
    param_2 = uVar7 + 0xff;
    if ((-1 < (int)uVar7) && ((int)param_2 < 0)) {
      param_2 = 0x7fffffff;
    }
  }
  if ((1 < DAT_fffecfd1) || (sVar4 = param_1, uVar5 != 0)) {
    if ((int)uVar3 < 0x100) {
      if (iVar2 < 0) {
        param_2 = param_4;
      }
      uVar5 = (param_2 >> 8) << 0x10 | param_2 >> 0x18;
    }
    else {
      uVar5 = (uVar7 >> 8) << 0x10 | uVar7 >> 0x18;
    }
    iVar2 = ((int)(char)uVar5 << 0x10 | uVar5 >> 0x10) + (int)param_5;
    if (iVar2 < 0x8000) {
      sVar4 = (short)iVar2;
      if (iVar2 < -0x8000) {
        sVar4 = -0x8000;
      }
    }
    else {
      sVar4 = 0x7fff;
    }
  }
  if ((uVar6 == 0) || (DAT_fffecfd0 < 5)) {
    sVar4 = param_5;
  }
  if (param_6 == '\0') {
    if (sVar4 < 0x419) {
      if (sVar4 < -0x418) {
        *param_7 = -0x419;
      }
      else {
        *param_7 = sVar4;
      }
    }
    else {
      *param_7 = 0x419;
    }
  }
  else {
    *param_7 = 0;
  }
  _DAT_fffecfd2 = param_1;
  return;
}

