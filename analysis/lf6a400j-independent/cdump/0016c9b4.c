
uint FUN_0016c9b4(void)

{
  uint in_r0;
  uint uVar1;
  int in_r1;
  
  if (in_r1 < 0) {
    return in_r0;
  }
  if (in_r1 < 0x20) {
    if (((in_r0 & 0x80000000) == 0) && (8 < in_r1)) {
      uVar1 = FUN_0016c900();
      return uVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x0016c9d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&LAB_0016ca32 + (char)(&DAT_0016c994)[in_r1]))();
    return uVar1;
  }
  if ((in_r0 & 0x80000000) == 0) {
    return 0;
  }
  return 0xffffffff;
}

