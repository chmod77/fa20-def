
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb4f0(char param_1,char param_2,ushort *param_3)

{
  ushort uVar1;
  
  uVar1 = _DAT_fffed510;
  if (((param_1 != '\0') && (_DAT_fffed510 < 500)) && (uVar1 = 0xffff, _DAT_fffed510 != 0xffff)) {
    uVar1 = _DAT_fffed510 + 1;
  }
  if (param_2 != '\0') {
    uVar1 = 0;
  }
  *param_3 = uVar1;
  _DAT_fffed510 = uVar1;
  return;
}

