
/* WARNING: Removing unreachable block (ram,0x0008f5d6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008f250(char param_1,uint param_2,ushort param_3,byte param_4,uint param_5,char param_6,
                 short param_7,byte param_8,char param_9,ushort param_10,ushort param_11,
                 ushort *param_12,ushort *param_13,ushort *param_14,ushort *param_15,
                 undefined1 *param_16,undefined1 *param_17,undefined1 *param_18,byte *param_19,
                 short *param_20,ushort *param_21)

{
  bool bVar1;
  uint uVar2;
  byte bVar7;
  byte bVar8;
  short sVar5;
  short sVar6;
  uint uVar3;
  uint uVar4;
  byte bVar13;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar14;
  int iVar15;
  short sVar17;
  short sVar18;
  undefined *puVar16;
  ushort uVar19;
  uint uVar20;
  ushort uStack_54;
  ushort uStack_52;
  byte bStack_44;
  
  if (param_11 < 0xccf) {
    param_11 = 0;
  }
  else {
    param_11 = param_11 - 0xccf;
  }
  if (param_10 < param_11) {
    _DAT_fffebd1c = 0;
    uVar19 = 0;
    sVar17 = _DAT_fffebd1c;
  }
  else {
    uVar19 = _DAT_fffebd1c;
    sVar17 = _DAT_fffebd1c + 1;
    if ((ushort)(_DAT_fffebd1c + 1) == 0) {
      sVar17 = -1;
    }
  }
  _DAT_fffebd1c = sVar17;
  *param_21 = uVar19;
  if (param_6 == '\0') {
    bStack_44 = 0x80;
  }
  else {
    uVar2 = LK_133B38((uint)&T_02CF74,param_2 & 0xff);
    bStack_44 = (byte)uVar2;
  }
  *param_19 = bStack_44;
  bVar1 = param_1 == '\x03';
  bVar13 = 1;
  if ((param_1 != '\x02') && (!bVar1)) {
    bVar13 = 0;
  }
  if ((uVar19 < 500) || (param_9 == '\0')) {
    if (param_9 != '\0') {
      uVar2 = LK_133E10((uint)&T_02CF68,param_2 & 0xff);
      puVar9 = (undefined *)((uVar2 & 0xffff) << 1);
      goto LAB_0008f366;
    }
  }
  else if (1 < _DAT_fffebd14) {
    puVar9 = (undefined *)((int)_DAT_fffebd14 - 2);
    goto LAB_0008f366;
  }
  puVar9 = (undefined *)0x0;
LAB_0008f366:
  sVar17 = -1;
  if (puVar9 < &DAT_0001ffff) {
    sVar17 = (short)((uint)puVar9 >> 1);
  }
  *param_20 = sVar17;
  bVar7 = DAT_fffebd1e;
  if (DAT_fffebd20 < bVar13) {
    bVar7 = param_8;
  }
  bVar8 = DAT_fffebd1f;
  if (DAT_fffebd21 < bVar1) {
    bVar8 = param_8;
  }
  sVar5 = _DAT_fffebd18;
  if (DAT_fffebd20 < bVar13) {
    sVar5 = param_7;
  }
  sVar6 = _DAT_fffebd1a;
  if (DAT_fffebd21 < bVar1) {
    sVar6 = param_7;
  }
  uVar20 = (uint)bVar7;
  uVar2 = (uint)sVar5;
  uVar3 = LK_13AAF0((uint)&T_02CF8C,uVar20,uVar2);
  uStack_54 = (ushort)uVar3;
  *param_13 = uStack_54;
  uVar4 = LK_13AAF0((uint)&T_02CFA0,uVar20,uVar2);
  uVar19 = (ushort)uVar4;
  *param_15 = uVar19;
  uVar2 = LK_13AAF0((uint)&T_02CFB4,uVar20,uVar2);
  uStack_52 = (ushort)uVar2;
  *param_14 = uStack_52;
  uVar20 = LK_13A6C0((uint)&T_02CFC8,(int)(char)bVar8,(int)sVar6);
  uVar10 = uVar20 & 0xff;
  *param_16 = (char)uVar20;
  if (uVar10 == 0) {
    uVar20 = 0;
  }
  else {
    iVar15 = uVar10 * 8 - (uint)param_3;
    sVar18 = -0x8000;
    if (-0x8001 < iVar15) {
      sVar18 = (short)iVar15;
    }
    uVar10 = __sdiv32_r1_by_r0((int)sVar18 << 5,uVar10);
    uVar20 = 0xff;
    if (((int)uVar10 < 0x100) && (uVar20 = uVar10, (int)uVar10 < 0)) {
      uVar20 = 0;
    }
  }
  uVar10 = LK_13A6C0((uint)&T_02CFDC,(int)(char)bVar8,(int)sVar6);
  uVar11 = uVar10 & 0xff;
  *param_18 = (char)uVar10;
  if (uVar11 == 0) {
    uVar10 = 0;
  }
  else {
    iVar15 = uVar11 * 8 - (uint)param_3;
    if (iVar15 < -0x8000) {
      iVar15 = -0x8000;
    }
    uVar11 = __sdiv32_r1_by_r0((int)(short)iVar15 << 5,uVar11);
    uVar10 = 0xff;
    if (((int)uVar11 < 0x100) && (uVar10 = uVar11, (int)uVar11 < 0)) {
      uVar10 = 0;
    }
  }
  uVar11 = LK_13A6C0((uint)&T_02CFF0,(int)(char)bVar8,(int)sVar6);
  uVar12 = uVar11 & 0xff;
  *param_17 = (char)uVar11;
  uVar11 = 0;
  if (uVar12 != 0) {
    iVar15 = uVar12 * 8 - (uint)param_3;
    if (iVar15 < -0x8000) {
      iVar15 = -0x8000;
    }
    uVar12 = __sdiv32_r1_by_r0((int)(short)iVar15 << 5,uVar12);
    uVar11 = 0xff;
    if (((int)uVar12 < 0x100) && (uVar11 = uVar12, (int)uVar12 < 0)) {
      uVar11 = 0;
    }
  }
  if (param_1 != '\x02') {
    uStack_54 = (ushort)((uVar20 & 0xff) * (uVar3 & 0xffff) >> 8);
    uStack_52 = (ushort)((uVar11 & 0xff) * (uVar2 & 0xffff) >> 8);
    uVar19 = (ushort)((uVar10 & 0xff) * (uVar4 & 0xffff) >> 8);
  }
  if (uStack_54 <= uStack_52) {
    uStack_54 = uStack_52;
  }
  if (uStack_54 < uVar19) {
    uStack_54 = uVar19;
  }
  if (bVar13 != 0) {
    uVar2 = LK_13503C((uint)&T_02CF80,param_5 & 0xffff);
    uVar2 = (uint)uStack_54 * (uVar2 & 0xff);
    puVar16 = &DAT_0000ffff;
    if (uVar2 < 0x7fff81) {
      puVar16 = (undefined *)(uVar2 >> 7);
    }
    uVar2 = (uint)bStack_44 * ((uint)puVar16 & 0xffff);
    puVar16 = &DAT_0000ffff;
    if (uVar2 < 0x7fff81) {
      puVar16 = (undefined *)(uVar2 >> 7);
    }
    uVar19 = (ushort)(puVar16 + sVar17);
    if (((uint)(puVar16 + sVar17) & 0xffff) < ((uint)puVar16 & 0xffff)) {
      uVar19 = 0xffff;
    }
  }
  if (DAT_fffebd22 == '\0') {
    bVar14 = 0xff;
  }
  else {
    bVar14 = 0xfb;
  }
  if (((bVar14 <= param_4) && (bVar13 != 0)) || (bVar13 == 0)) {
    *param_12 = 0;
  }
  else {
    *param_12 = uVar19;
  }
  _DAT_fffebd14 = puVar9;
  DAT_fffebd20 = bVar13;
  DAT_fffebd21 = bVar1;
  DAT_fffebd1e = bVar7;
  DAT_fffebd1f = bVar8;
  _DAT_fffebd18 = sVar5;
  _DAT_fffebd1a = sVar6;
  DAT_fffebd22 = bVar14 <= param_4;
  return;
}

