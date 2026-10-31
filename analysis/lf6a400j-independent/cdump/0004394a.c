
/* WARNING: Removing unreachable block (ram,0x000439a8) */
/* WARNING: Removing unreachable block (ram,0x000439b4) */
/* WARNING: Removing unreachable block (ram,0x000439ba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004394a(void)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = DAT_fffef928 & 1;
  if (((DAT_fffeeec2 & 4) == 0) || ((DAT_ffff3161 & 4) == 0)) {
    if (((DAT_fffeeec2 & 4) == 0) || ((DAT_ffff3161 & 2) == 0)) goto LAB_0004398c;
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  DAT_fffef951 = 1;
  DAT_ffff3161 = DAT_ffff3161 & 0xf9;
LAB_0004398c:
  if (((DAT_fffef371 & 4) == 0) || (DAT_ffff08e5 != '\0')) {
    _DAT_fffef92a = 0;
  }
  else {
    if (0x18 < _DAT_fffef92a) {
      bVar1 = 0;
      DAT_fffef951 = 1;
    }
    _DAT_fffef92a = FUN_00001540(_DAT_fffef92a + 1);
  }
  _DAT_fffef92c = 0;
  bVar2 = DAT_fffef928 | 1;
  if (bVar1 == 0) {
    bVar2 = DAT_fffef928 & 0xfe;
  }
  DAT_fffef928 = bVar2;
  return;
}

