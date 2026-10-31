
/* WARNING: Removing unreachable block (ram,0x000fcec0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fcd98(char param_1,uint param_2,undefined *param_3,char param_4,char param_5,
                 byte param_6,ushort param_7,char param_8,char param_9,char param_10,
                 undefined1 *param_11,undefined4 param_12,char *param_13,ushort *param_14,
                 undefined4 param_15,byte *param_16)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ushort uVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 uVar10;
  char cVar11;
  undefined *puVar12;
  
  uVar5 = LK_133F40((uint)&T_02F67C,(uint)param_3);
  puVar8 = (undefined *)(uVar5 & 0xffff);
  bVar7 = 6;
  if (param_6 < 6) {
    bVar7 = param_6;
  }
  if (bVar7 < 2) {
    bVar7 = 1;
  }
  if (bVar7 != param_6) {
    param_6 = 9;
  }
  bVar4 = true;
  if ((param_6 != 6) && (param_6 != 1)) {
    bVar4 = false;
  }
  if (puVar8 < (undefined *)0x200) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = puVar8 + -0x200;
  }
  puVar12 = (undefined *)(param_2 & 0xffff);
  bVar1 = false;
  if (((undefined *)((uint)puVar9 & 0xffff) < puVar12) &&
     ((puVar8 <= puVar12 || (DAT_fffed8f6 != '\0')))) {
    bVar1 = true;
  }
  bVar2 = false;
  if ((&DAT_0000aa00 < puVar12) && ((&UNK_0000abff < puVar12 || (DAT_fffed8f8 != '\0')))) {
    bVar2 = true;
  }
  bVar3 = false;
  if ((&UNK_000022f7 < param_3) && (((undefined *)0x2576 < param_3 || (DAT_fffed8f7 != '\0')))) {
    bVar3 = true;
  }
  if (((param_8 == '\0') && (param_4 == '\0')) && (param_5 != '\0')) {
    cVar11 = '\x01';
    if (((bVar1) && (!bVar2)) && ((bVar3 && (99 < param_7)))) {
      cVar11 = '\0';
    }
  }
  else {
    cVar11 = '\x02';
  }
  *param_13 = cVar11;
  if (cVar11 == '\x02') {
    param_6 = 0;
  }
  else if ((param_1 == '\x01') || (param_10 == '\x01')) {
    param_6 = 7;
  }
  else if ((cVar11 == '\x01') || (param_6 == 3)) {
    param_6 = 4;
  }
  else if ((bVar4) && (param_9 == '\0')) {
    param_6 = 2;
  }
  *param_16 = param_6;
  bVar4 = true;
  if ((param_6 != 6) && (param_6 != 1)) {
    bVar4 = false;
  }
  *(bool *)param_15 = bVar4;
  uVar6 = 0;
  if (bVar4) {
    uVar6 = 0x14;
  }
  *(bool *)param_12 = param_6 == 2;
  uVar10 = 0;
  if ((param_6 == 4) && (cVar11 == '\x01')) {
    uVar10 = 1;
  }
  *param_11 = uVar10;
  _DAT_fffed8f4 = uVar6 + _DAT_fffed8f4;
  if (_DAT_fffed8f4 < uVar6) {
    _DAT_fffed8f4 = 0xffff;
  }
  if (_DAT_fffed8f4 < 0x13ed) {
    *param_14 = _DAT_fffed8f4;
  }
  else {
    *param_14 = 0x13ec;
  }
  DAT_fffed8f6 = bVar1;
  DAT_fffed8f8 = bVar2;
  DAT_fffed8f7 = bVar3;
  return;
}

