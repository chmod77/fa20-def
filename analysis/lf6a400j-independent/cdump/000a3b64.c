
/* WARNING: Removing unreachable block (ram,0x000a3c70) */
/* WARNING: Removing unreachable block (ram,0x000a3c4a) */
/* WARNING: Removing unreachable block (ram,0x000a3d8a) */
/* WARNING: Removing unreachable block (ram,0x000a3d92) */

void FUN_000a3b64(char param_1,char param_2,char param_3,ushort param_4,byte param_5,short param_6,
                 char param_7,short param_8,undefined4 param_9,undefined4 param_10,char param_11,
                 char param_12,char param_13,char param_14,char param_15,ushort param_16,
                 char param_17,char param_18,char param_19,char param_20,undefined4 param_21,
                 char param_22,undefined4 param_23,short param_24,ushort param_25,char param_26,
                 char param_27,char param_28,char param_29,char param_30,undefined1 *param_31)

{
  ushort uVar1;
  
  if (DAT_fffec2e9 == '\0') {
    uVar1 = 0x1a00;
  }
  else {
    uVar1 = 0x1c00;
  }
  if ((((((param_1 == '\0') && (DAT_fffec2e8 = 1, param_2 == '\0')) && (param_3 == '\0')) &&
       (((0x9fff < param_4 && (param_5 < 2)) && ((param_6 == 0 && (param_7 == '\0')))))) &&
      ((((param_28 != '\0' || (param_27 != '\0')) && ((param_28 == '\0' || (param_26 != '\0')))) &&
       (((((param_25 > uVar1 || (param_17 < -0x28)) && (param_18 == '\0')) &&
         ((param_19 == '\0' && (param_20 != '\0')))) &&
        ((((-0x1734 < param_8 && ((param_8 < 0x1900 && (param_12 == '\0')))) && (param_30 == '\0'))
         && ((param_13 == '\0' && (((param_24 == -1 || (param_24 == 0)) && (param_14 == '\0'))))))))
       )))) && ((param_15 == '\0' &&
                (((param_22 == '\0' || (param_11 == '\0')) && (param_29 == '\0')))))) {
    DAT_fffec2e8 = 0;
  }
  *param_31 = DAT_fffec2e8;
  DAT_fffec2e9 = param_25 <= uVar1;
  DAT_fffec2ea = 0xfffe < param_16;
  return;
}

