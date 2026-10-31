
void FUN_0007c34a(void)

{
  byte bVar1;
  ushort *puVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined1 auStack_18 [4];
  
  puVar2 = DAT_0007c568;
  iVar5 = (int)DAT_0007c3ae;
  cVar8 = '\0';
  if ((uint)*DAT_0007c568 == (int)DAT_0007c3b0) {
    pbVar10 = DAT_0007c590 + 3;
    uVar6 = (uint)DAT_0007c590[2] +
            (uint)DAT_0007c590[1] * 0x100 + (uint)*DAT_0007c590 * 0x10000 + DAT_0007c594;
    *DAT_0007c598 = uVar6;
    uVar7 = (int)(short)*puVar2 - 4;
    uVar9 = (uVar6 + (uVar7 & 0xffff)) - 1;
    if (((DAT_0007c59c <= uVar6) && (uVar9 <= *DAT_0007c5a0)) && (*DAT_0007c5a4 != '\0')) {
      for (uVar6 = 0; (uVar6 & 0xff) < 0x40; uVar6 = uVar6 + 1) {
        bVar1 = *pbVar10;
        pbVar11 = pbVar10 + 1;
        pbVar12 = pbVar10 + 2;
        pbVar13 = pbVar10 + 3;
        pbVar10 = pbVar10 + 4;
        FUN_0007c450((uint)*pbVar13 +
                     (uint)*pbVar12 * 0x100 + (uint)*pbVar11 * 0x10000 + (char)bVar1 * 0x1000000,
                     auStack_18 + (uVar6 & 0xff) * 4 + iVar5,PTR_DAT_0007c5a8);
      }
      (*(code *)PTR_FUN_0007c5ac)(*DAT_0007c598,auStack_18 + iVar5,uVar7);
      cVar4 = FUN_0007c556(*DAT_0007c598,auStack_18 + iVar5,uVar7);
      if (cVar4 == '\0') {
        if (uVar9 == *DAT_0007c5a0) {
          *DAT_0007c56c = 1;
        }
        goto LAB_0007c414;
      }
    }
    cVar8 = '\"';
  }
  else {
    cVar8 = '\x13';
  }
LAB_0007c414:
  pcVar3 = DAT_0007c584;
  if (cVar8 == '\0') {
    *DAT_0007c584 = *DAT_0007c580 + '@';
    *DAT_0007c588 = 1;
  }
  else {
    *DAT_0007c584 = '\x7f';
    pcVar3[1] = (char)DAT_0007c562;
    pcVar3[2] = cVar8;
    *DAT_0007c588 = 3;
  }
  return;
}

