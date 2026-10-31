
/* WARNING: Removing unreachable block (ram,0x0003c6ec) */
/* WARNING: Removing unreachable block (ram,0x0003c62a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003c578(void)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = _DAT_fffee6a0;
  if (((int)(char)DAT_fffeef78 & 0x80U) == 0) {
    _DAT_fffeef7a = _DAT_fffee6a0;
    DAT_fffeef78 = DAT_fffeef78 | 0x80;
  }
  else {
    _DAT_fffeef7a = FUN_0016b4d8(&DAT_fffeef7a,(int)(short)_DAT_fffee6a0,0xffffffff);
  }
  DAT_fffee69b = (undefined1)(_DAT_fffeef7a >> 8);
  _DAT_ffff29aa = uVar1;
  DAT_fffee69e = (undefined1)(uVar1 >> 8);
  iVar4 = (int)(short)_DAT_fffeef7a;
  if ((DAT_fffeef78 & 0x40) == 0) {
    if (_DAT_fffeef7a != 0xffff) {
      DAT_fffeef78 = DAT_fffeef78 | 0x40;
    }
  }
  else {
    iVar4 = FUN_0016bd78(iVar4,0xffffffff);
  }
  if ((DAT_fffef32a & 2) == 0) {
    _DAT_fffeef86 = FUN_0016bc08(&PTR_DAT_001638c8,iVar4);
  }
  else {
    iVar4 = __udiv32_r1_by_r0(0,7);
    uVar2 = FUN_00001540(iVar4 + 0x7800);
    _DAT_fffeef86 = FUN_0016bd78(uVar2,0x7800);
  }
  if (DAT_ffff66b0 == '\x03') {
    _DAT_fffeef7c = FUN_00001540(_DAT_fffeef7c + 1);
  }
  v_Coolant_Temperature_29A5 = (byte)((ushort)_DAT_fffeef86 >> 8);
  _DAT_fffeef7e = FUN_0016bc08(&PTR_DAT_001638c8,(int)(short)_DAT_fffeef7a);
  uVar3 = FUN_0016bd34(_DAT_fffeef7e - 0xa00);
  iVar4 = __udiv32_r1_by_r0((uVar3 & 0xffff) << 8,0xa0);
  _v_Coolant_Temperature_OBD_F322 = FUN_00001540(iVar4);
  DAT_fffee6fa = (undefined1)(_DAT_fffeef7e >> 8);
  uVar3 = FUN_0016bd28(v_Coolant_Temperature_29A5 - 10,FUN_0016bd28);
  uVar3 = uVar3 & 0xff;
  if (0x9f < uVar3) {
    uVar3 = 0x9f;
  }
  DAT_ffff29a6 = (undefined1)(uVar3 * 0x19a + 0x80 >> 8);
  if ((DAT_fffeef78 & 4) == 0) {
    DAT_fffeef78 = DAT_fffeef78 | 4;
    if (((int)DAT_fffef732 & 0x80U) == 0) {
      DAT_fffee69c = DAT_ffff2fda;
    }
    else {
      DAT_ffff2fda = 0;
      DAT_fffee69c = 0;
    }
  }
  else if (DAT_ffff66b0 == '\x03') {
    DAT_ffff2fda = v_Coolant_Temperature_29A5;
  }
  if ((DAT_ffff66b0 == '\x01') || (DAT_fffeef80 == 0)) {
    DAT_ffff29a7 = v_Coolant_Temperature_29A5;
  }
  else {
    DAT_fffeef78 = DAT_fffeef78 | 0x20;
  }
  uVar3 = FUN_0016bd28(DAT_ffff29a7 - 10,FUN_0016bd28);
  uVar3 = uVar3 & 0xff;
  if (0x9f < uVar3) {
    uVar3 = 0x9f;
  }
  DAT_ffff29a8 = (undefined1)(uVar3 * 0x19a + 0x80 >> 8);
  if ((DAT_fffeef78 & 0x20) == 0) {
    DAT_ffff2fd5 = DAT_ffff29a7;
  }
  if (DAT_ffff66b0 == '\x03') {
    DAT_fffeef78 = DAT_fffeef78 | 0x10;
  }
  if ((DAT_fffeef78 & 0x10) != 0) {
    if ((DAT_fffeef78 & 8) == 0) {
      DAT_fffee757 = v_Coolant_Temperature_29A5;
      DAT_fffee758 = v_Coolant_Temperature_29A5;
      DAT_fffeef78 = DAT_fffeef78 | 8;
    }
    else {
      DAT_fffee757 = FUN_0016b608((int)(char)v_Coolant_Temperature_29A5,(int)(char)DAT_fffee757);
      DAT_fffee758 = FUN_0016bd40((int)(char)v_Coolant_Temperature_29A5,(int)(char)DAT_fffee758);
    }
  }
  if (DAT_ffff66b0 == '\x03') {
    uVar1 = _DAT_ffff29aa >> 6;
    _DAT_fffee752 = FUN_0016b630(uVar1,(int)_DAT_fffee752);
    _DAT_fffee754 = FUN_0016bd78(uVar1,(int)_DAT_fffee754);
  }
  else {
    _DAT_fffee752 = 0;
    _DAT_fffee754 = 0x3ff;
  }
  DAT_fffeef80 = FUN_0000152c(DAT_fffeef80 + 1);
  return;
}

