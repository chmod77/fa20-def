
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000202c(undefined4 param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined1 in_r2;
  
  *param_2 = in_r2;
  bVar1 = DAT_ffff8723 | 0x40;
  if (((int)(char)DAT_ffff8723 & 0x80U) == 0) {
    bVar1 = DAT_ffff8723 & 0xbf;
  }
  DAT_ffff8723 = bVar1;
  if ((_DAT_fffff75e & 0x10) == 0) {
    DAT_ffffab98 = DAT_ffffab98 & 0xbf;
  }
  return;
}

