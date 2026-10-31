
/* WARNING: Removing unreachable block (ram,0x0008f09e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008edf0(char param_1,uint param_2,uint param_3,byte param_4,uint param_5,char param_6,
                 short param_7,byte param_8,undefined2 *param_9,ushort *param_10,ushort *param_11,
                 ushort *param_12,undefined1 *param_13,undefined1 *param_14,undefined1 *param_15,
                 byte *param_16)

{
  bool bVar1;
  uint uVar2;
  byte bVar7;
  byte bVar8;
  short sVar5;
  short sVar6;
  uint uVar3;
  uint uVar4;
  undefined1 *p1;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  byte bVar12;
  byte bVar15;
  int iVar13;
  undefined2 uVar14;
  short sVar16;
  uint uVar17;
  uint uVar18;
  ushort uVar19;
  ushort uStack_58;
  ushort uStack_56;
  byte bStack_48;
  
  p1 = (undefined1 *)(param_5 & 0xffff);
  if (&LAB_00005000 >= p1) {
    if (param_6 == '\0') {
      bStack_48 = 0x80;
    }
    else {
      uVar2 = LK_133B38((uint)&T_02CEE4,param_2 & 0xff);
      bStack_48 = (byte)uVar2;
    }
    DAT_fffebd07 = bStack_48;
    bVar1 = param_1 == '\x03';
    bVar15 = 1;
    if ((param_1 != '\x02') && (!bVar1)) {
      bVar15 = 0;
    }
    bVar7 = DAT_fffebd0f;
    if (DAT_fffebd0c < bVar15) {
      bVar7 = param_8;
    }
    bVar8 = DAT_fffebd10;
    if (DAT_fffebd0d < bVar1) {
      bVar8 = param_8;
    }
    sVar5 = _DAT_fffebd08;
    if (DAT_fffebd0c < bVar15) {
      sVar5 = param_7;
    }
    sVar6 = _DAT_fffebd0a;
    if (DAT_fffebd0d < bVar1) {
      sVar6 = param_7;
    }
    uVar17 = (uint)bVar7;
    uVar2 = (uint)sVar5;
    uVar3 = LK_13AAF0((uint)&T_02CEF0,uVar17,uVar2);
    uStack_58 = (ushort)uVar3;
    _DAT_fffebcfe = uStack_58;
    uVar4 = LK_13AAF0((uint)&T_02CF04,uVar17,uVar2);
    uVar19 = (ushort)uVar4;
    _DAT_fffebd02 = uVar19;
    uVar2 = LK_13AAF0((uint)&T_02CF18,uVar17,uVar2);
    uStack_56 = (ushort)uVar2;
    uVar18 = (uint)bVar8;
    _DAT_fffebd00 = uStack_56;
    uVar17 = LK_13A6C0((uint)&T_02CF2C,uVar18,(int)sVar6);
    uVar9 = uVar17 & 0xff;
    DAT_fffebd04 = (undefined1)uVar17;
    if (uVar9 == 0) {
      uVar17 = 0;
    }
    else {
      param_3 = param_3 & 0xffff;
      iVar13 = uVar9 * 8 - param_3;
      sVar16 = -0x8000;
      if (-0x8001 < iVar13) {
        sVar16 = (short)iVar13;
      }
      uVar9 = __sdiv32_r1_by_r0((int)sVar16 << 5,uVar9);
      uVar17 = 0xff;
      if (((int)uVar9 < 0x100) && (uVar17 = uVar9, (int)uVar9 < 0)) {
        uVar17 = 0;
      }
    }
    uVar9 = LK_13A6C0((uint)&T_02CF40,uVar18,(int)sVar6);
    uVar10 = uVar9 & 0xff;
    DAT_fffebd06 = (undefined1)uVar9;
    if (uVar10 == 0) {
      uVar9 = 0;
    }
    else {
      param_3 = param_3 & 0xffff;
      iVar13 = uVar10 * 8 - param_3;
      if (iVar13 < -0x8000) {
        iVar13 = -0x8000;
      }
      uVar10 = __sdiv32_r1_by_r0((int)(short)iVar13 << 5,uVar10);
      uVar9 = 0xff;
      if (((int)uVar10 < 0x100) && (uVar9 = uVar10, (int)uVar10 < 0)) {
        uVar9 = 0;
      }
    }
    uVar18 = LK_13A6C0((uint)&T_02CF54,uVar18,(int)sVar6);
    uVar10 = uVar18 & 0xff;
    DAT_fffebd05 = (undefined1)uVar18;
    uVar18 = 0;
    if (uVar10 != 0) {
      iVar13 = uVar10 * 8 - (param_3 & 0xffff);
      if (iVar13 < -0x8000) {
        iVar13 = -0x8000;
      }
      uVar10 = __sdiv32_r1_by_r0((int)(short)iVar13 << 5,uVar10);
      uVar18 = 0xff;
      if (((int)uVar10 < 0x100) && (uVar18 = uVar10, (int)uVar10 < 0)) {
        uVar18 = 0;
      }
    }
    if (param_1 != '\x02') {
      uStack_58 = (ushort)((uVar17 & 0xff) * (uVar3 & 0xffff) >> 8);
      uStack_56 = (ushort)((uVar18 & 0xff) * (uVar2 & 0xffff) >> 8);
      uVar19 = (ushort)((uVar9 & 0xff) * (uVar4 & 0xffff) >> 8);
    }
    if (uStack_58 <= uStack_56) {
      uStack_58 = uStack_56;
    }
    if (uStack_58 < uVar19) {
      uStack_58 = uVar19;
    }
    uVar14 = 0;
    if (bVar15 != 0) {
      uVar2 = LK_13503C((uint)&T_02CED8,(uint)p1);
      uVar2 = (uint)uStack_58 * (uVar2 & 0xff);
      if (uVar2 < 0x7fff81) {
        puVar11 = (undefined *)(uVar2 >> 7);
      }
      else {
        puVar11 = &DAT_0000ffff;
      }
      uVar2 = (uint)bStack_48 * ((uint)puVar11 & 0xffff);
      if (uVar2 < 0x7fff81) {
        uVar14 = (undefined2)(uVar2 >> 7);
      }
      else {
        uVar14 = 0xffff;
      }
    }
    if (DAT_fffebd0e == '\0') {
      bVar12 = 0xff;
    }
    else {
      bVar12 = 0xfb;
    }
    DAT_fffebd0e = bVar12 <= param_4;
    _DAT_fffebcfc = uVar14;
    _DAT_fffebd08 = sVar5;
    _DAT_fffebd0a = sVar6;
    DAT_fffebd0c = bVar15;
    DAT_fffebd0d = bVar1;
    DAT_fffebd0f = bVar7;
    DAT_fffebd10 = bVar8;
    if (((bool)DAT_fffebd0e) && (bVar15 != 0)) {
      _DAT_fffebcfc = 0;
    }
  }
  if (&LAB_00005000 < p1) {
    *param_16 = 0;
    *param_15 = 0;
    *param_14 = 0;
    *param_13 = 0;
    *param_12 = 0;
    *param_11 = 0;
    *param_10 = 0;
    *param_9 = 0;
  }
  else {
    *param_16 = DAT_fffebd07;
    *param_15 = DAT_fffebd06;
    *param_14 = DAT_fffebd05;
    *param_13 = DAT_fffebd04;
    *param_12 = _DAT_fffebd02;
    *param_11 = _DAT_fffebd00;
    *param_10 = _DAT_fffebcfe;
    *param_9 = _DAT_fffebcfc;
  }
  return;
}

