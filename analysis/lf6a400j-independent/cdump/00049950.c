
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00049950(void)

{
  byte bVar2;
  byte bVar3;
  uint uVar1;
  
  if (DAT_fffef5aa == '\0') {
    bVar2 = DAT_fffeffdc | 4;
    if ((DAT_fffeffdc & 2) == 0) {
      bVar2 = DAT_fffeffdc & 0xfb;
    }
    bVar3 = bVar2 | 2;
    if ((bVar2 & 1) == 0) {
      bVar3 = bVar2 & 0xfd;
    }
    DAT_fffeffdc = bVar3 & 0xfe;
  }
  else {
    bVar2 = DAT_fffeffdc | 4;
    if ((DAT_fffeffdc & 2) == 0) {
      bVar2 = DAT_fffeffdc & 0xfb;
    }
    bVar3 = bVar2 | 2;
    if ((bVar2 & 1) == 0) {
      bVar3 = bVar2 & 0xfd;
    }
    DAT_fffeffdc = bVar3 | 1;
  }
  if (DAT_fffef5ab == '\0') {
    bVar2 = DAT_fffeffdd | 4;
    if ((DAT_fffeffdd & 2) == 0) {
      bVar2 = DAT_fffeffdd & 0xfb;
    }
    bVar3 = bVar2 | 2;
    if ((bVar2 & 1) == 0) {
      bVar3 = bVar2 & 0xfd;
    }
    DAT_fffeffdd = bVar3 & 0xfe;
  }
  else {
    bVar2 = DAT_fffeffdd | 4;
    if ((DAT_fffeffdd & 2) == 0) {
      bVar2 = DAT_fffeffdd & 0xfb;
    }
    bVar3 = bVar2 | 2;
    if ((bVar2 & 1) == 0) {
      bVar3 = bVar2 & 0xfd;
    }
    DAT_fffeffdd = bVar3 | 1;
  }
  uVar1 = (uint)DAT_fffef96c;
  if (((uVar1 & 1) != 0) && (0x13 < _DAT_fffeef10)) {
    uVar1 = FUN_0000152c(DAT_fffef5a9 + 1);
    DAT_fffef5a9 = (byte)uVar1;
    if (3 < DAT_fffef5a9) {
      if ((((DAT_fffeffdc & 1) == 0) && ((DAT_fffeffdc & 2) == 0)) && ((DAT_fffeffdc & 4) == 0)) {
        DAT_fffeffe0 = FUN_0016bd78(DAT_fffeffe0 + 1,10);
      }
      else {
        DAT_fffeffe0 = FUN_0016b640(DAT_fffeffe0 - 1,0);
      }
      if (DAT_fffeffe0 < 10) {
        if (DAT_fffeffe0 == 0) {
          DAT_fffeffdc = DAT_fffeffdc & 0xf7 | 0x10;
        }
      }
      else {
        DAT_fffeffdc = DAT_fffeffdc & 0xef | 8;
      }
      if ((((DAT_fffeffdd & 1) == 0) && ((DAT_fffeffdd & 2) == 0)) && ((DAT_fffeffdd & 4) == 0)) {
        uVar1 = FUN_0016bd78(DAT_fffeffe1 + 1,10);
        DAT_fffeffe1 = (byte)uVar1;
      }
      else {
        uVar1 = FUN_0016b640(DAT_fffeffe1 - 1,0);
        DAT_fffeffe1 = (byte)uVar1;
      }
      if (DAT_fffeffe1 < 10) {
        if (DAT_fffeffe1 == 0) {
          uVar1 = (int)(char)(DAT_fffeffdd | 0x10) & 0xf7;
          DAT_fffeffdd = (byte)uVar1;
        }
      }
      else {
        uVar1 = (int)(char)(DAT_fffeffdd | 8) & 0xef;
        DAT_fffeffdd = (byte)uVar1;
      }
    }
  }
  return uVar1;
}

