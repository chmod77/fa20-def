
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000caa88(undefined *param_1,uint param_2,byte param_3,uint param_4,uint param_5,
                 char param_6,char param_7,uint param_8,byte param_9,uint param_10,
                 undefined2 *param_11,undefined2 *param_12,ushort *param_13,char *param_14,
                 undefined2 *param_15,undefined2 *param_16,ushort *param_17,ushort *param_18,
                 undefined2 *param_19)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  int iVar6;
  ushort uVar7;
  undefined *puVar8;
  ushort uVar9;
  ushort uVar10;
  
  bVar1 = true;
  if ((param_7 == '\0') && (param_6 == '\0')) {
    bVar1 = false;
  }
  if ((param_9 == 0) || (param_3 != 0)) {
    if (!bVar1) {
      param_1 = &DAT_00002710 + (param_2 & 0xff) * 0x10;
    }
  }
  else {
    param_1 = &DAT_00002710 + (param_10 & 0xff) * 0x14;
  }
  *param_12 = (short)param_1;
  *param_19 = (short)param_1;
  puVar8 = param_1;
  if (!bVar1) {
    param_1 = (undefined *)((uint)param_1 & 0xffff);
    iVar6 = (int)param_1 - (param_4 & 0xffff);
    puVar8 = (undefined *)0xffffffff;
    if ((iVar6 < (int)&UNK_0000d8f0) && (puVar8 = (undefined *)0x0, -0x2711 < iVar6)) {
      puVar8 = &DAT_00002710 + iVar6;
    }
  }
  uVar2 = LK_133BCC((uint)&T_02EAB4,param_5 & 0xffff);
  uVar3 = LK_133BCC((uint)&T_02EAB4,param_5 & 0xffff);
  iVar6 = (((uint)puVar8 & 0xffff) * (uVar2 & 0xff) >> 7) - ((uVar3 & 0xff) * 20000 >> 8);
  uVar9 = 0xffff;
  if ((iVar6 < (int)&UNK_0000d8f0) && (uVar9 = 0, -0x2711 < iVar6)) {
    uVar9 = (short)iVar6 + 10000;
  }
  *param_18 = uVar9;
  iVar6 = ((uint)param_1 & 0xffff) - (param_8 & 0xffff);
  puVar8 = (undefined *)0xffffffff;
  if ((iVar6 < (int)&UNK_0000d8f0) && (puVar8 = (undefined *)0x0, -0x2711 < iVar6)) {
    puVar8 = &DAT_00002710 + iVar6;
  }
  if ((undefined *)((uint)puVar8 & 0xffff) < &DAT_00001f40) {
    puVar8 = &DAT_00001f40;
  }
  *param_16 = (short)puVar8;
  uVar10 = _DAT_fffecbbe;
  if (&UNK_0000272e <= (undefined *)((uint)puVar8 & 0xffff)) {
    uVar2 = 0xffffffff;
    if ((&UNK_00002716 + _DAT_fffecbbe < &UNK_00012710) &&
       (uVar2 = 0, &UNK_0000270f < &UNK_00002716 + _DAT_fffecbbe)) {
      uVar2 = _DAT_fffecbbe + 6;
    }
    if (0x2cec < (uVar2 & 0xffff)) {
      uVar2 = 0x2cec;
    }
    uVar10 = (ushort)uVar2;
    if ((undefined **)(uVar2 & 0xffff) < &PTR_DAT_00002134) {
      uVar10 = 0x2134;
    }
  }
  if ((undefined *)((uint)puVar8 & 0xffff) <= &UNK_0000270f) {
    uVar2 = 0xffffffff;
    if ((&UNK_0000270a + _DAT_fffecbbe < &UNK_00012710) &&
       (uVar2 = 0, &UNK_0000270f < &UNK_0000270a + _DAT_fffecbbe)) {
      uVar2 = _DAT_fffecbbe - 6;
    }
    if (0x2cec < (uVar2 & 0xffff)) {
      uVar2 = 0x2cec;
    }
    uVar10 = (ushort)uVar2;
    if ((undefined **)(uVar2 & 0xffff) < &PTR_DAT_00002134) {
      uVar10 = 0x2134;
    }
  }
  iVar6 = (uint)_DAT_fffecbbc - ((uint)param_1 & 0xffff);
  uVar7 = 0xffff;
  if ((iVar6 < (int)&UNK_0000d8f0) && (uVar7 = 0, -0x2711 < iVar6)) {
    uVar7 = (short)iVar6 + 10000;
  }
  *param_13 = uVar7;
  cVar4 = '\x01';
  if (uVar7 < 0x2779) {
    cVar4 = DAT_fffecbc2;
  }
  if (uVar7 < 10000) {
    cVar4 = '\0';
  }
  *param_14 = cVar4;
  bVar1 = true;
  if (((cVar4 == '\0') && (param_3 <= DAT_fffecbc1)) && (param_9 <= DAT_fffecbc0)) {
    bVar1 = false;
  }
  if (bVar1) {
    uVar10 = 10000;
  }
  puVar5 = &DAT_00002710;
  *param_17 = uVar10;
  if (!bVar1) {
    puVar5 = (undefined *)LK_133F40((uint)&T_02EAC0,(uint)puVar8);
  }
  uVar2 = ((uint)puVar5 & 0xffff) + (uint)uVar9 + -10000 + (uint)uVar10;
  uVar3 = 0xffffffff;
  if (((int)uVar2 < (int)&UNK_00012710) && (uVar3 = 0, 9999 < (int)uVar2)) {
    uVar3 = (uVar2 & 0xffff) - 10000;
  }
  if (&UNK_0000270f < (undefined *)(uVar3 & 0xffff)) {
    *param_11 = (short)uVar3;
  }
  else {
    *param_11 = 10000;
  }
  *param_15 = (short)puVar5;
  _DAT_fffecbbe = uVar10;
  DAT_fffecbc2 = cVar4;
  DAT_fffecbc1 = param_3;
  DAT_fffecbc0 = param_9;
  _DAT_fffecbbc = (short)param_1;
  return;
}

