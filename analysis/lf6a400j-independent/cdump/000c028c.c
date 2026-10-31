
void FUN_000c028c(byte param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((param_1 != DAT_fffec980) && (param_1 < 4)) {
    uVar1 = 1;
  }
  *param_2 = uVar1;
  DAT_fffec980 = param_1;
  return;
}

