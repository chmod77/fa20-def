
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000604ba(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  
  if (((DAT_ffff6569 & 0x20) == 0) && ((DAT_fffef050 & 1) == 0)) {
    for (uVar2 = 0; (uVar2 & 0xff) < 0x67; uVar2 = uVar2 + 1) {
      iVar3 = (uVar2 & 0xff) * 8 + -0xce90;
      uVar4 = 0;
      while ((uVar4 & 0xff) < 8) {
        uVar5 = uVar4 & 0xff;
        bVar6 = *(byte *)(iVar3 + uVar5);
        uVar2 = uVar2 & 0xff;
        uVar1 = (uint)*(byte *)(uVar2 - 0xf811);
        uVar4 = __shl_r0_by_r1(1,uVar4 & 0xff);
        if ((uVar4 & uVar1) == 0) {
          bVar6 = bVar6 & 0xbf;
        }
        else {
          bVar6 = bVar6 | 0x40;
        }
        *(byte *)(iVar3 + uVar5) = bVar6;
        uVar4 = uVar5 + 1;
      }
    }
  }
  else {
    _DAT_ffff316c = 0;
    DAT_ffff316e = 0;
    for (uVar2 = 0; (uVar2 & 0xff) < 0x67; uVar2 = uVar2 + 1) {
      iVar3 = (uVar2 & 0xff) * 8 + -0xce90;
      uVar4 = 0;
      while ((uVar4 & 0xff) < 8) {
        uVar5 = uVar4 & 0xff;
        bVar6 = *(byte *)(iVar3 + uVar5);
        uVar2 = uVar2 & 0xff;
        uVar1 = (uint)*(byte *)(uVar2 - 0xf811);
        uVar4 = __shl_r0_by_r1(1,uVar4 & 0xff);
        if ((uVar4 & uVar1) == 0) {
          bVar6 = bVar6 & 0xaf;
        }
        else {
          bVar6 = bVar6 | 0x50;
        }
        *(byte *)(iVar3 + uVar5) = bVar6;
        uVar4 = uVar5 + 1;
      }
    }
  }
  return;
}

