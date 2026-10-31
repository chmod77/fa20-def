
void FUN_000ebdb0(ushort param_1,undefined2 *param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)__udiv32_r1_by_r0((uint)param_1 << 0xd,0xa8ba);
  if (&DAT_0000ffff < puVar1) {
    puVar1 = &DAT_0000ffff;
  }
  if (param_1 == 0) {
    *param_2 = 0x2000;
  }
  else {
    *param_2 = (short)puVar1;
  }
  return;
}

