
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00058ca0(void)

{
  if (((DAT_fffef371 & 4) != 0) && (0x34cb < _v_Ambient_Air_Temperature_F344)) {
    DAT_fffef371 = DAT_fffef371 | 0x20;
    return;
  }
  DAT_fffef371 = DAT_fffef371 & 0xdf;
  return;
}

