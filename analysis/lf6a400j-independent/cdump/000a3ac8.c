
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a3ac8(int param_1,byte param_2,int param_3,char param_4,undefined1 *param_5)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (3 < param_2) {
      param_2 = 4;
    }
    iVar1 = (short)(param_2 - 1) * 2;
    _DAT_fffec2dc = *(ushort *)(param_1 + iVar1);
    _DAT_fffec2de = *(ushort *)(param_3 + iVar1);
  }
  if (param_4 == '\0') {
    *param_5 = 0;
  }
  else {
    DAT_fffec2e0 = _DAT_fffec2de < _DAT_fffec2dc;
    *param_5 = DAT_fffec2e0;
  }
  return;
}

