
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004caa6(void)

{
  int iVar1;
  short sVar2;
  short sVar3;
  code *extraout_r2;
  int b;
  
  if (_DAT_ffff002a < 0x3e9) {
    _DAT_fffeeed4 = 0;
  }
  else {
    b = 0x5f5e1;
    iVar1 = __udiv32b_r1_by_r0((_DAT_ffff002a - 1000) * 0x4000,0x5f5e1);
    iVar1 = __udiv32_r1_by_r0(iVar1 * 0x17,b);
    sVar2 = (short)iVar1;
    sVar3 = (*extraout_r2)();
    _DAT_fffeeed4 = sVar2 + sVar3 * 0x17;
  }
  return;
}

