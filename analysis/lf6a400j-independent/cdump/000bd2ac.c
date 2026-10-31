
void FUN_000bd2ac(ushort param_1,uint param_2,short param_3,ushort param_4,ushort *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  
  uVar3 = (param_2 & 0xffff) * (uint)param_1;
  if (uVar3 < 0x7fff8001) {
    puVar1 = (undefined *)(uVar3 >> 0xf);
  }
  else {
    puVar1 = &DAT_0000ffff;
  }
  puVar2 = (undefined *)(((uint)puVar1 & 0xffff) + (int)param_3);
  puVar1 = &DAT_0000ffff;
  if (((int)puVar2 < (int)&DAT_00010000) && (puVar1 = puVar2, (int)puVar2 < 0)) {
    puVar1 = (undefined *)0x0;
  }
  if (((uint)puVar1 & 0xffff) < (uint)param_4) {
    *param_5 = (ushort)puVar1;
  }
  else {
    *param_5 = param_4;
  }
  return;
}

