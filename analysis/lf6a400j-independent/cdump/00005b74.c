
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00005b74(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  DAT_ffffab30 = DAT_ffffab32;
  if (DAT_ffffab32 == '\x01') {
    uVar1 = FUN_00001550(0xf0);
    DAT_ffffab30 = '\0';
    _DAT_ffff92d2 = 0x7e8;
    for (uVar2 = 0; (uVar2 & 0xffff) < (uint)_DAT_ffff7b98; uVar2 = uVar2 + 1) {
      uVar2 = uVar2 & 0xffff;
      *(undefined1 *)(uVar2 - 0x6d2a) = (&DAT_ffff6b91)[uVar2];
    }
    DAT_ffffa2d5 = 1;
    _DAT_ffff92d4 = _DAT_ffff7b98;
    DAT_ffffa2d6 = 1;
    FUN_00001550(uVar1);
  }
  if ((DAT_ffff8726 & 0x40) == 0) {
    DAT_ffffab27 = 0;
  }
  else {
    DAT_ffffab27 = 0xff;
  }
  if (((int)DAT_ffff8723 & 0x80U) == 0) {
    DAT_ffff8ec8 = 0;
  }
  else {
    DAT_ffff8ec8 = 0xff;
  }
  return (int)DAT_ffff8723;
}

