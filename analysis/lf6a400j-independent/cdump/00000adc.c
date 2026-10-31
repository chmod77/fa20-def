
undefined8 FUN_00000adc(uint *param_1,uint *param_2)

{
  undefined4 in_r0;
  undefined4 in_r1;
  uint uVar1;
  
  uVar1 = 0x55555555;
  do {
    do {
      *param_1 = uVar1;
      if (*param_1 != uVar1) {
        DAT_ffff6569 = DAT_ffff6569 | 0x80;
      }
      uVar1 = ~uVar1;
    } while (uVar1 != 0x55555555);
    *param_1 = 0;
    param_1 = param_1 + 1;
  } while (param_1 < param_2);
  return CONCAT44(in_r1,in_r0);
}

