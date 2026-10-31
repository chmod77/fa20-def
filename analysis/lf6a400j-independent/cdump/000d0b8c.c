
void FUN_000d0b8c(ushort param_1,char *param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)__udiv32_r1_by_r0((uint)param_1 << 0xf,0xa8ba);
  if (&DAT_0000ffff < puVar1) {
    puVar1 = &DAT_0000ffff;
  }
  *param_2 = (char)((ushort)((short)puVar1 + -0x8000) >> 8) + -0x80;
  return;
}

