
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00143b0a(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (_DAT_ffff2b6c < 0xffff) {
    if (_DAT_ffff2b6c != 0) {
      iVar1 = __udiv32_r1_by_r0((param_1 & 0xffff) * 0x168,(uint)_DAT_ffff2b6c);
      uVar2 = FUN_00001540(iVar1);
      return uVar2;
    }
  }
  else if (_DAT_ffff2b90 != 0) {
    iVar1 = __udiv32_r1_by_r0((param_1 & 0xffff) * 0x2d00,_DAT_ffff2b90);
    uVar2 = FUN_00001540(iVar1);
    return uVar2;
  }
  return 0xffffffff;
}

