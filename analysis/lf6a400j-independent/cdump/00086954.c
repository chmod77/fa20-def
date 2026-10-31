
void FUN_00086954(ushort param_1,uint param_2,uint param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (param_2 & 0xffff) - 16000;
  iVar1 = (param_3 & 0xffff) * 0x4000 + -0xfa00000;
  if (iVar2 == 0) {
    iVar2 = 0x7fff;
    if (iVar1 < 0) {
      iVar2 = -0x8000;
    }
  }
  else {
    iVar2 = __sdiv32_r1_by_r0(iVar1,iVar2);
    if (iVar2 < 0x8000) {
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
    }
    else {
      iVar2 = 0x7fff;
    }
  }
  uVar3 = (int)(short)iVar2 * (uint)param_1;
  uVar3 = ((uint)((uVar3 & 0x80000000) != 0) * -2 | (uint)((uVar3 * 2 & 0x80000000) != 0)) << 0x10 |
          (uVar3 & 0x3fffffff) >> 0xe;
  iVar1 = __sdiv32_r1_by_r0((short)iVar2 * 0x85,0x280);
  iVar1 = uVar3 + (int)(short)iVar1;
  if (iVar1 < (int)&UNK_00010d4c) {
    if (iVar1 < 0xd4c) {
      *param_4 = 0;
    }
    else {
      *param_4 = (short)iVar1 + -0xd4c;
    }
  }
  else {
    *param_4 = -1;
  }
  return;
}

