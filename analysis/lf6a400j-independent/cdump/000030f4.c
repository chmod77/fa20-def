
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000030f4(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffffa2e4;
  FUN_00003b68();
  if ((uVar1 & 0xf0) == 0x30) {
    _DAT_ffffa30e = (short)DAT_ffffa2e4 & 0xf;
    _DAT_ffffa30c = (ushort)DAT_ffffa2e5;
    _DAT_ffffa30a = (ushort)DAT_ffffa2e6;
    DAT_ffffab21 = 0;
    if (_DAT_ffffa30e == 0) {
      _DAT_fffff666 = _DAT_fffff666 & 0xfdff;
      _DAT_fffff652 = 0;
      _DAT_fffff66a = _DAT_fffff66a & 0xfdff;
      FUN_000035a8();
      return 1;
    }
    if (_DAT_ffffa30e != 1) {
      DAT_ffffab21 = 0;
      return 2;
    }
    FUN_00003784(0x50);
  }
  else {
    FUN_00003bca();
  }
  return 0;
}

