
/* WARNING: Removing unreachable block (ram,0x0003cd90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0003ccf6(void)

{
  uint uVar1;
  
  if (((((DAT_fffef32d & 2) == 0) && (((int)DAT_fffef3e1 & 0x80U) == 0)) &&
      ((DAT_fffef0eb & 1) == 0)) && (((DAT_fffef0eb & 2) == 0 && ((DAT_fffef32a & 1) == 0)))) {
    _v_Vehicle_Speed_F324 = _DAT_ffff0f42;
    v_Vehicle_Speed_byte_65A1 = FUN_0000152c((uint)_DAT_ffff0f42 * 0xe66 >> 0x10);
    _DAT_fffef0da = _v_Vehicle_Speed_F324;
    _DAT_fffef394 = FUN_00001540((uint)_v_Vehicle_Speed_F324 * 0xe66 >> 9);
  }
  else {
    _v_Vehicle_Speed_F324 = _DAT_ffff0f42;
    v_Vehicle_Speed_byte_65A1 = 10;
    _DAT_fffef0da = 0xb2;
    _DAT_fffef394 = 0x500;
  }
  if (DAT_fffef399 < 4) {
    uVar1 = (uint)DAT_fffef3a2;
    if ((uVar1 & 1) == 0) {
      _DAT_fffef390 = _DAT_fffef394;
      _DAT_fffef392 = _DAT_fffef394;
      uVar1 = (int)DAT_fffef3a2 | 1;
      DAT_fffef3a2 = (char)uVar1;
    }
    DAT_fffef399 = DAT_fffef399 + 1;
    return uVar1;
  }
  DAT_fffef399 = 0;
  FUN_0016b4d8(&DAT_fffef390,(int)_DAT_fffef394,0x3852);
  uVar1 = FUN_0016b4d8(&DAT_fffef392,(int)_DAT_fffef394,0xffff8000);
  return uVar1;
}

