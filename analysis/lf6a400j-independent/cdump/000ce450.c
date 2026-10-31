
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ce450(ushort param_1,uint param_2,char param_3,uint param_4,undefined1 *param_5)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  
  bVar1 = _DAT_fffeccdc != 0;
  if (param_1 < 0x5999) {
    sVar2 = -1;
    if (_DAT_fffeccdc != -1) {
      sVar2 = _DAT_fffeccdc + 1;
    }
  }
  else {
    _DAT_fffeccdc = 0;
    sVar2 = _DAT_fffeccdc;
  }
  _DAT_fffeccdc = sVar2;
  uVar3 = LK_133F40((uint)&T_02EB90,param_4);
  if (((uVar3 & 0xffff) <= (param_2 & 0xffff)) || (param_3 != '\0')) {
    DAT_fffeccde = 1;
  }
  if (param_1 < 0x5999 && bVar1) {
    DAT_fffeccde = 0;
  }
  *param_5 = DAT_fffeccde;
  return;
}

