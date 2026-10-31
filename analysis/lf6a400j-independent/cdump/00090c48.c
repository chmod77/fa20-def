
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00090c48(char param_1,char param_2,uint param_3,ushort param_4,ushort *param_5,
                 ushort *param_6)

{
  uint uVar1;
  ushort extraout_r0;
  
  if (0x5000 >= param_4) {
    uVar1 = LK_13A1C0((uint)&T_02D288,param_3,(int)param_2);
    extraout_r0 = (ushort)uVar1;
    _DAT_fffebd8e = extraout_r0;
    if ((param_1 == '\x02') || (param_1 == '\x03')) {
      if (((short)extraout_r0 < 1) || (extraout_r0 < 0x5a0)) {
        if (((short)extraout_r0 < 0) || (_DAT_fffebd8c = extraout_r0, extraout_r0 < 0x438)) {
          _DAT_fffebd8c = 0x438;
        }
      }
      else {
        _DAT_fffebd8c = 0x59f;
      }
    }
    else {
      _DAT_fffebd8c = 0x636;
    }
  }
  *param_6 = _DAT_fffebd8e;
  if (0x5000 < param_4) {
    *param_5 = 0x636;
  }
  else {
    *param_5 = _DAT_fffebd8c;
  }
  return;
}

