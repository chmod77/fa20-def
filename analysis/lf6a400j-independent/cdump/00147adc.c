
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00147adc(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  DAT_ffff1eb0 = (byte)_DAT_ffff1e6e & 0x3f;
  DAT_ffff1eb1 = (byte)_DAT_ffff1e70 & 0x3f;
  DAT_ffff1eb2 = (byte)_DAT_ffff1e72 & 0x3f;
  DAT_ffff1eb3 = (undefined1)((short)(_DAT_ffff1e74 & 0x30) >> 4);
  DAT_ffff1eb4 = (byte)_DAT_ffff1e74 & 0xf;
  if ((_DAT_ffff1e7a & 0x40) == 0) {
    DAT_ffff1ebf = DAT_ffff1ebf & 0x7f;
  }
  else {
    DAT_ffff1ebf = DAT_ffff1ebf | 0x80;
  }
  if ((_DAT_ffff1e7a & 0x20) == 0) {
    DAT_ffff1ebf = DAT_ffff1ebf & 0xbf;
  }
  else {
    DAT_ffff1ebf = DAT_ffff1ebf | 0x40;
  }
  if ((_DAT_ffff1e7a & 0x10) == 0) {
    DAT_ffff1ebf = DAT_ffff1ebf & 0xdf;
  }
  else {
    DAT_ffff1ebf = DAT_ffff1ebf | 0x20;
  }
  DAT_ffff1eb7 = (byte)_DAT_ffff1e7a & 0xf;
  if ((_DAT_ffff1e7c & 0x40) == 0) {
    DAT_ffff1ebf = DAT_ffff1ebf & 0xf7;
  }
  else {
    DAT_ffff1ebf = DAT_ffff1ebf | 8;
  }
  DAT_ffff1eb8 = (undefined1)((short)(_DAT_ffff1e7c & 0x30) >> 4);
  DAT_ffff1eb9 = (byte)_DAT_ffff1e7c & 0xf;
  DAT_ffff1ebc = (byte)_DAT_ffff1e80 & 0x3f;
  DAT_ffff1ebd = (undefined1)((short)(_DAT_ffff1e82 & 0x70) >> 4);
  DAT_ffff1ebe = (byte)_DAT_ffff1e82 & 0xf;
  DAT_ffff1eb5 = (byte)_DAT_ffff1e76 & 0x3f;
  DAT_ffff1eb6 = (byte)_DAT_ffff1e78 & 0x3f;
  DAT_ffff1eba = (undefined1)((short)(_DAT_ffff1e7e & 0x60) >> 5);
  DAT_ffff1ebb = (byte)_DAT_ffff1e7e & 0x1f;
  FUN_00001550(uVar1);
  return;
}

