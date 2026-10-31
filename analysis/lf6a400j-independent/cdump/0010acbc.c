
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010acbc(byte param_1,ushort param_2,byte param_3,undefined1 *param_4)

{
  bool bVar1;
  ushort uVar2;
  undefined1 uVar3;
  
  bVar1 = false;
  if ((param_1 < 0xa5) && ((param_2 < 0x29b || (param_3 < 0x30)))) {
    bVar1 = true;
  }
  uVar2 = 0;
  if (bVar1) {
    uVar2 = _DAT_fffedc94;
    if (_DAT_fffedc94 == 0xffff) {
      _DAT_fffedc94 = -1;
    }
    else {
      _DAT_fffedc94 = _DAT_fffedc94 + 1;
    }
  }
  else {
    _DAT_fffedc94 = 0;
  }
  uVar3 = 0;
  if ((bVar1) && (0x7c < uVar2)) {
    uVar3 = 1;
  }
  *param_4 = uVar3;
  return;
}

