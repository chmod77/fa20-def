
void FUN_000d10c0(byte *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  byte bVar13;
  byte bVar14;
  char cVar15;
  char cVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  char cVar21;
  uint uVar20;
  char cVar22;
  char cVar23;
  char cVar24;
  byte bStack_18;
  
  bVar19 = param_1[2];
  bVar1 = param_1[0x2c];
  bVar2 = param_1[0x2d];
  bVar13 = param_1[0x2e];
  bVar3 = param_1[0x35];
  bVar17 = param_1[0x48];
  bVar10 = param_1[0x4b];
  bVar14 = param_1[0x53];
  bVar18 = param_1[99];
  bVar4 = param_1[100];
  bVar5 = param_1[0x66];
  uVar12 = (uint)(char)bVar5;
  bVar8 = 0;
  if (((int)(char)param_1[0xc] & 0x40U) != 0) {
    bVar8 = 0x20;
  }
  if (((int)(char)param_1[0xc] & 0x80U) != 0) {
    bVar8 = bVar8 + 0x10;
  }
  if ((bVar10 & 0x20) != 0) {
    bVar8 = bVar8 + 8;
  }
  if ((param_1[0x4e] & 0x40) != 0) {
    bVar8 = bVar8 + 4;
  }
  if ((bVar10 & 0x10) != 0) {
    bVar8 = bVar8 + 2;
  }
  if ((bVar10 & 8) != 0) {
    bVar8 = bVar8 + 1;
  }
  cVar9 = '\0';
  if ((bVar18 & 1) != 0) {
    cVar9 = -0x80;
  }
  if ((bVar18 & 4) != 0) {
    cVar9 = cVar9 + '@';
  }
  if ((bVar18 & 2) != 0) {
    cVar9 = cVar9 + ' ';
  }
  if ((bVar18 & 8) != 0) {
    cVar9 = cVar9 + '\x10';
  }
  if ((*param_1 & 1) != 0) {
    cVar9 = cVar9 + '\b';
  }
  if ((bVar13 & 0x10) != 0) {
    cVar9 = cVar9 + '\x04';
  }
  if ((bVar13 & 8) != 0) {
    cVar9 = cVar9 + '\x02';
  }
  if ((bVar13 & 4) != 0) {
    cVar9 = cVar9 + '\x01';
  }
  bVar10 = 0;
  if ((bVar13 & 2) != 0) {
    bVar10 = 0x80;
  }
  uVar6 = (uint)(char)param_1[8];
  if ((uVar6 & 1) != 0) {
    bVar10 = bVar10 + 0x40;
  }
  if ((uVar6 & 2) != 0) {
    bVar10 = bVar10 + 0x20;
  }
  if ((uVar6 & 4) != 0) {
    bVar10 = bVar10 + 0x10;
  }
  if ((uVar6 & 8) != 0) {
    bVar10 = bVar10 + 8;
  }
  if (((int)(char)param_1[0x34] & 0x40U) != 0) {
    bVar10 = bVar10 + 4;
  }
  if (((int)(char)param_1[0x34] & 0x80U) != 0) {
    bVar10 = bVar10 + 2;
  }
  cVar21 = '\0';
  if ((bVar14 & 0x20) != 0) {
    cVar21 = -0x80;
  }
  if ((bVar14 & 0x10) != 0) {
    cVar21 = cVar21 + '@';
  }
  if ((bVar14 & 8) != 0) {
    cVar21 = cVar21 + ' ';
  }
  if ((bVar14 & 4) != 0) {
    cVar21 = cVar21 + '\x10';
  }
  if ((uVar12 & 0x40) != 0) {
    cVar21 = cVar21 + '\b';
  }
  cVar7 = '\0';
  if ((uVar12 & 0x80) != 0) {
    cVar7 = '\b';
  }
  bVar13 = 0;
  uVar20 = (uint)(char)param_1[0x55];
  if ((uVar20 & 1) != 0) {
    bVar13 = 0x10;
  }
  if ((uVar20 & 0x20) != 0) {
    bVar13 = bVar13 + 8;
  }
  if (((int)(char)param_1[0x30] & 0x80U) != 0) {
    bVar13 = bVar13 + 1;
  }
  bVar14 = 0;
  if ((uVar20 & 0x80) != 0) {
    bVar14 = 0x80;
  }
  if (((int)(char)param_1[6] & 8U) != 0) {
    bVar14 = bVar14 + 0x40;
  }
  if (((int)(char)param_1[6] & 0x80U) != 0) {
    bVar14 = bVar14 + 0x20;
  }
  if ((param_1[3] & 1) != 0) {
    bVar14 = bVar14 + 0x10;
  }
  if ((param_1[3] & 2) != 0) {
    bVar14 = bVar14 + 8;
  }
  cVar22 = '\0';
  if ((param_1[0x27] & 2) != 0) {
    cVar22 = ' ';
  }
  if ((bVar4 & 4) != 0) {
    cVar22 = cVar22 + '\x10';
  }
  if ((param_1[0x65] & 0x40) != 0) {
    cVar22 = cVar22 + '\b';
  }
  if ((bVar4 & 8) != 0) {
    cVar22 = cVar22 + '\x04';
  }
  if ((bVar4 & 0x10) != 0) {
    cVar22 = cVar22 + '\x02';
  }
  if ((bVar4 & 0x20) != 0) {
    cVar22 = cVar22 + '\x01';
  }
  cVar23 = '\0';
  if ((bVar4 & 0x40) != 0) {
    cVar23 = -0x80;
  }
  if ((bVar17 & 1) != 0) {
    cVar23 = cVar23 + '\x01';
  }
  cVar24 = '\0';
  if ((bVar17 & 0x40) != 0) {
    cVar24 = -0x80;
  }
  if ((bVar17 & 8) != 0) {
    cVar24 = cVar24 + '@';
  }
  if ((bVar17 & 0x20) != 0) {
    cVar24 = cVar24 + ' ';
  }
  if ((param_1[0x51] & 8) != 0) {
    cVar24 = cVar24 + '\x10';
  }
  if ((bVar17 & 4) != 0) {
    cVar24 = cVar24 + '\b';
  }
  if ((bVar17 & 0x10) != 0) {
    cVar24 = cVar24 + '\x04';
  }
  if ((param_1[0x51] & 4) != 0) {
    cVar24 = cVar24 + '\x02';
  }
  if ((bVar17 & 2) != 0) {
    cVar24 = cVar24 + '\x01';
  }
  cVar15 = '\0';
  uVar20 = (uint)(char)param_1[0x16];
  if ((uVar20 & 0x80) != 0) {
    cVar15 = '@';
  }
  if ((uVar20 & 0x20) != 0) {
    cVar15 = cVar15 + ' ';
  }
  if ((uVar20 & 0x40) != 0) {
    cVar15 = cVar15 + '\x10';
  }
  if ((uVar20 & 0x10) != 0) {
    cVar15 = cVar15 + '\b';
  }
  if ((param_1[0x15] & 4) != 0) {
    cVar15 = cVar15 + '\x04';
  }
  if ((param_1[0x15] & 0x10) != 0) {
    cVar15 = cVar15 + '\x02';
  }
  if ((param_1[0x28] & 2) != 0) {
    cVar15 = cVar15 + '\x01';
  }
  cVar16 = '\0';
  if ((param_1[0x39] & 1) != 0) {
    cVar16 = -0x80;
  }
  if ((uVar6 & 0x10) != 0) {
    cVar16 = cVar16 + '@';
  }
  if ((uVar6 & 0x20) != 0) {
    cVar16 = cVar16 + ' ';
  }
  if ((uVar6 & 0x40) != 0) {
    cVar16 = cVar16 + '\x10';
  }
  if ((uVar6 & 0x80) != 0) {
    cVar16 = cVar16 + '\b';
  }
  if ((bVar3 & 0x10) != 0) {
    cVar16 = cVar16 + '\x04';
  }
  if ((bVar3 & 0x20) != 0) {
    cVar16 = cVar16 + '\x02';
  }
  if ((uVar12 & 0x20) != 0) {
    cVar16 = cVar16 + '\x01';
  }
  bVar17 = 0;
  uVar12 = (uint)(char)param_1[1];
  if ((uVar12 & 1) != 0) {
    bVar17 = 0x80;
  }
  if ((uVar12 & 2) != 0) {
    bVar17 = bVar17 + 0x40;
  }
  if ((param_1[0x17] & 0x10) != 0) {
    bVar17 = bVar17 + 0x20;
  }
  if ((param_1[0x17] & 0x20) != 0) {
    bVar17 = bVar17 + 0x10;
  }
  if ((uVar20 & 1) != 0) {
    bVar17 = bVar17 + 8;
  }
  if ((uVar20 & 2) != 0) {
    bVar17 = bVar17 + 4;
  }
  if ((bVar19 & 0x10) != 0) {
    bVar17 = bVar17 + 2;
  }
  if ((bVar19 & 0x20) != 0) {
    bVar17 = bVar17 + 1;
  }
  bVar18 = 0;
  if ((bVar1 & 1) != 0) {
    bVar18 = 0x20;
  }
  if ((bVar1 & 2) != 0) {
    bVar18 = bVar18 + 0x10;
  }
  if ((bVar19 & 4) != 0) {
    bVar18 = bVar18 + 8;
  }
  if ((bVar19 & 8) != 0) {
    bVar18 = bVar18 + 4;
  }
  if ((uVar12 & 0x40) != 0) {
    bVar18 = bVar18 + 2;
  }
  if ((uVar12 & 0x80) != 0) {
    bVar18 = bVar18 + 1;
  }
  bStack_18 = 0;
  if ((param_1[1] & 0x10) != 0) {
    bStack_18 = 0x20;
  }
  if ((bVar3 & 1) != 0) {
    bStack_18 = bStack_18 + 0x10;
  }
  if ((bVar3 & 2) != 0) {
    bStack_18 = bStack_18 + 8;
  }
  if ((bVar3 & 4) != 0) {
    bStack_18 = bStack_18 + 4;
  }
  if ((bVar3 & 8) != 0) {
    bStack_18 = bStack_18 + 2;
  }
  if ((bVar1 & 0x10) != 0) {
    bStack_18 = bStack_18 + 1;
  }
  cVar11 = '\0';
  if ((bVar1 & 0x20) != 0) {
    cVar11 = -0x80;
  }
  if ((bVar1 & 8) != 0) {
    cVar11 = cVar11 + '@';
  }
  if ((param_1[0x2b] & 1) != 0) {
    cVar11 = cVar11 + ' ';
  }
  if (((int)(char)param_1[0x57] & 0x80U) != 0) {
    cVar11 = cVar11 + '\x10';
  }
  if ((bVar2 & 0x10) != 0) {
    cVar11 = cVar11 + '\b';
  }
  if ((bVar2 & 0x20) != 0) {
    cVar11 = cVar11 + '\x04';
  }
  if ((bVar2 & 4) != 0) {
    cVar11 = cVar11 + '\x02';
  }
  if ((bVar2 & 8) != 0) {
    cVar11 = cVar11 + '\x01';
  }
  bVar19 = 0;
  if ((bVar2 & 0x40) != 0) {
    bVar19 = 0x80;
  }
  if ((bVar2 & 2) != 0) {
    bVar19 = bVar19 + 0x40;
  }
  if (((int)(char)param_1[0x3b] & 0x40U) != 0) {
    bVar19 = bVar19 + 0x20;
  }
  if (((int)(char)param_1[0x3b] & 0x80U) != 0) {
    bVar19 = bVar19 + 0x10;
  }
  if ((param_1[0x1c] & 1) != 0) {
    bVar19 = bVar19 + 8;
  }
  if ((param_1[0x1c] & 2) != 0) {
    bVar19 = bVar19 + 4;
  }
  if ((bVar5 & 1) != 0) {
    bVar19 = bVar19 + 2;
  }
  if ((bVar5 & 2) != 0) {
    bVar19 = bVar19 + 1;
  }
  *param_2 = cVar9;
  param_2[1] = bVar10 & 0xf8;
  param_2[2] = cVar15;
  param_2[3] = cVar16;
  param_2[4] = bVar17 & 0xc3;
  param_2[5] = bVar18 & 0x30;
  param_2[6] = bStack_18 & 0x21;
  param_2[7] = cVar11;
  param_2[8] = bVar19 & 0xfc;
  param_2[9] = bVar8 & 0x20;
  param_2[10] = cVar21;
  param_2[0xb] = cVar7;
  param_2[0xc] = bVar13 & 0x1e;
  param_2[0xd] = bVar14 & 0xe0;
  param_2[0xe] = cVar22;
  param_2[0xf] = cVar23;
  param_2[0x10] = cVar24;
  return;
}

