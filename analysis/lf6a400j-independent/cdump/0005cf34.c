
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0005cf34(void)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  undefined1 local_1c [8];
  undefined1 auStack_14 [8];
  byte abStack_c [8];
  
  for (uVar3 = 0; (uVar3 & 0xff) < 5; uVar3 = (uVar3 & 0xff) + 1) {
    local_1c[uVar3 & 0xff] = 0;
  }
  cVar1 = FUN_0005d9a4(abStack_c,auStack_14,5);
  if (cVar1 != '\0') goto LAB_0005d082;
  bVar4 = false;
  if (((abStack_c[0] & 0xf) == 4) && (abStack_c[0] < 0x70)) {
    DAT_fffef455 = DAT_fffef455 | 2;
    bVar4 = true;
  }
  if ((abStack_c[0] == 0) || (abStack_c[0] == 4)) {
    if ((abStack_c[0] != 4) && (cVar2 = FUN_0005d326(0xfffef6b1,auStack_14), cVar2 != '\0')) {
      DAT_fffef6a4 = '\x01';
      goto LAB_0005d04a;
    }
    DAT_ffff313b = 1;
    FUN_0005deb2();
    DAT_ffff313d = 0;
    DAT_ffff313e = 0;
    DAT_fffef675 = 0;
    FUN_0005d978(2,local_1c,5);
    if (abStack_c[0] == 4) {
      DAT_fffef686 = '\x05';
      goto LAB_0005d082;
    }
  }
  else {
    if (((((abStack_c[0] != 0x10) && (abStack_c[0] != 0x20)) && (abStack_c[0] != 0x30)) &&
        (((abStack_c[0] != 0x40 && (abStack_c[0] != 0x50)) &&
         ((abStack_c[0] != 0x60 && (((abStack_c[0] & 0xf) != 3 && (abStack_c[0] != 0xa0)))))))) &&
       (!bVar4)) {
LAB_0005d04a:
      cVar1 = '\x01';
      goto LAB_0005d082;
    }
    DAT_ffff313b = 2;
    FUN_0005deb2();
    FUN_0005d978(1,local_1c,5);
  }
  DAT_fffef686 = '\x02';
LAB_0005d082:
  if (cVar1 == '\x01') {
    FUN_0005d99c();
  }
  if (((DAT_fffef686 != '\x02') && (DAT_fffef688 == '\x01')) && (_DAT_fffef684 < _DAT_fffef678)) {
    if (((_DAT_fffef680 & 1) == 0) || (DAT_fffef6b8 != '\0')) {
      if (DAT_fffef6a4 == '\0') {
        _DAT_ffff3144 = _DAT_ffff3144 | 0x20000000;
      }
      else {
        _DAT_ffff3144 = _DAT_ffff3144 | 0x40000000;
      }
    }
    DAT_ffff313b = 2;
    FUN_0005deb2();
    FUN_0005d978(1,local_1c,5);
    DAT_fffef686 = '\x02';
  }
  return 2;
}

