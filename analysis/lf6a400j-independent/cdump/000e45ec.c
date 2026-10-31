
undefined * FUN_000e45ec(ushort param_1,undefined2 *param_2)

{
  undefined *puVar1;
  undefined2 uVar2;
  
  if (param_1 == 0) {
    *param_2 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = (undefined *)__sdiv32_r1_by_r0(0x40000000,(uint)param_1);
    uVar2 = SUB42(puVar1,0);
    if (&DAT_0000ffff < puVar1) {
      uVar2 = 0xffff;
    }
    *param_2 = uVar2;
  }
  return puVar1;
}

