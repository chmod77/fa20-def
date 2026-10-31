
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007f084(ushort param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = (uint)param_1 - (uint)_DAT_fffeba4c;
  if (iVar1 < 0x80) {
    if (iVar1 < -0x80) {
      *param_2 = '\0';
    }
    else {
      *param_2 = (char)iVar1 + -0x80;
    }
  }
  else {
    *param_2 = -1;
  }
  _DAT_fffeba4c = param_1;
  return;
}

