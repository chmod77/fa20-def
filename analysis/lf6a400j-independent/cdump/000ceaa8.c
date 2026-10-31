
void FUN_000ceaa8(uint param_1,ushort param_2,char param_3,ushort *param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_3 != '\0') {
    uVar1 = LK_133B38(0xfffecd0c,param_1 & 0xff);
    uVar1 = __sdiv32_r1_by_r0((uVar1 & 0xff) << 6,5);
  }
  if ((uVar1 & 0xffff) < (uint)param_2) {
    *param_4 = param_2;
  }
  else {
    *param_4 = (ushort)uVar1;
  }
  return;
}

