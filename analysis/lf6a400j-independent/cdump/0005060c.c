
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005060c(void)

{
  byte bVar1;
  
  if ((((DAT_fffeeec1 & 2) == 0) && ((DAT_fffeeec2 & 4) == 0)) ||
     (((DAT_fffef46f & 1) == 0 && ((DAT_fffeeec6 & 1) != 0)))) {
    _DAT_ffff2f8c = _DAT_fffef468;
  }
  bVar1 = DAT_fffef46f | 1;
  if ((DAT_fffeeec6 & 1) == 0) {
    bVar1 = DAT_fffef46f & 0xfe;
  }
  DAT_fffef46f = bVar1;
  return;
}

