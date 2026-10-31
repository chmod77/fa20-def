
void FUN_000cd80c(ushort param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_1 < 0x999b) {
    uVar1 = DAT_fffecc94;
  }
  *param_2 = uVar1;
  DAT_fffecc94 = uVar1;
  return;
}

