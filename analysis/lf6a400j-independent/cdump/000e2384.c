
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e2384(char param_1,undefined1 *param_2,ushort *param_3)

{
  ushort uVar1;
  
  *param_2 = DAT_fffed24a;
  uVar1 = 0;
  if (param_1 != '\0') {
    uVar1 = _DAT_fffed248;
  }
  *param_3 = uVar1;
  if (param_1 == '\0') {
    _DAT_fffed248 = 0;
  }
  else if (uVar1 == 0xffff) {
    _DAT_fffed248 = -1;
  }
  else {
    _DAT_fffed248 = uVar1 + 1;
  }
  DAT_fffed24a = 0;
  if ((param_1 != '\0') && (uVar1 < 0xfb)) {
    DAT_fffed24a = 1;
  }
  return;
}

