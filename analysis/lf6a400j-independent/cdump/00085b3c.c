
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00085b3c(undefined2 param_1,uint param_2,short *param_3)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)((uint)_DAT_fffebb98 + (param_2 & 0xffff));
  if (puVar1 < &UNK_00013e80) {
    if (puVar1 < (undefined *)0x3e80) {
      *param_3 = 0;
    }
    else {
      *param_3 = (short)puVar1 + -16000;
    }
  }
  else {
    *param_3 = -1;
  }
  _DAT_fffebb98 = param_1;
  return;
}

