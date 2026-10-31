
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00000d80(undefined4 param_1)

{
  undefined4 in_r0;
  undefined4 in_r1;
  undefined1 *puVar1;
  
  _DAT_ffffab4c = 0;
  _DAT_ffffab50 = 0;
  DAT_ffffab6e = 0;
  DAT_ffffab6f = 0;
  DAT_ffffab70 = 0;
  puVar1 = &DAT_ffffab6e;
  _DAT_ffffab44 = param_1;
  do {
    puVar1 = puVar1 + -1;
    *puVar1 = 0xff;
  } while ((undefined1 *)0xffffab66 < puVar1);
  FUN_00000e34();
  _DAT_ffffab48 = &DAT_ffffbffc;
  FUN_00000eec();
  _DAT_fffff712 = 0x41;
  _DAT_fffff716 = 0x27f;
  _DAT_fffff714 = 0;
  _DAT_fffff710 = _DAT_fffff710 & 0xfffe | 1;
  return CONCAT44(in_r1,in_r0);
}

