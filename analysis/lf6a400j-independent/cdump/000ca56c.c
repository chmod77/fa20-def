
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ca56c(char param_1,char param_2,byte param_3,ushort param_4,char param_5,char param_6,
                 char param_7,byte param_8,uint param_9,uint param_10,uint param_11,byte param_12,
                 uint param_13,uint param_14,char param_15,short param_16,short param_17,
                 ushort param_18,ushort param_19,byte *param_20,undefined2 *param_21,
                 undefined2 *param_22)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 != '\0') {
    uVar6 = (param_10 & 0xffff) + param_16 * -2;
    uVar4 = (param_11 & 0xffff) + param_17 * -2;
    param_9 = param_9 & 0xffff;
    uVar5 = param_9;
    if ((int)uVar6 < (int)param_9) {
      uVar5 = uVar6;
    }
    if ((int)uVar4 < (int)uVar5) {
      uVar5 = uVar4;
    }
    bVar1 = false;
    if ((DAT_fffecba9 != '\x01') && (param_2 == '\x01')) {
      bVar1 = true;
    }
    if (param_15 != '\x02') {
      uVar2 = LK_133E10((uint)&T_02EA84,(uint)param_3);
    }
    else {
      uVar2 = LK_133E10((uint)&T_02EA90,(uint)param_3);
    }
    _DAT_fffecba6 = (undefined2)uVar2;
    if (param_15 != '\x02') {
      uVar3 = LK_133E10((uint)&T_02EA9C,(uint)param_8);
    }
    else {
      uVar3 = LK_133E10((uint)&T_02EAA8,(uint)param_8);
    }
    _DAT_fffecba4 = (undefined2)uVar3;
    if ((((bVar1) && (DAT_fffecbaa = param_12, uVar5 != param_9)) &&
        (((uVar5 != uVar6 ||
          ((((param_13 & 0xffff) < (uVar3 & 0xffff) || (param_5 != '\0')) || (param_6 != '\0')))) ||
         (DAT_fffecbaa = param_8, param_7 != '\0')))) &&
       ((DAT_fffecbaa = param_12, uVar5 == uVar4 && ((param_14 & 0xffff) <= (uVar2 & 0xffff))))) {
      DAT_fffecbaa = param_3;
    }
    if ((((param_18 <= param_4) || (DAT_fffecba8 = param_3, !bVar1)) &&
        ((DAT_fffecba8 = DAT_fffecbaa, bVar1 &&
         (((param_19 < param_4 && (param_5 == '\0')) && (param_6 == '\0')))))) && (param_7 == '\0'))
    {
      DAT_fffecba8 = param_8;
    }
  }
  *param_20 = DAT_fffecba8;
  *param_21 = _DAT_fffecba4;
  *param_22 = _DAT_fffecba6;
  DAT_fffecbaa = DAT_fffecba8;
  DAT_fffecba9 = param_2;
  return;
}

