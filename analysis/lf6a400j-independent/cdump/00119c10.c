
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00119c10(undefined1 param_1,char param_2,ushort param_3,uint param_4,uint param_5,
                 short *param_6)

{
  if ((DAT_fffedfee == '\0') && (param_2 != '\0')) {
    param_4 = param_4 & 0xffff;
    _DAT_fffedfec = (short)(param_4 * 0x14 >> 8) + -0x500;
  }
  if ((((DAT_fffedfee == '\0') && (param_2 != '\0')) && (0xb7ff < param_3)) &&
     (((int)(((param_5 & 0xffff) - (uint)param_3) + 0x4000) < 0x4801 &&
      (0x5fff < (param_4 & 0xffff))))) {
    _DAT_fffedfec = 0x15e0;
  }
  *param_6 = _DAT_fffedfec;
  DAT_fffedfee = param_1;
  return;
}

