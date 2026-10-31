
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00068dfe(void)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar4;
  ushort uVar3;
  
  uVar1 = FUN_0016b924(0x1e,0x1c,0);
  uVar2 = FUN_0016b404((int)v_Vehicle_Speed_byte_65A1,0x1e,uVar1,DAT_fffef11f & 1);
  bVar4 = DAT_fffef11f | 1;
  if ((uVar2 & 1) == 0) {
    bVar4 = DAT_fffef11f & 0xfe;
  }
  if (_DAT_ffff007a == 7) {
    uVar2 = (int)(char)bVar4 & 0xfd;
    DAT_fffef11f = (byte)uVar2;
    DAT_fffef125 = 0;
  }
  else {
    DAT_fffef11f = bVar4;
    _DAT_fffef120 = FUN_0016b5d4((int)&DAT_00008000 + ((uint)_DAT_fffef114 - (uint)_DAT_fffef110));
    _DAT_fffef122 = FUN_0016b5d4((int)&DAT_00008000 + ((uint)_DAT_fffef11c - (uint)_DAT_fffef11a));
    if ((_DAT_fffef120 < 0x7ffc) || (0x8003 < _DAT_fffef120)) {
      DAT_fffef11e = DAT_fffef11e & 0xf7;
    }
    else {
      DAT_fffef11e = DAT_fffef11e | 8;
    }
    if (_DAT_fffef120 < 0x81f0) {
      if (3 < DAT_fffef124) {
        DAT_fffef11e = DAT_fffef11e & 0xef;
      }
    }
    else {
      DAT_fffef11e = DAT_fffef11e | 0x10;
    }
    if (_DAT_fffef120 < 0x7e72) {
      DAT_fffef124 = FUN_0000152c(DAT_fffef124 + 1);
    }
    else {
      DAT_fffef124 = 0;
    }
    if (_DAT_fffef120 < 0x8063) {
      if (_DAT_fffef120 < 0x7fce) {
        DAT_fffef11e = DAT_fffef11e & 0xdf;
      }
    }
    else {
      DAT_fffef11e = DAT_fffef11e | 0x20;
    }
    uVar3 = FUN_0016caec((uint)_DAT_fffef110 - (uint)_DAT_fffef112);
    if (uVar3 < 0x50) {
      if (9 < DAT_fffef125) {
        DAT_fffef11f = DAT_fffef11f | 2;
      }
      DAT_fffef125 = FUN_0000152c(DAT_fffef125 + 1);
    }
    else {
      DAT_fffef11f = DAT_fffef11f & 0xfd;
      DAT_fffef125 = 0;
    }
    if (((DAT_fffef3fc & 2) == 0) && ((DAT_fffef3fc & 4) == 0)) {
      if (((((DAT_fffef32a & 1) == 0) && (0x7fff < _v_Control_Module_Voltage_EF18)) &&
          (99 < _DAT_fffeef10)) &&
         ((((DAT_fffef11e & 4) == 0 && ((DAT_fffef11f & 1) != 0)) &&
          (((int)DAT_ffff2fdd & 0x80U) != 0)))) {
        uVar2 = FUN_000690f8();
      }
      else {
        uVar2 = (uint)(char)DAT_fffef32a;
        if ((((uVar2 & 1) == 0) && (0x7fff < _v_Control_Module_Voltage_EF18)) &&
           (uVar2 = (uint)(char)DAT_fffef11f, (uVar2 & 1) == 0)) {
          if ((((_DAT_fffef114 < 0x2cf5) && (uVar2 = (uint)(char)DAT_fffef11f, (uVar2 & 2) != 0)) &&
              (uVar2 = (uint)(char)DAT_fffef11e, (uVar2 & 8) != 0)) &&
             ((uVar2 = (uint)(char)DAT_fffef11e, (uVar2 & 0x10) == 0 &&
              (uVar2 = (uint)(char)DAT_fffef11e, (uVar2 & 0x20) != 0)))) {
            uVar2 = FUN_000691d4();
          }
        }
      }
    }
    else {
      uVar2 = FUN_000690be();
    }
  }
  _DAT_ffff2fa6 = -_DAT_ffff2f9c;
  _DAT_ffff2fa8 = -_DAT_ffff2f9e;
  return uVar2;
}

