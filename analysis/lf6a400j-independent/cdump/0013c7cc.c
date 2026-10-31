
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0013c7cc(char param_1)

{
  int iVar1;
  
  iVar1 = FUN_0013d1a0(0x19);
  if ((iVar1 == 0) && (iVar1 = FUN_0013d290((int)param_1), iVar1 == 0)) {
    if (**(char **)(&DAT_00168fd8 + param_1 * 0x10) != '\0') {
      **(char **)(&DAT_00168fd8 + param_1 * 0x10) = '\0';
      return 0;
    }
    iVar1 = 5;
  }
  FUN_0013d054(iVar1,0x19,_DAT_ffff2634);
  return iVar1;
}

