
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0005cdb4(void)

{
  char cVar2;
  undefined4 uVar1;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  byte local_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  
  uVar5 = 2;
  if (DAT_fffef686 == '\x01') {
    cVar2 = FUN_0005d9a4(local_24,0,0);
    if (cVar2 == '\0') {
      bVar4 = false;
      if (((local_24[0] & 0xf) == 4) && (local_24[0] < 0x70)) {
        DAT_fffef455 = DAT_fffef455 | 2;
        bVar4 = true;
      }
      if ((local_24[0] == 0) || (local_24[0] == 4)) {
        FUN_0005d2ee();
        uVar1 = FUN_0005d28e();
        FUN_0005defe(uVar1,auStack_20);
        FUN_0005d978(0,auStack_20,4);
        DAT_fffef6a4 = '\0';
        DAT_fffef686 = '\x02';
      }
      else {
        if (((((local_24[0] != 0x10) && (local_24[0] != 0x20)) && (local_24[0] != 0x30)) &&
            ((local_24[0] != 0x40 && (local_24[0] != 0x50)))) && ((local_24[0] != 0x60 && (!bVar4)))
           ) goto LAB_0005cec0;
        DAT_ffff313b = 2;
        FUN_0005d978(1,0,0);
LAB_0005ceb6:
        DAT_fffef686 = '\x03';
      }
    }
  }
  else {
    if (DAT_fffef686 != '\x02') {
      uVar5 = 1;
      goto LAB_0005ced2;
    }
    cVar2 = FUN_0005d9a4(local_24,auStack_20,4);
    if (cVar2 == '\0') {
      if (local_24[0] == 0) {
        FUN_0005de76(0xfffef6b1,auStack_1c,4);
        cVar3 = FUN_0005d326(auStack_1c,auStack_20);
        if (cVar3 == '\0') {
          DAT_ffff313b = 1;
          DAT_ffff313d = 0;
          DAT_ffff313e = 0;
          DAT_fffef675 = 0;
          FUN_0005d978(2,0,0);
          goto LAB_0005ceb6;
        }
        DAT_fffef6a4 = '\x01';
      }
LAB_0005cec0:
      cVar2 = '\x01';
    }
  }
  if (cVar2 == '\x01') {
    FUN_0005d99c();
  }
LAB_0005ced2:
  if (((DAT_fffef686 != '\x03') && (DAT_fffef688 == '\x01')) && (_DAT_fffef684 < _DAT_fffef678)) {
    uStack_18 = 0;
    if ((DAT_fffef686 == '\x02') && (DAT_fffef6a4 != '\0')) {
      _DAT_ffff3144 = _DAT_ffff3144 | 0x40000000;
    }
    else {
      _DAT_ffff3144 = _DAT_ffff3144 | 0x20000000;
    }
    DAT_ffff313b = 2;
    FUN_0005d978(1,0,0);
    DAT_fffef686 = '\x03';
  }
  return uVar5;
}

