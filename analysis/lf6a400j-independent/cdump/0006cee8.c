
void FUN_0006cee8(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  byte bVar7;
  byte local_24 [8];
  
  local_24[0] = 0x81;
  local_24[1] = 0x80;
  local_24[2] = 0x80;
  for (uVar4 = 0; (uVar4 & 0xffff) == 0; uVar4 = uVar4 + 1) {
    uVar4 = uVar4 & 0xffff;
    bVar1 = *(byte *)(uVar4 - 0x11542);
    bVar3 = *(byte *)(uVar4 - 0x11548);
    bVar2 = bVar1 & 2;
    if ((bVar2 != 0) && ((bVar3 & 0xcc) == 0x80)) {
      FUN_0006e334(uVar4);
    }
    if (((bVar3 & 0x80) != 0) && (((int)DAT_fffeeab7 & 0x80U) != 0)) {
      if ((bVar2 != 0) && (bVar7 = bVar3 & 0xdf, bVar2 = bVar3 & 0x40, bVar3 = bVar7, bVar2 == 0)) {
        FUN_0006cb8a(uVar4,0x20);
      }
      if ((((bVar3 & 4) != 0) || ((local_24[uVar4] & 0x40) != 0)) && ((bVar3 & 0x40) != 0)) {
        bVar3 = bVar3 | 0x20;
      }
    }
    *(byte *)(uVar4 - 0x11542) = bVar1 & 0xfd;
    *(byte *)(uVar4 - 0x11548) = bVar3;
  }
  if (((int)DAT_fffeeab7 & 0x80U) != 0) {
    pcVar6 = &DAT_0001b1f8;
    for (pbVar5 = &DAT_fffef749; pbVar5 < &DAT_fffef821; pbVar5 = pbVar5 + 1) {
      bVar1 = *pbVar5;
      uVar4 = (uint)bVar1;
      if ((bVar1 & 0x80) != 0) {
        if ((bVar1 & 8) == 0) {
          if ((&DAT_fffef7a0 < pbVar5) || (pbVar5 < &DAT_fffef799)) {
            uVar4 = uVar4 & 0xffffffdf;
          }
          if (((uVar4 & 4) != 0) || (((*pbVar5 & 0x40) != 0 && ((uVar4 & 0x40) != 0)))) {
            uVar4 = uVar4 | 0x20;
          }
        }
        else if (((((int)*pcVar6 & 0x80U) != 0) && ((bVar1 & 0x40) == 0)) &&
                (uVar4 = FUN_0006d086(), (uVar4 & 0xff00) != 0)) {
          uVar4 = uVar4 & 0xfffffff7;
        }
      }
      *pbVar5 = (byte)uVar4;
      pcVar6 = pcVar6 + 1;
    }
    DAT_fffee706 = DAT_fffee706 & 0xfe;
  }
  return;
}

