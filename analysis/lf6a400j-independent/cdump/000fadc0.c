
/* WARNING: Removing unreachable block (ram,0x000fb37c) */
/* WARNING: Removing unreachable block (ram,0x000fb34c) */
/* WARNING: Removing unreachable block (ram,0x000fb0f8) */
/* WARNING: Removing unreachable block (ram,0x000fb360) */
/* WARNING: Removing unreachable block (ram,0x000fb38e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fadc0(char param_1,uint param_2,uint param_3,uint param_4,char param_5,byte param_6,
                 short param_7,short param_8,char param_9,char param_10,int param_11,char param_12,
                 undefined2 *param_13,undefined *param_14,ushort *param_15,short *param_16,
                 undefined2 *param_17)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar5;
  undefined *puVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  int iVar10;
  byte bVar13;
  undefined *puVar11;
  undefined *puVar12;
  uint p1;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  short sVar18;
  
  p1 = (uint)param_7;
  uVar6 = (uint)param_8;
  uVar8 = p1;
  if ((int)p1 < 0) {
    uVar8 = -p1;
  }
  if ((int)uVar8 < 0) {
    uVar8 = 0;
  }
  uVar7 = uVar6;
  if ((int)uVar6 < 0) {
    uVar7 = -uVar6;
  }
  if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  fVar16 = 20.0;
  fVar15 = 120.0;
  bVar13 = 9;
  if (param_6 < 9) {
    bVar13 = param_6;
  }
  if (bVar13 < 2) {
    bVar13 = 1;
  }
  bVar1 = bVar13 != 7;
  bVar2 = false;
  if (bVar1) {
    _DAT_fffed892 = 0;
    sVar18 = _DAT_fffed892;
  }
  else {
    bVar2 = 0x31 < _DAT_fffed892;
    sVar18 = -1;
    if (_DAT_fffed892 != 0xffff) {
      sVar18 = _DAT_fffed892 + 1;
    }
  }
  _DAT_fffed892 = sVar18;
  fVar17 = 0.0;
  if (0xb6 < (uVar7 & 0xffff)) {
    fVar17 = -100.0;
    uVar6 = LK_139368((uint)&T_02F4F0,param_3 & 0xffff,uVar6);
    fVar17 = fVar17 + (float)(uVar6 & 0xffff) * 0.0030517578;
    uVar6 = LK_133BCC((uint)&T_02F480,param_4 & 0xffff);
    fVar17 = (float)(uVar6 & 0xff) * fVar17 * 0.0078125;
    uVar6 = LK_133D38((uint)&T_02F4E4,p1);
    fVar17 = (float)(uVar6 & 0xff) * fVar17 * 0.0078125;
  }
  if ((uVar8 & 0xffff) < 0xb7) {
    fVar14 = 0.0;
  }
  else {
    param_4 = param_4 & 0xffff;
    fVar14 = -100.0;
    if (param_1 != '\0') {
      iVar10 = 4;
      uVar8 = __udiv32_r1_by_r0((param_2 & 0xffff) * 9,0xa0);
      if ((int)(uVar8 & 0xffff) < iVar10) {
        if ((int)p1 < 0) {
          uVar8 = LK_133BCC((uint)&T_02F4A4,param_4);
          bVar5 = (byte)uVar8;
        }
        else {
          uVar8 = LK_133BCC((uint)&T_02F498,param_4);
          bVar5 = (byte)uVar8;
        }
        uVar8 = LK_139368((uint)&T_02F4BC,param_3 & 0xffff,p1);
        fVar14 = (fVar14 + (float)(uVar8 & 0xffff) * 0.0030517578) * (float)bVar5 * 0.0078125;
        goto LAB_000fafd2;
      }
    }
    if ((int)p1 < 0) {
      uVar8 = LK_133BCC((uint)&T_02F4B0,param_4);
    }
    else {
      uVar8 = LK_133BCC((uint)&T_02F48C,param_4);
    }
    uVar6 = LK_139368((uint)&T_02F4D0,param_3 & 0xffff,p1);
    fVar14 = (fVar14 + (float)(uVar6 & 0xffff) * 0.0030517578) * (float)(uVar8 & 0xff) * 0.0078125;
  }
LAB_000fafd2:
  fVar14 = (fVar14 + fVar17) * 100.0 * 0.01;
  fVar17 = 1310.6799;
  if ((fVar14 <= 1310.6799) && (fVar17 = fVar14, fVar14 < -1310.72)) {
    fVar17 = -1310.72;
  }
  sVar18 = 0x7fff;
  if ((fVar17 <= 1310.6799) && (sVar18 = -0x8000, -1310.72 <= fVar17)) {
    sVar18 = (short)(int)(fVar17 * 25.0);
  }
  *param_16 = sVar18;
  bVar3 = DAT_fffed896 != '\0';
  uVar8 = (uint)_DAT_fffed890 - (uint)_DAT_fffed88c;
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
    if ((int)uVar8 < 0) {
      uVar8 = 0;
    }
  }
  else if ((int)uVar8 < 0) {
    uVar8 = 0;
  }
  if (((2 < (uVar8 & 0xffff)) && (param_9 != '\0')) || (!bVar3)) {
    if (!bVar3) {
      _DAT_fffed88c = 0x514;
    }
    fVar17 = (float)_DAT_fffed88c * 0.04;
    if (bVar3) {
      fVar17 = _DAT_fffed888 + (fVar17 - _DAT_fffed888) * 0.016250608;
    }
    fVar14 = 2621.4;
    if ((fVar17 <= 2621.4) && (fVar14 = fVar17, fVar17 < 0.0)) {
      fVar14 = 0.0;
    }
    uVar8 = 0xffffffff;
    if ((fVar14 <= 2621.4) && (uVar8 = 0, 0.0 <= fVar14)) {
      uVar8 = (uint)(fVar14 * 25.0);
    }
    if (0x6d5 < (uVar8 & 0xffff)) {
      uVar8 = 0x6d6;
    }
    _DAT_fffed888 = fVar17;
    if ((uVar8 & 0xffff) < 0x2ef) {
      _DAT_fffed880 = 0x2ee;
    }
    else {
      _DAT_fffed880 = (ushort)uVar8;
    }
  }
  *param_15 = _DAT_fffed880;
  if (param_10 == '\0') {
    puVar9 = (undefined *)((uint)*(byte *)(param_11 + 1) * 10);
  }
  else {
    uVar8 = (int)sVar18 + (uint)_DAT_fffed880;
    puVar9 = &DAT_0000ffff;
    if (((int)uVar8 < (int)&DAT_00010000) &&
       (puVar9 = (undefined *)(uVar8 & 0xffff), (int)uVar8 < 0)) {
      puVar9 = (undefined *)0x0;
    }
    if (&LAB_00000658 < puVar9) {
      puVar9 = (undefined *)0x659;
    }
    if (puVar9 < &DAT_0000036c) {
      puVar9 = &DAT_0000036b;
    }
  }
  *param_17 = (short)puVar9;
  if ((DAT_fffed895 != '\0') || (bVar1)) {
    _DAT_fffed884 = 0.0;
  }
  fVar17 = 16777216.0;
  if ((float)bVar2 + _DAT_fffed884 <= 16777216.0) {
    fVar17 = (float)bVar2 + _DAT_fffed884;
  }
  DAT_fffed895 = fVar15 <= fVar17 * fVar16;
  bVar5 = 0;
  if ((!bVar1) && (bVar5 = DAT_fffed895 + DAT_fffed894, bVar5 < (byte)DAT_fffed895)) {
    bVar5 = 0xff;
  }
  puVar11 = (undefined *)(uint)(4 < bVar5);
  *param_14 = 4 < bVar5;
  if ((bVar2) || (param_1 != '\0')) {
    puVar11 = &UNK_00000003;
    if ((fVar16 * 3.0 < fVar17 * fVar16) || (!bVar2)) {
      puVar4 = &UNK_000000d6;
    }
    else {
      puVar4 = (undefined *)((int)&PTR_DAT_00000944 + 3);
    }
  }
  else {
    puVar4 = (undefined *)(int)_DAT_fffed88e;
  }
  if (bVar13 == 1) {
LAB_000fb2a6:
    puVar12 = (undefined *)0x0;
  }
  else if (bVar13 == 2) {
    puVar12 = &UNK_0000007d;
  }
  else {
    if (bVar13 == 3) goto LAB_000fb2a6;
    if (bVar13 == 4) {
      puVar12 = &UNK_0000007d;
    }
    else if (bVar13 == 5) {
      puVar12 = (undefined *)0x0;
    }
    else if ((bVar13 == 6) ||
            ((puVar12 = puVar4, bVar13 != 7 && ((bVar13 == 8 || (puVar12 = puVar11, bVar13 == 9)))))
            ) goto LAB_000fb2a6;
  }
  if (bVar13 != 1) {
    if (bVar13 == 2) {
      puVar11 = &UNK_0000007d;
      goto LAB_000fb31e;
    }
    if (bVar13 != 3) {
      if (bVar13 == 4) {
        puVar11 = &UNK_0000007d;
        goto LAB_000fb31e;
      }
      if (bVar13 == 5) {
        puVar11 = (undefined *)0x0;
        goto LAB_000fb31e;
      }
      if ((bVar13 != 6) &&
         ((puVar11 = puVar4, bVar13 == 7 || ((bVar13 != 8 && (puVar11 = param_14, bVar13 != 9))))))
      goto LAB_000fb31e;
    }
  }
  puVar11 = &UNK_0000007d;
LAB_000fb31e:
  if ((param_5 == '\0') && (puVar9 = puVar11, param_12 != '\0')) {
    puVar9 = puVar12;
  }
  if (param_6 != 5) {
    puVar11 = (undefined *)((int)&DAT_000006d4 + 2);
    if (((uint)puVar9 & 0xffff) < 0x6d6) {
      puVar11 = puVar9;
    }
    puVar9 = &UNK_0000007d;
    if (0x7d < ((uint)puVar11 & 0xffff)) {
      puVar9 = puVar11;
    }
  }
  _DAT_fffed88c = 0;
  if (param_6 != 0) {
    puVar11 = (undefined *)((int)&PTR_DAT_00000944 + 3);
    if (((uint)puVar9 & 0xffff) < 0x947) {
      puVar11 = puVar9;
    }
    _DAT_fffed88c = (short)puVar11;
    if (((uint)puVar11 & 0xffff) == 0) {
      _DAT_fffed88c = 0;
    }
  }
  *param_13 = _DAT_fffed88c;
  DAT_fffed896 = 1;
  _DAT_fffed890 = _DAT_fffed880;
  _DAT_fffed884 = fVar17;
  DAT_fffed894 = bVar5;
  _DAT_fffed88e = (short)puVar4;
  return;
}

