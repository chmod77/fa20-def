
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00090ce8(char param_1,char param_2,ushort param_3,ushort *param_4,ushort *param_5)

{
  uint uVar1;
  ushort extraout_r0;
  
  if (0x5000 >= param_3) {
    uVar1 = LK_134D58((uint)&T_02D29C,(int)param_2);
    extraout_r0 = (ushort)uVar1;
    _DAT_fffebd92 = extraout_r0;
    if ((param_1 == '\x02') || (param_1 == '\x03')) {
      if (((short)extraout_r0 < 1) || (extraout_r0 < 0x168)) {
        _DAT_fffebd90 = extraout_r0;
        if ((short)extraout_r0 < 0) {
          _DAT_fffebd90 = 0;
        }
      }
      else {
        _DAT_fffebd90 = 0x167;
      }
    }
    else {
      _DAT_fffebd90 = 0x1fe;
    }
  }
  *param_5 = _DAT_fffebd92;
  if (0x5000 < param_3) {
    *param_4 = 0x1fe;
  }
  else {
    *param_4 = _DAT_fffebd90;
  }
  return;
}

