
void FUN_0006cabe(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 uVar1;
  
  for (param_3 = param_3 & 0xff; 0 < (int)param_3; param_3 = param_3 - 1) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  }
  return;
}

