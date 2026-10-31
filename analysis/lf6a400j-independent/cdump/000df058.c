
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000df058(byte param_1,char param_2,char param_3,char param_4,char param_5,uint param_6,
                 ushort param_7,uint param_8,uint param_9,ushort param_10,ushort param_11,
                 char param_12,ushort param_13,ushort param_14,ushort param_15,ushort param_16,
                 ushort param_17,ushort param_18,ushort param_19,ushort param_20,ushort param_21,
                 ushort param_22,ushort param_23,ushort param_24,char param_25,undefined1 *param_26,
                 ushort *param_27,ushort *param_28,ushort *param_29,ushort *param_30,
                 ushort *param_31,ushort *param_32,ushort *param_33,ushort *param_34,
                 ushort *param_35,char *param_36)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  undefined1 uVar15;
  ushort uVar16;
  ushort uVar17;
  
  bVar5 = false;
  if (((param_1 != 0xff) && (0xfe < param_1)) && (param_3 != '\0')) {
    bVar5 = true;
  }
  bVar3 = false;
  if ((bVar5) && (param_4 == '\0')) {
    bVar3 = true;
  }
  bVar1 = false;
  if ((bVar5) && (param_2 == '\0')) {
    bVar1 = true;
  }
  bVar2 = false;
  if ((bVar5) && (param_5 == '\0')) {
    bVar2 = true;
  }
  uVar9 = _DAT_fffed160;
  if (bVar1) {
    iVar7 = (param_6 & 0xffff) * 0x80 + -0x400000;
    if (param_7 == 0) {
      param_7 = 1;
    }
    if (param_7 == 0) {
      puVar6 = (undefined *)0x7fffffff;
      if (iVar7 < 0) {
        puVar6 = (undefined *)0x80000000;
      }
    }
    else {
      puVar6 = (undefined *)__sdiv32_r1_by_r0(iVar7,(uint)param_7);
    }
    if ((int)puVar6 < 0) {
      iVar7 = -(uint)(0 < (int)puVar6);
      if ((iVar7 < 1) && ((iVar7 != 0 || ((undefined *)-(int)puVar6 <= &DAT_0000ffff)))) {
        puVar6 = (undefined *)-(int)puVar6;
        if (iVar7 < 0) {
          puVar6 = (undefined *)0x0;
        }
      }
      else {
        puVar6 = &DAT_0000ffff;
      }
    }
    else if ((int)puVar6 < (int)&DAT_00010000) {
      if ((int)puVar6 < 0) {
        puVar6 = (undefined *)0x0;
      }
    }
    else {
      puVar6 = &DAT_0000ffff;
    }
    uVar9 = (ushort)(puVar6 + (short)_DAT_fffed160);
    if (((uint)(puVar6 + (short)_DAT_fffed160) & 0xffff) < ((uint)puVar6 & 0xffff)) {
      uVar9 = 0xffff;
    }
  }
  if (param_25 != '\0') {
    uVar9 = 0;
  }
  *param_27 = uVar9;
  _DAT_fffed160 = uVar9;
  if (param_12 != '\0') {
    _DAT_fffed160 = 0;
  }
  uVar13 = _DAT_fffed15e;
  if (bVar2) {
    iVar7 = (param_8 & 0xffff) * 0x80 + -0x400000;
    uVar13 = 1;
    if (param_11 != 0) {
      uVar13 = param_11;
    }
    if (uVar13 == 0) {
      puVar6 = (undefined *)0x7fffffff;
      if (iVar7 < 0) {
        puVar6 = (undefined *)0x80000000;
      }
    }
    else {
      puVar6 = (undefined *)__sdiv32_r1_by_r0(iVar7,(uint)uVar13);
    }
    if ((int)puVar6 < 0) {
      iVar7 = -(uint)(0 < (int)puVar6);
      if ((iVar7 < 1) && ((iVar7 != 0 || ((undefined *)-(int)puVar6 <= &DAT_0000ffff)))) {
        puVar6 = (undefined *)-(int)puVar6;
        if (iVar7 < 0) {
          puVar6 = (undefined *)0x0;
        }
      }
      else {
        puVar6 = &DAT_0000ffff;
      }
    }
    else if ((int)puVar6 < (int)&DAT_00010000) {
      if ((int)puVar6 < 0) {
        puVar6 = (undefined *)0x0;
      }
    }
    else {
      puVar6 = &DAT_0000ffff;
    }
    uVar13 = (ushort)(puVar6 + (short)_DAT_fffed15e);
    if (((uint)(puVar6 + (short)_DAT_fffed15e) & 0xffff) < ((uint)puVar6 & 0xffff)) {
      uVar13 = 0xffff;
    }
  }
  if (param_25 != '\0') {
    uVar13 = 0;
  }
  *param_30 = uVar13;
  _DAT_fffed15e = uVar13;
  if (param_12 != '\0') {
    _DAT_fffed15e = 0;
  }
  uVar10 = _DAT_fffed168;
  if ((bVar1) && (uVar10 = _DAT_fffed168 + 0x400, (ushort)(_DAT_fffed168 + 0x400) < 0x400)) {
    uVar10 = 0xffff;
  }
  if (param_25 != '\0') {
    uVar10 = 0;
  }
  *param_28 = uVar10;
  _DAT_fffed168 = uVar10;
  if (param_12 != '\0') {
    _DAT_fffed168 = 0;
  }
  uVar11 = _DAT_fffed15a;
  if ((bVar2) && (uVar11 = _DAT_fffed15a + 0x400, (ushort)(_DAT_fffed15a + 0x400) < 0x400)) {
    uVar11 = 0xffff;
  }
  if (param_25 != '\0') {
    uVar11 = 0;
  }
  *param_31 = uVar11;
  _DAT_fffed15a = uVar11;
  if (param_12 != '\0') {
    _DAT_fffed15a = 0;
  }
  uVar16 = _DAT_fffed15c;
  if ((bVar1) && (uVar16 = 0xffff, _DAT_fffed15c != 0xffff)) {
    uVar16 = _DAT_fffed15c + 1;
  }
  if (param_25 != '\0') {
    uVar16 = 0;
  }
  *param_29 = uVar16;
  _DAT_fffed15c = uVar16;
  if (param_12 != '\0') {
    _DAT_fffed15c = 0;
  }
  uVar17 = _DAT_fffed166;
  if ((bVar2) && (uVar17 = 0xffff, _DAT_fffed166 != 0xffff)) {
    uVar17 = _DAT_fffed166 + 1;
  }
  if (param_25 != '\0') {
    uVar17 = 0;
  }
  *param_32 = uVar17;
  _DAT_fffed166 = uVar17;
  if (param_12 != '\0') {
    _DAT_fffed166 = 0;
  }
  uVar14 = _DAT_fffed162;
  if (bVar3) {
    iVar7 = (param_9 & 0xffff) * 0x80 + -0x400000;
    uVar14 = 1;
    if (param_10 != 0) {
      uVar14 = param_10;
    }
    if (uVar14 == 0) {
      puVar6 = (undefined *)0x7fffffff;
      if (iVar7 < 0) {
        puVar6 = (undefined *)0x80000000;
      }
    }
    else {
      puVar6 = (undefined *)__sdiv32_r1_by_r0(iVar7,(uint)uVar14);
    }
    if ((int)puVar6 < 0) {
      iVar7 = -(uint)(0 < (int)puVar6);
      if ((iVar7 < 1) && ((iVar7 != 0 || ((undefined *)-(int)puVar6 <= &DAT_0000ffff)))) {
        puVar6 = (undefined *)-(int)puVar6;
        if (iVar7 < 0) {
          puVar6 = (undefined *)0x0;
        }
      }
      else {
        puVar6 = &DAT_0000ffff;
      }
    }
    else if ((int)puVar6 < (int)&DAT_00010000) {
      if ((int)puVar6 < 0) {
        puVar6 = (undefined *)0x0;
      }
    }
    else {
      puVar6 = &DAT_0000ffff;
    }
    uVar14 = (ushort)(puVar6 + (short)_DAT_fffed162);
    if (((uint)(puVar6 + (short)_DAT_fffed162) & 0xffff) < ((uint)puVar6 & 0xffff)) {
      uVar14 = 0xffff;
    }
  }
  if (param_25 != '\0') {
    uVar14 = 0;
  }
  *param_33 = uVar14;
  _DAT_fffed162 = uVar14;
  if (param_12 != '\0') {
    _DAT_fffed162 = 0;
  }
  uVar12 = _DAT_fffed164;
  if ((bVar3) && (uVar12 = _DAT_fffed164 + 0x400, (ushort)(_DAT_fffed164 + 0x400) < 0x400)) {
    uVar12 = 0xffff;
  }
  if (param_25 != '\0') {
    uVar12 = 0;
  }
  *param_34 = uVar12;
  _DAT_fffed164 = uVar12;
  if (param_12 != '\0') {
    _DAT_fffed164 = 0;
  }
  uVar8 = _DAT_fffed158;
  if ((bVar3) && (uVar8 = 0xffff, _DAT_fffed158 != 0xffff)) {
    uVar8 = _DAT_fffed158 + 1;
  }
  if (param_25 != '\0') {
    uVar8 = 0;
  }
  *param_35 = uVar8;
  cVar4 = '\0';
  if (((((((param_12 != '\0') && (0x14 < uVar16)) && (0x14 < uVar17)) &&
        ((0x14 < uVar8 && (param_13 < 100)))) && (param_14 < 100)) &&
      ((((param_15 < 100 && (param_16 < 100)) &&
        ((param_17 < 100 && (((param_18 < 100 && (param_19 < 100)) && (param_20 < 100)))))) &&
       ((param_21 < 100 && (param_22 < 100)))))) &&
     ((param_23 < 100 && ((param_24 < 100 && (bVar5)))))) {
    cVar4 = '\x01';
  }
  *param_36 = cVar4;
  _DAT_fffed158 = uVar8;
  if (param_12 != '\0') {
    _DAT_fffed158 = 0;
  }
  if ((((uVar9 <= uVar10) && (uVar13 <= uVar11)) && (uVar14 <= uVar12)) ||
     (uVar15 = 1, cVar4 == '\0')) {
    uVar15 = DAT_fffed16a;
  }
  if ((param_25 != '\0') || (DAT_fffed16b != '\0')) {
    uVar15 = 0;
  }
  *param_26 = uVar15;
  DAT_fffed16a = uVar15;
  DAT_fffed16b = param_12;
  return;
}

