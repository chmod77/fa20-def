
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000508fa(void)

{
  uint uVar1;
  
  uVar1 = FUN_00052b4a(&PTR_DAT_00163acc,(int)_DAT_fffeeee0);
  if ((0xb800 < _DAT_fffeeede) || (uVar1 <= _DAT_ffff166c)) {
    uVar1 = (int)DAT_fffef3b8 | 8;
    DAT_fffef3b8 = (char)uVar1;
  }
  return uVar1;
}

