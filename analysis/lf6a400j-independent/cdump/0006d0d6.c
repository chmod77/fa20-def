
void FUN_0006d0d6(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  byte local_18 [8];
  
  if (((int)(char)DAT_fffee7e9 & 0x80U) != 0) {
    bVar1 = FUN_0006ce1a(0,(int)DAT_fffef79b);
    bVar2 = FUN_0006ce1a(0,(int)DAT_fffef79c);
    bVar3 = FUN_0006ce1a(0,(int)DAT_fffef79d);
    local_18[0] = FUN_0006ce1a(0,(int)DAT_fffef79e);
    local_18[0] = bVar1 | bVar2 | bVar3 | local_18[0];
    bVar1 = FUN_0006ce1a(1,(int)DAT_fffef799);
    local_18[1] = FUN_0006ce1a(1,(int)DAT_fffef79f);
    local_18[1] = bVar1 | local_18[1];
    bVar1 = FUN_0006ce1a(2,(int)DAT_fffef79a);
    local_18[2] = FUN_0006ce1a(2,(int)DAT_fffef7a0);
    local_18[2] = bVar1 | local_18[2];
    for (uVar7 = 0; (uVar7 & 0xffff) == 0; uVar7 = uVar7 + 1) {
      uVar7 = uVar7 & 0xffff;
      if ((*(byte *)(uVar7 - 0x11548) & 0x40) == 0) {
        uVar4 = FUN_0016bd28(*(byte *)(uVar7 - 0x11530) - 1);
        *(undefined1 *)(uVar7 - 0x11530) = uVar4;
        if ((((*(char *)(uVar7 - 0x11530) == '\0') && ((*(byte *)(uVar7 - 0x11548) & 8) == 0)) &&
            ((*(byte *)(uVar7 - 0x11542) & 0x40) == 0)) && (local_18[uVar7] == 0)) {
          FUN_0006d0b6(uVar7);
        }
      }
    }
    if ((((DAT_fffeeab2 & 0x40) == 0) &&
        (DAT_fffeeab3 = FUN_0016bd28(DAT_fffeeab3 - 1), DAT_fffeeab3 == 0)) &&
       (((DAT_fffeeab2 & 8) == 0 && ((DAT_fffeeab2 & 0x20) == 0)))) {
      for (pbVar5 = &DAT_fffef749; pbVar5 < &DAT_fffef829; pbVar5 = pbVar5 + 1) {
        if (((int)(char)pbVar5[0x2baaf] & 0x80U) != 0) {
          *pbVar5 = *pbVar5 & 0xee;
        }
      }
    }
  }
  bVar1 = 0;
  for (iVar6 = 0xdf; -1 < iVar6; iVar6 = iVar6 + -1) {
    bVar1 = bVar1 | (&DAT_fffef749)[iVar6];
  }
  if ((bVar1 & 0x10) == 0) {
    FUN_0006a77a();
  }
  DAT_fffee7e9 = DAT_fffee7e9 & 0x7f;
  return;
}

