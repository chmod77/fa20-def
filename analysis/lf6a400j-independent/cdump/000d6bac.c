
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d6bac(char param_1,char param_2,uint param_3,undefined2 param_4,undefined2 *param_5)

{
  uint uVar1;
  
  if ((param_1 == '\0') || (param_2 == '\0')) {
    param_4 = _DAT_fffececc;
  }
  if ((param_1 != '\0') && (param_2 == '\0')) {
    uVar1 = (param_3 & 0xffff) * 0x29;
    param_4 = 0xffff;
    if (uVar1 < 0x1fffe1) {
      param_4 = (undefined2)(uVar1 >> 5);
    }
  }
  *param_5 = param_4;
  _DAT_fffececc = param_4;
  return;
}

