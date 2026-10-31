
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010659c(char param_1,byte param_2,byte param_3,uint param_4,char param_5,
                 undefined2 *param_6,ushort *param_7)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar5;
  undefined2 uVar4;
  ushort uVar6;
  ushort local_40 [8];
  ushort auStack_30 [12];
  
  bVar5 = param_2 + 1;
  if (0xfe < param_2) {
    bVar5 = 0xff;
  }
  if (bVar5 < 8) {
    if (bVar5 == 0) {
      bVar5 = 1;
    }
  }
  else {
    bVar5 = 7;
  }
  bVar3 = param_3 + 1;
  if (0xfe < param_3) {
    bVar3 = 0xff;
  }
  if (bVar3 < 8) {
    if (bVar3 == 0) {
      bVar3 = 1;
    }
  }
  else {
    bVar3 = 7;
  }
  local_40[0] = _DAT_fffedab4;
  local_40[1] = 0x100;
  local_40[2] = 0x100;
  local_40[3] = 0x100;
  local_40[4] = 0x100;
  local_40[5] = 0x100;
  local_40[6] = 0x100;
  auStack_30[0] = _DAT_fffedab4;
  auStack_30[1] = 0xb8;
  auStack_30[2] = 0xb8;
  auStack_30[3] = 0xb8;
  auStack_30[4] = 0xb8;
  auStack_30[5] = 0xb8;
  auStack_30[6] = 0xb8;
  uVar1 = (uint)(byte)(bVar3 - 1) * 2;
  uVar6 = local_40[(byte)(bVar5 - 1)];
  if (param_1 == '\0') {
    uVar6 = auStack_30[(byte)(bVar3 - 1)];
  }
  *param_7 = uVar6;
  if (param_1 == '\0') {
    param_7 = (ushort *)((uint)uVar6 * 0x44cd);
    if (param_5 != '\0') {
      iVar2 = __udiv32_r1_by_r0((param_4 & 0xff) << 9,5);
      *param_6 = (short)iVar2;
      _DAT_fffedab4 = uVar6;
      return;
    }
  }
  else {
    uVar1 = (uint)uVar6 * 0x44cd;
  }
  if (param_1 == '\0') {
    if (param_7 < (ushort *)0x3fffc01) {
      uVar4 = (undefined2)((uint)param_7 >> 10);
      goto LAB_001066b2;
    }
  }
  else if (uVar1 < 0x3fffc01) {
    uVar4 = (undefined2)(uVar1 >> 10);
    goto LAB_001066b2;
  }
  uVar4 = 0xffff;
LAB_001066b2:
  *param_6 = uVar4;
  _DAT_fffedab4 = uVar6;
  return;
}

