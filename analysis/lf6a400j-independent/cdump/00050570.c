
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00050570(void)

{
  byte bVar1;
  
  if ((((DAT_fffeeec1 & 2) == 0) && ((DAT_fffeeec2 & 4) == 0)) ||
     (((DAT_fffef46e & 1) == 0 && ((DAT_fffeeec6 & 1) != 0)))) {
    _DAT_ffff2fcc = _DAT_fffeeede;
  }
  bVar1 = DAT_fffef46e | 1;
  if ((DAT_fffeeec6 & 1) == 0) {
    bVar1 = DAT_fffef46e & 0xfe;
  }
  DAT_fffef46e = bVar1;
  return;
}

