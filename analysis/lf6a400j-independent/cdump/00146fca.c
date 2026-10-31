
/* WARNING: Removing unreachable block (ram,0x00147016) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00146fca(void)

{
  undefined4 uVar1;
  
  if ((_DAT_fffff75e & 0x200) != 0) {
    return;
  }
  DAT_ffff1e55 = DAT_ffff1e55 | 0x80;
  uVar1 = FUN_00001550(0xf0);
  _DAT_ffff6746 = _DAT_ffff6746 & 0xfdff;
  _DAT_fffff754 = _DAT_fffff754 & 0xfdff;
  FUN_00001550(uVar1);
  return;
}

