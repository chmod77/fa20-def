
void FUN_000ab758(ushort param_1,uint param_2,ushort *param_3)

{
  uint uVar1;
  
  uVar1 = __udiv32_r1_by_r0((param_2 & 0xff) << 10,0x19);
  if ((uVar1 & 0xffff) < (uint)param_1) {
    *param_3 = param_1;
  }
  else {
    *param_3 = (ushort)uVar1;
  }
  return;
}

