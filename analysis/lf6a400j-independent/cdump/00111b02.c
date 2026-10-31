
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00111b02(int param_1,int param_2,char param_3,ushort param_4,byte param_5,char param_6,
                 char param_7,char param_8,byte param_9,char param_10,ushort param_11,char param_12,
                 char param_13,char param_14,char param_15,char param_16,short *param_17)

{
  uint uVar1;
  ushort uVar2;
  
  param_4 = param_4 & 0xff;
  uVar2 = param_4 + 1;
  if (0x66 < uVar2) {
    uVar2 = 0x67;
  }
  uVar1 = (int)(char)uVar2 - 1U & 0xff;
  DAT_ffff1991 = *(byte *)(param_1 + uVar1);
  DAT_ffff1992 = *(byte *)(param_2 + uVar1);
  DAT_ffff1993 = param_5;
  DAT_ffff1994 = param_7;
  _DAT_fffede04 = 0;
  if (param_3 != '\x02') goto LAB_00111c96;
  if (((param_5 & (&DAT_00023b6f)[uVar1]) == 0) && (param_16 != -1)) {
    if ((param_4 == 0x14) && (param_5 == 2)) {
      if (param_8 == '\0') goto LAB_00111c96;
      if (param_10 != '\0') goto LAB_00111c86;
    }
    else {
      if ((param_4 != 0x14) || (param_5 != 1)) {
        if (((param_4 == 0x12) && (param_5 == 0x80)) ||
           ((((param_4 == 0x12 && (param_12 = param_13, param_5 == 0x40)) ||
             ((param_4 == 0x2d && (param_12 = param_14, param_5 == 0x80)))) ||
            ((param_4 == 0x2c && (param_12 = param_15, param_5 == 0x40)))))) {
          if (param_12 != '\0') goto LAB_00111c96;
        }
        else if ((((param_5 & (&DAT_00023bd6)[uVar1]) == 0) && ((param_4 != 0x4b || (param_5 != 4)))
                 ) || (param_6 == '\0')) goto LAB_00111c96;
        FUN_00111ae0();
        goto LAB_00111c96;
      }
      if ((param_10 == '\0') || (param_7 == '\0')) goto LAB_00111c96;
      param_9 = DAT_ffff1991 & DAT_ffff1992 & 1;
    }
    if (param_9 == 0) goto LAB_00111c96;
  }
LAB_00111c86:
  if ((param_11 & 0xff) == 0) {
    _DAT_fffede04 = -1;
  }
  else {
    _DAT_fffede04 = (param_11 & 0xff) + 0x1300;
  }
LAB_00111c96:
  *param_17 = _DAT_fffede04;
  return;
}

