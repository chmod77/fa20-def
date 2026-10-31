
void FUN_000cafc8(uint param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) * (int)&DAT_0000a3d7;
  if (uVar2 < 0x3fc00001) {
    uVar1 = (undefined1)(uVar2 >> 0x16);
  }
  else {
    uVar1 = 0xff;
  }
  *param_2 = uVar1;
  return;
}

