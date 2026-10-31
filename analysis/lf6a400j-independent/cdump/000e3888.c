
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e3888(uint param_1,uint param_2,undefined1 *param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = LK_133E10((uint)&T_02F158,param_2 & 0xff);
  uVar2 = uVar2 & 0xffff;
  if (DAT_fffed28e != '\0') {
    uVar3 = LK_133E10((uint)&T_02F164,param_2 & 0xff);
    if (uVar2 < (uVar3 & 0xffff)) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar2 - (uVar3 & 0xffff);
    }
    uVar2 = uVar2 & 0xffff;
  }
  DAT_fffed28e = uVar2 <= (param_1 & 0xffff);
  if ((bool)DAT_fffed28e) {
    *param_3 = _DAT_fffed28c < 0x5dc;
    sVar1 = -1;
    if (_DAT_fffed28c < 0xfffc) {
      sVar1 = _DAT_fffed28c + 4;
    }
  }
  else {
    *param_3 = 0;
    _DAT_fffed28c = 0;
    sVar1 = _DAT_fffed28c;
  }
  _DAT_fffed28c = sVar1;
  return;
}

