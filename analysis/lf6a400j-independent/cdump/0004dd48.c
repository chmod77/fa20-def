
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004dd48(void)

{
  int iVar1;
  
  if (_DAT_ffff2af6 == 0) {
    _DAT_ffff2af2 = 0;
  }
  else {
    iVar1 = __sdiv32_r1_by_r0(96000000,(uint)_DAT_ffff2af6);
    _DAT_ffff2af2 = FUN_00001540(iVar1);
  }
  return;
}

