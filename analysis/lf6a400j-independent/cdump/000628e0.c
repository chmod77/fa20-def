
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000628e0(void)

{
  uint uVar1;
  
  _DAT_ffff003c = 0;
  FUN_000669fa();
  FUN_00064a76();
  FUN_00063612();
  if (((DAT_ffff20cc & 2) == 0) && (uVar1 = (uint)DAT_ffff0006, (uVar1 & 2) == 0)) {
    _DAT_ffff007a = 2;
  }
  else {
    uVar1 = (uint)DAT_ffff01c6;
    if (((uVar1 & 2) != 0) || (0xd4 < _DAT_ffff0034)) {
      _DAT_ffff007a = 0;
    }
  }
  return uVar1;
}

