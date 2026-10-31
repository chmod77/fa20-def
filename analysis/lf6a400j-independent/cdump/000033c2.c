
/* WARNING: Removing unreachable block (ram,0x00003402) */
/* WARNING: Removing unreachable block (ram,0x000034aa) */
/* WARNING: Removing unreachable block (ram,0x000034b2) */
/* WARNING: Removing unreachable block (ram,0x000034c0) */
/* WARNING: Removing unreachable block (ram,0x000034c6) */
/* WARNING: Removing unreachable block (ram,0x000034ca) */
/* WARNING: Removing unreachable block (ram,0x000034ce) */
/* WARNING: Removing unreachable block (ram,0x00003522) */
/* WARNING: Removing unreachable block (ram,0x0000352e) */
/* WARNING: Removing unreachable block (ram,0x000034d4) */
/* WARNING: Removing unreachable block (ram,0x000034e0) */
/* WARNING: Removing unreachable block (ram,0x0000350e) */
/* WARNING: Removing unreachable block (ram,0x00003512) */
/* WARNING: Removing unreachable block (ram,0x0000351a) */
/* WARNING: Removing unreachable block (ram,0x0000351e) */
/* WARNING: Removing unreachable block (ram,0x0000354c) */
/* WARNING: Removing unreachable block (ram,0x00003552) */
/* WARNING: Removing unreachable block (ram,0x0000355e) */
/* WARNING: Removing unreachable block (ram,0x00003566) */
/* WARNING: Removing unreachable block (ram,0x0000356e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000033c2(void)

{
  undefined4 uVar1;
  
  if ((_DAT_ffffd008 & 0x100) == 0) {
    uVar1 = 0x38;
    if ((_DAT_ffffd038 & 0x100) != 0) {
      _DAT_fffff666 = _DAT_fffff666 & 0xfeff;
      _DAT_fffff650 = 0;
      _DAT_fffff66a = _DAT_fffff66a & 0xfeff;
      _DAT_ffffd038 = 0x100;
      uVar1 = FUN_000038d8();
      DAT_ffffab1f = 1;
    }
  }
  else {
    _DAT_ffffd008 = 0x100;
    if ((_DAT_ffffd030 & 0x100) == 0) {
      uVar1 = 0x30;
    }
    else {
      if ((_DAT_ffffd020 & 0x100) == 0) {
        do {
        } while( true );
      }
      uVar1 = 0x20;
    }
  }
  return uVar1;
}

