
void FUN_000607ba(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  for (uVar4 = 0x67; (uVar4 & 0xff) < 0x69; uVar4 = uVar4 + 1) {
    iVar2 = (uVar4 & 0xff) * 8 + -0xce90;
    for (uVar1 = 0; (uVar1 & 0xff) < 8; uVar1 = uVar1 + 1) {
      uVar1 = uVar1 & 0xff;
      *(byte *)(iVar2 + uVar1) = *(byte *)(iVar2 + uVar1) & 0xfd;
    }
  }
  for (uVar4 = 0; (uVar4 & 0xff) < 8; uVar4 = uVar4 + 1) {
    uVar3 = (uint)DAT_ffff3144;
    uVar1 = __shl_r0_by_r1(1,uVar4 & 0xff);
    if ((uVar1 & uVar3) == 0) {
      uVar4 = uVar4 & 0xff;
      *(byte *)(uVar4 - 0xcb58) = *(byte *)(uVar4 - 0xcb58) & 0xfb;
    }
  }
  if ((DAT_fffef3aa & 8) == 0) {
    DAT_ffff34b3 = DAT_ffff34b3 & 0xfb;
  }
  if ((DAT_fffef3aa & 0x10) == 0) {
    DAT_ffff34b4 = DAT_ffff34b4 & 0xfb;
  }
  if ((DAT_fffef3aa & 0x20) == 0) {
    DAT_ffff34b5 = DAT_ffff34b5 & 0xfb;
  }
  if ((DAT_fffef3aa & 0x40) == 0) {
    DAT_ffff34b6 = DAT_ffff34b6 & 0xfb;
  }
  if (((int)(char)DAT_fffef3aa & 0x80U) == 0) {
    DAT_ffff34b7 = DAT_ffff34b7 & 0xfb;
  }
  return;
}

