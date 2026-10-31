
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb1a4(char param_1,undefined2 param_2,uint param_3,short param_4,undefined2 *param_5)

{
  uint local_14;
  undefined *puStack_10;
  
  if (param_1 == '\0') {
    puStack_10 = (undefined *)(int)_DAT_fffed4e0;
  }
  else {
    puStack_10 = (undefined *)0xffffffff;
    if (param_4 != 0) {
      puStack_10 = (undefined *)(param_3 << 1);
      local_14 = (uint)((param_3 & 0x80000000) != 0);
      FUN_0016c364(&local_14,param_4,param_3 << 1 | local_14,param_4,&local_14);
      if ((local_14 != 0) || (&DAT_0000ffff < puStack_10)) {
        puStack_10 = &DAT_0000ffff;
      }
    }
  }
  _DAT_fffed4e0 = (short)puStack_10;
  if (param_4 == 0) {
    _DAT_fffed4e0 = param_2;
  }
  *param_5 = _DAT_fffed4e0;
  return;
}

