
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001068d0(char param_1,char param_2,char param_3,uint param_4,uint param_5,short param_6,
                 undefined2 *param_7)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = false;
  if (((param_1 == '\0') && (param_2 == '\0')) && (param_3 != '\0')) {
    bVar1 = true;
  }
  uVar3 = LK_1361C8((uint)&T_02FC98,param_4,param_5 & 0xffff);
  if (bVar1) {
    if (DAT_fffedabd == '\0') {
      DAT_fffedabc = '\0';
      DAT_fffedabd = '\x01';
    }
    uVar4 = LK_136630((uint)&T_02FCAC,(int)param_6,(int)_DAT_fffedaba);
    uVar2 = (short)uVar3;
    if (DAT_fffedabc != '\0') {
      FUN_0016b4d8(&DAT_ffff19e4,uVar3 & 0xffff,uVar4);
      uVar2 = _DAT_ffff19e4;
    }
    _DAT_ffff19e4 = uVar2;
    _DAT_fffedab8 = _DAT_ffff19e4;
    DAT_fffedabc = '\x01';
  }
  else {
    DAT_fffedabd = '\0';
  }
  if (bVar1) {
    _DAT_fffedaba = (short)uVar3;
    if (bVar1) {
      _DAT_fffedaba = _DAT_fffedab8;
    }
  }
  else {
    _DAT_fffedaba = 0x500;
  }
  *param_7 = _DAT_fffedaba;
  return;
}

