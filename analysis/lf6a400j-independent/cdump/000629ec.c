
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000629ec(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  FUN_00064380();
  FUN_000642a4();
  FUN_00066a26();
  FUN_00063ee8();
  FUN_00063ba8();
  if ((_DAT_ffff008e < 0x3d) || (0x9f < _DAT_ffff008e)) {
    return 0x3c;
  }
  if (_v_Main_Throttle_Sensor_00B8 < 0xefa) {
    return 0x3c;
  }
  if (0x4899 < _v_Main_Throttle_Sensor_00B8) {
    return 0x3c;
  }
  iVar3 = (uint)_DAT_ffff00e8 - (uint)_DAT_ffff00ec;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
    if (_DAT_ffff34ee < 0x3c3d) goto LAB_00064a54;
    iVar3 = FUN_0016c9b4();
    uVar1 = FUN_00001550(0x70);
    _DAT_ffff34ee = _DAT_ffff34ee - (short)iVar3;
  }
  else {
    if (0x4443 < _DAT_ffff34ee) goto LAB_00064a54;
    iVar3 = FUN_0016c9b4(&DAT_ffff00e8,&DAT_000199c0,4);
    uVar1 = FUN_00001550(0x70);
    _DAT_ffff34ee = _DAT_ffff34ee + (short)iVar3;
  }
  _DAT_ffff34f0 = -_DAT_ffff34ee;
  FUN_00001550(uVar1);
LAB_00064a54:
  if (iVar3 < 0x2795) {
    uVar2 = (int)DAT_ffff0088 | 0x80;
    DAT_ffff0088 = (char)uVar2;
  }
  else {
    uVar2 = (int)DAT_ffff0088 & 0x7f;
    DAT_ffff0088 = (char)uVar2;
  }
  return uVar2;
}

