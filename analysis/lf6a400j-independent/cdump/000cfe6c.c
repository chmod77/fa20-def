
void FUN_000cfe6c(uint param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(param_1 >> 8);
  if (&DAT_0000ffff < (undefined *)(param_1 >> 8)) {
    uVar1 = 0xffff;
  }
  *param_2 = uVar1;
  return;
}

