
void FUN_0008034c(ushort param_1,uint param_2,uint param_3,ushort param_4,ushort *param_5,
                 ushort *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ushort uVar4;
  
  puVar2 = (undefined *)((uint)param_1 + (param_3 & 0xffff));
  puVar1 = (undefined *)0xffffffff;
  if ((puVar2 < &UNK_00013e80) && (puVar1 = (undefined *)0x0, (undefined *)0x3e7f < puVar2)) {
    puVar1 = puVar2 + -16000;
  }
  iVar3 = ((uint)puVar1 & 0xffff) - (param_2 & 0xffff);
  uVar4 = 0xffff;
  if ((iVar3 < (int)&DAT_0000c180) && (uVar4 = 0, -0x3e81 < iVar3)) {
    uVar4 = (short)iVar3 + 16000;
  }
  *param_6 = uVar4;
  if (param_4 <= uVar4) {
    *param_5 = param_4;
    return;
  }
  *param_5 = uVar4;
  return;
}

