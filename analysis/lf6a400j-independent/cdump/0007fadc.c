
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007fadc(char param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = 0;
  if ((param_1 == '\0') && (uVar1 = _DAT_fffeba90 + 1, uVar1 == 0)) {
    uVar1 = 0xffff;
  }
  if (0xfffe < uVar1) {
    uVar1 = 0xffff;
  }
  *param_2 = uVar1;
  _DAT_fffeba90 = uVar1;
  return;
}

