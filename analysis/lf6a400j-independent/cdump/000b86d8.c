
void FUN_000b86d8(short param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  short sVar2;
  
  sVar2 = (char)((uint)(param_1 * 0xb4) >> 0x10) + 0x83;
  if (sVar2 < 0x100) {
    if (sVar2 < 0) {
      sVar2 = 0;
    }
    uVar1 = (undefined1)sVar2;
  }
  else {
    uVar1 = 0xff;
  }
  *param_2 = uVar1;
  return;
}

