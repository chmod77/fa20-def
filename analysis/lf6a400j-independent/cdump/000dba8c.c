
void FUN_000dba8c(uint param_1,uint param_2,uint param_3,uint param_4,undefined2 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = (undefined *)((param_1 & 0xffff) + (param_2 & 0xffff) + (param_3 & 0xffff));
  puVar2 = puVar1 + (param_4 & 0xffff);
  if ((puVar1 <= puVar2) && (puVar2 < &DAT_00010000)) {
    *param_5 = (short)puVar2;
    return;
  }
  *param_5 = 0xffff;
  return;
}

