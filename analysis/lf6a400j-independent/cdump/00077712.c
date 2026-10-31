
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00077712(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffff66b2;
  if (((uVar1 & 1) != 0) && (_v_Engine_Speed_OBD_copy_2ADA < 0x800)) {
    _DAT_fffef496 = 0x8106;
    uVar1 = (int)DAT_ffff66b2 & 0xfe;
    DAT_ffff66b2 = (char)uVar1;
  }
  return uVar1;
}

