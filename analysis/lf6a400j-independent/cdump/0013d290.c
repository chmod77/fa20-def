
undefined4 FUN_0013d290(char param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((('\x1d' < param_1) ||
      ((*(uint *)(&DAT_0013de5c + DAT_ffff262d * 4) & (uint)(byte)(&DAT_00168fb1)[param_1]) == 0))
     || ((&DAT_00168fd4)[param_1 * 0x10] == '\0')) {
    uVar1 = 3;
  }
  return uVar1;
}

