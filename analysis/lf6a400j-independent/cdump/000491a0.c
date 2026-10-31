
/* WARNING: Removing unreachable block (ram,0x00049388) */
/* WARNING: Removing unreachable block (ram,0x00049374) */
/* WARNING: Removing unreachable block (ram,0x0004937c) */
/* WARNING: Removing unreachable block (ram,0x00049390) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000491a0(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  
  cVar2 = DAT_ffff66b0;
  bVar1 = DAT_ffff2fe2;
  if ((((DAT_ffff66b0 == '\x03') && (DAT_fffefa33 == 0xff)) && ((DAT_fffefa2f & 0x40) == 0)) &&
     (((DAT_fffef371 & 4) != 0 && (DAT_ffff08ed == '\0')))) {
    if (((DAT_fffef3b2 & 1) == 0) &&
       (cVar3 = FUN_0016caec((int)(short)((ushort)DAT_fffef3b3 - (ushort)DAT_ffff2fe2)), cVar3 == -1
       )) {
      DAT_ffff3169 = bVar1;
      DAT_ffff3168 = bVar1;
      _DAT_fffefa30 = 0;
      _DAT_ffff316a = 0;
      _DAT_fffef724 = 0;
      _DAT_ffff2f88 = 0;
    }
    else {
      if (DAT_ffff3168 < bVar1) {
        DAT_ffff3168 = bVar1;
      }
      if (bVar1 < DAT_ffff3169) {
        DAT_ffff3169 = bVar1;
      }
      _DAT_ffff316a = FUN_00001540((_DAT_fffef724 >> 0x10) + (uint)_DAT_fffefa30);
    }
    DAT_fffef3b2 = DAT_fffef3b2 | 1;
    FUN_0016caec((int)(short)((ushort)DAT_ffff3168 - (ushort)DAT_ffff3169));
    DAT_fffefa1c = DAT_fffefa1c & 0xfb;
    DAT_fffefa32 = 1;
    DAT_fffefa2e = DAT_fffefa2e | 4;
    DAT_ffff3169 = bVar1;
    DAT_ffff3168 = bVar1;
    _DAT_fffefa30 = 0;
    _DAT_ffff316a = 0;
    _DAT_fffef724 = 0;
  }
  if (cVar2 == '\x03') {
    DAT_fffefa33 = FUN_0000152c(DAT_fffefa33 + 1);
  }
  else {
    DAT_fffefa33 = 0;
  }
  return;
}

