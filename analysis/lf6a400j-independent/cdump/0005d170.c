
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0005d170(void)

{
  char cVar1;
  uint uVar2;
  undefined1 local_1c [8];
  undefined1 auStack_14 [8];
  char acStack_c [8];
  
  for (uVar2 = 0; (uVar2 & 0xff) < 5; uVar2 = (uVar2 & 0xff) + 1) {
    local_1c[uVar2 & 0xff] = 0;
  }
  cVar1 = FUN_0005d9a4(acStack_c,auStack_14,5);
  if (cVar1 == '\0') {
    if (acStack_c[0] == '\0') {
      DAT_ffff313b = 1;
      DAT_ffff313d = 0;
      DAT_ffff313e = 0;
      DAT_fffef675 = 0;
      FUN_0005d978(2,local_1c,5);
    }
    else {
      if (acStack_c[0] != 'p') {
        cVar1 = '\x01';
        goto LAB_0005d240;
      }
      _DAT_ffff3144 = _DAT_ffff3144 | 0x10000000;
      DAT_ffff313b = 2;
      FUN_0005d978(1,local_1c,5);
    }
    DAT_fffef686 = '\x05';
  }
LAB_0005d240:
  if (cVar1 == '\x01') {
    FUN_0005d99c();
  }
  if (((DAT_fffef686 != '\x05') && (DAT_fffef688 == '\x01')) && (_DAT_fffef684 < _DAT_fffef678)) {
    _DAT_ffff3144 = _DAT_ffff3144 | 0x10000000;
    DAT_ffff313b = 2;
    FUN_0005d978(1,local_1c,5);
    DAT_fffef686 = '\x05';
  }
  return 2;
}

