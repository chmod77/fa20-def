
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0006825a(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  ushort uVar7;
  
  _DAT_fffef150 = _DAT_fffef14e;
  _DAT_fffef132 = _DAT_fffef130;
  _DAT_fffef138 = _DAT_fffef136;
  _DAT_fffef14e = _v_Accelerator_Pedal_Angle_EEF8;
  if (_DAT_ffff007a == 7) {
    _DAT_fffef132 = _DAT_fffef130;
    _DAT_fffef138 = _DAT_fffef136;
    _DAT_fffef14e = _v_Accelerator_Pedal_Angle_EEF8;
    return 7;
  }
  if ((((DAT_fffeffed & 0x20) == 0) && ((DAT_fffefff1 & 4) == 0)) ||
     (((DAT_fffeffed & 0x10) == 0 && ((DAT_fffefff1 & 4) == 0)))) {
    if (((DAT_fffeffed & 0x20) == 0) && ((DAT_fffefff1 & 4) == 0)) {
      if (((DAT_fffeffed & 0x10) != 0) || ((DAT_fffefff1 & 4) != 0)) {
        uVar1 = FUN_0016bd78((int)_DAT_fffef12e,0x684);
        _DAT_fffef12e = FUN_0016b630(uVar1,0x458);
        _DAT_fffef130 = FUN_0016b944((int)_DAT_fffef110,(int)_DAT_ffff2f9c,0);
        FUN_000686fc();
        FUN_0006886a();
        FUN_000687f2();
        _DAT_fffef136 = FUN_0016b944((int)_DAT_fffef11a,(int)_DAT_ffff2f9e,0);
        FUN_000688a8();
        _DAT_fffef13a = 0x2666;
        _DAT_fffef134 = FUN_0016bc08(&PTR_DAT_00168b20,(int)_DAT_fffef142);
        goto LAB_000684b0;
      }
      uVar1 = FUN_0016bd78((int)_DAT_fffef12e,0x684);
      _DAT_fffef12e = FUN_0016b630(uVar1,0x458);
      _DAT_fffef130 = FUN_0016b944((int)_DAT_fffef110,(int)_DAT_ffff2f9c,0);
      FUN_000686fc();
      FUN_0006886a();
      FUN_000687f2();
      _DAT_fffef136 = FUN_0016b944((int)_DAT_fffef11a,(int)_DAT_ffff2f9e,0);
      FUN_000688a8();
      FUN_0006882e();
      _DAT_fffef134 = FUN_0016bc08(&PTR_DAT_00168b20,(int)_DAT_fffef142);
    }
    else {
      _DAT_fffef130 = FUN_0016b944((int)_DAT_fffef110,(int)_DAT_ffff2f9c,0);
      FUN_000686fc();
      FUN_0006886a();
      _DAT_fffef136 = FUN_0016b944((int)_DAT_fffef11a,(int)_DAT_ffff2f9e,0);
      FUN_000688a8();
      FUN_0006882e();
      _DAT_fffef134 = 0x2666;
    }
    _DAT_fffef13a = FUN_0016bc08(&PTR_DAT_00168b2c,(int)_DAT_fffef140);
  }
  else {
    _DAT_fffef130 = FUN_0016b944((int)_DAT_fffef110,(int)_DAT_ffff2f9c,0);
    FUN_000686fc();
    FUN_0006886a();
    _DAT_fffef136 = FUN_0016b944((int)_DAT_fffef11a,(int)_DAT_ffff2f9e,0);
    FUN_000688a8();
    _DAT_fffef134 = 0x2666;
    _DAT_fffef13a = 0x2666;
  }
LAB_000684b0:
  if (((((DAT_fffeffed & 0x20) == 0) && ((DAT_fffefff1 & 4) == 0)) && ((DAT_fffeffed & 0x10) == 0))
     && ((DAT_fffefff1 & 4) == 0)) {
    iVar2 = __udiv32_r1_by_r0((uint)DAT_fffef144 * (uint)_DAT_fffef134,0xff);
    _DAT_fffef406 = (short)iVar2;
    _v_Accelerator_Pedal_Angle_EEF8 = FUN_0016bd78((int)_DAT_fffef406,(int)_DAT_ffff13c2);
    _DAT_fffef408 = _DAT_fffef134;
  }
  else if (((((DAT_fffeffed & 0x20) == 0) && ((DAT_fffefff1 & 4) == 0)) &&
           (((int)DAT_ffff34f7 & 0x80U) != 0)) ||
          ((((DAT_fffeffed & 0x10) == 0 && ((DAT_fffefff1 & 4) == 0)) &&
           (((int)DAT_ffff34f7 & 0x80U) != 0)))) {
    _DAT_fffef406 = FUN_0016bd78((int)(short)_DAT_fffef134,(int)_DAT_fffef13a);
    _v_Accelerator_Pedal_Angle_EEF8 = FUN_0016bd78((int)_DAT_fffef406,(int)_DAT_ffff13c2);
    _DAT_fffef408 = FUN_0016bd78((int)(short)_DAT_fffef134,(int)_DAT_fffef13a);
  }
  else {
    _DAT_fffef406 = 0xf1a;
    _v_Accelerator_Pedal_Angle_EEF8 = FUN_0016bd78(0xf1a,(int)_DAT_ffff13c2);
    _DAT_fffef408 = 0xf1a;
  }
  FUN_00069e78();
  if (((int)DAT_ffff0569 & 0x80U) == 0) {
    uVar7 = 0x4333;
    ppuVar5 = &PTR_DAT_00168b38;
    ppuVar6 = &PTR_DAT_00168b5c;
    if (DAT_ffff0585 == '\x03') {
      ppuVar6 = &PTR_DAT_00168b50;
    }
  }
  else {
    uVar7 = 0x4300;
    ppuVar5 = &PTR_DAT_00168b44;
    ppuVar6 = &PTR_DAT_00168b74;
    if (DAT_ffff0585 == '\x03') {
      ppuVar6 = &PTR_DAT_00168b68;
    }
  }
  if (((DAT_fffef32a & 1) == 0) && ((DAT_fffef32d & 2) == 0)) {
    if (_v_Engine_Speed_2994 < uVar7) {
      if ((((DAT_ffff0560 == '\a') && ((DAT_fffef310 & 0x10) == 0)) ||
          ((DAT_ffff0560 == '\x0e' && ((DAT_fffef310 & 0x10) != 0)))) &&
         (((int)DAT_fffee693 & 0x80U) == 0)) {
        uVar3 = FUN_0016ba80(&PTR_DAT_00168b80,(int)(short)_DAT_fffef134);
        DAT_fffef144 = (byte)uVar3;
      }
      else {
        uVar3 = (uint)DAT_ffff03c8;
        if ((uVar3 & 2) == 0) {
          DAT_fffef144 = 0xff;
        }
        else {
          uVar3 = FUN_0016ba80(&DAT_00168b8c,(int)_v_Engine_Speed_OBD_copy_2ADA);
          DAT_fffef144 = (byte)uVar3;
        }
      }
    }
    else {
      uVar3 = FUN_0016ba80(ppuVar6,(int)_DAT_fffef0da);
      DAT_fffef144 = (byte)uVar3;
    }
  }
  else {
    uVar4 = FUN_0016ba80(ppuVar5,(int)(short)_v_Engine_Speed_2994);
    uVar3 = FUN_0000152c(uVar4);
    DAT_fffef144 = (byte)uVar3;
  }
  return uVar3;
}

