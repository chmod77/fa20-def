
void FUN_000d0fcc(ushort *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if (DAT_000d0ff4 < (int)DAT_000d0ff0 * (uint)*param_1) {
    uVar1 = (undefined1)DAT_000d0ff2;
  }
  else {
    uVar1 = (undefined1)((int)DAT_000d0ff0 * (uint)*param_1 >> 0x14);
  }
  *param_2 = uVar1;
  return;
}

