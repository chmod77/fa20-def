
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00049b2e(void)

{
  byte bVar2;
  byte bVar3;
  uint uVar1;
  
  if (DAT_fffef5a7 == '\0') {
    bVar2 = DAT_fffeffda | 4;
    if ((DAT_fffeffda & 2) == 0) {
      bVar2 = DAT_fffeffda & 0xfb;
    }
    bVar3 = bVar2 | 2;
    if ((bVar2 & 1) == 0) {
      bVar3 = bVar2 & 0xfd;
    }
    DAT_fffeffda = bVar3 & 0xfe;
  }
  else {
    bVar2 = DAT_fffeffda | 4;
    if ((DAT_fffeffda & 2) == 0) {
      bVar2 = DAT_fffeffda & 0xfb;
    }
    bVar3 = bVar2 | 2;
    if ((bVar2 & 1) == 0) {
      bVar3 = bVar2 & 0xfd;
    }
    DAT_fffeffda = bVar3 | 1;
  }
  if (DAT_fffef5a8 == '\0') {
    bVar2 = DAT_fffeffdb | 4;
    if ((DAT_fffeffdb & 2) == 0) {
      bVar2 = DAT_fffeffdb & 0xfb;
    }
    bVar3 = bVar2 | 2;
    if ((bVar2 & 1) == 0) {
      bVar3 = bVar2 & 0xfd;
    }
    DAT_fffeffdb = bVar3 & 0xfe;
  }
  else {
    bVar2 = DAT_fffeffdb | 4;
    if ((DAT_fffeffdb & 2) == 0) {
      bVar2 = DAT_fffeffdb & 0xfb;
    }
    bVar3 = bVar2 | 2;
    if ((bVar2 & 1) == 0) {
      bVar3 = bVar2 & 0xfd;
    }
    DAT_fffeffdb = bVar3 | 1;
  }
  uVar1 = (uint)DAT_fffef96c;
  if ((uVar1 & 0x10) == 0) {
    return uVar1;
  }
  if (_DAT_fffeef10 < 0x14) {
    return uVar1;
  }
  uVar1 = FUN_0000152c(DAT_fffef5a6 + 1);
  DAT_fffef5a6 = (byte)uVar1;
  if (DAT_fffef5a6 < 4) {
    return uVar1;
  }
  if ((((DAT_fffeffda & 1) == 0) && ((DAT_fffeffda & 2) == 0)) && ((DAT_fffeffda & 4) == 0)) {
    DAT_fffeffde = FUN_0016bd78(DAT_fffeffde + 1,0xb);
  }
  else {
    DAT_fffeffde = FUN_0016b640(DAT_fffeffde - 1,0);
  }
  if (DAT_fffeffde < 0xb) {
    if (DAT_fffeffde != 0) goto LAB_00049cdc;
    DAT_fffef8a4 = DAT_fffef8a4 & 0xfb;
  }
  else {
    DAT_fffef8a4 = DAT_fffef8a4 | 4;
  }
  DAT_fffef95e = 1;
LAB_00049cdc:
  if ((((DAT_fffeffdb & 1) == 0) && ((DAT_fffeffdb & 2) == 0)) && ((DAT_fffeffdb & 4) == 0)) {
    uVar1 = FUN_0016bd78(DAT_fffeffdf + 1,0xb);
    DAT_fffeffdf = (byte)uVar1;
  }
  else {
    uVar1 = FUN_0016b640(DAT_fffeffdf - 1,0);
    DAT_fffeffdf = (byte)uVar1;
  }
  if (DAT_fffeffdf < 0xb) {
    if (DAT_fffeffdf != 0) {
      return uVar1;
    }
    uVar1 = (int)(char)DAT_fffef8a4 & 0xf7;
    DAT_fffef8a4 = (byte)uVar1;
  }
  else {
    uVar1 = (int)(char)DAT_fffef8a4 | 8;
    DAT_fffef8a4 = (byte)uVar1;
  }
  DAT_fffef95f = 1;
  return uVar1;
}

