
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00067142(void)

{
  uint uVar1;
  
  DAT_ffff01c9 = DAT_ffff01c9 + '\x01';
  uVar1 = 0;
  if (1000 < _DAT_ffff002a) {
    uVar1 = (int)(short)_DAT_ffff002a - 1000;
  }
  uVar1 = ((int)(uVar1 & 0xffff) >> 6) + 10;
  if (0x3f2 < uVar1) {
    uVar1 = 0x3f2;
  }
  _DAT_ffff00b4 = (undefined2)uVar1;
  if (uVar1 < 10) {
    _DAT_ffff00b4 = 10;
  }
  if ((((DAT_ffff34f7 & 0x40) != 0) && ((DAT_fffefff3 & 0x20) != 0)) && ((DAT_fffefff3 & 0x10) != 0)
     ) {
    _DAT_ffff00b4 = 0x2cb;
  }
  return;
}

