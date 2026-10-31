
undefined4 FUN_0006ce1a(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 & 8) == 0) {
    if ((param_2 & 0x60) != 0) {
      uVar1 = 2;
    }
  }
  else if (((param_2 & 0x40) != 0) || (2 < *(byte *)((param_1 & 0xffff) - 0x1152d))) {
    uVar1 = 1;
  }
  return uVar1;
}

