
void FUN_000850dc(char param_1,uint param_2,int param_3,ushort param_4,undefined1 *param_5)

{
  bool bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)(param_2 + param_3 & 0xffff);
  if (puVar3 < (undefined *)(param_2 & 0xffff)) {
    puVar3 = &DAT_0000ffff;
  }
  bVar1 = 0x58 < (uint)((int)puVar3 >> 1);
  if (((param_1 != '\0') || (param_4 < 0xb2)) || (uVar2 = 1, bVar1)) {
    uVar2 = DAT_fffebb68;
  }
  if ((param_4 >= 0xb2) && (bVar1)) {
    uVar2 = 0;
  }
  *param_5 = uVar2;
  DAT_fffebb68 = uVar2;
  return;
}

