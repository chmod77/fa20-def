
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004c73e(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  _DAT_fffeef1c = FUN_00001540(_DAT_fffeef1c + 1);
  FUN_00001550(uVar1);
  if ((DAT_fffef4cc == '\0') || (0x7c < _DAT_fffeef1c)) {
    DAT_fffeeec6 = DAT_fffeeec6 | 1;
    DAT_fffef4cc = '\0';
    DAT_fffef5a9 = 0;
    DAT_fffef5a6 = 0;
  }
  else {
    DAT_fffeeec6 = DAT_fffeeec6 & 0xfe;
  }
  return;
}

