
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000052ac(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  param_1 = param_1 & 0xff;
  uVar1 = 0;
  if (((param_2 >> 0x10 & (int)_DAT_ffffd040) != 0) ||
     ((param_2 & 0xffff & (int)_DAT_ffffd042) != 0)) {
    if (((int)*(char *)(param_1 * 0x20 + -0x2efb) & 0xfU) <
        ((int)*(short *)(param_1 * 6 + -0x74d2) & 0xfU)) {
      FUN_00005308(param_1,param_2);
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

