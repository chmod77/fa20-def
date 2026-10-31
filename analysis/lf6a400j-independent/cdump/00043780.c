
/* WARNING: Removing unreachable block (ram,0x000437de) */
/* WARNING: Removing unreachable block (ram,0x000437ea) */
/* WARNING: Removing unreachable block (ram,0x000437f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00043780(void)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = DAT_fffef91f & 1;
  if (((DAT_fffeeec2 & 4) == 0) || ((DAT_ffff3160 & 4) == 0)) {
    if (((DAT_fffeeec2 & 4) == 0) || ((DAT_ffff3160 & 2) == 0)) goto LAB_000437c2;
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  DAT_fffef950 = 1;
  DAT_ffff3160 = DAT_ffff3160 & 0xf9;
LAB_000437c2:
  if (((DAT_fffef371 & 4) == 0) || (DAT_ffff08e5 != '\0')) {
    _DAT_fffef920 = 0;
  }
  else {
    if (0x18 < _DAT_fffef920) {
      bVar1 = 0;
      DAT_fffef950 = 1;
    }
    _DAT_fffef920 = FUN_00001540(_DAT_fffef920 + 1);
  }
  _DAT_fffef922 = 0;
  bVar2 = DAT_fffef91f | 1;
  if (bVar1 == 0) {
    bVar2 = DAT_fffef91f & 0xfe;
  }
  DAT_fffef91f = bVar2;
  return;
}

