
void FUN_000dac88(short param_1,uint param_2,undefined1 param_3,uint param_4,short *param_5)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar5 = param_2 & 0xff;
  sVar4 = (short)param_4;
  iVar6 = (int)param_1;
  iVar2 = iVar6 - sVar4;
  uVar7 = iVar2 * 0x1a;
  uVar3 = uVar7;
  if ((int)uVar7 < 0) {
    uVar3 = iVar2 * -0x1a;
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
  if (DAT_fffed044 != '\0') {
    if ((int)uVar3 < 0x100) {
      if (iVar2 < 0) {
        param_2 = param_4;
      }
      uVar3 = (param_2 >> 8) << 0x10 | param_2 >> 0x18;
    }
    else {
      uVar3 = (uVar7 >> 8) << 0x10 | uVar7 >> 0x18;
    }
    iVar6 = ((int)(char)uVar3 << 0x10 | uVar3 >> 0x10) + (int)sVar4;
    if (iVar6 < 0x8000) {
      if (iVar6 < -0x8000) {
        iVar6 = -0x8000;
      }
    }
    else {
      iVar6 = 0x7fff;
    }
  }
  sVar1 = (short)iVar6;
  if (uVar5 == 0) {
    sVar1 = sVar4;
  }
  DAT_fffed044 = param_3;
  if (sVar1 < 0x419) {
    if (sVar1 < -0x418) {
      *param_5 = -0x419;
    }
    else {
      *param_5 = sVar1;
    }
  }
  else {
    *param_5 = 0x419;
  }
  return;
}

