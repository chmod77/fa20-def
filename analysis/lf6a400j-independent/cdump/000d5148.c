
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d5148(uint param_1,uint param_2,char param_3,undefined1 param_4,char param_5,
                 uint param_6,undefined2 *param_7)

{
  uint uVar1;
  uint uVar2;
  
  if ((((param_1 & 0xffff) < 0x5666) &&
      (((0x42a < (param_2 & 0xffff) || (param_3 != '\0')) && (param_5 != '\0')))) &&
     (DAT_fffecea2 == '\0')) {
    uVar1 = LK_133F40((uint)&T_02EDA4,param_1 & 0xffff);
    uVar2 = LK_1364B8((uint)&T_02EDB0,param_6 & 0xffff,param_2 & 0xffff);
    uVar1 = (uVar1 & 0xffff) * (uVar2 & 0xffff);
    _DAT_fffecea0 = 0xffff;
    if (uVar1 < 0xffff01) {
      _DAT_fffecea0 = (undefined2)(uVar1 >> 8);
    }
  }
  *param_7 = _DAT_fffecea0;
  DAT_fffecea2 = param_4;
  return;
}

