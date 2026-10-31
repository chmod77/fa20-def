
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00149080(void)

{
  uint uVar1;
  
  FUN_001490b0();
  DAT_fffff024 = DAT_fffff024 & 0x87;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(DAT_ffff1ec9) {
  case 0:
    return (uint)DAT_ffff1ec9 * 0x14;
  case 1:
    DAT_ffff1ec8 = 0;
    uVar1 = FUN_001467c4(1);
    DAT_ffff1ee4 = 0;
    DAT_ffff1ee5 = 0xff;
    return uVar1;
  case 2:
    DAT_fffff018 = 0x80;
    DAT_fffff01e = 0xf2;
    DAT_fffff019 = 0x13;
    DAT_fffff01c = 0;
    DAT_fffff01a = 0x31;
    _DAT_fffff756 = _DAT_fffff756 & 0xfeff | 0x100;
    _DAT_fffff758 = _DAT_fffff758 & 0xfffe | 1;
    uVar1 = (int)_DAT_fffff732 & 0xfffffff0U | 5;
    _DAT_fffff732 = (short)uVar1;
    return uVar1;
  case 3:
    uVar1 = (uint)DAT_fffff022;
    DAT_fffff022 = (char)(uVar1 & 0xffffffbf);
    return uVar1 & 0xffffffbf;
  }
}

