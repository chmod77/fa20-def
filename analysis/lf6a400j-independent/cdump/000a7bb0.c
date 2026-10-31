
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a7bb0(ushort param_1,uint param_2,undefined2 *param_3,undefined2 *param_4)

{
  bool bVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  
  bVar1 = _DAT_fffec444 == 0;
  if (bVar1) {
    param_2 = param_2 & 0xff;
    sVar5 = -0x2358;
    uVar2 = LK_134BB0((uint)&T_02DCA8,param_2);
    sVar3 = (short)uVar2;
    if (param_2 < 0x32) {
      sVar4 = _DAT_fffec446 + sVar3;
      if (((_DAT_fffec446 < 0) || (sVar3 < 0)) || (-1 < sVar4)) {
        if (((_DAT_fffec446 < 0) && (sVar3 < 0)) && (-1 < sVar4)) {
          sVar4 = -0x8000;
        }
      }
      else {
        sVar4 = 0x7fff;
      }
    }
    else {
      sVar4 = _DAT_fffec446;
      if (_DAT_fffec446 < 1000) {
        sVar4 = 1000;
      }
      sVar5 = sVar4 + sVar3;
      if (((sVar4 < 0) || (sVar3 < 0)) || (-1 < sVar5)) {
        if (((sVar4 < 0) && (sVar3 < 0)) && (-1 < sVar5)) {
          sVar5 = -0x8000;
        }
      }
      else {
        sVar5 = 0x7fff;
      }
    }
    if (param_1 < 0xc000) {
      sVar4 = 1000;
    }
    else if (0x31 < param_2) {
      sVar4 = sVar5;
    }
    uVar2 = (uint)sVar4;
    if ((int)uVar2 < 1) {
      uVar2 = 0;
    }
    if (0x6a3 < (int)uVar2) {
      uVar2 = 0x6a4;
    }
    _DAT_fffec442 = (undefined2)uVar2;
    uVar2 = LK_134E2C((uint)&T_02DCB4,uVar2);
    _DAT_fffec440 = (undefined2)uVar2;
  }
  *param_3 = _DAT_fffec440;
  *param_4 = _DAT_fffec442;
  if (bVar1) {
    _DAT_fffec444 = 200;
  }
  if (_DAT_fffec444 == 0) {
    _DAT_fffec444 = 0;
  }
  else {
    _DAT_fffec444 = _DAT_fffec444 + -1;
  }
  _DAT_fffec446 = _DAT_fffec442;
  return;
}

