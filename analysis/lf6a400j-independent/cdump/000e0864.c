
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e0864(char param_1,uint param_2,uint param_3,uint param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,
                 undefined2 *param_12)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = LK_133F40((uint)&T_02F0B0,param_3);
  uVar1 = (param_2 & 0xffff) * (uVar1 & 0xffff);
  puVar2 = (undefined *)(uVar1 >> 8);
  if (0xffff00 < uVar1) {
    puVar2 = &DAT_0000ffff;
  }
  if ((((param_1 != '\0') && (param_6 == '\0')) && (param_7 == '\0')) ||
     (((param_1 != '\0' && (param_6 != '\0')) && ((param_8 != '\0' && (param_7 == '\0')))))) {
    uVar1 = LK_133E10((uint)&T_02F0BC,param_4);
    uVar1 = ((uint)puVar2 & 0xffff) * (uVar1 & 0xffff);
    _DAT_fffed1dc = (undefined2)(uVar1 >> 8);
    if (0xffff00 < uVar1) {
      _DAT_fffed1dc = 0xffff;
    }
  }
  if (((param_9 == '\0') && (param_10 == '\0')) && (param_5 == '\0')) {
    if ((param_1 != '\0') && (param_11 == -0x5b)) {
      _DAT_fffed1dc = (short)puVar2;
    }
  }
  else {
    _DAT_fffed1dc = 0;
  }
  *param_12 = _DAT_fffed1dc;
  return;
}

