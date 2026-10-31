
/* WARNING: Removing unreachable block (ram,0x0008c9da) */
/* WARNING: Removing unreachable block (ram,0x0008c96a) */
/* WARNING: Removing unreachable block (ram,0x0008c95c) */
/* WARNING: Removing unreachable block (ram,0x0008c9cc) */

void FUN_0008c790(char param_1,char param_2,char param_3,char param_4,char param_5,uint param_6,
                 byte param_7,byte param_8,byte param_9,uint param_10,ushort param_11,
                 ushort param_12,uint param_13,uint param_14,char param_15,char param_16,
                 undefined2 *param_17,undefined2 *param_18,undefined2 *param_19)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_14 & 0xff) <= (param_13 & 0xff)) {
    param_13 = param_14;
  }
  if (param_16 == '\0') {
    uVar1 = LK_1339D4((uint)&T_02CDD8,param_13);
  }
  else {
    uVar1 = LK_1339D4((uint)&T_02CDC0,param_10 & 0xff);
  }
  uVar2 = uVar1 & 0xffff;
  *param_18 = (short)uVar1;
  if (param_16 == '\0') {
    uVar1 = LK_1339D4((uint)&T_02CDE4,param_13);
  }
  else {
    uVar1 = LK_1339D4((uint)&T_02CDCC,param_10 & 0xff);
  }
  *param_19 = (short)uVar1;
  if (DAT_fffebc94 != '\0') {
    if (uVar2 < (uVar1 & 0xffff)) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar2 - (uVar1 & 0xffff);
    }
    uVar2 = uVar2 & 0xffff;
  }
  DAT_fffebc94 = uVar2 <= (param_6 & 0xffff);
  if (((((param_15 != '\0') || (param_2 == '\0')) || ((bool)DAT_fffebc94)) ||
      ((0xfe < param_7 || (0xfe < param_8)))) ||
     (((0xfffe < param_11 || (0xfffe < param_12)) ||
      (((0xfe < param_9 && (0xfe < param_8)) || (0xfe < param_9)))))) {
    *param_17 = 0;
  }
  else if ((param_3 == '\x03') && (param_1 != '\0')) {
    *param_17 = 0;
  }
  else if ((param_4 != '\0') || ((param_5 != '\x02' && (param_5 != '\x04')))) {
    if ((param_5 != '\0') || (param_4 != '\0')) {
      *param_17 = 0;
    }
    else {
      *param_17 = 0;
    }
  }
  else {
    *param_17 = 0;
  }
  DAT_fffebc98 = param_2 == '\0';
  DAT_fffebc93 = 0xfe < param_7;
  DAT_fffebc97 = 0xfe < param_8;
  DAT_fffebc92 = 0xfffe < param_11;
  DAT_fffebc96 = 0xfffe < param_12;
  DAT_fffebc91 = 0xfe < param_9;
  DAT_fffebc95 = 0xfe < param_8;
  DAT_fffebc90 = 0xfe < param_9;
  return;
}

