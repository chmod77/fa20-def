
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004ca7e(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffeeebf;
  if ((uVar1 & 1) == 0) {
    _DAT_fffeeeda = 0;
  }
  else {
    uVar1 = FUN_00001540(_DAT_fffeeeda + 1);
    _DAT_fffeeeda = (ushort)uVar1;
  }
  return uVar1;
}

