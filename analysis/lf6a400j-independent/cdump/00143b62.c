
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00143b62(uint param_1)

{
  int iVar1;
  
  if (_DAT_ffff2b6c != 0xffff) {
    iVar1 = __udiv32_r1_by_r0((param_1 & 0xffff) * (uint)_DAT_ffff2b6c,0x168);
    FUN_00001540(iVar1);
    return;
  }
  iVar1 = __udiv32_r1_by_r0((param_1 & 0xffff) * _DAT_ffff2b90,0x2d00);
  FUN_00001540(iVar1);
  return;
}

