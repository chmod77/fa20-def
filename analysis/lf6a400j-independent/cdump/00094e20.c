
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_00094e20(byte param_1,char param_2,char param_3,char param_4,char param_5,uint param_6,
            uint param_7,char param_8,undefined2 *param_9,ushort *param_10,undefined2 *param_11,
            undefined2 *param_12,undefined2 *param_13)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  
  uVar2 = param_7 + 0x666;
  puVar4 = (undefined *)(uVar2 & 0xffff);
  if (puVar4 < (undefined *)(param_7 & 0xffff)) {
    uVar2 = 0xffffffff;
    puVar4 = &DAT_0000ffff;
  }
  uVar6 = 0;
  if (puVar4 <= (undefined *)(param_6 & 0xffff)) {
    uVar6 = param_6 - uVar2;
  }
  uVar1 = LK_133F40((uint)&T_02D390,uVar6);
  *param_12 = (short)uVar1;
  uVar2 = LK_133F40((uint)&T_02D39C,uVar6);
  *param_11 = (short)uVar2;
  if (param_5 == '\0') {
    uVar2 = uVar1;
  }
  puVar4 = &UNK_00000044;
  *param_13 = (short)uVar2;
  if (param_5 == '\0') {
    uVar3 = 0x1e00;
    puVar4 = &DAT_00001e00;
  }
  else {
    uVar3 = 0;
  }
  *param_10 = uVar3;
  if (param_4 == '\0') {
    puVar5 = (undefined *)(int)(short)_DAT_fffebec0;
  }
  else {
    uVar6 = 0;
    if ((uVar2 & 0xffff) <= (uint)_DAT_fffebec0) {
      uVar6 = (int)(short)_DAT_fffebec0 - (uVar2 & 0xffff);
    }
    puVar5 = (undefined *)(uVar6 & 0xffff);
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
  }
  if (param_3 != '\0') {
    puVar5 = (undefined *)((uint)_DAT_fffebec0 + (uint)uVar3);
    puVar4 = (undefined *)0xffffffff;
    if (&DAT_0000fffe < puVar5) {
      puVar4 = (undefined *)0xffffffff;
      puVar5 = puVar4;
    }
    else if (&DAT_0000ffff < puVar5) {
      puVar5 = &DAT_0000ffff;
    }
  }
  _DAT_fffebec0 = (ushort)puVar5;
  if (((param_8 != '\0') || (param_1 < 0x55)) ||
     (puVar4 = (undefined *)(int)param_2, puVar4 != (undefined *)0x0)) {
    _DAT_fffebec0 = 0;
  }
  *param_9 = _DAT_fffebec0;
  return puVar4;
}

