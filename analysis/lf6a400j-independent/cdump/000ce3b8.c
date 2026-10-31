
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ce3b8(ushort param_1,uint param_2,char param_3,uint param_4,undefined1 *param_5)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  
  bVar1 = _DAT_fffeccd8 != 0;
  if (param_1 < 0xbfff) {
    sVar2 = -1;
    if (_DAT_fffeccd8 != -1) {
      sVar2 = _DAT_fffeccd8 + 1;
    }
  }
  else {
    _DAT_fffeccd8 = 0;
    sVar2 = _DAT_fffeccd8;
  }
  _DAT_fffeccd8 = sVar2;
  uVar3 = LK_133F40((uint)&T_02EB84,param_4);
  if (((uVar3 & 0xffff) <= (param_2 & 0xffff)) || (param_3 != '\0')) {
    DAT_fffeccda = 1;
  }
  if (param_1 < 0xbfff && bVar1) {
    DAT_fffeccda = 0;
  }
  *param_5 = DAT_fffeccda;
  return;
}

