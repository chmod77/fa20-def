
/* WARNING: Removing unreachable block (ram,0x00071a4a) */
/* WARNING: Removing unreachable block (ram,0x00071ad6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00071a34(undefined1 *param_1)

{
  undefined1 uVar1;
  
  if (DAT_fffef591 == '\0') {
    *param_1 = (char)((ushort)_DAT_ffff39d4 >> 8);
    uVar1 = (undefined1)_DAT_ffff39d4;
  }
  else {
    *param_1 = (char)((ushort)_DAT_ffff39d6 >> 8);
    uVar1 = (undefined1)_DAT_ffff39d6;
  }
  param_1[1] = uVar1;
  return param_1 + 2;
}

