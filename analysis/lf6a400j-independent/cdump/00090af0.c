
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00090af0(char param_1,char param_2,uint param_3,char param_4,char param_5,char param_6,
                 uint param_7,uint param_8,ushort param_9,ushort *param_10,ushort *param_11)

{
  uint uVar1;
  ushort uVar4;
  uint uVar2;
  int iVar3;
  short sVar5;
  ushort uVar6;
  
  if (0x5000 >= param_9) {
    uVar1 = LK_13A1C0((uint)&T_02D260,param_3 & 0xff,(int)param_2);
    uVar4 = (ushort)uVar1;
    uVar6 = uVar4;
    if ((param_5 == '\0') && (param_6 == '\0')) {
      uVar1 = LK_13A1C0((uint)&T_02D24C,param_3 & 0xff,(int)param_2);
      uVar2 = LK_13852C((uint)&T_02D274,param_7 & 0xff,param_8 & 0xff);
      iVar3 = __sdiv32_r1_by_r0((uVar2 & 0xff) * (int)(short)uVar1,0xff);
      sVar5 = (short)iVar3;
      uVar6 = uVar4 + sVar5;
      if (((short)uVar4 < 0) || ((sVar5 < 0 || (-1 < (short)uVar6)))) {
        if (((short)uVar4 < 0) && ((sVar5 < 0 && (-1 < (short)uVar6)))) {
          uVar6 = 0x8000;
        }
      }
      else {
        uVar6 = 0x7fff;
      }
    }
    _DAT_fffebd8a = uVar6;
    if ((param_1 == '\x02') || (param_1 == '\x03')) {
      _DAT_fffebd88 = uVar6;
      if (param_4 != '\0') {
        _DAT_fffebd88 = 0;
      }
      if (_DAT_fffebd88 < 0x5a0) {
        if (_DAT_fffebd88 < 0x438) {
          _DAT_fffebd88 = 0x438;
        }
      }
      else {
        _DAT_fffebd88 = 0x59f;
      }
    }
    else {
      _DAT_fffebd88 = 0x636;
    }
  }
  *param_11 = _DAT_fffebd8a;
  if (0x5000 < param_9) {
    *param_10 = 0x636;
  }
  else {
    *param_10 = _DAT_fffebd88;
  }
  return;
}

