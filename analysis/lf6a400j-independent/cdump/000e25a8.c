
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e25a8(char param_1,undefined4 param_2,undefined1 *param_3,undefined2 *param_4,
                 ushort *param_5)

{
  uint uVar1;
  uint p1;
  ushort uVar2;
  
  if (param_1 != '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffff;
    if (_DAT_fffed252 != -1) {
      uVar2 = _DAT_fffed252 + 1;
    }
  }
  *param_5 = uVar2;
  if (DAT_fffed255 == '\0') {
    p1 = (uint)_DAT_fffed250;
  }
  else {
    p1 = 0;
  }
  if ((param_1 != '\0') && (p1 = 0xffffffff, _DAT_fffed250 != -1)) {
    p1 = (int)_DAT_fffed250 + 1;
  }
  *param_4 = (short)p1;
  if ((DAT_fffed254 == '\0') ||
     ((uVar1 = LK_133F40((uint)&T_02F0EC,p1), (uVar1 & 0xffff) <= (uint)uVar2 && (param_1 == '\0')))
     ) {
    DAT_fffed256 = 1;
  }
  if (param_1 != '\0') {
    DAT_fffed256 = 0;
  }
  *param_3 = DAT_fffed256;
  _DAT_fffed252 = uVar2;
  _DAT_fffed250 = (short)p1;
  DAT_fffed255 = DAT_fffed256;
  DAT_fffed254 = 1;
  return;
}

