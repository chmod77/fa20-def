
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009340c(char param_1,char param_2,uint param_3,uint param_4,ushort param_5,ushort param_6,
                 undefined1 param_7,undefined1 *param_8)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  
  if (param_6 < 0x5001) {
    uVar3 = LK_133F40((uint)&T_02D354,param_4);
    bVar1 = false;
    if (param_2 == '\0') {
      _DAT_fffebe76 = 0;
      uVar2 = _DAT_fffebe76;
    }
    else {
      bVar1 = 399 < _DAT_fffebe76;
      uVar2 = 0xffff;
      if (_DAT_fffebe76 != 0xffff) {
        uVar2 = _DAT_fffebe76 + 1;
      }
    }
    _DAT_fffebe76 = uVar2;
    if (param_1 == '\0') {
      if (((0x1000 < param_5) || ((uVar3 & 0xffff) <= (param_3 & 0xffff))) || (bVar1)) {
        DAT_fffebe74 = 1;
      }
      else {
        DAT_fffebe74 = param_7;
      }
    }
    else {
      DAT_fffebe74 = 0;
    }
  }
  *param_8 = DAT_fffebe74;
  return;
}

