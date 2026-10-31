
/* WARNING: Removing unreachable block (ram,0x001466e6) */
/* WARNING: Removing unreachable block (ram,0x00146720) */
/* WARNING: Removing unreachable block (ram,0x00146710) */
/* WARNING: Removing unreachable block (ram,0x00146724) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0014652a(byte param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)(&PTR_DAT_00162090)[(uint)param_1 * 2][4];
  if (uVar1 == 1) {
    if (DAT_ffff1ee4 == '\0') {
      DAT_ffff1ee4 = 1;
      _DAT_ffff1ee8 = (&PTR_DAT_00162090)[(uint)param_1 * 2];
      DAT_ffff1eec = (&DAT_00162094)[(uint)param_1 * 8];
      DAT_ffff1eed = 0;
      DAT_ffff1eee = param_1;
      FUN_001467c4(0);
      do {
      } while( true );
    }
  }
  else if ((uVar1 == 2) && (DAT_ffff1ef0 == '\0')) {
    DAT_ffff1ef0 = 1;
    _DAT_ffff1ef4 = (&PTR_DAT_00162090)[(uint)param_1 * 2];
    DAT_ffff1ef8 = (&DAT_00162094)[(uint)param_1 * 8];
    DAT_ffff1ef9 = 0;
    DAT_ffff1efa = param_1;
    uVar1 = FUN_00148fa0();
    return uVar1;
  }
  return uVar1;
}

