
/* WARNING: Removing unreachable block (ram,0x0014664a) */
/* WARNING: Removing unreachable block (ram,0x00146678) */
/* WARNING: Removing unreachable block (ram,0x0014666e) */
/* WARNING: Removing unreachable block (ram,0x0014667e) */
/* WARNING: Removing unreachable block (ram,0x001466c2) */
/* WARNING: Removing unreachable block (ram,0x0014673e) */
/* WARNING: Removing unreachable block (ram,0x0014675a) */
/* WARNING: Removing unreachable block (ram,0x0014674c) */
/* WARNING: Removing unreachable block (ram,0x00146768) */
/* WARNING: Removing unreachable block (ram,0x0014676e) */
/* WARNING: Removing unreachable block (ram,0x001467b8) */
/* WARNING: Removing unreachable block (ram,0x001466a0) */
/* WARNING: Removing unreachable block (ram,0x00149080) */
/* WARNING: Removing unreachable block (ram,0x0014904c) */
/* WARNING: Removing unreachable block (ram,0x00148fa0) */
/* WARNING: Removing unreachable block (ram,0x001466cc) */
/* WARNING: Removing unreachable block (ram,0x001466de) */
/* WARNING: Removing unreachable block (ram,0x001465d2) */
/* WARNING: Removing unreachable block (ram,0x001466e6) */
/* WARNING: Removing unreachable block (ram,0x00146720) */
/* WARNING: Removing unreachable block (ram,0x00146710) */
/* WARNING: Removing unreachable block (ram,0x00146724) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00148f7c(void)

{
  uint uVar1;
  
  do {
    DAT_fffff01c = DAT_fffff01c & 0x87;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(DAT_ffff1ec8) {
    case 0:
      return (uint)DAT_ffff1ec8 * 0x14;
    case 1:
      do {
      } while( true );
    case 3:
      FUN_00148fe0();
      DAT_fffff01c = DAT_fffff01c & 0x87;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(DAT_ffff1ec8) {
      case 0:
        return (uint)DAT_ffff1ec8 * 0x14;
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
        uVar1 = (int)(short)_DAT_fffff732 & 0xfffffff0U | 5;
        _DAT_fffff732 = (short)uVar1;
        return uVar1;
      case 3:
        uVar1 = (uint)DAT_fffff022;
        DAT_fffff022 = (char)(uVar1 & 0xffffffbf);
        return uVar1 & 0xffffffbf;
      }
    case 4:
      DAT_fffff020 = 0x80;
      DAT_fffff026 = 0xf0;
      DAT_fffff021 = 0x13;
      DAT_fffff024 = 0;
      DAT_fffff022 = 0x31;
      _DAT_fffff756 = _DAT_fffff756 & 0xfdff | 0x200;
      _DAT_fffff758 = _DAT_fffff758 & 0xfff3 | 4;
      uVar1 = (int)(short)(_DAT_fffff732 & 0xff0f) | 0x50;
      _DAT_fffff732 = (short)uVar1;
      return uVar1;
    }
  } while( true );
}

