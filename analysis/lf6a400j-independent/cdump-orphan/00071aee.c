
/* WARNING: Removing unreachable block (ram,0x00071b04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00071aee(undefined1 *param_1)

{
  if (DAT_fffef591 == '\0') {
    *param_1 = (char)((ushort)_DAT_ffff39c2 >> 8);
    param_1[1] = (char)_DAT_ffff39c2;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1 + 2;
}

