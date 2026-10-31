
void FUN_000bbbac(uint param_1,uint param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) * 0x3333;
  if (uVar2 < 0x1fe0001) {
    uVar1 = (undefined1)(uVar2 >> 0x11);
  }
  else {
    uVar1 = 0xff;
  }
  *param_3 = uVar1;
  uVar2 = (param_2 & 0xffff) * 0x3333;
  if (uVar2 < 0x1fe0001) {
    uVar1 = (undefined1)(uVar2 >> 0x11);
  }
  else {
    uVar1 = 0xff;
  }
  param_3[1] = uVar1;
  return;
}

