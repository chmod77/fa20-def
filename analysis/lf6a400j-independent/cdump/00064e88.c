
/* WARNING: Removing unreachable block (ram,0x00065126) */
/* WARNING: Removing unreachable block (ram,0x00065016) */
/* WARNING: Removing unreachable block (ram,0x000651b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00064e88(void)

{
  ushort uVar1;
  char cVar2;
  int extraout_r2;
  int extraout_r2_00;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  ushort uVar13;
  ushort uVar14;
  uint uVar11;
  uint uVar12;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ushort uVar21;
  uint uVar19;
  uint uVar20;
  ushort uVar24;
  uint uVar22;
  uint uVar23;
  ushort uVar27;
  uint uVar25;
  uint uVar26;
  
  if ((_DAT_ffff008e < 0x3d) || (0x9f < _DAT_ffff008e)) {
    iVar5 = 0;
    for (uVar24 = 0; uVar24 < 9; uVar24 = uVar24 + 1) {
      *(undefined2 *)(&DAT_ffff018a + iVar5) = 0;
      *(undefined2 *)(&DAT_ffff019c + iVar5) = 0;
      *(undefined2 *)(&DAT_ffff01ae + iVar5) = 0;
      iVar5 = iVar5 + 2;
    }
    DAT_ffff030d = 0;
    DAT_ffff030e = 0;
    DAT_ffff030f = 0;
    DAT_fffef555 = DAT_fffef555 | 0x80;
  }
  if (0x2fff < _DAT_ffff002e) {
    puVar10 = &DAT_00019986;
    iVar5 = __sdiv32_r1_by_r0(0xbb8000,(uint)_DAT_ffff002e);
    if (iVar5 <= (int)(uint)*puVar10) {
      _v_Throttle_Motor_Duty_0128 = -(short)iVar5;
      goto LAB_00064f2e;
    }
  }
  _v_Throttle_Motor_Duty_0128 = -1000;
LAB_00064f2e:
  _DAT_ffff0188 = _DAT_ffff0188 + 1;
  if (8 < _DAT_ffff0188) {
    _DAT_ffff0188 = 0;
  }
  *(undefined2 *)(&DAT_ffff018a + (uint)_DAT_ffff0188 * 2) = _DAT_ffff34de;
  if (DAT_ffff030d < 9) {
    DAT_ffff030d = DAT_ffff030d + 1;
  }
  if (8 < DAT_ffff030d) {
    DAT_fffef555 = DAT_fffef555 & 0x7f;
  }
  *(undefined2 *)(&DAT_ffff019c + (uint)_DAT_ffff0188 * 2) = _DAT_ffff34e0;
  if (DAT_ffff030e < 9) {
    DAT_ffff030e = DAT_ffff030e + 1;
  }
  *(undefined2 *)(&DAT_ffff01ae + (uint)_DAT_ffff0188 * 2) = _DAT_ffff34e2;
  if (DAT_ffff030f < 9) {
    DAT_ffff030f = DAT_ffff030f + 1;
  }
  uVar21 = 0;
  uVar24 = 0xffff;
  DAT_ffff0187 = DAT_ffff0187 & 0xf7;
  uVar27 = 0;
  uVar13 = 0xffff;
  uVar14 = uVar13;
  for (uVar3 = 0; (uVar3 & 0xffff) < 9; uVar3 = (uVar3 & 0xffff) + 1) {
    uVar1 = *(ushort *)(&DAT_ffff018a + (uVar3 & 0xffff) * 2);
    if (uVar27 < uVar1) {
      uVar21 = uVar1;
      uVar27 = uVar1;
    }
    if (uVar1 < uVar14) {
      uVar24 = uVar1;
      uVar14 = uVar1;
    }
    if ((0x2b5e < uVar1) || (uVar1 < 0x7ae)) {
      DAT_ffff0187 = DAT_ffff0187 | 8;
    }
  }
  if ((((DAT_ffff0187 & 8) == 0) && ((int)((uint)uVar21 - (uint)uVar24) < 0x10f)) &&
     (8 < DAT_ffff030d)) {
    DAT_ffff0187 = DAT_ffff0187 | 1;
  }
  else {
    DAT_ffff0187 = DAT_ffff0187 & 0xfe;
  }
  uVar21 = 0;
  uVar24 = 0xffff;
  DAT_ffff0187 = DAT_ffff0187 & 0xef;
  uVar14 = 0;
  uVar27 = uVar13;
  for (uVar3 = 0; (uVar3 & 0xffff) < 9; uVar3 = (uVar3 & 0xffff) + 1) {
    uVar1 = *(ushort *)(&DAT_ffff019c + (uVar3 & 0xffff) * 2);
    if (uVar14 < uVar1) {
      uVar21 = uVar1;
      uVar14 = uVar1;
    }
    if (uVar1 < uVar27) {
      uVar24 = uVar1;
      uVar27 = uVar1;
    }
    if ((0x2b0f < uVar1) || (uVar1 < 0x823)) {
      DAT_ffff0187 = DAT_ffff0187 | 0x10;
    }
  }
  if ((((DAT_ffff0187 & 0x10) == 0) && ((int)((uint)uVar21 - (uint)uVar24) < 0x10f)) &&
     (8 < DAT_ffff030e)) {
    DAT_ffff0187 = DAT_ffff0187 | 2;
  }
  else {
    DAT_ffff0187 = DAT_ffff0187 & 0xfd;
  }
  uVar21 = 0;
  uVar24 = 0xffff;
  DAT_ffff0187 = DAT_ffff0187 & 0xdf;
  uVar27 = 0;
  for (uVar3 = 0; (uVar3 & 0xffff) < 9; uVar3 = (uVar3 & 0xffff) + 1) {
    uVar14 = *(ushort *)(&DAT_ffff01ae + (uVar3 & 0xffff) * 2);
    if (uVar27 < uVar14) {
      uVar21 = uVar14;
      uVar27 = uVar14;
    }
    if (uVar14 < uVar13) {
      uVar24 = uVar14;
      uVar13 = uVar14;
    }
    if (0x71ae < uVar14) {
      DAT_ffff0187 = DAT_ffff0187 | 0x20;
    }
  }
  if ((((DAT_ffff0187 & 0x20) == 0) && ((int)((uint)uVar21 - (uint)uVar24) < 0x43c)) &&
     (8 < DAT_ffff030f)) {
    DAT_ffff0187 = DAT_ffff0187 | 4;
  }
  else {
    DAT_ffff0187 = DAT_ffff0187 & 0xfb;
  }
  uVar8 = (uint)_DAT_ffff019c;
  uVar17 = (uint)_DAT_ffff019e;
  uVar19 = (uint)_DAT_ffff01a0;
  uVar22 = (uint)_DAT_ffff01a2;
  uVar25 = (uint)_DAT_ffff01a4;
  uVar11 = (uint)_DAT_ffff01a6;
  uVar3 = (uint)_DAT_ffff01a8;
  uVar6 = (uint)_DAT_ffff01aa;
  uVar15 = (uint)_DAT_ffff01ac;
  uVar9 = (uint)_DAT_ffff01ae;
  uVar16 = (uint)_DAT_ffff01b0;
  uVar18 = (uint)_DAT_ffff01b2;
  uVar20 = (uint)_DAT_ffff01b4;
  uVar23 = (uint)_DAT_ffff01b6;
  uVar26 = (uint)_DAT_ffff01b8;
  uVar12 = (uint)_DAT_ffff01ba;
  uVar4 = (uint)_DAT_ffff01bc;
  uVar7 = (uint)_DAT_ffff01be;
  iVar5 = __sdiv32_r1_by_r0((uint)_DAT_ffff018a + (uint)_DAT_ffff018c + (uint)_DAT_ffff018e +
                            (uint)_DAT_ffff0190 + (uint)_DAT_ffff0192 + (uint)_DAT_ffff0194 +
                            (uint)_DAT_ffff0196 + (uint)_DAT_ffff0198 + (uint)_DAT_ffff019a,9);
  _DAT_ffff00ee = (short)iVar5;
  iVar5 = __sdiv32_r1_by_r0(uVar15 + uVar8 + uVar17 + uVar19 + uVar22 + uVar25 + uVar11 + uVar3 +
                                     uVar6,9);
  *(short *)(extraout_r2 + 2) = (short)iVar5;
  iVar5 = __sdiv32_r1_by_r0(uVar9 + uVar16 + uVar18 + uVar20 + uVar23 + uVar26 + uVar12 + uVar4 +
                            uVar7,9);
  *(short *)(extraout_r2_00 + 4) = (short)iVar5;
  if ((((0x6e < _DAT_ffff0034) && ((DAT_ffff0187 & 1) != 0)) &&
      ((((DAT_ffff0187 & 2) != 0 &&
        (((DAT_ffff0187 & 4) != 0 &&
         (cVar2 = FUN_00062cac((int)_DAT_ffff00ee,(int)_DAT_ffff00f0,0xffffffff), cVar2 == '\0'))))
       && (cVar2 = FUN_00062cac((int)_DAT_ffff00ee,(int)_DAT_ffff00f2,0xffffffff), cVar2 == '\0'))))
     && (((((DAT_ffff01e2 & 4) != 0 || ((DAT_ffff01e2 & 2) != 0)) || ((DAT_ffff01e2 & 1) != 0)) ||
         (((cVar2 = FUN_00062cac((int)_DAT_ffff00ee,(int)_DAT_ffff34c0,0x51e), cVar2 == '\0' &&
           (cVar2 = FUN_00062cac((int)_DAT_ffff00f0,(int)_DAT_ffff34c2,0x51e), cVar2 == '\0')) &&
          (cVar2 = FUN_00062cac((int)_DAT_ffff00f2,(int)_DAT_ffff34c4,0x147b), cVar2 == '\0')))))) {
    DAT_ffff01c6 = DAT_ffff01c6 | 1;
  }
  return;
}

