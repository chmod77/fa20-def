
void FUN_0008267c(ushort param_1,uint param_2,uint param_3,undefined2 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined *)((uint)param_1 + (param_3 & 0xffff));
  puVar1 = (undefined *)0xffffffff;
  if ((puVar2 < &UNK_00013e80) && (puVar1 = (undefined *)0x0, (undefined *)0x3e7f < puVar2)) {
    puVar1 = puVar2 + -16000;
  }
  iVar3 = ((uint)puVar1 & 0xffff) - (param_2 & 0xffff);
  puVar4 = (undefined1 *)0xffffffff;
  if ((iVar3 < (int)&DAT_0000c180) && (puVar4 = (undefined1 *)0x0, -0x3e81 < iVar3)) {
    puVar4 = &LAB_00003e80 + iVar3;
  }
  if (((uint)puVar4 & 0xffff) < 0x3e81) {
    *param_4 = 16000;
    return;
  }
  *param_4 = (short)puVar4;
  return;
}

