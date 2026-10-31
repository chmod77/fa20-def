
/* WARNING: Removing unreachable block (ram,0x000fe500) */
/* WARNING: Removing unreachable block (ram,0x000fe4d0) */
/* WARNING: Removing unreachable block (ram,0x000fe274) */
/* WARNING: Removing unreachable block (ram,0x000fe4e4) */
/* WARNING: Removing unreachable block (ram,0x000fe512) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fdf34(char param_1,ushort param_2,uint param_3,uint param_4,char param_5,byte param_6,
                 short param_7,short param_8,char param_9,char param_10,byte *param_11,char param_12
                 ,undefined2 *param_13,undefined *param_14,ushort *param_15,short *param_16,
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
  byte bVar12;
  undefined *puVar10;
  undefined *puVar11;
  uint p1;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  short sVar17;
  
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
  fVar15 = 20.0;
  fVar14 = 120.0;
  bVar12 = 9;
  if (param_6 < 9) {
    bVar12 = param_6;
  }
  if (bVar12 < 2) {
    bVar12 = 1;
  }
  bVar1 = bVar12 != 7;
  bVar2 = false;
  if (bVar1) {
    _DAT_fffed952 = 0;
    sVar17 = _DAT_fffed952;
  }
  else {
    bVar2 = 0x31 < _DAT_fffed952;
    sVar17 = -1;
    if (_DAT_fffed952 != 0xffff) {
      sVar17 = _DAT_fffed952 + 1;
    }
  }
  _DAT_fffed952 = sVar17;
  fVar16 = 0.0;
  if (0xb6 < (uVar7 & 0xffff)) {
    fVar16 = -100.0;
    uVar6 = LK_139368((uint)&T_02F6F8,param_3 & 0xffff,uVar6);
    fVar16 = fVar16 + (float)(uVar6 & 0xffff) * 0.0030517578;
    uVar6 = LK_133BCC((uint)&T_02F688,param_4 & 0xffff);
    fVar16 = (float)(uVar6 & 0xff) * fVar16 * 0.0078125;
    uVar6 = LK_133D38((uint)&T_02F6EC,p1);
    fVar16 = (float)(uVar6 & 0xff) * fVar16 * 0.0078125;
  }
  if ((uVar8 & 0xffff) < 0xb7) {
    fVar13 = 0.0;
  }
  else {
    param_4 = param_4 & 0xffff;
    fVar13 = -100.0;
    if ((param_1 == '\0') || (0x1ff < param_2)) {
      if ((int)p1 < 0) {
        uVar8 = LK_133BCC((uint)&T_02F6B8,param_4);
      }
      else {
        uVar8 = LK_133BCC((uint)&T_02F694,param_4);
      }
      uVar6 = LK_139368((uint)&T_02F6D8,param_3 & 0xffff,p1);
      fVar13 = (fVar13 + (float)(uVar6 & 0xffff) * 0.0030517578) * (float)(uVar8 & 0xff) * 0.0078125
      ;
    }
    else {
      if ((int)p1 < 0) {
        uVar8 = LK_133BCC((uint)&T_02F6AC,param_4);
        bVar5 = (byte)uVar8;
      }
      else {
        uVar8 = LK_133BCC((uint)&T_02F6A0,param_4);
        bVar5 = (byte)uVar8;
      }
      uVar8 = LK_139368((uint)&T_02F6C4,param_3 & 0xffff,p1);
      fVar13 = (fVar13 + (float)(uVar8 & 0xffff) * 0.0030517578) * (float)bVar5 * 0.0078125;
    }
  }
  fVar13 = (fVar13 + fVar16) * 100.0 * 0.01;
  fVar16 = 1310.6799;
  if ((fVar13 <= 1310.6799) && (fVar16 = fVar13, fVar13 < -1310.72)) {
    fVar16 = -1310.72;
  }
  sVar17 = 0x7fff;
  if ((fVar16 <= 1310.6799) && (sVar17 = -0x8000, -1310.72 <= fVar16)) {
    sVar17 = (short)(int)(fVar16 * 25.0);
  }
  *param_16 = sVar17;
  bVar3 = DAT_fffed956 != '\0';
  uVar8 = (uint)_DAT_fffed94c - (uint)_DAT_fffed950;
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
      _DAT_fffed950 = 0x4b0;
    }
    fVar16 = (float)_DAT_fffed950 * 0.04;
    if (bVar3) {
      fVar16 = _DAT_fffed948 + (fVar16 - _DAT_fffed948) * 0.016006468;
    }
    fVar13 = 2621.4;
    if ((fVar16 <= 2621.4) && (fVar13 = fVar16, fVar16 < 0.0)) {
      fVar13 = 0.0;
    }
    uVar8 = 0xffffffff;
    if ((fVar13 <= 2621.4) && (uVar8 = 0, 0.0 <= fVar13)) {
      uVar8 = (uint)(fVar13 * 25.0);
    }
    if (1999 < (uVar8 & 0xffff)) {
      uVar8 = 2000;
    }
    _DAT_fffed948 = fVar16;
    if ((uVar8 & 0xffff) < 0x2ef) {
      _DAT_fffed940 = 0x2ee;
    }
    else {
      _DAT_fffed940 = (ushort)uVar8;
    }
  }
  *param_15 = _DAT_fffed940;
  if (param_10 == '\0') {
    puVar9 = (undefined *)((uint)*param_11 * 10);
  }
  else {
    uVar8 = (int)sVar17 + (uint)_DAT_fffed940;
    puVar9 = &DAT_0000ffff;
    if (((int)uVar8 < (int)&DAT_00010000) &&
       (puVar9 = (undefined *)(uVar8 & 0xffff), (int)uVar8 < 0)) {
      puVar9 = (undefined *)0x0;
    }
    if ((undefined *)((int)&DAT_000006d4 + 1) < puVar9) {
      puVar9 = (undefined *)((int)&DAT_000006d4 + 2);
    }
    if (puVar9 < &DAT_0000036c) {
      puVar9 = &DAT_0000036b;
    }
  }
  *param_17 = (short)puVar9;
  if ((DAT_fffed955 != '\0') || (bVar1)) {
    _DAT_fffed944 = 0.0;
  }
  fVar16 = 16777216.0;
  if ((float)bVar2 + _DAT_fffed944 <= 16777216.0) {
    fVar16 = (float)bVar2 + _DAT_fffed944;
  }
  DAT_fffed955 = fVar14 <= fVar16 * fVar15;
  bVar5 = 0;
  if ((!bVar1) && (bVar5 = DAT_fffed955 + DAT_fffed954, bVar5 < (byte)DAT_fffed955)) {
    bVar5 = 0xff;
  }
  puVar10 = (undefined *)(uint)(4 < bVar5);
  *param_14 = 4 < bVar5;
  if ((bVar2) || (param_1 != '\0')) {
    puVar10 = &UNK_00000003;
    if ((fVar15 * 3.0 < fVar16 * fVar15) || (!bVar2)) {
      puVar4 = &UNK_000000ea;
    }
    else {
      puVar4 = (undefined *)((int)&PTR_DAT_00000944 + 3);
    }
  }
  else {
    puVar4 = (undefined *)(int)_DAT_fffed94e;
  }
  if (bVar12 == 1) {
LAB_000fe422:
    puVar11 = &UNK_0000047e;
  }
  else if (bVar12 == 2) {
    puVar11 = &UNK_0000047e;
  }
  else {
    if (bVar12 == 3) goto LAB_000fe422;
    if (bVar12 == 4) {
      puVar11 = &UNK_0000007d;
    }
    else if (bVar12 == 5) {
      puVar11 = (undefined *)0x0;
    }
    else if ((bVar12 == 6) ||
            ((puVar11 = puVar4, bVar12 != 7 && ((bVar12 == 8 || (puVar11 = puVar10, bVar12 == 9)))))
            ) goto LAB_000fe422;
  }
  if (bVar12 != 1) {
    if (bVar12 == 2) {
      puVar10 = &UNK_0000047e;
      goto LAB_000fe4a2;
    }
    if (bVar12 != 3) {
      if (bVar12 == 4) {
        puVar10 = &UNK_0000007d;
        goto LAB_000fe4a2;
      }
      if (bVar12 == 5) {
        puVar10 = (undefined *)0x0;
        goto LAB_000fe4a2;
      }
      if ((bVar12 != 6) &&
         ((puVar10 = puVar4, bVar12 == 7 || ((bVar12 != 8 && (puVar10 = param_14, bVar12 != 9))))))
      goto LAB_000fe4a2;
    }
  }
  puVar10 = &UNK_0000047e;
LAB_000fe4a2:
  if ((param_5 == '\0') && (puVar9 = puVar10, param_12 != '\0')) {
    puVar9 = puVar11;
  }
  if (param_6 != 5) {
    puVar10 = (undefined *)((int)&PTR_DAT_00000944 + 3);
    if (((uint)puVar9 & 0xffff) < 0x947) {
      puVar10 = puVar9;
    }
    puVar9 = &UNK_0000007d;
    if (0x7d < ((uint)puVar10 & 0xffff)) {
      puVar9 = puVar10;
    }
  }
  _DAT_fffed950 = 0;
  if (param_6 != 0) {
    puVar10 = (undefined *)((int)&PTR_DAT_00000944 + 3);
    if (((uint)puVar9 & 0xffff) < 0x947) {
      puVar10 = puVar9;
    }
    _DAT_fffed950 = (short)puVar10;
    if (((uint)puVar10 & 0xffff) == 0) {
      _DAT_fffed950 = 0;
    }
  }
  *param_13 = _DAT_fffed950;
  DAT_fffed956 = 1;
  _DAT_fffed94c = _DAT_fffed940;
  _DAT_fffed944 = fVar16;
  DAT_fffed954 = bVar5;
  _DAT_fffed94e = (short)puVar4;
  return;
}

