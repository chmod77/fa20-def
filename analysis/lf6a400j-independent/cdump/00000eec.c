
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00000eec(void)

{
  int *piVar1;
  undefined4 in_r0;
  undefined4 in_r1;
  
  piVar1 = _DAT_ffffab48;
  do {
    _DAT_ffffab48 = piVar1;
    piVar1 = _DAT_ffffab48 + -1;
  } while (_DAT_ffffab48[-1] != -1);
  return CONCAT44(in_r1,in_r0);
}

