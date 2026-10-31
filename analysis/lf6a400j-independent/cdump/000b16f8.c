
int FUN_000b16f8(ushort param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  undefined1 uVar4;
  
  uVar1 = __udiv32_r1_by_r0((param_2 & 0xff) * 0xf55,0x17);
  iVar3 = (uVar1 & 0xffff) - (uint)param_1;
  if (iVar3 < 0x8000) {
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
  }
  else {
    iVar3 = 0x7fff;
  }
  iVar3 = __sdiv32_r1_by_r0((short)iVar3 * 0xc35,(int)(undefined *)0x41194);
  sVar2 = (short)iVar3;
  if (sVar2 < 1) {
    *param_3 = 0;
  }
  else {
    if (sVar2 < 0x100) {
      if (sVar2 < 0) {
        sVar2 = 0;
      }
      uVar4 = (undefined1)sVar2;
    }
    else {
      uVar4 = 0xff;
    }
    *param_3 = uVar4;
  }
  return iVar3;
}

