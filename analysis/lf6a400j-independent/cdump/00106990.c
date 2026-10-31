
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00106990(char param_1,char param_2,char param_3,char param_4,ushort param_5,char param_6,
                 char param_7,char param_8,ushort param_9,char param_10,uint param_11,char param_12,
                 char param_13,char param_14,uint param_15,ushort param_16,char param_17,
                 char param_18,char param_19,byte param_20,byte param_21,uint param_22,
                 ushort param_23,ushort *param_24)

{
  bool bVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined *a;
  uint uVar15;
  uint uVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  undefined *b;
  uint uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uStack_44;
  short sStack_38;
  ushort uStack_34;
  short sStack_30;
  ushort uStack_2c;
  ushort uStack_28;
  
  if (param_1 == '\0') {
    DAT_fffedac9 = '\0';
  }
  else {
    if (DAT_fffedac9 == '\0') {
      _DAT_fffedac4 = 0;
      DAT_fffedaca = 0;
      _DAT_fffedac2 = 0;
      DAT_fffedac8 = 0;
      DAT_fffedac9 = '\x01';
    }
    bVar9 = true;
    if ((param_3 == '\0') && (param_4 == '\0')) {
      bVar9 = false;
    }
    bVar4 = false;
    if ((param_7 != '\0') && (param_8 == '\0')) {
      bVar4 = true;
    }
    puVar10 = (undefined *)((uint)param_9 * 5 >> 6);
    bVar3 = false;
    if ((param_8 == '\0') && (param_12 != '\0')) {
      bVar3 = true;
    }
    bVar1 = false;
    if ((param_8 != '\0') && ((param_19 != '\0' || (param_18 != '\0')))) {
      bVar1 = true;
    }
    bVar6 = false;
    if ((param_7 != '\0') && (bVar1)) {
      bVar6 = true;
    }
    bVar8 = false;
    if ((param_12 != '\0') && (bVar1)) {
      bVar8 = true;
    }
    bVar1 = false;
    if (((param_8 != '\0') && (param_18 == '\0')) && (param_19 == '\0')) {
      bVar1 = true;
    }
    bVar7 = false;
    if ((param_12 != '\0') && (bVar1)) {
      bVar7 = true;
    }
    bVar5 = false;
    if ((param_7 != '\0') && (bVar1)) {
      bVar5 = true;
    }
    b = (undefined *)((param_22 & 0xffff) * 5 >> 6);
    if (param_10 == '\0') {
      a = (undefined *)((param_11 & 0xff) * 10);
      uStack_44 = (ushort)a;
    }
    else {
      a = (undefined *)((param_11 & 0xff) << 4);
      if (&DAT_0000ffff < a) {
        a = &DAT_0000ffff;
      }
      uStack_44 = (ushort)a;
    }
    puVar11 = a;
    if (b != (undefined *)0x0) {
      puVar11 = (undefined *)__udiv16b_r1_by_r0((int)a,(int)b);
    }
    uVar15 = 0;
    if (b <= a) {
      uVar15 = (int)a - (int)b;
    }
    uVar19 = 0;
    if (b != (undefined *)0x0) {
      uVar19 = __udiv16_r1_by_r0(uVar15 & 0xffff,(int)b);
    }
    uVar15 = 0;
    if (b <= a) {
      uVar15 = (int)a - (int)b;
    }
    uVar16 = 0;
    if (b != (undefined *)0x0) {
      uVar16 = __udiv16_r1_by_r0(uVar15 & 0xffff,(int)b);
    }
    if (((uint)puVar11 & 0xffff) == 0) {
      puVar11 = (undefined *)((int)b * (uVar19 & 0xffff));
      if (&DAT_0000ffff < puVar11) {
        puVar11 = &DAT_0000ffff;
      }
      puVar11 = (undefined *)__udiv32_r1_by_r0(((uint)puVar11 & 0xffff) << 0xe,0x500);
      if (&DAT_0000ffff < puVar11) {
        puVar11 = &DAT_0000ffff;
      }
    }
    else {
      puVar11 = (undefined *)((int)b * (uVar16 & 0xffff));
      if (&DAT_0000ffff < puVar11) {
        puVar11 = &DAT_0000ffff;
      }
      puVar12 = puVar11 + (int)b;
      if (((uint)puVar12 & 0xffff) < ((uint)puVar11 & 0xffff)) {
        puVar12 = (undefined *)0xffffffff;
      }
      puVar11 = (undefined *)__udiv32_r1_by_r0(((uint)puVar12 & 0xffff) << 0xe,0x500);
      if (&DAT_0000ffff < puVar11) {
        puVar11 = &DAT_0000ffff;
      }
    }
    puVar12 = a;
    if (puVar10 != (undefined *)0x0) {
      puVar12 = (undefined *)__udiv16b_r1_by_r0((int)a,(int)puVar10);
    }
    uVar15 = 0;
    if (puVar10 <= a) {
      uVar15 = (int)a - (int)puVar10;
    }
    uVar19 = 0;
    if (puVar10 != (undefined *)0x0) {
      uVar19 = __udiv16_r1_by_r0(uVar15 & 0xffff,(int)puVar10);
    }
    uVar15 = 0;
    if (puVar10 <= a) {
      uVar15 = (int)a - (int)puVar10;
    }
    uVar16 = 0;
    if (puVar10 != (undefined *)0x0) {
      uVar16 = __udiv16_r1_by_r0(uVar15 & 0xffff,(int)puVar10);
    }
    if (((uint)puVar12 & 0xffff) == 0) {
      puVar12 = (undefined *)((int)puVar10 * (uVar19 & 0xffff));
      if (&DAT_0000ffff < puVar12) {
        puVar12 = &DAT_0000ffff;
      }
      puVar12 = (undefined *)__udiv32_r1_by_r0(((uint)puVar12 & 0xffff) << 0xe,0x500);
      if (&DAT_0000ffff < puVar12) {
        puVar12 = &DAT_0000ffff;
      }
    }
    else {
      puVar12 = (undefined *)((int)puVar10 * (uVar16 & 0xffff));
      if (&DAT_0000ffff < puVar12) {
        puVar12 = &DAT_0000ffff;
      }
      puVar17 = puVar12 + (int)puVar10;
      if (((uint)puVar17 & 0xffff) < ((uint)puVar12 & 0xffff)) {
        puVar17 = (undefined *)0xffffffff;
      }
      puVar12 = (undefined *)__udiv32_r1_by_r0(((uint)puVar17 & 0xffff) << 0xe,0x500);
      if (&DAT_0000ffff < puVar12) {
        puVar12 = &DAT_0000ffff;
      }
    }
    if (puVar10 == (undefined *)0x0) {
      iVar13 = __udiv32_r1_by_r0((int)a << 6,5);
      sStack_38 = (short)iVar13;
    }
    else {
      sStack_38 = (short)puVar12;
    }
    iVar13 = (int)(short)b;
    puVar12 = a + iVar13;
    if ((undefined *)((uint)puVar12 & 0xffff) < a) {
      puVar12 = (undefined *)0xffffffff;
    }
    uVar15 = 0;
    if (iVar13 != 0) {
      uVar15 = __udiv16_r1_by_r0((uint)puVar12 & 0xffff,(int)b);
    }
    if (iVar13 == 0) {
      iVar13 = __udiv32_r1_by_r0((int)a << 6,5);
      uStack_34 = (ushort)iVar13;
    }
    else {
      puVar12 = (undefined *)((int)b * (uVar15 & 0xffff));
      if (&DAT_0000ffff < puVar12) {
        puVar12 = &DAT_0000ffff;
      }
      puVar12 = (undefined *)__udiv32_r1_by_r0(((uint)puVar12 & 0xffff) << 0xe,0x500);
      if (&DAT_0000ffff < puVar12) {
        puVar12 = &DAT_0000ffff;
      }
      uStack_34 = (ushort)puVar12;
    }
    puVar12 = a + (short)puVar10;
    if ((undefined *)((uint)puVar12 & 0xffff) < a) {
      puVar12 = (undefined *)0xffffffff;
    }
    if ((short)puVar10 == 0) {
      iVar13 = __udiv32_r1_by_r0((int)a << 6,5);
      sStack_30 = (short)iVar13;
    }
    else {
      uVar15 = __udiv16_r1_by_r0((uint)puVar12 & 0xffff,(int)puVar10);
      puVar10 = (undefined *)((int)puVar10 * (uVar15 & 0xffff));
      if (&DAT_0000ffff < puVar10) {
        puVar10 = &DAT_0000ffff;
      }
      puVar10 = (undefined *)__udiv32_r1_by_r0(((uint)puVar10 & 0xffff) << 0xe,0x500);
      if (&DAT_0000ffff < puVar10) {
        puVar10 = &DAT_0000ffff;
      }
      sStack_30 = (short)puVar10;
    }
    uStack_2c = _DAT_fffedac4;
    if (param_23 <= _DAT_fffedac4) {
      uStack_2c = 0;
    }
    if (param_20 != 0) {
      if (uStack_2c == 0xffff) {
        uStack_2c = 0xffff;
      }
      else {
        uStack_2c = uStack_2c + 1;
      }
    }
    if (DAT_fffedaca < param_20) {
      uStack_2c = param_23;
    }
    if (param_20 == 0) {
      uStack_2c = 0;
    }
    uVar20 = 0;
    if (_DAT_fffedac2 < param_23) {
      uVar20 = _DAT_fffedac2;
    }
    uVar21 = uVar20;
    if ((param_21 != 0) && (uVar21 = 0xffff, uVar20 != 0xffff)) {
      uVar21 = uVar20 + 1;
    }
    uVar20 = param_23;
    if (param_21 <= DAT_fffedac8) {
      uVar20 = uVar21;
    }
    if (param_21 == 0) {
      uVar20 = 0;
    }
    if (((((((bVar9) || (bVar4)) || (bVar5)) || ((bVar6 || (bVar3)))) ||
         ((bVar7 || ((bVar8 || (param_13 != '\0')))))) || (param_14 != '\0')) ||
       (((param_17 != '\0' || (param_23 <= uStack_2c)) || (uVar21 = 0, param_23 <= uVar20)))) {
      uVar21 = param_16;
    }
    uVar2 = _DAT_fffedac6;
    if (param_23 <= uVar20) {
      uVar2 = uStack_34;
    }
    if (param_14 == '\0') {
      if (param_17 == '\0') {
        puVar18 = (undefined1 *)(int)(short)uVar2;
        if (param_23 <= uStack_2c) {
          if ((short)b == 0) {
            puVar18 = (undefined1 *)__udiv32_r1_by_r0((uint)uStack_44 << 6,5);
          }
          else {
            puVar18 = (undefined1 *)(int)(short)puVar11;
          }
        }
      }
      else {
        puVar18 = (undefined1 *)(int)param_15._2_2_;
      }
    }
    else {
      puVar14 = (undefined1 *)__udiv32_r1_by_r0((uint)uStack_44 << 6,5);
      puVar18 = (undefined1 *)(int)(short)param_5;
      if (((undefined1 *)(uint)param_5 < puVar14) && (puVar18 = puVar14, &DAT_0000ffff < puVar14)) {
        puVar18 = &DAT_0000ffff;
      }
    }
    if (param_13 != '\0') {
      puVar14 = (undefined1 *)__udiv32_r1_by_r0((uint)uStack_44 << 6,5);
      puVar18 = (undefined1 *)(int)(short)param_5;
      if ((puVar14 < (undefined1 *)(uint)param_5) && (puVar18 = puVar14, &DAT_0000ffff < puVar14)) {
        puVar18 = &DAT_0000ffff;
      }
    }
    if ((bVar3) && (uStack_28 = _DAT_fffedac6 + param_9, uStack_28 < _DAT_fffedac6)) {
      uStack_28 = 0xffff;
    }
    if (bVar4) {
      puVar18 = (undefined1 *)0x0;
      if ((uint)(int)(short)param_9 <= (uint)(int)(short)_DAT_fffedac6) {
        puVar18 = (undefined1 *)((int)(short)_DAT_fffedac6 - (int)(short)param_9);
      }
    }
    else if ((bVar5) || (bVar6)) {
      puVar18 = (undefined1 *)(int)sStack_38;
    }
    else if (bVar3) {
      puVar18 = (undefined1 *)(int)(short)uStack_28;
    }
    else if ((bVar7) || (bVar8)) {
      puVar18 = (undefined1 *)(int)sStack_30;
    }
    if (param_2 == '\0') {
      if (bVar9) {
        puVar18 = (undefined1 *)(int)(short)param_5;
      }
      else if (param_6 != '\0') {
        puVar18 = &LAB_00001400;
      }
    }
    else {
      puVar18 = (undefined1 *)0x0;
    }
    if ((param_15 & 0xffff) <= ((uint)puVar18 & 0xffff)) {
      puVar18 = (undefined1 *)(int)param_15._2_2_;
    }
    _DAT_fffedac0 = uVar21;
    if ((uint)uVar21 < ((uint)puVar18 & 0xffff)) {
      _DAT_fffedac0 = (ushort)puVar18;
    }
    DAT_fffedaca = param_20;
    DAT_fffedac8 = param_21;
    _DAT_fffedac2 = uVar20;
    _DAT_fffedac4 = uStack_2c;
  }
  _DAT_fffedac6 = 0;
  if (param_1 != '\0') {
    _DAT_fffedac6 = _DAT_fffedac0;
  }
  *param_24 = _DAT_fffedac6;
  return;
}

