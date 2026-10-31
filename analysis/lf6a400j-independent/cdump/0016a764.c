
undefined * FUN_0016a764(int *param_1,ushort param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    if (*param_1 == 0) {
      return (undefined *)0x0;
    }
  }
  else {
    puVar1 = (undefined *)__udiv32_r1_by_r0(*param_1,(uint)param_2);
    if (puVar1 < &DAT_00010000) {
      return puVar1;
    }
  }
  return &DAT_0000ffff;
}

