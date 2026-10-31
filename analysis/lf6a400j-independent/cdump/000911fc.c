
void FUN_000911fc(ushort param_1,uint param_2,uint param_3,undefined2 *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  
  puVar2 = (undefined *)((param_3 & 0xff) + 0x100);
  uVar1 = 0xffffffff;
  if ((puVar2 < &UNK_00010080) && (uVar1 = 0, &UNK_0000007f < puVar2)) {
    uVar1 = (param_3 & 0xff) + 0x80;
  }
  uVar1 = (uVar1 & 0xffff) * (uint)param_1;
  puVar2 = (undefined *)(uVar1 >> 8);
  if (0xffff00 < uVar1) {
    puVar2 = &DAT_0000ffff;
  }
  uVar1 = (param_2 & 0xffff) * ((uint)puVar2 & 0xffff);
  uVar3 = (undefined2)(uVar1 >> 8);
  if (0xffff00 < uVar1) {
    uVar3 = 0xffff;
  }
  *param_4 = uVar3;
  return;
}

