
void FUN_00086a00(ushort param_1,uint param_2,undefined2 *param_3)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)__udiv32_r1_by_r0((param_2 & 0xffff) * 0x4000 + 0x3533333,param_1 + 0xd4d);
  if (&DAT_0000ffff < puVar1) {
    puVar1 = &DAT_0000ffff;
  }
  if (((uint)puVar1 & 0xffff) < 0x4000) {
    *param_3 = (short)puVar1;
  }
  else {
    *param_3 = 0x4000;
  }
  return;
}

