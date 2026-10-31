
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010a9cc(byte param_1,ushort param_2,byte param_3,ushort param_4,char param_5,char param_6,
                 undefined1 *param_7)

{
  bool bVar1;
  ushort uVar2;
  undefined1 uVar3;
  
  bVar1 = false;
  if (((0xaa < param_1) && (999 < param_2)) && (0x2f < param_3)) {
    bVar1 = true;
  }
  uVar2 = 0;
  if (bVar1) {
    uVar2 = _DAT_fffedc7c;
    if (_DAT_fffedc7c == 0xffff) {
      _DAT_fffedc7c = -1;
    }
    else {
      _DAT_fffedc7c = _DAT_fffedc7c + 1;
    }
  }
  else {
    _DAT_fffedc7c = 0;
  }
  if ((!bVar1) || (uVar3 = 1, uVar2 < 0x7d)) {
    uVar3 = DAT_fffedc7e;
  }
  if (((0x29a < param_4) && (param_4 < 1000)) || ((param_5 != '\0' && (param_6 != '\0')))) {
    uVar3 = 0;
  }
  *param_7 = uVar3;
  DAT_fffedc7e = uVar3;
  return;
}

