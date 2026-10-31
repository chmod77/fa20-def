
void FUN_0003baf2(void)

{
  short *psVar1;
  short *psVar2;
  byte *pbVar3;
  byte *pbVar4;
  ushort *puVar5;
  undefined *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  short sVar10;
  byte bVar13;
  undefined4 uVar9;
  ushort uVar11;
  undefined1 uVar14;
  undefined2 uVar12;
  uint uVar15;
  short *psVar16;
  byte *pbVar17;
  
  *DAT_0003bbcc = *DAT_0003bbcc | 8;
  sVar10 = (*(code *)PTR_FUN_0003bbd4)
                     (DAT_0003bbd0,(int)*DAT_0003bbdc,(int)*(short *)PTR_DAT_0003bbd8);
  psVar1 = DAT_0003bbd0;
  *DAT_0003bbd0 = sVar10;
  *DAT_0003bbe0 = (char)((ushort)*psVar1 >> 8);
  psVar16 = DAT_0003be18;
  psVar2 = DAT_0003bbec;
  pbVar17 = DAT_0003bbe4;
  if ((*DAT_0003bbe4 & 4) == 0) {
    *DAT_0003be18 = *psVar1;
  }
  else {
    *DAT_0003bbec = (ushort)(byte)*PTR_DAT_0003bbe8 << 8;
    psVar16 = psVar2;
  }
  bVar13 = (*(code *)PTR_FUN_0003be20)(PTR_PTR_0003be1c,(int)*psVar1);
  pbVar3 = DAT_0003be24;
  *DAT_0003be24 = bVar13;
  puVar5 = DAT_0003be30;
  pbVar4 = DAT_0003be28;
  if (((*DAT_0003be28 & 2) == 0) || (*DAT_0003be2c != '\0')) {
    if (*DAT_0003be44 == '\x03') {
      uVar11 = (*(code *)PTR_FUN_0003be4c)((uint)*DAT_0003be30 - (uint)(byte)*PTR_DAT_0003be48);
      *puVar5 = uVar11;
    }
  }
  else {
    uVar9 = (*(code *)PTR_FUN_0003be38)((uint)*DAT_0003be30 + (uint)(byte)*PTR_DAT_0003be34);
    uVar11 = (*(code *)PTR_FUN_0003be3c)(uVar9,(int)*(short *)PTR_DAT_0003be40);
    *puVar5 = uVar11;
  }
  puVar6 = PTR_DAT_0003be50;
  puVar5 = DAT_0003be30;
  if ((*DAT_0003be30 <= *(ushort *)PTR_DAT_0003be50) || (*DAT_0003be54 == '\0')) {
    bVar13 = (*(code *)PTR_FUN_0003be20)(PTR_PTR_0003be1c,(int)*psVar16);
    *DAT_0003be58 = bVar13;
    *DAT_0003be54 = '\x01';
  }
  pbVar7 = DAT_0003be58;
  uVar15 = (int)DAT_0003bdbc * (uint)*DAT_0003be58 + (int)DAT_0003bdbe;
  if ((int)uVar15 < 0) {
    uVar15 = uVar15 + (int)DAT_0003bdc0;
  }
  uVar9 = (*(code *)PTR_FUN_0003be5c)((int)(char)(uVar15 >> 0x18) << 0x10 | uVar15 >> 8 & 0xffff);
  uVar14 = (*(code *)PTR_FUN_0003be60)(uVar9);
  *DAT_0003be64 = uVar14;
  pbVar8 = DAT_0003be68;
  *DAT_0003be68 = *pbVar3;
  if ((*DAT_0003be6c & 1) == 0) {
    (*(code *)PTR_FUN_0003be4c)(*pbVar8 - 10);
    uVar9 = (*(code *)PTR_FUN_0003be70)();
    uVar12 = (*(code *)PTR_FUN_0003be38)(uVar9);
    *DAT_0003be74 = uVar12;
    *DAT_0003be6c = *DAT_0003be6c | 1;
  }
  else if (((*DAT_0003be78 & 1) == 0) || ((*pbVar17 & 4) == 0)) {
    if (((*DAT_0003be78 & 1) != 0) && ((*pbVar17 & 4) == 0)) {
      (*(code *)PTR_FUN_0003be4c)(*pbVar8 - 10);
      uVar9 = (*(code *)PTR_FUN_0003be70)();
      uVar12 = (*(code *)PTR_FUN_0003be38)(uVar9);
      *DAT_0003be74 = uVar12;
    }
  }
  else {
    *DAT_0003be74 = DAT_0003bdc4;
  }
  if ((*pbVar4 & 2) == 0) {
    *DAT_0003be7c = 0;
    pbVar17 = DAT_0003be8c;
  }
  else {
    bVar13 = (*(code *)PTR_FUN_0003be60)(*DAT_0003be7c + 1);
    pbVar3 = DAT_0003be7c;
    *DAT_0003be7c = bVar13;
    pbVar17 = DAT_0003be8c;
    if ((((*DAT_0003be80 & 8) == 0) || (*(ushort *)puVar6 < *puVar5)) &&
       ((byte)*PTR_DAT_0003be84 < *pbVar3)) {
      *DAT_0003be8c = *DAT_0003be8c | 0x80;
    }
    else {
      *DAT_0003be88 = *pbVar7;
    }
  }
  if ((*DAT_0003be90 & 0x40) == 0) {
    bVar13 = (*(code *)PTR_FUN_0003be94)((int)(char)*pbVar7,(int)(char)*DAT_0003be98);
    *DAT_0003be98 = bVar13;
    bVar13 = (*(code *)PTR_FUN_0003be9c)((int)(char)*pbVar7,(int)(char)*DAT_0003bea0);
    *DAT_0003bea0 = bVar13;
  }
  else {
    *DAT_0003be98 = *pbVar7;
    *DAT_0003bea0 = *pbVar7;
  }
  if (((int)(char)*pbVar17 & 0x80U) == 0) {
    *DAT_0003bea4 = *DAT_0003be88;
  }
  return;
}

