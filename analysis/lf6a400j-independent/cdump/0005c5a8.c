
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0005c5a8(void)

{
  undefined4 uVar1;
  byte local_14 [4];
  uint uStack_10;
  
  if (DAT_fffef686 == '\0') {
    DAT_fffef456 = 0;
    FUN_0005d944();
    FUN_0005d978(0xb,0,0);
    DAT_fffef453 = 0;
    DAT_fffef686 = 1;
    return 2;
  }
  uVar1 = 2;
  if (DAT_fffef686 != '\x01') {
    uVar1 = 1;
    if (DAT_fffef686 == '\x02') {
      uVar1 = FUN_0005d88a();
    }
    goto LAB_0005c6bc;
  }
  uStack_10 = FUN_0005d9a4(local_14,0,0);
  uStack_10 = uStack_10 & 0xff;
  if (uStack_10 == 0) {
    if (((int)(char)local_14[0] & 0xf0U) == 0) {
      DAT_fffef456 = DAT_fffef456 | 1;
    }
    else {
      if ((local_14[0] & 0xf0) != 0x80) {
        uStack_10 = 1;
        goto LAB_0005c69c;
      }
      DAT_fffef456 = DAT_fffef456 | 2;
    }
    FUN_0005d978(8,0);
    DAT_fffef686 = '\x02';
  }
LAB_0005c69c:
  if (uStack_10 == 1) {
    FUN_0005d99c();
  }
LAB_0005c6bc:
  if ((DAT_fffef688 == '\x01') && (5000 < _DAT_fffef678)) {
    _DAT_ffff3144 = _DAT_ffff3144 | 0x20000000;
    DAT_fffef456 = DAT_fffef456 | 2;
    uVar1 = 1;
  }
  return uVar1;
}

