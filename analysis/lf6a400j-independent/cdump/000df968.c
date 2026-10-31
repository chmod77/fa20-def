
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000df968(byte param_1,char param_2,char param_3,char param_4,char param_5,uint param_6,
                 ushort param_7,uint param_8,uint param_9,ushort param_10,ushort param_11,
                 char param_12,byte param_13,byte param_14,byte param_15,byte param_16,byte param_17
                 ,byte param_18,byte param_19,byte param_20,byte param_21,byte param_22,
                 byte param_23,byte param_24,char param_25,undefined1 *param_26,ushort *param_27,
                 ushort *param_28,ushort *param_29,ushort *param_30,ushort *param_31,
                 ushort *param_32,ushort *param_33,ushort *param_34,ushort *param_35,char *param_36)

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
  uVar9 = _DAT_fffed17e;
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
    uVar9 = (ushort)(puVar6 + (short)_DAT_fffed17e);
    if (((uint)(puVar6 + (short)_DAT_fffed17e) & 0xffff) < ((uint)puVar6 & 0xffff)) {
      uVar9 = 0xffff;
    }
  }
  if (param_25 != '\0') {
    uVar9 = 0;
  }
  *param_27 = uVar9;
  _DAT_fffed17e = uVar9;
  if (param_12 != '\0') {
    _DAT_fffed17e = 0;
  }
  uVar13 = _DAT_fffed17c;
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
    uVar13 = (ushort)(puVar6 + (short)_DAT_fffed17c);
    if (((uint)(puVar6 + (short)_DAT_fffed17c) & 0xffff) < ((uint)puVar6 & 0xffff)) {
      uVar13 = 0xffff;
    }
  }
  if (param_25 != '\0') {
    uVar13 = 0;
  }
  *param_30 = uVar13;
  _DAT_fffed17c = uVar13;
  if (param_12 != '\0') {
    _DAT_fffed17c = 0;
  }
  uVar10 = _DAT_fffed182;
  if ((bVar1) && (uVar10 = _DAT_fffed182 + 0x400, (ushort)(_DAT_fffed182 + 0x400) < 0x400)) {
    uVar10 = 0xffff;
  }
  if (param_25 != '\0') {
    uVar10 = 0;
  }
  *param_28 = uVar10;
  _DAT_fffed182 = uVar10;
  if (param_12 != '\0') {
    _DAT_fffed182 = 0;
  }
  uVar11 = _DAT_fffed178;
  if ((bVar2) && (uVar11 = _DAT_fffed178 + 0x400, (ushort)(_DAT_fffed178 + 0x400) < 0x400)) {
    uVar11 = 0xffff;
  }
  if (param_25 != '\0') {
    uVar11 = 0;
  }
  *param_31 = uVar11;
  _DAT_fffed178 = uVar11;
  if (param_12 != '\0') {
    _DAT_fffed178 = 0;
  }
  uVar16 = _DAT_fffed180;
  if ((bVar1) && (uVar16 = 0xffff, _DAT_fffed180 != 0xffff)) {
    uVar16 = _DAT_fffed180 + 1;
  }
  if (param_25 != '\0') {
    uVar16 = 0;
  }
  *param_29 = uVar16;
  _DAT_fffed180 = uVar16;
  if (param_12 != '\0') {
    _DAT_fffed180 = 0;
  }
  uVar17 = _DAT_fffed188;
  if ((bVar2) && (uVar17 = 0xffff, _DAT_fffed188 != 0xffff)) {
    uVar17 = _DAT_fffed188 + 1;
  }
  if (param_25 != '\0') {
    uVar17 = 0;
  }
  *param_32 = uVar17;
  _DAT_fffed188 = uVar17;
  if (param_12 != '\0') {
    _DAT_fffed188 = 0;
  }
  uVar14 = _DAT_fffed184;
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
    uVar14 = (ushort)(puVar6 + (short)_DAT_fffed184);
    if (((uint)(puVar6 + (short)_DAT_fffed184) & 0xffff) < ((uint)puVar6 & 0xffff)) {
      uVar14 = 0xffff;
    }
  }
  if (param_25 != '\0') {
    uVar14 = 0;
  }
  *param_33 = uVar14;
  _DAT_fffed184 = uVar14;
  if (param_12 != '\0') {
    _DAT_fffed184 = 0;
  }
  uVar12 = _DAT_fffed186;
  if ((bVar3) && (uVar12 = _DAT_fffed186 + 0x400, (ushort)(_DAT_fffed186 + 0x400) < 0x400)) {
    uVar12 = 0xffff;
  }
  if (param_25 != '\0') {
    uVar12 = 0;
  }
  *param_34 = uVar12;
  _DAT_fffed186 = uVar12;
  if (param_12 != '\0') {
    _DAT_fffed186 = 0;
  }
  uVar8 = _DAT_fffed17a;
  if ((bVar3) && (uVar8 = 0xffff, _DAT_fffed17a != 0xffff)) {
    uVar8 = _DAT_fffed17a + 1;
  }
  if (param_25 != '\0') {
    uVar8 = 0;
  }
  *param_35 = uVar8;
  cVar4 = '\0';
  if (((((((param_12 != '\0') && (0x14 < uVar16)) && (0x14 < uVar17)) &&
        ((100 < uVar8 && (param_13 < 100)))) && (param_14 < 100)) &&
      ((((param_15 < 100 && (param_16 < 100)) &&
        ((param_17 < 100 && (((param_18 < 100 && (param_19 < 100)) && (param_20 < 100)))))) &&
       ((param_21 < 100 && (param_22 < 100)))))) &&
     ((param_23 < 100 && ((param_24 < 100 && (bVar5)))))) {
    cVar4 = '\x01';
  }
  *param_36 = cVar4;
  _DAT_fffed17a = uVar8;
  if (param_12 != '\0') {
    _DAT_fffed17a = 0;
  }
  if ((((uVar9 <= uVar10) && (uVar13 <= uVar11)) && (uVar14 <= uVar12)) ||
     (uVar15 = 1, cVar4 == '\0')) {
    uVar15 = DAT_fffed18b;
  }
  if ((param_25 != '\0') || (DAT_fffed18a != '\0')) {
    uVar15 = 0;
  }
  *param_26 = uVar15;
  DAT_fffed18b = uVar15;
  DAT_fffed18a = param_12;
  return;
}

