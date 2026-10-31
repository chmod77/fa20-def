
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00077744(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  if ((DAT_ffff857c == '\x01') && ((DAT_ffff8573 == '\x03' || (DAT_ffff8573 == '@')))) {
    _DAT_ffff8578 = _DAT_ffff8578 + -1;
    if (_DAT_ffff8578 == 0) {
      DAT_ffff8573 = '\x01';
      DAT_ffff8574 = 0;
      DAT_ffff8575 = 0;
      DAT_ffff857c = '\0';
      DAT_ffff857d = 0;
      FUN_00077008();
      FUN_00077e28();
    }
  }
  DAT_ffff6789 = DAT_ffff8573;
  FUN_00001550(uVar1);
  return;
}

