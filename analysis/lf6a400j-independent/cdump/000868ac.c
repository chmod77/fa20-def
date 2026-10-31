
void FUN_000868ac(uint param_1,uint param_2,undefined2 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  
  uVar1 = LK_1351FC((uint)&T_02C9F4,param_1 & 0xffff);
  iVar2 = ((param_2 & 0xffff) * (uVar1 & 0xffff) >> 0xf) - ((param_2 & 0xffff) * 32000 >> 0x10);
  puVar5 = (undefined1 *)0xffffffff;
  if ((iVar2 < (int)&DAT_0000c180) && (puVar5 = (undefined1 *)0x0, -0x3e81 < iVar2)) {
    puVar5 = &LAB_00003e80 + iVar2;
  }
  uVar1 = LK_1351FC((uint)&T_02C9E8,param_1 & 0xffff);
  puVar4 = (undefined *)((uVar1 & 0xffff) + ((uint)puVar5 & 0xffff));
  puVar3 = (undefined *)0xffffffff;
  if ((puVar4 < &UNK_00013e80) && (puVar3 = (undefined *)0x0, (undefined *)0x3e7f < puVar4)) {
    puVar3 = puVar4 + -16000;
  }
  if (((uint)puVar3 & 0xffff) < 0x3e82) {
    *param_3 = 0x3e81;
  }
  else {
    *param_3 = (short)puVar3;
  }
  return;
}

