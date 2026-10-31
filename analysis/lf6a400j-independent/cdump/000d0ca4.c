
void FUN_000d0ca4(byte *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if ((uint)*param_1 * 0x41 < 0x3fc1) {
    uVar1 = (undefined1)((int)((uint)*param_1 * 0x41) >> 6);
  }
  else {
    uVar1 = 0xff;
  }
  *param_2 = uVar1;
  return;
}

