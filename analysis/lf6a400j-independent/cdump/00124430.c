
/* WARNING: Removing unreachable block (ram,0x00124c46) */
/* WARNING: Removing unreachable block (ram,0x00124aaa) */
/* WARNING: Removing unreachable block (ram,0x00124b16) */
/* WARNING: Removing unreachable block (ram,0x00124cb4) */
/* WARNING: Removing unreachable block (ram,0x001245ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00124430(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,char param_5,
                 char param_6,byte param_7,uint param_8,uint param_9,char param_10,ushort param_11,
                 char param_12,ushort param_13,short *param_14)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined *puVar12;
  undefined *puVar13;
  byte bVar15;
  undefined *puVar14;
  uint uVar16;
  uint uVar17;
  ushort uVar18;
  uint uVar19;
  undefined *local_94;
  undefined *puStack_90;
  undefined *puStack_8c;
  int iStack_88;
  undefined *puStack_84;
  undefined *puStack_80;
  undefined *puStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  ushort uStack_60;
  ushort uStack_5c;
  char cStack_58;
  ushort uStack_54;
  char cStack_50;
  char cStack_4c;
  char cStack_48;
  char cStack_44;
  char cStack_40;
  char cStack_3c;
  char cStack_38;
  uint uStack_34;
  char cStack_30;
  ushort uStack_2c;
  undefined1 *local_28;
  
  local_28 = &DAT_fffee288;
  bVar1 = param_5 != '\x03';
  uStack_64 = (uint)param_7;
  uStack_74 = param_1;
  uStack_70 = param_2;
  uStack_6c = param_3;
  uStack_68 = param_4;
  if (!bVar1) {
    uVar8 = LK_13AC68((uint)&T_0303D4,uStack_64,param_9);
    _DAT_fffee2aa = (ushort)uVar8;
    uVar8 = LK_13AC68((uint)&T_030410,uStack_64,param_9);
    _DAT_fffee2b0 = (ushort)uVar8;
  }
  bVar2 = param_5 != '\x02';
  if (!bVar2) {
    uVar8 = LK_13AC68((uint)&T_0303C0,uStack_64,param_9);
    _DAT_fffee2a8 = (ushort)uVar8;
    uVar8 = LK_13AC68((uint)&T_0303FC,uStack_64,param_9);
    _DAT_fffee2ae = (ushort)uVar8;
  }
  bVar3 = param_5 != '\x04';
  bVar4 = true;
  if (((bVar2) && (bVar1)) && (bVar3)) {
    bVar4 = false;
  }
  if (!bVar4) {
    uVar8 = LK_13AC68((uint)&T_0303E8,uStack_64,param_9);
    _DAT_fffee2ac = (ushort)uVar8;
  }
  bVar4 = true;
  if (((bVar2) && (bVar1)) && (bVar3)) {
    bVar4 = false;
  }
  if (!bVar4) {
    uVar8 = LK_13AC68((uint)&T_030424,uStack_64,param_9);
    _DAT_fffee2b2 = (ushort)uVar8;
  }
  if (!bVar3) {
    uVar8 = LK_13AC68((uint)&T_030438,uStack_64,param_9);
    _DAT_fffee2b4 = (ushort)uVar8;
  }
  uStack_60 = _DAT_fffee2a8;
  if (((bVar2) && (uStack_60 = _DAT_fffee2aa, bVar1)) && (uStack_60 = _DAT_fffee2ac, !bVar3)) {
    uStack_60 = _DAT_fffee2b4;
  }
  if (!bVar3) {
    uVar8 = LK_13AC68((uint)&T_03044C,uStack_64,param_9);
    _DAT_fffee2b6 = (ushort)uVar8;
  }
  uStack_5c = _DAT_fffee2ae;
  if (((bVar2) && (uStack_5c = _DAT_fffee2b0, bVar1)) && (uStack_5c = _DAT_fffee2b2, !bVar3)) {
    uStack_5c = _DAT_fffee2b6;
  }
  if (param_12 == '\0') {
    uVar18 = 0x59;
  }
  else {
    uVar18 = 0xb2;
  }
  cStack_58 = param_13 < uVar18;
  bVar15 = 1;
  if (1 < (int)uStack_64) {
    bVar15 = param_7;
  }
  if (4 < bVar15) {
    bVar15 = 5;
  }
  if (bVar15 == 1) {
    uStack_54 = 0xff;
  }
  else if (bVar15 == 2) {
    uStack_54 = 0x1fe;
  }
  else if (bVar15 == 3) {
    uStack_54 = 0x4fb;
  }
  else if (bVar15 == 4) {
    uStack_54 = 0x4fb;
  }
  else if (bVar15 == 5) {
    uStack_54 = 0x4fb;
  }
  bVar1 = false;
  if ((param_10 == '\0') && (4 < param_11)) {
    bVar1 = true;
  }
  if (((param_5 != '\x02') && (param_5 != '\x03')) && ((param_5 != '\x04' && (!bVar1)))) {
    uVar8 = LK_136340((uint)&T_030384,uStack_64,param_9);
    _DAT_fffee2a2 = (ushort)uVar8;
  }
  cStack_50 = false;
  if ((param_5 == '\x04') && (bVar1)) {
    cStack_50 = true;
  }
  if ((bool)cStack_50) {
    uVar8 = LK_13AC68((uint)&T_030398,uStack_64,param_9);
    _DAT_fffee2a4 = (ushort)uVar8;
  }
  cStack_4c = false;
  if ((param_5 == '\x04') && (!bVar1)) {
    cStack_4c = true;
  }
  if ((bool)cStack_4c) {
    uVar8 = LK_13AC68((uint)&T_0303AC,uStack_64,param_9);
    _DAT_fffee2a6 = (ushort)uVar8;
  }
  cStack_48 = false;
  if ((param_5 == '\x02') && (bVar1)) {
    cStack_48 = true;
  }
  if ((bool)cStack_48) {
    uVar8 = LK_13AC68((uint)&T_030320,uStack_64,param_9);
    _DAT_fffee298 = (ushort)uVar8;
  }
  cStack_44 = false;
  if ((param_5 == '\x03') && (bVar1)) {
    cStack_44 = true;
  }
  if ((bool)cStack_44) {
    uVar8 = LK_13AC68((uint)&T_030334,uStack_64,param_9);
    _DAT_fffee29a = (ushort)uVar8;
  }
  cStack_40 = false;
  if ((((param_5 != '\x02') && (param_5 != '\x03')) && (param_5 != '\x04')) && (bVar1)) {
    cStack_40 = true;
  }
  if ((bool)cStack_40) {
    uVar8 = LK_13AC68((uint)&T_030348,uStack_64,param_9);
    _DAT_fffee29c = (ushort)uVar8;
  }
  cStack_3c = false;
  if ((param_5 == '\x02') && (!bVar1)) {
    cStack_3c = true;
  }
  if ((bool)cStack_3c) {
    uVar8 = LK_13AC68((uint)&T_03035C,uStack_64,param_9);
    _DAT_fffee29e = (ushort)uVar8;
  }
  cStack_38 = false;
  if ((param_5 == '\x03') && (!bVar1)) {
    cStack_38 = true;
  }
  if ((bool)cStack_38) {
    uVar8 = LK_13AC68((uint)&T_030370,uStack_64,param_9);
    _DAT_fffee2a0 = (ushort)uVar8;
  }
  bVar15 = 1;
  if (1 < (int)uStack_64) {
    bVar15 = param_7;
  }
  if (4 < bVar15) {
    bVar15 = 5;
  }
  uVar8 = (uint)bVar15;
  if (uVar8 == 1) {
    uVar8 = 0xff;
  }
  else if (uVar8 == 2) {
    uVar8 = 0xff;
  }
  else if (uVar8 == 3) {
    uVar8 = 0x2fd;
  }
  else if (uVar8 == 4) {
    uVar8 = 0x2fd;
  }
  else if (uVar8 == 5) {
    uVar8 = 0x2fd;
  }
  if (param_6 == '\0') {
    uVar8 = 0xff;
  }
  uVar9 = LK_133FD8((uint)&T_030274,param_8);
  uStack_34 = uVar8 * (uVar9 & 0xffff);
  bVar1 = false;
  if ((param_10 == '\0') && (4 < param_11)) {
    bVar1 = true;
  }
  if ((((param_5 != '\x02') && (param_5 != '\x03')) && (param_5 != '\x04')) && (!bVar1)) {
    uVar8 = LK_13AC68((uint)&T_0302E4,uStack_64,param_9);
    _DAT_fffee292 = (ushort)uVar8;
  }
  bVar2 = false;
  if ((param_5 == '\x04') && (bVar1)) {
    bVar2 = true;
  }
  if (bVar2) {
    uVar8 = LK_13AC68((uint)&T_0302F8,uStack_64,param_9);
    _DAT_fffee294 = (ushort)uVar8;
  }
  cStack_30 = false;
  if ((param_5 == '\x04') && (!bVar1)) {
    cStack_30 = true;
  }
  if ((bool)cStack_30) {
    uVar8 = LK_13AC68((uint)&T_03030C,uStack_64,param_9);
    _DAT_fffee296 = (ushort)uVar8;
  }
  bVar3 = false;
  if ((param_5 == '\x02') && (bVar1)) {
    bVar3 = true;
  }
  if (bVar3) {
    uVar8 = LK_13AC68((uint)&T_030280,uStack_64,param_9);
    _DAT_fffee288 = (ushort)uVar8;
  }
  bVar4 = false;
  if ((param_5 == '\x03') && (bVar1)) {
    bVar4 = true;
  }
  if (bVar4) {
    uVar8 = LK_13AC68((uint)&T_030294,uStack_64,param_9);
    _DAT_fffee28a = (ushort)uVar8;
  }
  bVar6 = false;
  if ((((param_5 != '\x02') && (param_5 != '\x03')) && (param_5 != '\x04')) && (bVar1)) {
    bVar6 = true;
  }
  if (bVar6) {
    uVar8 = LK_13AC68((uint)&T_0302A8,uStack_64,param_9);
    _DAT_fffee28c = (ushort)uVar8;
  }
  bVar7 = false;
  if ((param_5 == '\x02') && (!bVar1)) {
    bVar7 = true;
  }
  if (bVar7) {
    uVar8 = LK_13AC68((uint)&T_0302BC,uStack_64,param_9);
    _DAT_fffee28e = (ushort)uVar8;
  }
  bVar5 = false;
  if ((param_5 == '\x03') && (!bVar1)) {
    bVar5 = true;
  }
  if (bVar5) {
    uVar8 = LK_13AC68((uint)&T_0302D0,uStack_64,param_9);
    _DAT_fffee290 = (ushort)uVar8;
  }
  uVar8 = uStack_34;
  if (bVar3) {
    uStack_2c = _DAT_fffee288;
  }
  else if (bVar4) {
    uStack_2c = _DAT_fffee28a;
  }
  else if (bVar2) {
    uStack_2c = _DAT_fffee294;
  }
  else if (bVar6) {
    uStack_2c = _DAT_fffee28c;
  }
  else if (bVar7) {
    uStack_2c = _DAT_fffee28e;
  }
  else if (bVar5) {
    uStack_2c = _DAT_fffee290;
  }
  else if (cStack_30 == '\0') {
    uStack_2c = _DAT_fffee292;
  }
  else {
    uStack_2c = _DAT_fffee296;
  }
  uVar17 = uStack_34 >> 0x10;
  uVar19 = (uStack_34 & 0xffff) * (uint)uStack_2c;
  uVar9 = uVar19 >> 0x10;
  uVar16 = (uint)uStack_60;
  puVar14 = (undefined *)0x0;
  uVar11 = uVar17 * uStack_2c + uVar9;
  if (uVar11 < uVar9) {
    puVar14 = &DAT_00010000;
  }
  puStack_90 = (undefined *)(uVar11 * 0x10000 + (uVar19 & 0xffff));
  local_94 = puVar14 + (uVar11 >> 0x10);
  FUN_0016c364(&local_94,&DAT_0000fe01,puVar14,(int)(short)uStack_60,&local_94);
  puVar13 = puStack_90;
  puVar14 = local_94;
  uVar8 = (uVar8 & 0xffff) * 0x280;
  uVar17 = uVar17 * 0x280;
  uVar9 = (uVar8 >> 0x10) + uVar17;
  puStack_8c = (undefined *)0x0;
  if (uVar9 < uVar17) {
    puStack_8c = &DAT_00010000;
  }
  iStack_88 = uVar9 * 0x10000 + (uVar8 & 0xffff);
  puStack_8c = puStack_8c + (uVar9 >> 0x10);
  iVar10 = FUN_0016c128(&puStack_8c,0xa29);
  puVar12 = puVar13 + -iVar10;
  if (puVar13 < puVar12) {
    puVar14 = puVar14 + -1;
  }
  puVar13 = puVar12 + 16000;
  if (puVar13 < puVar12) {
    puVar14 = puVar14 + 1;
  }
  if (((int)puVar14 < 1) && ((puVar14 != (undefined *)0x0 || (puVar13 <= &DAT_0000ffff)))) {
    if ((int)puVar14 < 0) {
      puVar13 = (undefined *)0x0;
    }
  }
  else {
    puVar13 = &DAT_0000ffff;
  }
  puVar13 = (undefined *)(((uint)puVar13 & 0xffff) + (uStack_70 & 0xffff));
  puVar14 = (undefined *)0xffffffff;
  if ((puVar13 < &UNK_00013e80) && (puVar14 = (undefined *)0x0, (undefined *)0x3e7f < puVar13)) {
    puVar14 = puVar13 + -16000;
  }
  uVar8 = (uint)uStack_5c;
  if (((uint)puVar14 & 0xffff) < uVar8) {
    if (((uint)puVar14 & 0xffff) <= uVar16) {
      puVar14 = (undefined *)(int)(short)uStack_60;
    }
  }
  else {
    uVar18 = 0xff;
    if (param_6 != '\0') {
      uVar18 = uStack_54;
    }
    uVar9 = LK_133FD8((uint)&T_030268,param_8);
    uVar9 = (uint)uVar18 * (uVar9 & 0xffff);
    uVar18 = _DAT_fffee298;
    if ((((((cStack_48 == '\0') && (uVar18 = _DAT_fffee29a, cStack_44 == '\0')) &&
          (uVar18 = _DAT_fffee2a4, cStack_50 == '\0')) &&
         ((uVar18 = _DAT_fffee29c, cStack_40 == '\0' && (uVar18 = _DAT_fffee29e, cStack_3c == '\0'))
         )) && (uVar18 = _DAT_fffee2a0, cStack_38 == '\0')) &&
       (uVar18 = _DAT_fffee2a2, cStack_4c != '\0')) {
      uVar18 = _DAT_fffee2a6;
    }
    uVar19 = (uVar9 & 0xffff) * (uint)uVar18;
    uVar11 = uVar19 >> 0x10;
    puStack_84 = (undefined *)0x0;
    uVar17 = (uVar9 >> 0x10) * (uint)uVar18 + uVar11;
    if (uVar17 < uVar11) {
      puStack_84 = &DAT_00010000;
    }
    puStack_80 = (undefined *)(uVar17 * 0x10000 + (uVar19 & 0xffff));
    puStack_84 = puStack_84 + (uVar17 >> 0x10);
    FUN_0016c364(&puStack_84,&DAT_0000fe01);
    puVar13 = puStack_80;
    puVar14 = puStack_84;
    uVar11 = (uVar9 & 0xffff) * 0x280;
    uVar17 = (uVar9 >> 0x10) * 0x280;
    uVar9 = (uVar11 >> 0x10) + uVar17;
    puStack_7c = (undefined *)0x0;
    if (uVar9 < uVar17) {
      puStack_7c = &DAT_00010000;
    }
    iStack_78 = uVar9 * 0x10000 + (uVar11 & 0xffff);
    puStack_7c = puStack_7c + (uVar9 >> 0x10);
    iVar10 = FUN_0016c128(&puStack_7c,0xa29);
    puVar12 = puVar13 + -iVar10;
    if (puVar13 < puVar12) {
      puVar14 = puVar14 + -1;
    }
    puVar13 = puVar12 + 16000;
    if (puVar13 < puVar12) {
      puVar14 = puVar14 + 1;
    }
    if (((int)puVar14 < 1) && ((puVar14 != (undefined *)0x0 || (puVar13 <= &DAT_0000ffff)))) {
      if ((int)puVar14 < 0) {
        puVar13 = (undefined *)0x0;
      }
    }
    else {
      puVar13 = &DAT_0000ffff;
    }
    puVar13 = (undefined *)(((uint)puVar13 & 0xffff) + (uStack_70 & 0xffff));
    puVar14 = (undefined *)0xffffffff;
    if ((puVar13 < &UNK_00013e80) && (puVar14 = (undefined *)0x0, (undefined *)0x3e7f < puVar13)) {
      puVar14 = puVar13 + -16000;
    }
    if (((uint)puVar14 & 0xffff) <= uVar8) {
      puVar14 = (undefined *)(int)(short)uStack_5c;
    }
  }
  if (((((uStack_74 & 0xffff) < uVar16) || (cStack_58 != '\0')) || ((char)uStack_6c != '\0')) ||
     ((char)uStack_68 != '\0')) {
    puVar14 = (undefined *)(int)uStack_74._2_2_;
  }
  if ((uStack_74 & 0xffff) < ((uint)puVar14 & 0xffff)) {
    *param_14 = uStack_74._2_2_;
  }
  else {
    *param_14 = (short)puVar14;
  }
  return;
}

