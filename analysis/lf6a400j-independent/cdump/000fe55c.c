
/* WARNING: Removing unreachable block (ram,0x000feb2c) */
/* WARNING: Removing unreachable block (ram,0x000feafc) */
/* WARNING: Removing unreachable block (ram,0x000fe89c) */
/* WARNING: Removing unreachable block (ram,0x000feb10) */
/* WARNING: Removing unreachable block (ram,0x000feb3e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fe55c(char param_1,ushort param_2,uint param_3,uint param_4,char param_5,byte param_6,
                 short param_7,short param_8,char param_9,char param_10,int param_11,char param_12,
                 undefined2 *param_13,undefined *param_14,ushort *param_15,short *param_16,
                 undefined2 *param_17)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  byte bVar11;
  undefined *puVar9;
  undefined *puVar10;
  uint p1;
  undefined *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  short sVar17;
  
  p1 = (uint)param_7;
  uVar5 = (uint)param_8;
  uVar7 = p1;
  if ((int)p1 < 0) {
    uVar7 = -p1;
  }
  if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  uVar6 = uVar5;
  if ((int)uVar5 < 0) {
    uVar6 = -uVar5;
  }
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  fVar15 = 20.0;
  fVar14 = 120.0;
  bVar11 = 9;
  if (param_6 < 9) {
    bVar11 = param_6;
  }
  if (bVar11 < 2) {
    bVar11 = 1;
  }
  bVar1 = bVar11 != 7;
  bVar2 = false;
  if (bVar1) {
    _DAT_fffed96a = 0;
    sVar17 = _DAT_fffed96a;
  }
  else {
    bVar2 = 0x31 < _DAT_fffed96a;
    sVar17 = -1;
    if (_DAT_fffed96a != 0xffff) {
      sVar17 = _DAT_fffed96a + 1;
    }
  }
  _DAT_fffed96a = sVar17;
  fVar16 = 0.0;
  if (0xb6 < (uVar6 & 0xffff)) {
    fVar16 = -100.0;
    uVar5 = LK_139368((uint)&T_02F77C,param_3 & 0xffff,uVar5);
    fVar16 = fVar16 + (float)(uVar5 & 0xffff) * 0.0030517578;
    uVar5 = LK_133BCC((uint)&T_02F70C,param_4 & 0xffff);
    fVar16 = (float)(uVar5 & 0xff) * fVar16 * 0.0078125;
    uVar5 = LK_133D38((uint)&T_02F770,p1);
    fVar16 = (float)(uVar5 & 0xff) * fVar16 * 0.0078125;
  }
  if ((uVar7 & 0xffff) < 0xb7) {
    fVar13 = 0.0;
  }
  else {
    param_4 = param_4 & 0xffff;
    fVar13 = -100.0;
    if ((param_1 == '\0') || (0x1ff < param_2)) {
      if ((int)p1 < 0) {
        uVar7 = LK_133BCC((uint)&T_02F73C,param_4);
      }
      else {
        uVar7 = LK_133BCC((uint)&T_02F718,param_4);
      }
      uVar5 = LK_139368((uint)&T_02F75C,param_3 & 0xffff,p1);
      fVar13 = (fVar13 + (float)(uVar5 & 0xffff) * 0.0030517578) * (float)(uVar7 & 0xff) * 0.0078125
      ;
    }
    else {
      if ((int)p1 < 0) {
        uVar7 = LK_133BCC((uint)&T_02F730,param_4);
        bVar4 = (byte)uVar7;
      }
      else {
        uVar7 = LK_133BCC((uint)&T_02F724,param_4);
        bVar4 = (byte)uVar7;
      }
      uVar7 = LK_139368((uint)&T_02F748,param_3 & 0xffff,p1);
      fVar13 = (fVar13 + (float)(uVar7 & 0xffff) * 0.0030517578) * (float)bVar4 * 0.0078125;
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
  bVar3 = DAT_fffed96e != '\0';
  uVar7 = (uint)_DAT_fffed966 - (uint)_DAT_fffed968;
  if ((int)uVar7 < 0) {
    uVar7 = -uVar7;
    if ((int)uVar7 < 0) {
      uVar7 = 0;
    }
  }
  else if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  if (((2 < (uVar7 & 0xffff)) && (param_9 != '\0')) || (!bVar3)) {
    if (!bVar3) {
      _DAT_fffed968 = 0x4b0;
    }
    fVar16 = (float)_DAT_fffed968 * 0.04;
    if (bVar3) {
      fVar16 = _DAT_fffed960 + (fVar16 - _DAT_fffed960) * 0.016006468;
    }
    fVar13 = 2621.4;
    if ((fVar16 <= 2621.4) && (fVar13 = fVar16, fVar16 < 0.0)) {
      fVar13 = 0.0;
    }
    uVar7 = 0xffffffff;
    if ((fVar13 <= 2621.4) && (uVar7 = 0, 0.0 <= fVar13)) {
      uVar7 = (uint)(fVar13 * 25.0);
    }
    if (1999 < (uVar7 & 0xffff)) {
      uVar7 = 2000;
    }
    _DAT_fffed960 = fVar16;
    if ((uVar7 & 0xffff) < 0x2ef) {
      _DAT_fffed958 = 0x2ee;
    }
    else {
      _DAT_fffed958 = (ushort)uVar7;
    }
  }
  *param_15 = _DAT_fffed958;
  if (param_10 == '\0') {
    puVar8 = (undefined *)((uint)*(byte *)(param_11 + 1) * 10);
  }
  else {
    uVar7 = (int)sVar17 + (uint)_DAT_fffed958;
    puVar8 = &DAT_0000ffff;
    if (((int)uVar7 < (int)&DAT_00010000) &&
       (puVar8 = (undefined *)(uVar7 & 0xffff), (int)uVar7 < 0)) {
      puVar8 = (undefined *)0x0;
    }
    if ((undefined *)((int)&DAT_000006d4 + 1) < puVar8) {
      puVar8 = (undefined *)((int)&DAT_000006d4 + 2);
    }
    if (puVar8 < &DAT_0000036c) {
      puVar8 = &DAT_0000036b;
    }
  }
  *param_17 = (short)puVar8;
  if ((DAT_fffed96d != '\0') || (bVar1)) {
    _DAT_fffed95c = 0.0;
  }
  fVar16 = 16777216.0;
  if ((float)bVar2 + _DAT_fffed95c <= 16777216.0) {
    fVar16 = (float)bVar2 + _DAT_fffed95c;
  }
  DAT_fffed96d = fVar14 <= fVar16 * fVar15;
  bVar4 = 0;
  if ((!bVar1) && (bVar4 = DAT_fffed96d + DAT_fffed96c, bVar4 < (byte)DAT_fffed96d)) {
    bVar4 = 0xff;
  }
  puVar9 = (undefined *)(uint)(4 < bVar4);
  *param_14 = 4 < bVar4;
  if ((bVar2) || (param_1 != '\0')) {
    puVar9 = &UNK_00000003;
    if ((fVar15 * 3.0 < fVar16 * fVar15) || (!bVar2)) {
      puVar12 = &UNK_000000ea;
    }
    else {
      puVar12 = (undefined *)((int)&PTR_DAT_00000944 + 3);
    }
  }
  else {
    puVar12 = (undefined *)(int)_DAT_fffed964;
  }
  if (bVar11 == 1) {
LAB_000fea4e:
    puVar10 = &UNK_0000047e;
  }
  else if (bVar11 == 2) {
    puVar10 = &UNK_0000047e;
  }
  else {
    if (bVar11 == 3) goto LAB_000fea4e;
    if (bVar11 == 4) {
      puVar10 = &UNK_0000007d;
    }
    else if (bVar11 == 5) {
      puVar10 = (undefined *)0x0;
    }
    else if ((bVar11 == 6) ||
            ((puVar10 = puVar12, bVar11 != 7 && ((bVar11 == 8 || (puVar10 = puVar9, bVar11 == 9)))))
            ) goto LAB_000fea4e;
  }
  if (bVar11 != 1) {
    if (bVar11 == 2) {
      puVar9 = &UNK_0000047e;
      goto LAB_000feace;
    }
    if (bVar11 != 3) {
      if (bVar11 == 4) {
        puVar9 = &UNK_0000007d;
        goto LAB_000feace;
      }
      if (bVar11 == 5) {
        puVar9 = (undefined *)0x0;
        goto LAB_000feace;
      }
      if ((bVar11 != 6) &&
         ((puVar9 = puVar12, bVar11 == 7 || ((bVar11 != 8 && (puVar9 = param_14, bVar11 != 9))))))
      goto LAB_000feace;
    }
  }
  puVar9 = &UNK_0000047e;
LAB_000feace:
  if ((param_5 == '\0') && (puVar8 = puVar9, param_12 != '\0')) {
    puVar8 = puVar10;
  }
  if (param_6 != 5) {
    puVar9 = (undefined *)((int)&PTR_DAT_00000944 + 3);
    if (((uint)puVar8 & 0xffff) < 0x947) {
      puVar9 = puVar8;
    }
    puVar8 = &UNK_0000007d;
    if (0x7d < ((uint)puVar9 & 0xffff)) {
      puVar8 = puVar9;
    }
  }
  _DAT_fffed968 = 0;
  if (param_6 != 0) {
    puVar9 = (undefined *)((int)&PTR_DAT_00000944 + 3);
    if (((uint)puVar8 & 0xffff) < 0x947) {
      puVar9 = puVar8;
    }
    _DAT_fffed968 = (short)puVar9;
    if (((uint)puVar9 & 0xffff) == 0) {
      _DAT_fffed968 = 0;
    }
  }
  *param_13 = _DAT_fffed968;
  DAT_fffed96e = 1;
  _DAT_fffed966 = _DAT_fffed958;
  _DAT_fffed95c = fVar16;
  DAT_fffed96c = bVar4;
  _DAT_fffed964 = (short)puVar12;
  return;
}

