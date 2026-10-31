
void FUN_0003c90e(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined2 *puVar5;
  char *pcVar6;
  char *pcVar7;
  short sVar10;
  ushort uVar11;
  int iVar8;
  ushort uVar12;
  undefined4 uVar9;
  undefined2 uVar13;
  char cVar15;
  short sVar14;
  short *psVar16;
  uint uVar17;
  code *pcVar18;
  code *pcVar19;
  code *pcVar20;
  
  psVar16 = DAT_0003cc2c;
  pbVar2 = DAT_0003c9d4;
  sVar14 = *DAT_0003c9d0;
  if (((int)(char)*DAT_0003c9d4 & 0x80U) == 0) {
    *DAT_0003cc2c = sVar14;
    *pbVar2 = *pbVar2 | 0x80;
  }
  else {
    sVar10 = (*(code *)PTR_FUN_0003c9dc)(DAT_0003c9d8,(int)sVar14,(int)*(short *)PTR_DAT_0003c9e0);
    psVar16 = DAT_0003c9d8;
    *DAT_0003c9d8 = sVar10;
  }
  uVar11 = (*(code *)PTR_FUN_0003cc34)(PTR_PTR_0003cc30,(int)*psVar16);
  pbVar3 = DAT_0003cc38;
  *DAT_0003cc38 = (byte)((ushort)*DAT_0003cc2c >> 8);
  *DAT_0003cc3c = (char)((ushort)sVar14 >> 8);
  pcVar20 = (code *)PTR_FUN_0003cc50;
  pcVar19 = (code *)PTR_FUN_0003cc4c;
  pcVar18 = (code *)PTR_FUN_0003cc48;
  if ((*DAT_0003cc40 & 0x20) == 0) {
    *DAT_0003cc44 = uVar11;
  }
  else {
    if (*(short *)PTR_DAT_0003cc54 == 0) {
      uVar9 = 0xffffffff;
    }
    else if ((int)(uint)*(ushort *)PTR_DAT_0003cc58 < (int)DAT_0003cbcc) {
      uVar17 = (uint)*(ushort *)PTR_DAT_0003cc60;
      iVar8 = (*(code *)PTR_FUN_0003cc64)
                        ((int)DAT_0003cbce,(int)*(short *)PTR_DAT_0003cc54,*DAT_0003cc5c,uVar17);
      pcVar20 = (code *)PTR_FUN_0003cc50;
      uVar9 = (*(code *)PTR_FUN_0003cc50)(iVar8 + uVar17);
      pcVar18 = (code *)PTR_FUN_0003cc48;
      pcVar19 = (code *)PTR_FUN_0003cc4c;
    }
    else {
      iVar8 = (*(code *)PTR_FUN_0003cc48)
                        (PTR_DAT_0003cc54,*DAT_0003cc5c,
                         (uint)*(ushort *)PTR_DAT_0003cc58 - (int)DAT_0003cbcc);
      pcVar19 = (code *)PTR_FUN_0003cc4c;
      uVar9 = (*(code *)PTR_FUN_0003cc4c)(iVar8 + (uint)*(ushort *)PTR_DAT_0003cc60);
      pcVar20 = (code *)PTR_FUN_0003cc50;
    }
    uVar12 = (*(code *)PTR_FUN_0003cc68)(uVar9,(int)*(short *)PTR_DAT_0003cc6c);
    *DAT_0003cc44 = uVar12;
  }
  pcVar4 = DAT_0003cc70;
  if (*DAT_0003cc70 == '\x03') {
    uVar12 = (*pcVar19)(*DAT_0003cc5c + 1);
    *DAT_0003cc5c = uVar12;
  }
  (*pcVar20)((uint)uVar11 + (int)DAT_0003cbd0);
  uVar9 = (*pcVar18)();
  uVar13 = (*pcVar19)(uVar9);
  puVar5 = DAT_0003cc74;
  *DAT_0003cc74 = uVar13;
  *DAT_0003cc78 = *puVar5;
  pcVar6 = DAT_0003cc7c;
  *DAT_0003cc7c = (char)(*DAT_0003cc44 >> 8);
  *DAT_0003cc80 = uVar11;
  if ((*pbVar2 & 0x10) == 0) {
    *pbVar2 = *pbVar2 | 0x10;
    pcVar7 = DAT_0003cc8c;
    if (((int)*DAT_0003cc84 & 0x80U) == 0) {
      *DAT_0003cc90 = *DAT_0003cc8c;
    }
    else {
      *DAT_0003cc8c = *PTR_DAT_0003cc88;
      *DAT_0003cc90 = *pcVar7;
    }
  }
  else if (*pcVar4 == '\x03') {
    *DAT_0003cc8c = *pcVar6;
  }
  if (*pcVar4 == '\x03') {
    *pbVar2 = *pbVar2 | 0x40;
  }
  if ((*pbVar2 & 0x40) != 0) {
    if ((*pbVar2 & 0x20) == 0) {
      *DAT_0003cc98 = *pcVar6;
      *DAT_0003cca0 = *pcVar6;
      *pbVar2 = *pbVar2 | 0x20;
    }
    else {
      cVar15 = (*(code *)PTR_FUN_0003cc94)((int)*pcVar6,(int)*DAT_0003cc98);
      *DAT_0003cc98 = cVar15;
      cVar15 = (*(code *)PTR_FUN_0003cc9c)((int)*DAT_0003cc7c,(int)*DAT_0003cca0);
      *DAT_0003cca0 = cVar15;
    }
  }
  if (*pcVar4 == '\x03') {
    bVar1 = *pbVar3;
    sVar14 = (*(code *)PTR_FUN_0003cca4)((uint)bVar1 << 2,(int)*DAT_0003cca8);
    *DAT_0003cca8 = sVar14;
    sVar14 = (*(code *)PTR_FUN_0003cc68)((uint)bVar1 << 2,(int)*DAT_0003ccac);
    *DAT_0003ccac = sVar14;
  }
  else {
    *DAT_0003cca8 = 0;
    *DAT_0003ccac = DAT_0003cbd4;
  }
  return;
}

