
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b1dfc(char param_1,undefined2 param_2,uint param_3,ushort param_4,char param_5,
                 short *param_6,short *param_7)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  
  if ((param_5 == '\0') || (param_1 == '\0')) {
    sVar2 = 0;
  }
  else {
    iVar3 = (uint)_DAT_fffec68a - (param_3 & 0xffff);
    uVar1 = 0x7fff;
    if (iVar3 < 0x8000) {
      sVar2 = (short)iVar3;
      if (iVar3 < -0x8000) {
        sVar2 = -0x8000;
      }
      uVar1 = (uint)sVar2;
    }
    uVar1 = LK_134E2C((uint)&T_02E0F0,uVar1);
    sVar2 = (short)uVar1;
  }
  *param_7 = sVar2;
  if (param_1 == '\0') {
    sVar2 = 0;
  }
  else {
    iVar3 = (int)sVar2;
    if (((iVar3 < 1) && (param_4 == 0)) ||
       ((-1 < iVar3 &&
        (0x71 < (uint)((ulonglong)((longlong)(int)(uint)param_4 * 0x2000000) >> 0x20))))) {
      iVar3 = 0;
    }
    sVar4 = (short)((ulonglong)((longlong)iVar3 * 0x2000000) >> 0x20);
    sVar2 = sVar4 + _DAT_fffec688;
    if (((sVar4 < 0) || (_DAT_fffec688 < 0)) || (-1 < sVar2)) {
      if (((sVar4 < 0) && (_DAT_fffec688 < 0)) && (-1 < sVar2)) {
        sVar2 = -0x8000;
      }
    }
    else {
      sVar2 = 0x7fff;
    }
  }
  if (param_5 == '\0') {
    sVar2 = 0;
  }
  else {
    if (sVar2 < -0x18ff) {
      sVar2 = -0x1900;
    }
    if (0x2cff < sVar2) {
      sVar2 = 0x2d00;
    }
  }
  *param_6 = sVar2;
  _DAT_fffec68a = param_2;
  _DAT_fffec688 = sVar2;
  return;
}

