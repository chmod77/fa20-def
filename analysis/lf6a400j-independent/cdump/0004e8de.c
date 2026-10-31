
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0004e8de(void)

{
  undefined4 uVar1;
  
  if ((DAT_fffef331 & 2) == 0) {
    if (299 < _DAT_fffef34a) {
      uVar1 = FUN_00001550(0x70);
      DAT_fffef09e = DAT_fffef09e & 0x7f;
      FUN_00001550(uVar1);
    }
    uVar1 = FUN_00001540(_DAT_fffef34a + 1);
    _DAT_fffef34a = (ushort)uVar1;
    _DAT_fffef348 = 0;
  }
  else {
    if (299 < _DAT_fffef348) {
      uVar1 = FUN_00001550(0x70);
      DAT_fffef09e = DAT_fffef09e | 0x80;
      FUN_00001550(uVar1);
    }
    uVar1 = FUN_00001540(_DAT_fffef348 + 1);
    _DAT_fffef348 = (ushort)uVar1;
    _DAT_fffef34a = 0;
  }
  return uVar1;
}

