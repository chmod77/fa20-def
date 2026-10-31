
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000649b2(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (_v_Main_Throttle_Sensor_00B8 < 0xefa) {
    return;
  }
  if (0x4899 < _v_Main_Throttle_Sensor_00B8) {
    return;
  }
  iVar2 = (uint)_DAT_ffff00e8 - (uint)_DAT_ffff00ec;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
    if (_DAT_ffff34ee < 0x3c3d) goto LAB_00064a54;
    iVar2 = FUN_0016c9b4();
    uVar1 = FUN_00001550(0x70);
    _DAT_ffff34ee = _DAT_ffff34ee - (short)iVar2;
  }
  else {
    if (0x4443 < _DAT_ffff34ee) goto LAB_00064a54;
    iVar2 = FUN_0016c9b4(&DAT_ffff00e8,&DAT_000199c0,4);
    uVar1 = FUN_00001550(0x70);
    _DAT_ffff34ee = _DAT_ffff34ee + (short)iVar2;
  }
  _DAT_ffff34f0 = -_DAT_ffff34ee;
  FUN_00001550(uVar1);
LAB_00064a54:
  if (iVar2 < 0x2795) {
    DAT_ffff0088 = DAT_ffff0088 | 0x80;
  }
  else {
    DAT_ffff0088 = DAT_ffff0088 & 0x7f;
  }
  return;
}

