
uint FUN_001501bc(uint param_1)

{
  uint uVar1;
  
  param_1 = param_1 & 0xff;
  uVar1 = param_1 * 2;
  if (*(short *)(uVar1 - 0xd328) == -1) {
    if (*(short *)(uVar1 - 0xd320) == -1) {
      return uVar1;
    }
    if (((int)*(char *)(param_1 - 0xd32c) & 0x20U) == 0) {
      return (int)*(char *)(param_1 - 0xd32c);
    }
  }
  else if ((*(char *)(param_1 - 0xd32c) != '\x10') &&
          ((*(char *)(param_1 - 0xd32c) != '\x12' || (*(char *)(param_1 - 0xd300) == '\0')))) {
    if ((int)*(char *)(param_1 - 0xd32c) != 0x21) {
      return (int)*(char *)(param_1 - 0xd32c);
    }
    if (*(char *)(param_1 - 0xd300) != '\0') {
      return param_1;
    }
  }
  uVar1 = FUN_0000152c(DAT_ffff2d68 + 1);
  DAT_ffff2d68 = (char)uVar1;
  return uVar1;
}

