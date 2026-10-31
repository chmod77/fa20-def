
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c1ddc(ushort param_1,uint param_2,uint param_3,ushort param_4,uint param_5,uint param_6,
                 byte param_7,char param_8,char param_9,undefined2 param_10,char param_11,
                 char param_12,char param_13,char param_14,char param_15,char param_16,
                 undefined1 *param_17,ushort *param_18,ushort *param_19,ushort *param_20,
                 undefined2 *param_21)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  ushort uVar9;
  int iVar7;
  undefined *puVar8;
  ushort uVar10;
  undefined *puVar11;
  undefined *puVar12;
  char cVar13;
  bool bVar14;
  ushort local_4c;
  ushort uStack_40;
  
  param_2 = param_2 & 0xffff;
  uVar3 = LK_133F40((uint)&T_02E84C,param_2);
  uStack_40 = (ushort)uVar3;
  uVar3 = LK_133F40((uint)&T_02E858,param_2);
  uVar4 = LK_133F40((uint)&T_02E87C,param_2);
  uVar5 = LK_133F40((uint)&T_02E888,param_2);
  uVar10 = (ushort)uVar5;
  uVar5 = LK_133E10((uint)&T_02E894,param_6 & 0xff);
  puVar12 = (undefined *)(uVar5 & 0xffff);
  *param_21 = (short)uVar5;
  local_4c = uStack_40;
  if (param_15 != '\0') {
    local_4c = (ushort)uVar4;
  }
  if (DAT_fffec9db == '\0') {
    uVar9 = 0x7800;
  }
  else {
    uVar9 = 0x7667;
  }
  bVar14 = uVar9 <= param_1;
  if (param_13 == '\x03') {
    local_4c = (ushort)uVar4;
  }
  DAT_fffec9db = bVar14;
  if (param_13 == '\x02') {
    uVar4 = LK_133F40((uint)&T_02E864,param_2);
    local_4c = (ushort)uVar4;
  }
  if (param_13 != '\x01') {
    uStack_40 = local_4c;
    if (param_13 == '\x02') {
      uVar3 = LK_133F40((uint)&T_02E870,param_2);
      uVar10 = (ushort)uVar3;
      goto LAB_000c1f38;
    }
    if ((param_13 == '\x03') || (param_15 != '\0')) goto LAB_000c1f38;
  }
  uVar10 = (ushort)uVar3;
LAB_000c1f38:
  *param_19 = uVar10;
  uVar3 = (uint)uStack_40;
  *param_18 = uStack_40;
  iVar7 = uVar10 - uVar3;
  uVar10 = 0xffff;
  if ((iVar7 < (int)&DAT_0000c180) && (uVar10 = 0, -0x3e81 < iVar7)) {
    uVar10 = (short)iVar7 + 16000;
  }
  *param_20 = uVar10;
  if (DAT_fffec9d6 != '\0') {
    puVar8 = (undefined *)(uVar10 + uVar3);
    puVar11 = (undefined *)0xffffffff;
    if ((puVar8 < &UNK_00013e80) && (puVar11 = (undefined *)0x0, (undefined *)0x3e7f < puVar8)) {
      puVar11 = puVar8 + -16000;
    }
    uVar3 = (uint)puVar11 & 0xffff;
  }
  DAT_fffec9d6 = (param_3 & 0xffff) < uVar3;
  if (DAT_fffec9d8 == '\0') {
    bVar1 = 0x3713 < param_4;
  }
  else {
    bVar1 = 14999 < param_4;
  }
  bVar2 = false;
  if ((((bVar14) && ((bool)DAT_fffec9d6)) && ((bool)(bVar1 ^ 1U))) && (param_14 == '\0')) {
    bVar2 = true;
  }
  cVar13 = '\x01';
  if (DAT_fffec9d7 <= param_7) {
    cVar13 = DAT_fffec9d9;
  }
  if (param_12 != '\0') {
    cVar13 = '\0';
  }
  if ((DAT_fffec9da != '\0') &&
     (puVar12 = (undefined *)((uint)(puVar12 + 0x199) & 0xffff), puVar12 < &UNK_00000199)) {
    puVar12 = &DAT_0000ffff;
  }
  DAT_fffec9da = (undefined *)(param_5 & 0xffff) < puVar12;
  bVar14 = true;
  if ((!(bool)DAT_fffec9da) && ((cVar13 == '\0' || ((param_8 == '\0' && (param_11 == '\0')))))) {
    bVar14 = false;
  }
  if ((bVar2) && (_DAT_fffec9d4 != 0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 3;
  }
  if ((bVar2) && ((bVar14 || (_DAT_fffec9d4 == 0)))) {
    uVar6 = 2;
  }
  if (param_16 == '\x04') {
    if (((!bVar2) || (bVar14)) || (param_9 == '\0')) {
      *param_17 = uVar6;
    }
    else {
      *param_17 = 1;
    }
  }
  else {
    *param_17 = 2;
  }
  DAT_fffec9d8 = bVar1 ^ 1U;
  DAT_fffec9d9 = cVar13;
  DAT_fffec9d7 = param_7;
  _DAT_fffec9d4 = param_10;
  return;
}

