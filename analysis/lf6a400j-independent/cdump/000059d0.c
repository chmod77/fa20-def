
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000059d0(void)

{
  int iVar1;
  
  if ((_DAT_ffffd008 & 0x100) != 0) {
    _DAT_ffffd008 = 0x100;
    iVar1 = FUN_000051d4();
    return iVar1;
  }
  return (int)(short)_DAT_ffffd008;
}

