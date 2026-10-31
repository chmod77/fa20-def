
void FUN_000e0960(ushort param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 ushort param_7,char param_8,ushort *param_9)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = (uint)param_1 - (uint)param_7;
  iVar4 = 0x7fff;
  if ((iVar1 < 0x8000) && (iVar4 = iVar1, iVar1 < -0x8000)) {
    iVar4 = -0x8000;
  }
  uVar5 = (short)iVar4 * 0x2000;
  sVar2 = 0x7fff;
  if ((int)uVar5 < 0x3fff8001) {
    if ((int)uVar5 < -0x3fff8001) {
      sVar2 = -0x8000;
    }
    else {
      sVar2 = (short)((uVar5 & 0x7fffffff) >> 0xf);
    }
  }
  iVar4 = (int)sVar2 + (uint)param_7;
  uVar3 = 0xffff;
  if (iVar4 < (int)&DAT_00010000) {
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    uVar3 = (ushort)iVar4;
  }
  if (param_3 != '\0') {
    *param_9 = 0;
    return;
  }
  if (((param_2 == '\0') || (param_5 == '\0')) || (param_8 != -0x5b)) {
    if (((param_2 == '\0') || (param_5 != '\0')) || (param_8 != -0x5b)) {
      if (((param_2 != '\0') && (param_4 == '\0')) && ((param_5 != '\0' && (param_6 == '\0'))))
      goto LAB_000e0a20;
      if ((((param_2 == '\0') || (param_4 != '\0')) || (param_5 != '\0')) || (param_6 != '\0')) {
        *param_9 = param_7;
        return;
      }
    }
    *param_9 = uVar3;
  }
  else {
LAB_000e0a20:
    *param_9 = param_1;
  }
  return;
}

