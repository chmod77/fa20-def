
/* WARNING: Removing unreachable block (ram,0x00052a7c) */
/* WARNING: Removing unreachable block (ram,0x00052a84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000529d8(void)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  bVar2 = false;
  if (((DAT_fffeef9b & 3) == 2) && ((DAT_fffeef99 & 0x20) != 0)) {
    if ((_DAT_fffeeeb6 < 0x1900) || (0x3200 < _DAT_fffeeeb6)) {
      bVar2 = 99 < DAT_fffef109;
      DAT_fffef109 = FUN_0000152c(DAT_fffef109 + 1);
      DAT_fffef108 = 0;
    }
    else {
      bVar1 = 0xe < DAT_fffef108;
      DAT_fffef108 = FUN_0000152c(DAT_fffef108 + 1);
      DAT_fffef109 = 0;
    }
    if (((DAT_fffef02a & 8) == 0) && ((DAT_fffef02a & 4) == 0)) {
      DAT_fffef10a = FUN_0000152c(DAT_fffef10a + 1);
    }
    else {
      DAT_fffef10a = 0;
    }
    if (bVar1) {
      DAT_fffeeca8 = DAT_fffeeca8 | 0x10;
    }
    else if (bVar2) {
      DAT_fffeeca8 = DAT_fffeeca8 & 0xef;
    }
  }
  else {
    DAT_fffef108 = 0;
    DAT_fffef109 = 0;
    DAT_fffeeca8 = DAT_fffeeca8 & 0xef;
    DAT_fffef10a = 0;
  }
  return;
}

