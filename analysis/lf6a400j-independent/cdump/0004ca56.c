
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004ca56(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffeeec1;
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_00001540(_DAT_fffeef10 + 1);
    _DAT_fffeef10 = (ushort)uVar1;
  }
  else {
    _DAT_fffeef10 = 0;
  }
  return uVar1;
}

