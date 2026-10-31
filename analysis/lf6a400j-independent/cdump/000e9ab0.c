
/* WARNING: Removing unreachable block (ram,0x000e9b12) */

void FUN_000e9ab0(char param_1,char param_2,char param_3,char param_4,char param_5,ushort param_6,
                 byte param_7,ushort param_8,ushort param_9,undefined4 param_10,char param_11,
                 char param_12,char param_13,ushort param_14,undefined1 *param_15)

{
  undefined1 uVar1;
  
  if ((DAT_fffed460 == '\0') && (param_1 != '\0')) {
    uVar1 = 1;
  }
  else if (param_2 == '\0') {
    if ((((((param_3 == '\0') || (param_4 != '\0')) || (param_5 == '\0')) ||
         ((param_6 < 3000 || (param_7 < 0x7d)))) ||
        ((0xfffe < param_8 || ((param_9 == 0 || (0xffde < param_9)))))) ||
       ((param_11 != '\0' || ((param_12 == '\0' || (param_14 < 0x1400)))))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 3;
    }
  }
  else {
    uVar1 = 2;
  }
  if (param_13 == '\0') {
    *param_15 = uVar1;
  }
  else {
    *param_15 = 0;
  }
  DAT_fffed460 = param_1;
  return;
}

