
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0014e89c(void)

{
  char cVar1;
  bool bVar2;
  
  bVar2 = DAT_ffff2090 == '\x01';
  if ((!bVar2) && (bVar2 = DAT_ffff2090 == '\x04', !bVar2)) {
    cVar1 = FUN_0014412c();
    bVar2 = cVar1 == '\0';
    if (!bVar2) {
      bVar2 = _DAT_ffff2c98 == 0;
    }
  }
  return bVar2;
}

