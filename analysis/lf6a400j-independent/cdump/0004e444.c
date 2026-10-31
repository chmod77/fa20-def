
void FUN_0004e444(void)

{
  undefined4 uVar1;
  
  if ((DAT_fffef09e & 4) == 0) {
    if (DAT_fffef0d4 < 0x85) {
      uVar1 = FUN_0016bd28(DAT_fffef0d4 - 1);
      DAT_fffef0d3 = FUN_0016b608(uVar1,0x7b);
      goto LAB_0004e498;
    }
  }
  if (((DAT_fffef09e & 4) != 0) && (0x7b < DAT_fffef0d4)) {
    uVar1 = FUN_0000152c(DAT_fffef0d4 + 1);
    DAT_fffef0d3 = FUN_0016bd40(uVar1,0x85);
  }
LAB_0004e498:
  if (DAT_fffef0d3 < 0x85) {
    if (DAT_fffef0d3 < 0x7c) {
      DAT_fffef053 = DAT_fffef053 & 0xfb;
    }
  }
  else {
    DAT_fffef053 = DAT_fffef053 | 4;
  }
  DAT_fffef0d4 = DAT_fffef0d3;
  return;
}

