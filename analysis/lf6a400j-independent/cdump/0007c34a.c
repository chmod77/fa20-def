
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007c34a(void)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 auStack_118 [260];
  
  cVar2 = '\0';
  if (_DAT_ffff8ed0 == 0x104) {
    pcVar5 = &DAT_ffff6796;
    _DAT_ffff88ec =
         (uint)DAT_ffff6795 + (uint)DAT_ffff6794 * 0x100 + (uint)DAT_ffff6793 * 0x10000 + -0x1000000
    ;
    uVar3 = _DAT_ffff88ec + 0xff;
    if (((0xfffeb9ff < _DAT_ffff88ec) && (uVar3 <= _DAT_ffff7bb4)) && (DAT_ffff7bbd != '\0')) {
      for (uVar4 = 0; (uVar4 & 0xff) < 0x40; uVar4 = uVar4 + 1) {
        cVar1 = *pcVar5;
        pbVar6 = (byte *)(pcVar5 + 1);
        pbVar7 = (byte *)(pcVar5 + 2);
        pbVar8 = (byte *)(pcVar5 + 3);
        pcVar5 = pcVar5 + 4;
        FUN_0007c450((uint)*pbVar8 +
                     (uint)*pbVar7 * 0x100 + (uint)*pbVar6 * 0x10000 + cVar1 * 0x1000000,
                     auStack_118 + (uVar4 & 0xff) * 4,&DAT_00031a84);
      }
      FUN_000755f6(_DAT_ffff88ec,auStack_118,0x100);
      cVar1 = FUN_0007c556(_DAT_ffff88ec,auStack_118,0x100);
      if (cVar1 == '\0') {
        if (uVar3 == _DAT_ffff7bb4) {
          DAT_ffff856b = 1;
        }
        goto LAB_0007c414;
      }
    }
    cVar2 = '\"';
  }
  else {
    cVar2 = '\x13';
  }
LAB_0007c414:
  if (cVar2 == '\0') {
    DAT_ffff6b91 = DAT_ffff6792 + '@';
    _DAT_ffff7b98 = 1;
  }
  else {
    DAT_ffff6b91 = '\x7f';
    DAT_ffff6b92 = 0xb6;
    _DAT_ffff7b98 = 3;
    DAT_ffff6b93 = cVar2;
  }
  return;
}

