
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a5bec(char param_1,char param_2,ushort param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  
  if (((param_1 == '\0') || (uVar2 = param_3, param_2 == '\0')) && (uVar2 = 0, 0x55 < _DAT_fffec394)
     ) {
    uVar2 = _DAT_fffec394 - 0x56;
  }
  if ((param_1 != '\0') && (param_2 == '\0')) {
    uVar1 = _DAT_fffec394 + 0x56;
    if (uVar1 < _DAT_fffec394) {
      uVar1 = 0xffff;
    }
    uVar2 = param_3;
    if (uVar1 <= param_3) {
      uVar2 = uVar1;
    }
  }
  *param_4 = uVar2;
  _DAT_fffec394 = uVar2;
  return;
}

