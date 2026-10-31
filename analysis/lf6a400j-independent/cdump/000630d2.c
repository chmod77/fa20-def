
/* WARNING: Removing unreachable block (ram,0x00063138) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000630d2(void)

{
  uint uVar1;
  
  if ((((((_DAT_ffff009c == 0xea) && (_DAT_ffff009e == 0xea)) && (_DAT_ffff00a0 == 0x341)) &&
       ((_DAT_ffff00e8 == 0x23c6 && (_DAT_ffff00ea == 0x23c6)))) &&
      ((_DAT_ffff00ec == 0x2caf && ((_DAT_ffff002a == 0x23c6 && (_DAT_ffff00b4 == 0x89)))))) &&
     (_v_Throttle_Motor_Duty_0128 == -0x3b8)) {
    return 0x60;
  }
  uVar1 = (int)(char)(DAT_ffff34bd | 1) | 0x80;
  DAT_ffff34bd = (char)uVar1;
  return uVar1;
}

