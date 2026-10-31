
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00063ba8(void)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar1 = 0x3c;
  if (((_DAT_ffff008e < 0x3d) || (_DAT_ffff008e == 0xffff)) ||
     (uVar1 = (uint)DAT_fffeeec2, (uVar1 & 1) == 0)) {
    _DAT_fffef520 = 0;
    _DAT_fffef522 = 0;
    return uVar1;
  }
  if ((((DAT_fffef738 & 1) == 0) && ((DAT_fffef738 & 4) == 0)) &&
     (((DAT_fffef738 & 2) == 0 && ((DAT_fffef738 & 8) == 0)))) {
    DAT_fffef51d = DAT_fffef51d | 1;
  }
  else {
    DAT_fffef51d = DAT_fffef51d & 0xfe;
  }
  if (_DAT_ffff2fa4 < _DAT_fffef11a) {
    _DAT_fffef51e = _DAT_fffef11a - _DAT_ffff2fa4;
  }
  else {
    _DAT_fffef51e = 0;
  }
  uVar2 = FUN_0016caec(((uint)_DAT_fffef110 - (uint)_DAT_ffff2fa0) -
                       ((uint)_DAT_fffef11a - (uint)_DAT_ffff2fa2));
  uVar3 = FUN_00001540(uVar2);
  uVar2 = FUN_0016caec((uint)_DAT_fffef130 - (uint)_DAT_fffef136);
  uVar4 = FUN_00001540(uVar2);
  if (_DAT_fffef51e < 0x4a9) {
    uVar5 = 0xb5d;
  }
  else if (_DAT_fffef51e < 0x950) {
    uVar5 = 0xc64;
  }
  else if (_DAT_fffef51e < 0xf85) {
    uVar5 = 0xce7;
  }
  else if (_DAT_fffef51e < 0x1f09) {
    uVar5 = 0x130b;
  }
  else {
    uVar5 = 0x182c;
  }
  if ((DAT_fffef050 & 1) == 0) {
    if (((((DAT_fffef51d & 1) != 0) && (((int)DAT_ffff2fdd & 0x80U) != 0)) &&
        ((9 < DAT_ffff2fde && (uVar5 <= uVar3)))) ||
       (((DAT_fffef51d & 1) != 0 &&
        (((((int)DAT_ffff2fdd & 0x80U) == 0 || (DAT_ffff2fde < 10)) && (0x34dd < uVar4)))))) {
      _DAT_fffef520 = FUN_00001540(_DAT_fffef520 + 1);
      goto LAB_00063dae;
    }
    if (_DAT_fffef522 < 0xc) goto LAB_00063dae;
  }
  _DAT_fffef520 = 0;
LAB_00063dae:
  if (((((DAT_fffef51d & 1) == 0) || (((int)DAT_ffff2fdd & 0x80U) == 0)) ||
      ((DAT_ffff2fde < 10 || (uVar5 <= uVar3)))) &&
     ((((DAT_fffef51d & 1) == 0 || ((((int)DAT_ffff2fdd & 0x80U) != 0 && (9 < DAT_ffff2fde)))) ||
      (0x34dd < uVar4)))) {
    _DAT_fffef522 = 0;
  }
  else {
    _DAT_fffef522 = FUN_00001540(_DAT_fffef522 + 1);
  }
  if ((DAT_fffef050 & 1) == 0) {
    if (0xd < _DAT_fffef520) {
      DAT_fffefff1 = DAT_fffefff1 | 4;
    }
  }
  else {
    DAT_fffefff1 = DAT_fffefff1 & 0xfb;
  }
  if (((((DAT_fffefff1 & 4) != 0) || ((DAT_fffeffed & 0x20) != 0)) || ((DAT_fffeffed & 0x10) != 0))
     || (((DAT_fffeffed & 4) != 0 || (uVar1 = (uint)(char)DAT_fffeffed, (uVar1 & 2) != 0)))) {
    uVar1 = (int)DAT_ffff34f7 | 0x80;
    DAT_ffff34f7 = (char)uVar1;
  }
  return uVar1;
}

