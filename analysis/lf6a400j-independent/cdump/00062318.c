
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00062318(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)DAT_fffef63a;
  if ((uVar1 & 1) == 0) {
    _DAT_fffef62e = 0;
  }
  else if (DAT_fffef5d0 == '\n') {
    iVar2 = (int)_DAT_fffef628 + (int)_DAT_fffef626 + (int)_DAT_fffef62a + (int)_DAT_fffef62c;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    _DAT_fffef62e = (short)(iVar2 >> 2);
    return uVar1;
  }
  return uVar1;
}

