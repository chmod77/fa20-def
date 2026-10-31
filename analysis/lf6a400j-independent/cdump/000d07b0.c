
void FUN_000d07b0(uint param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) * (int)&DAT_0000828f;
  if (uVar2 < 0x1fe0001) {
    uVar1 = (undefined1)(uVar2 >> 0x11);
  }
  else {
    uVar1 = 0xff;
  }
  *param_2 = uVar1;
  return;
}

