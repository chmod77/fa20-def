
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004ead4(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffeeec1;
  if ((uVar1 & 1) == 0) {
    if (0x18 < DAT_fffef056) {
      _DAT_fffeef12 = FUN_00001540(_DAT_fffeef12 + 1);
      DAT_fffef056 = 0;
    }
    uVar1 = FUN_0000152c(DAT_fffef056 + 1);
    DAT_fffef056 = (byte)uVar1;
  }
  else {
    _DAT_fffeef12 = 0;
    DAT_fffef056 = 0;
  }
  return uVar1;
}

