
undefined4 FUN_0015054a(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  param_1 = param_1 & 0xff;
  if (*(char *)(param_1 - 0xd300) == '\0') {
    uVar1 = (int)((int)*(char *)(param_1 - 0xd32c) & 0xf0U) >> 4;
  }
  else {
    uVar1 = (int)*(char *)(param_1 - 0xd32c) & 0xf;
  }
  if (uVar1 == 1) {
    uVar2 = *(undefined4 *)(param_1 * 4 + -0xd2cc);
  }
  else {
    uVar2 = 0;
    if (uVar1 == 2) {
      uVar2 = *(undefined4 *)(param_1 * 4 + -0xd2bc);
    }
  }
  return uVar2;
}

