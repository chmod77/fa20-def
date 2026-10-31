
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00005aac(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_00001550(0xf0);
  DAT_ffffab2f = '\0';
  if (DAT_ffff92d1 == -0x80) {
    DAT_ffffab2f = -1;
  }
  else if (DAT_ffff92d1 == '\x02') {
    DAT_ffffab2f = '\x01';
  }
  if (DAT_ffff92d1 != '\x01') {
    DAT_ffff92d1 = '\0';
  }
  if (DAT_ffff8ec8 == -1) {
    DAT_ffffab2f = '\0';
  }
  if (DAT_ffffab2f == '\x01') {
    DAT_ffffab31 = DAT_ffffab2f;
    if ((_DAT_ffff8ece == 0x7df) || (_DAT_ffff8ece == 0x7e0)) {
      _DAT_ffff7b96 = _DAT_ffff8ed0;
      for (uVar2 = 0; (uVar2 & 0xffff) < (uint)_DAT_ffff7b96; uVar2 = uVar2 + 1) {
        uVar2 = uVar2 & 0xffff;
        (&DAT_ffff6792)[uVar2] = *(undefined1 *)(uVar2 - 0x712e);
      }
    }
    else {
      DAT_ffffab2f = '\0';
    }
  }
  uVar2 = FUN_00001550(uVar1);
  if (DAT_ffffab22 != '\0') {
    DAT_ffffab22 = '\0';
    if (((int)DAT_ffff8723 & 0x80U) == 0) {
      DAT_ffff8725 = DAT_ffff8725 | 0x80;
    }
    uVar2 = (uint)DAT_ffff8727;
    if ((uVar2 & 0x80) != 0) {
      uVar2 = (int)DAT_ffff8727 | 0x40;
      DAT_ffff8727 = (char)uVar2;
    }
  }
  return uVar2;
}

