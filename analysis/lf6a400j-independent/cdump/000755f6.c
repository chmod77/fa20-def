
undefined1 * FUN_000755f6(undefined1 *param_1,undefined1 *param_2,ushort param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  
  for (uVar2 = 0; uVar2 < param_3; uVar2 = uVar2 + 1) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  }
  return param_1;
}

