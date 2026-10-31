
void FUN_000d0754(uint param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar1 = (param_1 & 0xff) * 0x41;
  if (uVar1 < 0x3fc1) {
    uVar2 = (undefined1)((int)uVar1 >> 6);
  }
  else {
    uVar2 = 0xff;
  }
  *param_2 = uVar2;
  return;
}

