
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00085580(uint param_1,uint param_2,uint param_3,short *param_4,undefined2 *param_5,
                 undefined2 *param_6,undefined2 *param_7,short *param_8,undefined2 *param_9,
                 undefined2 *param_10)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  short sVar8;
  undefined1 *puVar9;
  char cVar10;
  uint local_2c;
  undefined *puStack_28;
  undefined2 *local_24;
  
  local_24 = &DAT_0001231a;
  uVar1 = LK_1351FC((uint)&T_02C8F4,param_1 & 0xffff);
  *param_10 = (short)uVar1;
  uVar2 = 0x400;
  if (0x400 < (param_1 & 0xffff)) {
    uVar2 = param_1;
  }
  puVar3 = (undefined *)0xffffffff;
  if ((uVar2 & 0xffff) * 0x19 != 0) {
    puStack_28 = (undefined *)(param_2 << 9);
    local_2c = param_2 >> 0x17;
    FUN_0016c364(&local_2c);
    if ((local_2c != 0) || (puVar3 = puStack_28, &DAT_0000ffff < puStack_28)) {
      puVar3 = &DAT_0000ffff;
    }
  }
  *param_9 = (short)puVar3;
  sVar8 = (short)((int)((uint)puVar3 & 0xffff) >> 1) - (short)((int)(uVar1 & 0xffff) >> 1);
  uVar1 = (uint)sVar8;
  *param_8 = sVar8;
  uVar2 = LK_1343B8((uint)&T_02C90C,uVar1);
  *param_6 = (short)uVar2;
  cVar10 = 0 < (int)uVar1;
  if (0 >= (int)uVar1) {
    cVar10 = DAT_fffebb7a;
  }
  if ((int)uVar1 < -0x8000) {
    cVar10 = '\0';
  }
  if (cVar10 == '\0') {
    if (_DAT_fffebb76 < 16000) {
      uVar4 = 0xffffffff;
      if ((&LAB_00003e80 + _DAT_fffebb76 < &UNK_00013e80) &&
         (uVar4 = 0, (undefined1 *)0x3e7f < &LAB_00003e80 + _DAT_fffebb76)) {
        uVar4 = (uint)_DAT_fffebb76;
      }
      if ((undefined1 *)(uVar4 & 0xffff) < &LAB_00003e80) {
        _DAT_fffebb74 = (short)uVar4;
        goto LAB_000856b8;
      }
    }
    else {
      iVar5 = _DAT_fffebb76 - 16000;
      uVar4 = 0xffffffff;
      if ((iVar5 < (int)&DAT_0000c180) && (uVar4 = 0, -0x3e81 < iVar5)) {
        uVar4 = (uint)_DAT_fffebb76;
      }
      if (&LAB_00003e80 < (undefined1 *)(uVar4 & 0xffff)) {
        _DAT_fffebb74 = (short)uVar4;
        goto LAB_000856b8;
      }
    }
    _DAT_fffebb74 = 16000;
  }
LAB_000856b8:
  puVar6 = &LAB_00003e80;
  if (cVar10 != '\0') {
    uVar1 = LK_1343B8((uint)&T_02C900,uVar1);
    puVar3 = (undefined *)((uVar1 & 0xffff) + (uint)_DAT_fffebb78);
    puVar6 = (undefined1 *)0xffffffff;
    if ((puVar3 < &UNK_00013e80) && (puVar6 = (undefined1 *)0x0, (undefined *)0x3e7f < puVar3)) {
      puVar6 = puVar3 + -16000;
    }
  }
  if (((uint)puVar6 & 0xffff) < 0x3e81) {
    puVar6 = &LAB_00003e80;
  }
  if (15999 < ((uint)puVar6 & 0xffff)) {
    puVar6 = &LAB_00003e80;
  }
  *param_7 = (short)puVar6;
  if (cVar10 == '\0') {
    puVar7 = (undefined1 *)(int)_DAT_fffebb74;
  }
  else {
    puVar6 = (undefined1 *)((uint)puVar6 & 0xffff);
    puVar9 = puVar6 + (uVar2 & 0xffff);
    puVar7 = (undefined1 *)0xffffffff;
    if ((puVar9 < &UNK_00013e80) && (puVar7 = (undefined1 *)0x0, (undefined1 *)0x3e7f < puVar9)) {
      puVar7 = puVar9 + -16000;
    }
  }
  puVar3 = (undefined *)((param_3 & 0xffff) + ((uint)puVar7 & 0xffff));
  if (puVar3 < &UNK_00013e80) {
    if (puVar3 < (undefined *)0x3e80) {
      *param_4 = 0;
    }
    else {
      *param_4 = (short)puVar3 + -16000;
    }
  }
  else {
    *param_4 = -1;
  }
  *param_5 = (short)puVar7;
  DAT_fffebb7a = cVar10;
  _DAT_fffebb76 = (short)puVar7;
  _DAT_fffebb78 = (short)puVar6;
  return;
}

