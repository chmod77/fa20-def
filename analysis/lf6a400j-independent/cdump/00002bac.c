
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002bac(void)

{
  undefined1 in_r0;
  int in_r2;
  
  *(undefined1 *)(in_r2 + 1) = in_r0;
  *(undefined1 *)(in_r2 + 2) = 0x12;
  _DAT_ffff7b98 = 3;
  return 0x12;
}

