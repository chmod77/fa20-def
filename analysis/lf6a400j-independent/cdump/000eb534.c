
void FUN_000eb534(ushort param_1,uint param_2,uint param_3,char param_4,uint param_5,
                 undefined1 *param_6)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = LK_133F40((uint)&T_02F2A4,param_2 & 0xffff);
  puVar5 = (undefined *)(uVar1 & 0xffff);
  uVar1 = LK_133F40((uint)&T_02F2B0,param_5 & 0xffff);
  iVar2 = __udiv32_r1_by_r0((int)puVar5 * (uVar1 & 0xffff),(int)&DAT_0000ffff);
  puVar4 = (undefined *)(iVar2 + param_3 & 0xffff);
  if (puVar4 < (undefined *)(param_3 & 0xffff)) {
    puVar4 = &DAT_0000ffff;
  }
  if ((param_1 < 500) || (uVar3 = 1, puVar4 < puVar5)) {
    uVar3 = DAT_fffed514;
  }
  if (param_4 == '\0') {
    if ((param_1 >= 500) && (puVar4 < puVar5)) {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  *param_6 = uVar3;
  DAT_fffed514 = uVar3;
  return;
}

