
uint FUN_00039388(void)

{
  uint uVar1;
  
  if ((DAT_ffff8867 & 1) == 0) {
    if ((DAT_ffff8868 & 1) == 0) {
      DAT_ffff856d = 0;
      DAT_ffff856e = DAT_ffff856e & 0xfe;
      goto LAB_000393c6;
    }
  }
  else {
    DAT_ffff856d = DAT_ffff856d + 1;
    if (DAT_ffff856d < 10) goto LAB_000393c6;
  }
  DAT_ffff856e = DAT_ffff856e | 1;
LAB_000393c6:
  if (((int)(char)DAT_ffff856e & 1U) != 0) {
    return (int)(char)DAT_ffff856e;
  }
  thunk_FUN_00057452();
  uVar1 = FUN_0003a4be();
  return uVar1;
}

