
void FUN_000b2b74(char param_1,byte param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  
  if (DAT_fffec6ac == '\0') {
    iVar1 = 0x26;
  }
  else {
    iVar1 = 0x20;
  }
  DAT_fffec6ac = (uint)(iVar1 >> 1) <= (uint)param_2;
  uVar2 = 0;
  if (((bool)DAT_fffec6ac) && (param_1 != '\0')) {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  return;
}

