
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ad770(char param_1,char param_2,char param_3,char param_4,char param_5,ushort param_6,
                 char param_7,uint param_8,uint param_9,short param_10,short param_11,char param_12,
                 char param_13,char param_14,char param_15,char param_16,char param_17,char param_18
                 ,char param_19,char param_20,char param_21,char param_22,char param_23,
                 char param_24,char param_25,char param_26,char param_27,char param_28,char param_29
                 ,char param_30,char param_31,short param_32,short param_33,uint param_34,
                 short param_35,ushort param_36,char param_37,ushort param_38,ushort param_39,
                 char param_40,char param_41,undefined1 *param_42,undefined1 *param_43)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar8 = (int)(short)param_39;
  iVar10 = (param_8 & 0xffff) - (param_9 & 0xffff);
  if (iVar10 < 0x8000) {
    if (iVar10 < -0x8000) {
      iVar10 = -0x8000;
    }
  }
  else {
    iVar10 = 0x7fff;
  }
  iVar11 = (param_9 & 0xffff) - ((int)(param_34 & 0xffff) >> 2);
  iVar9 = 0x7fff;
  if (iVar11 < 0x8000) {
    iVar9 = iVar11;
  }
  if (iVar8 < 0) {
    iVar8 = -iVar8;
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    param_39 = (ushort)iVar8;
  }
  else if (iVar8 < 0) {
    param_39 = 0;
  }
  bVar4 = false;
  if ((-0xb5 < (short)iVar10) && ((short)iVar10 < 0xb4)) {
    bVar4 = true;
  }
  if (param_19 == '\0') {
    bVar6 = true;
  }
  else {
    bVar6 = false;
    if ((param_31 != -1) && (param_32 == param_33)) {
      bVar6 = true;
    }
  }
  if (param_19 == '\0') {
    bVar5 = true;
  }
  else {
    bVar5 = false;
    if ((param_17 == '\0') && (param_18 == '\0')) {
      bVar5 = true;
    }
  }
  bVar2 = false;
  if ((((((param_21 == DAT_fffec55e) && (param_12 == DAT_fffec55c)) && (param_22 == DAT_fffec565))
       && ((param_23 == DAT_fffec564 && (param_24 == DAT_fffec558)))) &&
      (param_26 == '\0' || param_25 == DAT_fffec562)) && (param_37 == DAT_fffec561)) {
    bVar2 = true;
  }
  bVar1 = false;
  if (bVar2) {
    bVar1 = 99 < _DAT_fffec556;
    _DAT_fffec556 = _DAT_fffec556 + 1;
    if (_DAT_fffec556 == 0) {
      _DAT_fffec556 = -1;
    }
  }
  else {
    _DAT_fffec556 = 0;
  }
  bVar2 = false;
  if (param_28 == '\0') {
    bVar2 = true;
    DAT_fffec55f = DAT_fffec55f + '\x01';
    if (DAT_fffec55f == '\0') {
      DAT_fffec55f = -1;
    }
  }
  else {
    DAT_fffec55f = '\0';
  }
  bVar3 = false;
  if (param_29 == '\0') {
    bVar3 = true;
    DAT_fffec560 = DAT_fffec560 + '\x01';
    if (DAT_fffec560 == '\0') {
      DAT_fffec560 = -1;
    }
  }
  else {
    DAT_fffec560 = '\0';
  }
  bVar7 = false;
  if ((((((param_5 == '\0') && (0xafff < param_6)) &&
        ((param_7 != '\0' && (((-0x23 < param_35 && (param_35 < 0x22)) && (param_10 == 0)))))) &&
       (((param_11 == 0 && (param_36 < 0x219b)) &&
        ((param_12 == '\0' &&
         (((param_13 == '\0' && (param_14 == '\0')) &&
          ((param_16 == '\0' || param_15 == '\0' && (((bVar5 && (param_20 == '\0')) && (bVar1)))))))
         ))))) && ((param_27 != '\0' && (param_39 < 0xee)))) &&
     ((param_38 < 0x15a7 &&
      ((((bVar2 || (param_40 != '\0')) &&
        ((param_30 == '\0' || (((bVar3 || (param_29 != '\0')) || (param_41 != '\0')))))) &&
       ((bVar6 && ((short)iVar9 < 0x1400)))))))) {
    bVar7 = true;
  }
  bVar6 = false;
  if ((bVar7) && (bVar4)) {
    bVar6 = true;
  }
  bVar5 = false;
  if ((bVar7) && (!bVar4)) {
    bVar5 = true;
  }
  if (param_29 == '\0') {
    DAT_fffec563 = '\0';
  }
  else {
    DAT_fffec563 = DAT_fffec563 + '\x01';
    if (DAT_fffec563 == '\0') {
      DAT_fffec563 = -1;
    }
  }
  if (param_1 != '\0') {
    bVar4 = param_2 == '\0';
    DAT_fffec554 = 1;
    if (!bVar6 || DAT_fffec55d < 100) {
      DAT_fffec554 = DAT_fffec559;
    }
    DAT_fffec555 = 1;
    if (!bVar5) {
      DAT_fffec555 = DAT_fffec55b;
    }
    bVar2 = true;
    if (((param_3 == '\0') && (param_4 == '\0')) && (DAT_fffec55a <= bVar4)) {
      bVar2 = false;
    }
    if ((!bVar5) || (bVar2)) {
      DAT_fffec555 = 0;
    }
    DAT_fffec55a = bVar4;
    DAT_fffec55b = DAT_fffec555;
    if ((!bVar6 || DAT_fffec55d < 100) || (DAT_fffec559 = DAT_fffec554, bVar2)) {
      DAT_fffec554 = 0;
      DAT_fffec559 = DAT_fffec554;
    }
  }
  *param_42 = DAT_fffec554;
  *param_43 = DAT_fffec555;
  if (bVar6) {
    DAT_fffec55d = DAT_fffec55d + 1;
    if (DAT_fffec55d == '\0') {
      DAT_fffec55d = -1;
    }
  }
  else {
    DAT_fffec55d = '\0';
  }
  DAT_fffec55e = param_21;
  DAT_fffec55c = param_12;
  DAT_fffec565 = param_22;
  DAT_fffec564 = param_23;
  DAT_fffec558 = param_24;
  DAT_fffec562 = param_25;
  DAT_fffec561 = param_37;
  return;
}

