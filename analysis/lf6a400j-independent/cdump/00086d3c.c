
void FUN_00086d3c(ushort param_1,uint param_2,short *param_3)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = __udiv32_r1_by_r0((param_2 & 0xffff) * 0x85,0x500);
  puVar2 = (undefined *)((uVar1 & 0xffff) + ((param_2 & 0xffff) * (uint)param_1 >> 0xf));
  if (puVar2 < &UNK_00010d4c) {
    if (&UNK_00000d4b < puVar2) {
      *param_3 = (short)puVar2 + -0xd4c;
    }
    else {
      *param_3 = 0;
    }
  }
  else {
    *param_3 = -1;
  }
  return;
}

