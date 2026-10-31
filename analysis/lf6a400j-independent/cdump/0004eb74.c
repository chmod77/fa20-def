
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004eb74(void)

{
  byte bVar1;
  
  if ((((DAT_fffeeec1 & 2) == 0) && ((DAT_fffeeec2 & 4) == 0)) ||
     (((DAT_fffef358 & 1) == 0 && ((DAT_fffeeec6 & 1) != 0)))) {
    _DAT_ffff2fac = _DAT_fffeeede;
  }
  bVar1 = DAT_fffef358 | 1;
  if ((DAT_fffeeec6 & 1) == 0) {
    bVar1 = DAT_fffef358 & 0xfe;
  }
  DAT_fffef358 = bVar1;
  return;
}

