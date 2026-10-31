
void FUN_000e3cbc(byte param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  
  if (DAT_fffed2a8 == '\0') {
    bVar2 = 0x3c < param_1;
  }
  else {
    bVar2 = 0x41 < param_1;
  }
  if (DAT_fffed2a9 == '\0') {
    DAT_fffed2a9 = 0x81 < param_1;
  }
  else {
    DAT_fffed2a9 = 0x7c < param_1;
  }
  uVar1 = 1;
  if ((!(bool)(bVar2 ^ 1U)) && (!(bool)DAT_fffed2a9)) {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  DAT_fffed2a8 = bVar2 ^ 1U;
  return;
}

