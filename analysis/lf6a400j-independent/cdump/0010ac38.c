
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010ac38(byte param_1,ushort param_2,byte param_3,undefined1 *param_4)

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
    uVar2 = _DAT_fffedc90;
    if (_DAT_fffedc90 == 0xffff) {
      _DAT_fffedc90 = -1;
    }
    else {
      _DAT_fffedc90 = _DAT_fffedc90 + 1;
    }
  }
  else {
    _DAT_fffedc90 = 0;
  }
  uVar3 = 0;
  if ((bVar1) && (0x7c < uVar2)) {
    uVar3 = 1;
  }
  *param_4 = uVar3;
  return;
}

