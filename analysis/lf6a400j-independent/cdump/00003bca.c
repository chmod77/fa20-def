
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003bca(void)

{
  ushort uVar1;
  
  uVar1 = _DAT_fffedb40;
  if (DAT_ffffab9d == '\0') {
    uVar1 = _DAT_fffeda80;
  }
  _DAT_ffffd3c4 = (uVar1 & 0xf8ff) + 0x200;
  return;
}

