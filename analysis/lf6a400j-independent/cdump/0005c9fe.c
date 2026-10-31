
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0005c9fe(void)

{
  undefined4 uVar1;
  byte local_18 [4];
  char acStack_14 [4];
  uint uStack_10;
  
  if (DAT_fffef686 == '\0') {
    DAT_fffef456 = 0;
    FUN_0005d944();
    FUN_0005d978(0xe,0,0);
    DAT_fffef453 = 0;
    DAT_fffef686 = '\x01';
    uVar1 = 2;
  }
  else {
    uVar1 = 2;
    if (DAT_fffef686 == '\x01') {
      uStack_10 = FUN_0005d9a4(acStack_14,local_18,1);
      uStack_10 = uStack_10 & 0xff;
      if (uStack_10 == 0) {
        if (((int)acStack_14[0] & 0xf0U) == 0) {
          if (7 < local_18[0]) {
            local_18[0] = 7;
          }
          local_18[0] = (local_18[0] & 7) << 4;
          DAT_fffef456 = DAT_fffef456 | local_18[0] | 1;
          FUN_0005d978(8,0,0);
          DAT_fffef686 = '\x02';
        }
        else {
          uStack_10 = 1;
        }
      }
      if (uStack_10 == 1) {
        FUN_0005d99c();
      }
    }
    else {
      uVar1 = 1;
      if (DAT_fffef686 == '\x02') {
        uVar1 = FUN_0005d88a();
      }
    }
    if ((DAT_fffef688 == '\x01') && (2000 < _DAT_fffef678)) {
      _DAT_ffff3144 = _DAT_ffff3144 | 0x20000000;
      DAT_fffef456 = DAT_fffef456 | 2;
      uVar1 = 1;
    }
  }
  return uVar1;
}

