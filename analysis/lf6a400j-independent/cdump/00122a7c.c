
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00122a7c(uint param_1,uint param_2,uint param_3,char param_4,uint param_5,ushort param_6,
                 short *param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint local_2c;
  undefined *puStack_28;
  undefined2 *local_24;
  
  local_24 = &DAT_0001231a;
  uVar6 = param_1 & 0xffff;
  if (uVar6 < 0x401) {
    param_1 = 0x400;
  }
  if ((param_1 & 0xffff) * 0x19 == 0) {
    puVar4 = (undefined *)0xffffffff;
  }
  else {
    puStack_28 = (undefined *)(param_2 << 9);
    local_2c = param_2 >> 0x17;
    FUN_0016c364(&local_2c);
    if ((local_2c != 0) || (puVar4 = puStack_28, &DAT_0000ffff < puStack_28)) {
      puVar4 = &DAT_0000ffff;
    }
  }
  uVar6 = LK_135294((uint)&T_02FF98,uVar6);
  uVar6 = (uint)(short)((short)((int)((uint)puVar4 & 0xffff) >> 1) -
                       (short)((int)(uVar6 & 0xffff) >> 1));
  if ((int)uVar6 < -0x8000) {
    param_4 = '\0';
  }
  else if (0 < (int)uVar6) {
    param_4 = '\x01';
  }
  if (param_4 == '\0') {
    if (param_6 < 16000) {
      uVar1 = 0xffffffff;
      if ((&LAB_00003e80 + param_6 < &UNK_00013e80) &&
         (uVar1 = 0, (undefined1 *)0x3e7f < &LAB_00003e80 + param_6)) {
        uVar1 = (uint)param_6;
      }
      if ((undefined1 *)(uVar1 & 0xffff) < &LAB_00003e80) {
        _DAT_fffee240 = (short)uVar1;
        goto LAB_00122b7e;
      }
    }
    else {
      iVar5 = param_6 - 16000;
      uVar1 = 0xffffffff;
      if ((iVar5 < (int)&DAT_0000c180) && (uVar1 = 0, -0x3e81 < iVar5)) {
        uVar1 = (uint)param_6;
      }
      if (&LAB_00003e80 < (undefined1 *)(uVar1 & 0xffff)) {
        _DAT_fffee240 = (short)uVar1;
        goto LAB_00122b7e;
      }
    }
    _DAT_fffee240 = 16000;
  }
LAB_00122b7e:
  puVar2 = &LAB_00003e80;
  if (param_4 != '\0') {
    uVar1 = LK_13448C((uint)&T_02FFB0,uVar6);
    puVar4 = (undefined *)((uVar1 & 0xffff) + (param_5 & 0xffff));
    puVar2 = (undefined1 *)0xffffffff;
    if ((puVar4 < &UNK_00013e80) && (puVar2 = (undefined1 *)0x0, (undefined *)0x3e7f < puVar4)) {
      puVar2 = puVar4 + -16000;
    }
  }
  if (param_4 == '\0') {
    puVar4 = (undefined *)(int)_DAT_fffee240;
  }
  else {
    if (((uint)puVar2 & 0xffff) < 0x3e81) {
      puVar2 = &LAB_00003e80;
    }
    if (15999 < ((uint)puVar2 & 0xffff)) {
      puVar2 = &LAB_00003e80;
    }
    uVar6 = LK_13448C((uint)&T_02FFA4,uVar6);
    puVar3 = (undefined *)((uVar6 & 0xffff) + ((uint)puVar2 & 0xffff));
    puVar4 = (undefined *)0xffffffff;
    if ((puVar3 < &UNK_00013e80) && (puVar4 = (undefined *)0x0, (undefined *)0x3e7f < puVar3)) {
      puVar4 = puVar3 + -16000;
    }
  }
  puVar4 = (undefined *)((param_3 & 0xffff) + ((uint)puVar4 & 0xffff));
  if (puVar4 < &UNK_00013e80) {
    if (puVar4 < (undefined *)0x3e80) {
      *param_7 = 0;
    }
    else {
      *param_7 = (short)puVar4 + -16000;
    }
  }
  else {
    *param_7 = -1;
  }
  return;
}

