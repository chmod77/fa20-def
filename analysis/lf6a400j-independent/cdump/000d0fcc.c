
void FUN_000d0fcc(ushort *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if ((uint)*param_1 * 0x3333 < 0xff00001) {
    uVar1 = (undefined1)((uint)*param_1 * 0x3333 >> 0x14);
  }
  else {
    uVar1 = 0xff;
  }
  *param_2 = uVar1;
  return;
}

