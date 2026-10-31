
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d45b0(ushort param_1,char param_2,short param_3,undefined1 *param_4,ushort *param_5)

{
  ushort uVar1;
  
  uVar1 = 0;
  if ((param_3 < 0) && (uVar1 = _DAT_fffece60 + 1, uVar1 < _DAT_fffece60)) {
    uVar1 = 0xffff;
  }
  *param_5 = uVar1;
  if ((0x18ff < param_1) || (param_2 != '\0')) {
    DAT_fffece62 = 0;
  }
  if (499 < uVar1) {
    DAT_fffece62 = 1;
  }
  *param_4 = DAT_fffece62;
  _DAT_fffece60 = uVar1;
  return;
}

