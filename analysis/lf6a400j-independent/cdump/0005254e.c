
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005254e(void)

{
  undefined4 uVar1;
  code *pcVar2;
  ushort uVar3;
  int iVar4;
  
  if ((DAT_fffeef9c == 2) || (DAT_fffeef9c == 3)) {
    if (v_Coolant_Temperature_29A5 < 0x3c) {
      _DAT_fffef038 = 0x2667;
    }
    else {
      _DAT_fffef038 = 0x2667;
    }
LAB_0005291c:
    _DAT_fffef042 = 0;
    DAT_fffef036 = DAT_fffef036 & 0xbf;
    _DAT_fffef16e = 0;
    _DAT_fffef170 = 0;
  }
  else {
    if ((DAT_fffeef9c != 4) && (DAT_fffeef9c != 5)) {
      if ((DAT_fffeef9c < 7) || (0xb < DAT_fffeef9c)) {
        if (DAT_fffeef9c == 6) {
          DAT_fffef036 = DAT_fffef036 | 0x80;
          _DAT_fffef03a = FUN_0016b5ec(_DAT_fffeeeb6 - 0x2726);
          if (_DAT_fffeeeb6 < 0xe2c0) {
            iVar4 = _DAT_fffef03a * 0x333;
            if (iVar4 < 0) {
              iVar4 = iVar4 + 0x7f;
            }
            _DAT_fffef03e =
                 FUN_0016b5ec((int)((ulonglong)((longlong)iVar4 * 0x2000000) >> 0x20),FUN_0016b5ec);
            iVar4 = __sdiv32_r1_by_r0(_DAT_fffef03e * 1000,10000);
            uVar1 = FUN_0016b5ec(iVar4,FUN_0016b5ec);
            uVar1 = FUN_0016b3a8(uVar1,(int)_DAT_fffef03c,0x3333);
            _DAT_fffef03c = FUN_0016b640(uVar1,0xffff999a);
          }
          else {
            _DAT_fffef03c = 0;
          }
          uVar1 = FUN_0016bd6c((int)_DAT_fffef03e + (int)_DAT_fffef03c + 0x6666,0x9999);
          _DAT_fffef038 = FUN_0016b624(uVar1,0);
          if ((0x2ed < _DAT_fffef172) && ((DAT_fffef036 & 0x20) == 0)) {
            DAT_ffff2fdf = FUN_0016bd28(DAT_ffff2fdf - 1);
            DAT_fffef8f0 = DAT_fffef8f0 & 0xef;
            DAT_fffef036 = DAT_fffef036 | 0x20;
          }
          _DAT_fffef172 = FUN_00001540(_DAT_fffef172 + 1);
          _DAT_fffef042 = 0;
          DAT_fffef036 = DAT_fffef036 & 0xbf;
          _DAT_fffef16e = 0;
          _DAT_fffef170 = 0;
        }
        else {
          _DAT_fffef038 = 0;
          _DAT_fffef03c = 0;
          _DAT_fffef03e = 0;
          _DAT_fffef042 = 0;
          _DAT_fffef16e = 0;
          _DAT_fffef170 = 0;
          _DAT_fffef172 = 0;
          DAT_fffef036 = DAT_fffef036 & 0x9f;
        }
        goto LAB_00052946;
      }
      _DAT_fffef038 = 0x6666;
      goto LAB_0005291c;
    }
    if ((DAT_ffff2fdf == 0) && ((DAT_fffef8f0 & 0x10) == 0)) {
      if (((DAT_fffef00b & 8) == 0) || (0x1f < _DAT_fffef170)) {
        _DAT_fffef038 = 0x9999;
      }
      else {
        _DAT_fffef038 = 0x8ccd;
      }
    }
    else {
      _DAT_fffef038 = 0x7333;
    }
    if (((int)(char)DAT_fffef036 & 0x80U) == 0) {
      if (DAT_ffff2fdf == 0) {
        if ((DAT_fffef8f0 & 0x10) == 0) {
          if ((DAT_fffef00b & 8) == 0) {
            uVar3 = 0x96;
          }
          else {
            uVar3 = 0x96;
          }
        }
        else {
          uVar3 = 0x96;
        }
      }
      else {
        uVar3 = 0x177;
      }
    }
    else {
      uVar3 = 0x19;
    }
    if ((DAT_fffef174 == 5) && (DAT_fffeef9c == 4)) {
      DAT_fffef036 = DAT_fffef036 | 0x40;
      _DAT_fffef042 = 0;
    }
    else {
      if (uVar3 <= _DAT_fffef042) {
        _DAT_fffef038 = 0x6666;
      }
      _DAT_fffef042 = FUN_00001540(_DAT_fffef042 + 1);
    }
    uVar3 = 0;
    if (DAT_fffef174 == DAT_fffeef9c) {
      uVar3 = _DAT_fffef16e;
    }
    if (0x176 < uVar3) {
      DAT_fffef16a = DAT_fffef16a | 0x80;
    }
    _DAT_fffef16e = FUN_00001540(uVar3 + 1,FUN_00001540);
    _DAT_fffef170 = FUN_00001540(_DAT_fffef170 + 1,FUN_00001540);
  }
  _DAT_fffef03e = 0;
  _DAT_fffef03c = 0;
  DAT_fffef036 = DAT_fffef036 & 0xdf;
  _DAT_fffef172 = 0;
LAB_00052946:
  if ((_v_Control_Module_Voltage_EF18 == 0) ||
     ((uint)_v_Control_Module_Voltage_EF18 << 1 <= (uint)_DAT_fffef038)) {
    uVar1 = 0xffffffff;
  }
  else {
    pcVar2 = __udiv32_r1_by_r0;
    __udiv32_r1_by_r0((uint)_DAT_fffef038 * (uint)_DAT_fffef038,(uint)_v_Control_Module_Voltage_EF18
                     );
    (*pcVar2)();
    uVar1 = (*pcVar2)();
    uVar1 = FUN_00001540(uVar1);
  }
  uVar1 = FUN_0016b630(uVar1,0);
  _DAT_fffef040 = FUN_0016bd78(uVar1,0xffff8000);
  DAT_fffef174 = DAT_fffeef9c;
  return;
}

