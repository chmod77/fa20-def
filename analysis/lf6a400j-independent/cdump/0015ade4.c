
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0015ade4(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (((int)DAT_ffff1c24 & 0x40U) == 0) {
    uVar2 = 2;
  }
  else {
    param_1 = param_1 & 0xff;
    if (param_1 == 0x80) {
      uVar2 = (uint)(((int)DAT_ffff1c24 & 0x80U) != 0);
    }
    else {
      uVar1 = __shr_r0_by_r1(0x100,param_1);
      uVar2 = 2;
      if ((uVar1 & 1) != 0) {
        uVar2 = __shr_r0_by_r1(_DAT_ffff1c24,param_1);
        uVar2 = uVar2 & 1;
      }
    }
  }
  return uVar2;
}

