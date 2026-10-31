
/* WARNING: Removing unreachable block (ram,0x00105cc2) */
/* WARNING: Removing unreachable block (ram,0x00105cc8) */
/* WARNING: Removing unreachable block (ram,0x00105cd2) */
/* WARNING: Removing unreachable block (ram,0x00105cd8) */
/* WARNING: Removing unreachable block (ram,0x00105ce0) */
/* WARNING: Removing unreachable block (ram,0x00105ce6) */
/* WARNING: Removing unreachable block (ram,0x00105cf0) */
/* WARNING: Removing unreachable block (ram,0x00105cf6) */
/* WARNING: Removing unreachable block (ram,0x00105cfe) */
/* WARNING: Removing unreachable block (ram,0x00105cfa) */
/* WARNING: Removing unreachable block (ram,0x00105cec) */
/* WARNING: Removing unreachable block (ram,0x00105cdc) */
/* WARNING: Removing unreachable block (ram,0x00105cce) */
/* WARNING: Removing unreachable block (ram,0x00105d6a) */
/* WARNING: Removing unreachable block (ram,0x00106250) */
/* WARNING: Removing unreachable block (ram,0x00105f96) */
/* WARNING: Removing unreachable block (ram,0x00105f9c) */
/* WARNING: Removing unreachable block (ram,0x00106210) */
/* WARNING: Removing unreachable block (ram,0x00106220) */
/* WARNING: Removing unreachable block (ram,0x00106228) */
/* WARNING: Removing unreachable block (ram,0x00106238) */
/* WARNING: Removing unreachable block (ram,0x0010623a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00105acc(byte param_1,byte param_2,byte param_3,byte param_4,uint param_5,uint param_6,
                 ushort param_7,char param_8,char param_9,char param_10,char param_11,char param_12,
                 char param_13,char param_14,char param_15,char param_16,ushort param_17,
                 char param_18,uint param_19,ushort param_20,char param_21,char param_22,
                 uint param_23,undefined4 param_24,undefined4 param_25,char param_26,char param_27,
                 char param_28,short param_29,uint param_30,uint param_31,short *param_32,
                 int *param_33,int *param_34,ushort *param_35,int *param_36,ushort *param_37,
                 ushort *param_38,int *param_39,short *param_40,ushort *param_41,
                 undefined1 *param_42,undefined2 *param_43)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ushort uStack_64;
  short sStack_34;
  
  if ((((param_26 == '\0') || (param_27 == '\0')) && (param_28 != '\0')) && (param_1 != 0)) {
    param_5 = param_5 & 0xffff;
    iVar7 = (param_19 & 0xffff) - param_5;
    uVar8 = (uint)param_29;
    param_30 = param_30 & 0xffff;
    param_31 = param_31 & 0xffff;
    if (iVar7 < 0x8000) {
      if (iVar7 < -0x8000) {
        iVar7 = -0x8000;
      }
    }
    else {
      iVar7 = 0x7fff;
    }
    _DAT_fffeda94 = (short)iVar7;
    uVar2 = LK_133E10((uint)&T_02FB14,param_6 & 0xff);
    puVar6 = (undefined *)((uVar2 & 0xffff) + (param_23 & 0xffff));
    iVar7 = (int)(short)iVar7;
    uVar2 = (int)&DAT_00008000 + iVar7 & 0xffff;
    if (puVar6 < &UNK_00013e80) {
      if (puVar6 < (undefined *)0x3e80) {
        uStack_64 = 0;
      }
      else {
        uStack_64 = (short)puVar6 + 0xc180;
      }
    }
    else {
      uStack_64 = 0xffff;
    }
    _DAT_fffeda8e = uStack_64;
    uVar5 = 0;
    bVar1 = param_18 == '3';
    _DAT_fffeda90 = param_7;
    if (40000 < param_7) {
      _DAT_fffeda90 = 40000;
    }
    fVar11 = (((float)_DAT_fffeda90 * 0.012499999 + -200.0) * (float)param_20 * 0.0009765625) /
             0.33984375;
    fVar9 = 5.368709e+07;
    if ((fVar11 <= 5.368709e+07) && (fVar9 = fVar11, fVar11 < -5.368709e+07)) {
      fVar9 = -5.368709e+07;
    }
    if (fVar9 <= 5.368709e+07) {
      if (-5.368709e+07 <= fVar9) {
        _DAT_fffeda88 = (int)(fVar9 * 40.0);
      }
      else {
        _DAT_fffeda88 = -0x80000000;
      }
    }
    else {
      _DAT_fffeda88 = 0x7fffffff;
    }
    DAT_fffeda9a = uVar5;
    if (param_18 != '?') {
      if (param_18 != '#') {
        if (param_18 != -0x50) {
          uVar8 = LK_136630((uint)&T_02FB34,uVar8,uVar2);
          uVar3 = (ushort)uVar8;
        }
        else {
          uVar8 = LK_136630((uint)&T_02FB48,uVar8,uVar2);
          uVar3 = (ushort)uVar8;
        }
      }
      else {
        uVar8 = LK_136630((uint)&T_02FB20,uVar8,uVar2);
        uVar3 = (ushort)uVar8;
      }
    }
    else {
      uVar8 = LK_136630((uint)&T_02FB5C,uVar8,uVar2);
      uVar3 = (ushort)uVar8;
    }
    _DAT_fffeda92 = uVar3;
    if (param_18 != '?') {
      if (param_18 != '#') {
        if (param_18 != -0x50) {
          uVar8 = LK_1364B8((uint)&T_02FB84,param_30,param_31);
        }
        else {
          uVar8 = LK_1364B8((uint)&T_02FB98,param_30,param_31);
        }
      }
      else {
        uVar8 = LK_1364B8((uint)&T_02FB70,param_30,param_31);
      }
    }
    else {
      uVar8 = LK_1364B8((uint)&T_02FBAC,param_30,param_31);
    }
    _DAT_fffeda98 = (undefined2)uVar8;
    puVar6 = (undefined *)__udiv32_r1_by_r0((uVar8 & 0xffff) * (uint)uVar3,0xa0);
    if (&DAT_0000ffff < puVar6) {
      puVar6 = &DAT_0000ffff;
    }
    if (DAT_fffedaa7 == '\0') {
      DAT_fffedaa2 = '\0';
      DAT_fffedaa7 = '\x01';
    }
    if (DAT_fffedaa2 == '\0') {
      _DAT_ffff19e2 = (ushort)puVar6;
    }
    else {
      FUN_0016b4d8(&DAT_ffff19e2,puVar6,0xffff8000);
    }
    DAT_fffedaa2 = '\x01';
    _DAT_fffeda96 = _DAT_ffff19e2;
    if (((((((param_9 != '\0') && (param_2 < DAT_fffedaa6)) ||
           ((param_8 != '\0' && (param_3 < DAT_fffedaa5)))) ||
          ((param_10 != '\0' && (param_4 < DAT_fffedaa4)))) ||
         (((bVar1 && (DAT_fffedaa3 == -0x31)) ||
          ((((param_11 != '\0' && (bVar1)) && (DAT_fffedaa3 == '#')) ||
           (((param_12 != '\0' && (bVar1)) && (DAT_fffedaa3 == -0x50)))))))) ||
        ((((DAT_fffedaa9 < param_1 ||
           (((param_13 != '\0' && (param_2 != 0)) && ((param_18 == '@' && (DAT_fffedaa3 == '3'))))))
          || (((((param_14 != '\0' && (param_2 != 0)) && (param_18 == -0x40)) &&
               (DAT_fffedaa3 == '3')) ||
              (((param_15 != '\0' && (param_18 == '@')) && (DAT_fffedaa3 != '@')))))) ||
         ((((param_16 != '\0' && (param_18 == -0x40)) && (DAT_fffedaa3 != -0x40)) ||
          (((param_21 != '\0' && (param_18 == '@')) && (DAT_fffedaa3 == '?')))))))) ||
       (((param_22 != '\0' && (param_18 == -0x40)) && (DAT_fffedaa3 == '?')))) {
      _DAT_fffeda9c =
           (fVar11 + (float)param_5 * 32000.0 * 4.8828122e-05 +
           -((float)_DAT_ffff19e2 * (float)iVar7) * 4.8828122e-05) / 2.0;
    }
    fVar9 = 5.368709e+07;
    fVar11 = fVar9;
    if ((_DAT_fffeda9c <= 5.368709e+07) && (fVar11 = _DAT_fffeda9c, _DAT_fffeda9c < -5.368709e+07))
    {
      fVar11 = -5.368709e+07;
    }
    if (fVar11 <= 5.368709e+07) {
      if (-5.368709e+07 <= fVar11) {
        _DAT_fffeda84 = (int)(fVar11 * 40.0);
      }
      else {
        _DAT_fffeda84 = -0x80000000;
      }
    }
    else {
      _DAT_fffeda84 = 0x7fffffff;
    }
    fVar11 = _DAT_fffeda9c;
    if (((((param_19 & 0xffff) <= param_5) ||
         (((param_17 < uStack_64 && (param_3 == 0)) && (_DAT_fffedaa0 < 0x7fff)))) &&
        ((param_5 <= (param_19 & 0xffff) || ((0 < _DAT_fffedaa0 && (param_2 == 0)))))) &&
       ((param_4 == 0 && (param_2 == 0)))) {
      fVar11 = _DAT_fffeda9c + (float)_DAT_ffff19e2 * (float)iVar7 * 4.8828122e-05;
    }
    fVar10 = fVar11 + _DAT_fffeda9c + -((float)param_5 * 32000.0) * 4.8828122e-05;
    fVar12 = fVar9;
    if ((fVar10 <= 5.368709e+07) && (fVar12 = fVar10, fVar10 < -5.368709e+07)) {
      fVar12 = -5.368709e+07;
    }
    if (fVar12 <= 5.368709e+07) {
      if (-5.368709e+07 <= fVar12) {
        _DAT_fffeda7c = (int)(fVar12 * 40.0);
      }
      else {
        _DAT_fffeda7c = -0x80000000;
      }
    }
    else {
      _DAT_fffeda7c = 0x7fffffff;
    }
    if ((fVar11 <= 5.368709e+07) && (fVar9 = fVar11, fVar11 < -5.368709e+07)) {
      fVar9 = -5.368709e+07;
    }
    if (fVar9 <= 5.368709e+07) {
      if (-5.368709e+07 <= fVar9) {
        _DAT_fffeda80 = (int)(fVar9 * 40.0);
      }
      else {
        _DAT_fffeda80 = -0x80000000;
      }
    }
    else {
      _DAT_fffeda80 = 0x7fffffff;
    }
    fVar12 = fVar10 * 87.0 * 0.00390625;
    fVar9 = 1638.35;
    if ((fVar12 <= 1638.35) && (fVar9 = -1638.3999, -1638.3999 <= fVar12)) {
      fVar9 = fVar12;
    }
    iVar7 = 0x7fffffff;
    if ((fVar9 <= 5.368709e+07) && (iVar7 = -0x80000000, -5.368709e+07 <= fVar9)) {
      iVar7 = (int)(fVar9 * 40.0);
    }
    iVar4 = iVar7;
    if ((-1 < iVar7) && (iVar4 = 0x7fffffff, iVar7 < 0x7fffffff)) {
      iVar4 = iVar7 + 1;
    }
    sStack_34 = 0x7fff;
    if ((iVar4 < (int)&DAT_0000ffff) && (sStack_34 = -0x8000, -0x10000 < iVar4)) {
      sStack_34 = (short)(iVar4 >> 1);
    }
    if (sStack_34 < 1) {
      sStack_34 = 0;
    }
    if (0x7ffe < sStack_34) {
      sStack_34 = 0x7fff;
    }
    _DAT_fffeda8c = sStack_34;
    DAT_fffedaa3 = param_18;
    _DAT_fffedaa0 = sStack_34;
    _DAT_fffeda9c = fVar11;
    DAT_fffedaa4 = param_4;
    DAT_fffedaa5 = param_3;
    DAT_fffedaa6 = param_2;
    DAT_fffedaa8 = uVar5;
  }
  else {
    DAT_fffedaa7 = '\0';
  }
  *param_32 = _DAT_fffeda8c;
  *param_33 = _DAT_fffeda7c;
  *param_34 = _DAT_fffeda80;
  *param_35 = _DAT_fffeda8e;
  *param_36 = _DAT_fffeda84;
  *param_37 = _DAT_fffeda90;
  *param_38 = _DAT_fffeda92;
  *param_39 = _DAT_fffeda88;
  *param_40 = _DAT_fffeda94;
  *param_41 = _DAT_fffeda96;
  *param_42 = DAT_fffeda9a;
  *param_43 = _DAT_fffeda98;
  DAT_fffedaa9 = param_1;
  return;
}

