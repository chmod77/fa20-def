
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000da258(uint param_1,char param_2,char param_3,char param_4,short param_5,char param_6,
                 short *param_7)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  uint unaff_r14;
  uint uVar7;
  
  bVar1 = param_2 != '\0';
  if (param_3 == '\0') {
    bVar2 = DAT_fffecfdc;
    if (DAT_fffecfdd != '\0') {
      DAT_fffecfd8 = 0;
      DAT_fffecfdd = '\0';
      DAT_fffecfde = '\0';
    }
  }
  else {
    if (DAT_fffecfde == '\0') {
      DAT_fffecfdc = 0;
      DAT_fffecfde = '\x01';
      DAT_fffecfdd = '\x01';
    }
    DAT_fffecfd8 = 0xff;
    bVar2 = DAT_fffecfd8;
    if (DAT_fffecfdc != 0xff) {
      DAT_fffecfd8 = DAT_fffecfdc + 1;
      bVar2 = DAT_fffecfd8;
    }
  }
  DAT_fffecfdc = bVar2;
  sVar6 = (short)param_1;
  if (bVar1) {
    sVar6 = _DAT_fffecfda;
  }
  iVar5 = (int)sVar6 - (int)param_5;
  bVar2 = DAT_fffecfdf;
  if (((!bVar1) && (4 < DAT_fffecfd8)) &&
     (DAT_fffecfd9 = 0xff, bVar2 = DAT_fffecfd9, DAT_fffecfdf != 0xff)) {
    DAT_fffecfd9 = DAT_fffecfdf + 1;
    bVar2 = DAT_fffecfd9;
  }
  DAT_fffecfdf = bVar2;
  uVar7 = iVar5 * 0xd;
  uVar3 = uVar7;
  if ((int)uVar7 < 0) {
    uVar3 = iVar5 * -0xd;
  }
  if (iVar5 < 0) {
    unaff_r14 = uVar7 - 0xff;
    if (((int)uVar7 < 0) && (-1 < (int)unaff_r14)) {
      unaff_r14 = 0x80000000;
    }
  }
  else {
    param_1 = uVar7 + 0xff;
    if ((-1 < (int)uVar7) && ((int)param_1 < 0)) {
      param_1 = 0x7fffffff;
    }
  }
  if ((1 < DAT_fffecfd9) || (sVar4 = sVar6, param_4 != '\0')) {
    if ((int)uVar3 < 0x100) {
      if (iVar5 < 0) {
        param_1 = unaff_r14;
      }
      uVar3 = (param_1 >> 8) << 0x10 | param_1 >> 0x18;
    }
    else {
      uVar3 = (uVar7 >> 8) << 0x10 | uVar7 >> 0x18;
    }
    iVar5 = ((int)(char)uVar3 << 0x10 | uVar3 >> 0x10) + (int)param_5;
    if (iVar5 < 0x8000) {
      sVar4 = (short)iVar5;
      if (iVar5 < -0x8000) {
        sVar4 = -0x8000;
      }
    }
    else {
      sVar4 = 0x7fff;
    }
  }
  if ((bVar1) || (DAT_fffecfd8 < 5)) {
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
  _DAT_fffecfda = sVar6;
  return;
}

