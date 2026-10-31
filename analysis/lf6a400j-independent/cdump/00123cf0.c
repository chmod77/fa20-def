
void FUN_00123cf0(ushort param_1,uint param_2,uint param_3,ushort param_4,ushort *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  puVar2 = (undefined *)((uint)param_1 + (param_3 & 0xffff));
  puVar1 = (undefined *)0xffffffff;
  if ((puVar2 < &UNK_00013e80) && (puVar1 = (undefined *)0x0, (undefined *)0x3e7f < puVar2)) {
    puVar1 = puVar2 + -16000;
  }
  iVar4 = ((uint)puVar1 & 0xffff) - (param_2 & 0xffff);
  puVar3 = (undefined1 *)0xffffffff;
  if ((iVar4 < (int)&DAT_0000c180) && (puVar3 = (undefined1 *)0x0, -0x3e81 < iVar4)) {
    puVar3 = &LAB_00003e80 + iVar4;
  }
  if ((uint)param_4 <= ((uint)puVar3 & 0xffff)) {
    *param_5 = param_4;
    return;
  }
  *param_5 = (ushort)puVar3;
  return;
}

