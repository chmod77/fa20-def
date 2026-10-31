
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a7598(ushort param_1,char param_2,byte param_3,char param_4,char param_5,ushort *param_6
                 ,ushort *param_7,ushort *param_8)

{
  bool bVar1;
  ushort uVar2;
  
  bVar1 = 0x18 < param_1;
  if (bVar1) {
    uVar2 = 0;
    if (param_2 == '\x01') {
      uVar2 = 0x121;
    }
  }
  else {
    uVar2 = 0x300;
  }
  *param_7 = uVar2;
  if ((bVar1) || (_DAT_fffec42a < 0xe)) {
    _DAT_fffec42a = 0;
  }
  else {
    _DAT_fffec42a = _DAT_fffec42a - 0xe;
  }
  if (!bVar1 && _DAT_fffec428 < 100) {
    _DAT_fffec42a = 0x500;
  }
  *param_8 = _DAT_fffec42a;
  if (((param_3 < 5) && (param_4 != '\0')) && (param_5 == '\0')) {
    if (_DAT_fffec42a < uVar2) {
      *param_6 = uVar2;
    }
    else {
      *param_6 = _DAT_fffec42a;
    }
  }
  else {
    *param_6 = 0;
  }
  if (bVar1) {
    _DAT_fffec428 = 0;
  }
  else {
    _DAT_fffec428 = _DAT_fffec428 + 1;
    if (_DAT_fffec428 == 0) {
      _DAT_fffec428 = -1;
    }
  }
  return;
}

