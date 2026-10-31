
void FUN_000ae8d8(ushort *param_1,ushort *param_2,uint param_3,short *param_4,short *param_5,
                 short *param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  
  uVar6 = param_3 & 0xffff;
  if (uVar6 == 0) {
    sVar4 = 0;
  }
  else {
    param_3 = param_3 & 0xffff;
    iVar3 = 0;
    if (param_3 << 1 < 0x1999999b) {
      iVar3 = __sdiv32_r1_by_r0((uint)*param_1 * 0x3333 + -0x1999999a,param_3 << 1);
    }
    sVar4 = 0x7fff;
    if ((iVar3 < 0x8000) && (sVar4 = -0x8000, -0x8001 < iVar3)) {
      sVar4 = (short)iVar3;
    }
  }
  *param_5 = sVar4;
  iVar3 = 0;
  if (uVar6 != 0) {
    uVar6 = (param_3 & 0xffff) << 1;
    iVar2 = iVar3;
    if (uVar6 < 0x1999999b) {
      iVar2 = __sdiv32_r1_by_r0((uint)*param_2 * 0x3333 + -0x1999999a,uVar6);
    }
    iVar3 = 0x7fff;
    if (iVar2 < 0x8000) {
      sVar5 = (short)iVar2;
      if (iVar2 < -0x8000) {
        sVar5 = -0x8000;
      }
      iVar3 = (int)sVar5;
    }
  }
  sVar1 = (short)iVar3;
  sVar5 = sVar4 + sVar1;
  if (((sVar4 < 0) || (sVar1 < 0)) || (-1 < sVar5)) {
    if (((sVar4 < 0) && (sVar1 < 0)) && (-1 < sVar5)) {
      sVar5 = -0x8000;
    }
  }
  else {
    sVar5 = 0x7fff;
  }
  *param_4 = sVar5;
  *param_6 = sVar1;
  return;
}

