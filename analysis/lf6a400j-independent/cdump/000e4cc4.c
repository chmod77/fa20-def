
/* WARNING: Removing unreachable block (ram,0x000e4e64) */
/* WARNING: Removing unreachable block (ram,0x000e4d86) */
/* WARNING: Removing unreachable block (ram,0x000e4d2c) */
/* WARNING: Removing unreachable block (ram,0x000e4d3a) */
/* WARNING: Removing unreachable block (ram,0x000e4d94) */
/* WARNING: Removing unreachable block (ram,0x000e4ee2) */

void FUN_000e4cc4(uint param_1,ushort param_2,uint param_3,uint param_4,uint param_5,short param_6,
                 byte param_7,byte param_8,char param_9,char param_10,ushort param_11,
                 undefined1 *param_12)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  undefined *puVar8;
  undefined1 uVar9;
  char cVar10;
  
  param_3 = param_3 & 0xff;
  puVar6 = (undefined *)(param_5 & 0xffff);
  if (DAT_fffed2ed == '\0') {
    DAT_fffed2ed = false;
    if (param_4 < 0x2801) {
      DAT_fffed2ed = true;
    }
  }
  else {
    DAT_fffed2ed = false;
    if (param_4 < 0x2a01) {
      DAT_fffed2ed = true;
    }
  }
  if (DAT_fffed2ec == '\0') {
    DAT_fffed2ec = false;
    if (param_4 < 0x2801) {
      DAT_fffed2ec = true;
    }
  }
  else {
    DAT_fffed2ec = param_4 < 0x2a01;
  }
  bVar1 = true;
  if ((!(bool)DAT_fffed2ed) && ((bool)DAT_fffed2ec == false)) {
    bVar1 = false;
  }
  uVar4 = LK_133BCC((uint)&T_02F1C0,param_4);
  uVar5 = LK_133BCC((uint)&T_02F1CC,param_4);
  uVar5 = uVar5 & 0xff;
  if (DAT_fffed2ee == '\0') {
    cVar10 = '\0';
    if ((uVar5 <= param_3) && (param_3 <= (uVar4 & 0xff))) {
      cVar10 = '\x01';
    }
  }
  else {
    uVar4 = (uVar4 & 0xff) + 8;
    if ((uVar4 & 0xff) < 8) {
      uVar4 = 0xff;
    }
    if (uVar5 < 8) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar5 - 8;
    }
    cVar10 = '\0';
    if (((uVar5 & 0xff) <= param_3) && (param_3 <= (uVar4 & 0xff))) {
      cVar10 = '\x01';
    }
  }
  DAT_fffed2ee = cVar10;
  uVar4 = LK_133F40((uint)&T_02F1B4,param_1);
  puVar8 = (undefined *)(uVar4 & 0xffff);
  if (DAT_fffed2ef == '\0') {
    DAT_fffed2ef = false;
    if ((puVar8 <= puVar6) && (puVar6 < &UNK_0000ccce)) {
      DAT_fffed2ef = true;
    }
  }
  else {
    if (puVar8 < (undefined *)0xa3d) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = puVar8 + -0xa3d;
    }
    DAT_fffed2ef = false;
    if (((undefined *)((uint)puVar8 & 0xffff) <= puVar6) && (puVar6 < &UNK_0000d70b)) {
      DAT_fffed2ef = true;
    }
  }
  iVar7 = (int)param_6;
  if (iVar7 < 0) {
    iVar7 = -iVar7;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
  }
  else if (iVar7 < 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)param_6;
  }
  DAT_fffed2f0 = (iVar7 + 1U & 0xffff) < 0xc5;
  bVar2 = false;
  if ((((param_9 == '\0') && (3 < param_8)) ||
      ((param_9 != '\0' && ((2 < param_7 && (param_7 < 6)))))) && (0x7fff < param_2)) {
    bVar2 = true;
  }
  bVar3 = false;
  if ((param_10 == '\0') && (499 < param_11)) {
    bVar3 = true;
  }
  uVar9 = 0;
  if (((((bool)DAT_fffed2ef) && ((bool)DAT_fffed2f0)) && (bVar1)) &&
     (((cVar10 != '\0' && (bVar2)) && (bVar3)))) {
    uVar9 = 1;
  }
  *param_12 = uVar9;
  return;
}

