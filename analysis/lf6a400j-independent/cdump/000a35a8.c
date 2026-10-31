
void FUN_000a35a8(ushort param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if (param_1 < 0xff1) {
    uVar1 = (undefined1)((int)(uint)param_1 >> 4);
  }
  else {
    uVar1 = 0xff;
  }
  *param_2 = uVar1;
  return;
}

