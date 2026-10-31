
undefined4 FUN_0013d23a(short param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((0x3c < param_1) ||
     ((*(uint *)(&DAT_0013de5c + DAT_ffff262d * 4) & *(uint *)(&DAT_00169670 + param_1 * 4)) == 0))
  {
    uVar1 = 3;
  }
  return uVar1;
}

