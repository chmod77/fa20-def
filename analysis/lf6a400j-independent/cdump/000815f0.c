
/* WARNING: Removing unreachable block (ram,0x00081e18) */
/* WARNING: Removing unreachable block (ram,0x00081a68) */
/* WARNING: Removing unreachable block (ram,0x00081ad8) */
/* WARNING: Removing unreachable block (ram,0x00081e88) */
/* WARNING: Removing unreachable block (ram,0x00081fa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000815f0(uint param_1,uint param_2,uint param_3,undefined4 param_4,char param_5,
                 char param_6,char param_7,uint param_8,uint param_9,uint param_10,char param_11,
                 ushort param_12,short *param_13,short *param_14,ushort *param_15,ushort *param_16,
                 ushort *param_17,ushort *param_18,ushort *param_19,ushort *param_20,
                 ushort *param_21,ushort *param_22,ushort *param_23,ushort *param_24)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  undefined *puVar12;
  undefined *puVar13;
  byte bVar15;
  ushort uVar14;
  uint uVar16;
  undefined *puVar17;
  uint uVar18;
  undefined *local_84;
  undefined *puStack_80;
  undefined *puStack_7c;
  int iStack_78;
  undefined *puStack_74;
  undefined *puStack_70;
  undefined *puStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  ushort uStack_50;
  ushort uStack_4c;
  uint uStack_48;
  char cStack_44;
  ushort uStack_40;
  ushort uStack_3c;
  uint uStack_38;
  uint uStack_34;
  char cStack_30;
  char cStack_2c;
  undefined1 *local_28;
  
  local_28 = &DAT_fffebacc;
  bVar1 = param_6 != '\x03';
  uStack_54 = param_8 & 0xff;
  uStack_64 = param_1;
  uStack_60 = param_2;
  uStack_5c = param_3;
  uStack_58 = param_4;
  if (!bVar1) {
    uVar8 = LK_13AAF0((uint)&T_02C6E8,uStack_54,param_10);
    _DAT_fffebaee = (ushort)uVar8;
    uVar8 = LK_13AAF0((uint)&T_02C724,uStack_54,param_10);
    _DAT_fffebaf4 = (ushort)uVar8;
  }
  bVar2 = param_6 != '\x02';
  if (!bVar2) {
    uVar8 = LK_13AAF0((uint)&T_02C6D4,uStack_54,param_10);
    _DAT_fffebaec = (ushort)uVar8;
    uVar8 = LK_13AAF0((uint)&T_02C710,uStack_54,param_10);
    _DAT_fffebaf2 = (ushort)uVar8;
  }
  bVar3 = param_6 != '\x04';
  bVar4 = true;
  if (((bVar2) && (bVar1)) && (bVar3)) {
    bVar4 = false;
  }
  if (!bVar4) {
    uVar8 = LK_13AAF0((uint)&T_02C6FC,uStack_54,param_10);
    _DAT_fffebaf0 = (ushort)uVar8;
  }
  bVar4 = true;
  if (((bVar2) && (bVar1)) && (bVar3)) {
    bVar4 = false;
  }
  if (!bVar4) {
    uVar8 = LK_13AAF0((uint)&T_02C738,uStack_54,param_10);
    _DAT_fffebaf6 = (ushort)uVar8;
  }
  if (!bVar3) {
    uVar8 = LK_13AAF0((uint)&T_02C74C,uStack_54,param_10);
    _DAT_fffebaf8 = (ushort)uVar8;
  }
  uStack_50 = _DAT_fffebaec;
  if (((bVar2) && (uStack_50 = _DAT_fffebaee, bVar1)) && (uStack_50 = _DAT_fffebaf0, !bVar3)) {
    uStack_50 = _DAT_fffebaf8;
  }
  *param_15 = uStack_50;
  *param_16 = uStack_50;
  if (!bVar3) {
    uVar8 = LK_13AAF0((uint)&T_02C760,uStack_54,param_10);
    _DAT_fffebafa = (ushort)uVar8;
  }
  uStack_4c = _DAT_fffebaf2;
  if (((bVar2) && (uStack_4c = _DAT_fffebaf4, bVar1)) && (uStack_4c = _DAT_fffebaf6, !bVar3)) {
    uStack_4c = _DAT_fffebafa;
  }
  *param_17 = uStack_4c;
  *param_18 = uStack_4c;
  bVar15 = 1;
  if (1 < (int)uStack_54) {
    bVar15 = (byte)param_8;
  }
  if (4 < bVar15) {
    bVar15 = 5;
  }
  uVar10 = (ushort)bVar15;
  if (uVar10 == 1) {
    uVar10 = 0xff;
  }
  else if (uVar10 == 2) {
    uVar10 = 0x1fe;
  }
  else if (uVar10 == 3) {
    uVar10 = 0x4fb;
  }
  else if (uVar10 == 4) {
    uVar10 = 0x4fb;
  }
  else if (uVar10 == 5) {
    uVar10 = 0x4fb;
  }
  if (param_7 == '\0') {
    uVar10 = 0xff;
  }
  uVar8 = LK_133F40((uint)&T_02C780,param_9);
  uStack_48 = (uint)uVar10 * (uVar8 & 0xffff);
  *param_24 = uVar10;
  bVar1 = false;
  if ((param_11 == '\0') && (4 < param_12)) {
    bVar1 = true;
  }
  if (((param_6 != '\x02') && (param_6 != '\x03')) && ((param_6 != '\x04' && (!bVar1)))) {
    uVar8 = LK_1361C8((uint)&T_02C698,uStack_54,param_10);
    _DAT_fffebae6 = (ushort)uVar8;
  }
  bVar2 = false;
  if ((param_6 == '\x04') && (bVar1)) {
    bVar2 = true;
  }
  if (bVar2) {
    uVar8 = LK_13AAF0((uint)&T_02C6AC,uStack_54,param_10);
    _DAT_fffebae8 = (ushort)uVar8;
  }
  cStack_44 = false;
  if ((param_6 == '\x04') && (!bVar1)) {
    cStack_44 = true;
  }
  if ((bool)cStack_44) {
    uVar8 = LK_13AAF0((uint)&T_02C6C0,uStack_54,param_10);
    _DAT_fffebaea = (ushort)uVar8;
  }
  bVar3 = false;
  if ((param_6 == '\x02') && (bVar1)) {
    bVar3 = true;
  }
  if (bVar3) {
    uVar8 = LK_13AAF0((uint)&T_02C634,uStack_54,param_10);
    _DAT_fffebadc = (ushort)uVar8;
  }
  bVar4 = false;
  if ((param_6 == '\x03') && (bVar1)) {
    bVar4 = true;
  }
  if (bVar4) {
    uVar8 = LK_13AAF0((uint)&T_02C648,uStack_54,param_10);
    _DAT_fffebade = (ushort)uVar8;
  }
  bVar6 = false;
  if ((((param_6 != '\x02') && (param_6 != '\x03')) && (param_6 != '\x04')) && (bVar1)) {
    bVar6 = true;
  }
  if (bVar6) {
    uVar8 = LK_13AAF0((uint)&T_02C65C,uStack_54,param_10);
    _DAT_fffebae0 = (ushort)uVar8;
  }
  bVar7 = false;
  if ((param_6 == '\x02') && (!bVar1)) {
    bVar7 = true;
  }
  if (bVar7) {
    uVar8 = LK_13AAF0((uint)&T_02C670,uStack_54,param_10);
    _DAT_fffebae2 = (ushort)uVar8;
  }
  bVar5 = false;
  if ((param_6 == '\x03') && (!bVar1)) {
    bVar5 = true;
  }
  if (bVar5) {
    uVar8 = LK_13AAF0((uint)&T_02C684,uStack_54,param_10);
    _DAT_fffebae4 = (ushort)uVar8;
  }
  uVar10 = _DAT_fffebadc;
  if ((((!bVar3) && (uVar10 = _DAT_fffebade, !bVar4)) && (uVar10 = _DAT_fffebae8, !bVar2)) &&
     (((uVar10 = _DAT_fffebae0, !bVar6 && (uVar10 = _DAT_fffebae2, !bVar7)) &&
      ((uVar10 = _DAT_fffebae4, !bVar5 && (uVar10 = _DAT_fffebae6, cStack_44 != '\0')))))) {
    uVar10 = _DAT_fffebaea;
  }
  uVar16 = uStack_48 >> 0x10;
  uVar18 = (uStack_48 & 0xffff) * (uint)uVar10;
  uVar8 = uVar18 >> 0x10;
  local_84 = (undefined *)0x0;
  uVar11 = uVar16 * uVar10 + uVar8;
  if (uVar11 < uVar8) {
    local_84 = &DAT_00010000;
  }
  puStack_80 = (undefined *)(uVar11 * 0x10000 + (uVar18 & 0xffff));
  local_84 = local_84 + (uVar11 >> 0x10);
  FUN_0016c364(&local_84,&DAT_0000fe01,puStack_80,uStack_48,&local_84);
  puVar13 = puStack_80;
  puVar17 = local_84;
  uVar8 = (uStack_48 & 0xffff) * 0x280;
  uVar16 = uVar16 * 0x280;
  uVar11 = (uVar8 >> 0x10) + uVar16;
  puStack_7c = (undefined *)0x0;
  if (uVar11 < uVar16) {
    puStack_7c = &DAT_00010000;
  }
  iStack_78 = uVar11 * 0x10000 + (uVar8 & 0xffff);
  puStack_7c = puStack_7c + (uVar11 >> 0x10);
  iVar9 = FUN_0016c128(&puStack_7c,0xa29);
  puVar12 = puVar13 + -iVar9;
  if (puVar13 < puVar12) {
    puVar17 = puVar17 + -1;
  }
  puVar13 = puVar12 + 16000;
  if (puVar13 < puVar12) {
    puVar17 = puVar17 + 1;
  }
  if (((int)puVar17 < 1) && ((puVar17 != (undefined *)0x0 || (puVar13 <= &DAT_0000ffff)))) {
    if ((int)puVar17 < 0) {
      puVar13 = (undefined *)0x0;
    }
    uStack_40 = (ushort)puVar13;
  }
  else {
    uStack_40 = 0xffff;
  }
  *param_23 = uStack_40;
  *param_22 = uVar10;
  bVar15 = 1;
  if (1 < (int)uStack_54) {
    bVar15 = (byte)param_8;
  }
  if (4 < bVar15) {
    bVar15 = 5;
  }
  uStack_3c = (ushort)bVar15;
  if (uStack_3c == 1) {
    uStack_3c = 0xff;
  }
  else if (uStack_3c == 2) {
    uStack_3c = 0xff;
  }
  else if (uStack_3c == 3) {
    uStack_3c = 0x2fd;
  }
  else if (uStack_3c == 4) {
    uStack_3c = 0x2fd;
  }
  else if (uStack_3c == 5) {
    uStack_3c = 0x2fd;
  }
  if (param_7 == '\0') {
    uStack_3c = 0xff;
  }
  uVar8 = LK_133F40((uint)&T_02C774,param_9);
  uVar8 = (uint)uStack_3c * (uVar8 & 0xffff);
  *param_21 = uStack_3c;
  uStack_38 = (uint)uStack_50;
  uStack_34 = uStack_5c & 0xffff;
  bVar1 = false;
  if ((param_11 == '\0') && (4 < param_12)) {
    bVar1 = true;
  }
  if ((((param_6 != '\x02') && (param_6 != '\x03')) && (param_6 != '\x04')) && (!bVar1)) {
    uVar11 = LK_13AAF0((uint)&T_02C5F8,param_8,param_10);
    _DAT_fffebad6 = (ushort)uVar11;
  }
  cStack_30 = false;
  if ((param_6 == '\x04') && (bVar1)) {
    cStack_30 = true;
  }
  if ((bool)cStack_30) {
    uVar11 = LK_13AAF0((uint)&T_02C60C,param_8,param_10);
    _DAT_fffebad8 = (ushort)uVar11;
  }
  cStack_2c = false;
  if ((param_6 == '\x04') && (!bVar1)) {
    cStack_2c = true;
  }
  if ((bool)cStack_2c) {
    uVar11 = LK_13AAF0((uint)&T_02C620,param_8,param_10);
    _DAT_fffebada = (ushort)uVar11;
  }
  bVar2 = false;
  if ((param_6 == '\x02') && (bVar1)) {
    bVar2 = true;
  }
  if (bVar2) {
    uVar11 = LK_13AAF0((uint)&T_02C594,param_8,param_10);
    _DAT_fffebacc = (ushort)uVar11;
  }
  bVar3 = false;
  if ((param_6 == '\x03') && (bVar1)) {
    bVar3 = true;
  }
  if (bVar3) {
    uVar11 = LK_13AAF0((uint)&T_02C5A8,param_8,param_10);
    _DAT_fffebace = (ushort)uVar11;
  }
  bVar4 = false;
  if ((((param_6 != '\x02') && (param_6 != '\x03')) && (param_6 != '\x04')) && (bVar1)) {
    bVar4 = true;
  }
  if (bVar4) {
    uVar11 = LK_13AAF0((uint)&T_02C5BC,param_8,param_10);
    _DAT_fffebad0 = (ushort)uVar11;
  }
  bVar6 = false;
  if ((param_6 == '\x02') && (!bVar1)) {
    bVar6 = true;
  }
  if (bVar6) {
    uVar11 = LK_13AAF0((uint)&T_02C5D0,param_8,param_10);
    _DAT_fffebad2 = (ushort)uVar11;
  }
  bVar7 = false;
  if ((param_6 == '\x03') && (!bVar1)) {
    bVar7 = true;
  }
  if (bVar7) {
    uVar11 = LK_13AAF0((uint)&T_02C5E4,param_8,param_10);
    _DAT_fffebad4 = (ushort)uVar11;
  }
  uVar10 = _DAT_fffebacc;
  if ((((!bVar2) && (uVar10 = _DAT_fffebace, !bVar3)) && (uVar10 = _DAT_fffebad8, cStack_30 == '\0')
      ) && (((uVar10 = _DAT_fffebad0, !bVar4 && (uVar10 = _DAT_fffebad2, !bVar6)) &&
            ((uVar10 = _DAT_fffebad4, !bVar7 && (uVar10 = _DAT_fffebad6, cStack_2c != '\0')))))) {
    uVar10 = _DAT_fffebada;
  }
  uVar18 = (uVar8 & 0xffff) * (uint)uVar10;
  uVar11 = uVar18 >> 0x10;
  puStack_74 = (undefined *)0x0;
  uVar16 = (uVar8 >> 0x10) * (uint)uVar10 + uVar11;
  if (uVar16 < uVar11) {
    puStack_74 = &DAT_00010000;
  }
  puStack_70 = (undefined *)(uVar16 * 0x10000 + (uVar18 & 0xffff));
  puStack_74 = puStack_74 + (uVar16 >> 0x10);
  FUN_0016c364(&puStack_74,&DAT_0000fe01);
  puVar13 = puStack_70;
  puVar17 = puStack_74;
  uVar11 = (uVar8 & 0xffff) * 0x280;
  uVar16 = (uVar8 >> 0x10) * 0x280;
  uVar8 = (uVar11 >> 0x10) + uVar16;
  puStack_6c = (undefined *)0x0;
  if (uVar8 < uVar16) {
    puStack_6c = &DAT_00010000;
  }
  iStack_68 = uVar8 * 0x10000 + (uVar11 & 0xffff);
  puStack_6c = puStack_6c + (uVar8 >> 0x10);
  iVar9 = FUN_0016c128(&puStack_6c,0xa29);
  puVar12 = puVar13 + -iVar9;
  if (puVar13 < puVar12) {
    puVar17 = puVar17 + -1;
  }
  puVar13 = puVar12 + 16000;
  if (puVar13 < puVar12) {
    puVar17 = puVar17 + 1;
  }
  if (((int)puVar17 < 1) && ((puVar17 != (undefined *)0x0 || (puVar13 <= &DAT_0000ffff)))) {
    if ((int)puVar17 < 0) {
      puVar13 = (undefined *)0x0;
    }
    uVar14 = (ushort)puVar13;
  }
  else {
    uVar14 = 0xffff;
  }
  *param_19 = uVar14;
  puVar13 = (undefined *)((uStack_60 & 0xffff) + (uint)uVar14);
  puVar17 = (undefined *)0xffffffff;
  if ((puVar13 < &UNK_00013e80) && (puVar17 = (undefined *)0x0, (undefined *)0x3e7f < puVar13)) {
    puVar17 = puVar13 + -16000;
  }
  if (((uint)puVar17 & 0xffff) < (uint)uStack_4c) {
    if ((int)((uint)puVar17 & 0xffff) <= (int)uStack_38) {
      puVar17 = (undefined *)(int)(short)uStack_50;
    }
  }
  else {
    puVar13 = (undefined *)((uStack_60 & 0xffff) + (uint)uStack_40);
    puVar17 = (undefined *)0xffffffff;
    if ((puVar13 < &UNK_00013e80) && (puVar17 = (undefined *)0x0, (undefined *)0x3e7f < puVar13)) {
      puVar17 = puVar13 + -16000;
    }
    if (((uint)puVar17 & 0xffff) <= (uint)uStack_4c) {
      puVar17 = (undefined *)(int)(short)uStack_4c;
    }
  }
  *param_20 = uVar10;
  if (DAT_fffebafc == '\0') {
    iVar9 = 0x59;
  }
  else {
    iVar9 = 0xb2;
  }
  if (((((int)(uStack_64 & 0xffff) < (int)uStack_38) || ((int)uStack_34 < iVar9)) ||
      ((char)uStack_58 != '\0')) || (param_5 != '\0')) {
    puVar17 = (undefined *)(int)uStack_64._2_2_;
  }
  if ((uStack_64 & 0xffff) < ((uint)puVar17 & 0xffff)) {
    *param_13 = uStack_64._2_2_;
  }
  else {
    *param_13 = (short)puVar17;
  }
  *param_14 = (short)puVar17;
  DAT_fffebafc = (int)uStack_34 < iVar9;
  return;
}

