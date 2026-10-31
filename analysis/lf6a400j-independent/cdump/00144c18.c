
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00144c18(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff72c & 0x100) == 0;
  if (bVar1) {
    DAT_ffff1dfc = DAT_ffff1dfc & 0xfb;
  }
  else {
    DAT_ffff1dfc = DAT_ffff1dfc | 4;
  }
  bVar2 = DAT_ffff1dfc | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1dfc & 0xfd;
  }
  DAT_ffff1dfc = bVar2;
  bVar2 = DAT_ffff1dfe | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1dfe & 0xfd;
  }
  DAT_ffff1dfe = bVar2;
  return;
}

