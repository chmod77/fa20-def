
void FUN_000d5444(uint param_1,uint param_2,undefined2 *param_3)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)
           (((param_2 & 0xff) * (param_1 & 0xffff) >> 8) + ((int)(param_1 & 0xffff) >> 1));
  if (&DAT_0000ffff < puVar1) {
    puVar1 = &DAT_0000ffff;
  }
  *param_3 = (short)puVar1;
  return;
}

