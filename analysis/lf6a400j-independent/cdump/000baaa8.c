
void FUN_000baaa8(short param_1,undefined1 *param_2)

{
  short sVar1;
  undefined1 uVar2;
  
  sVar1 = 0x7f - (char)((uint)(param_1 * 0xb4) >> 0x10);
  if (sVar1 < 0x100) {
    if (sVar1 < 0) {
      sVar1 = 0;
    }
    uVar2 = (undefined1)sVar1;
  }
  else {
    uVar2 = 0xff;
  }
  *param_2 = uVar2;
  return;
}

