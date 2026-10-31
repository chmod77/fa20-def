
void FUN_0010c44c(uint param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) * 0x7333;
  if (uVar2 < 0x7f80001) {
    uVar1 = (undefined1)(uVar2 >> 0x13);
  }
  else {
    uVar1 = 0xff;
  }
  *param_2 = uVar1;
  return;
}

