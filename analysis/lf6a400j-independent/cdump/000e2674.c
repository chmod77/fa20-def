
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e2674(char param_1,undefined4 param_2,undefined1 *param_3,undefined2 *param_4,
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
    if (_DAT_fffed258 != -1) {
      uVar2 = _DAT_fffed258 + 1;
    }
  }
  *param_5 = uVar2;
  p1 = 0;
  if (DAT_fffed25d == '\0') {
    p1 = (uint)_DAT_fffed25a;
  }
  if ((param_1 != '\0') && (p1 = 0xffffffff, _DAT_fffed25a != -1)) {
    p1 = (int)_DAT_fffed25a + 1;
  }
  *param_4 = (short)p1;
  if ((DAT_fffed25c == '\0') ||
     ((uVar1 = LK_133F40((uint)&T_02F0F8,p1), (uVar1 & 0xffff) <= (uint)uVar2 && (param_1 == '\0')))
     ) {
    DAT_fffed25e = 1;
  }
  if (param_1 != '\0') {
    DAT_fffed25e = 0;
  }
  *param_3 = DAT_fffed25e;
  _DAT_fffed258 = uVar2;
  _DAT_fffed25a = (short)p1;
  DAT_fffed25d = DAT_fffed25e;
  DAT_fffed25c = 1;
  return;
}

