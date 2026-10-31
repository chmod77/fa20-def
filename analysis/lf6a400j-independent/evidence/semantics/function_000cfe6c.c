
void FUN_000cfe6c(uint param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(param_1 >> 8);
  if (PTR_DAT_000cfe7c < (undefined *)(param_1 >> 8)) {
    uVar1 = SUB42(PTR_DAT_000cfe7c,0);
  }
  *param_2 = uVar1;
  return;
}

