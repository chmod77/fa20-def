
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b6258(byte param_1,char param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8,char param_9,short param_10,uint param_11,uint param_12,
                 ushort *param_13,char param_14,uint param_15,char param_16,char param_17,
                 char param_18,uint param_19,char param_20,char param_21,undefined1 *param_22,
                 undefined1 *param_23)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  iVar5 = (int)param_10;
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  uVar6 = (ushort)iVar5;
  if (iVar5 < 0) {
    uVar6 = 0;
  }
  uVar4 = LK_134FA8((uint)&T_02E418,param_12 & 0xff);
  *param_23 = (char)uVar4;
  puVar9 = (undefined *)
           ((param_3 & 0xffff) * 0x100 + (param_4 & 0xffff) + (param_5 & 0xff) * 0x100 +
            (param_6 & 0xff) * 0x100 + (param_7 & 0xff) * 0x100 + (param_8 & 0xff) * 0x200 +
           (param_15 & 0xffff) * 0x100);
  puVar8 = puVar9 + (param_19 & 0xffff) * 0x100;
  if ((puVar8 < puVar9) || (&DAT_0000ffff < puVar8)) {
    puVar8 = (undefined *)0xffffffff;
  }
  bVar1 = 0x31 < _DAT_fffec760;
  bVar2 = false;
  if (param_9 != '\0') {
    sVar3 = -1;
    if (_DAT_fffec760 != 0xffff) {
      sVar3 = _DAT_fffec760 + 1;
    }
  }
  else {
    bVar2 = 0x31 < _DAT_fffec762;
    _DAT_fffec760 = 0;
    sVar3 = _DAT_fffec760;
  }
  _DAT_fffec760 = sVar3;
  if (param_9 != '\0') {
    _DAT_fffec762 = 0;
    sVar3 = _DAT_fffec762;
  }
  else {
    sVar3 = -1;
    if (_DAT_fffec762 != 0xffff) {
      sVar3 = _DAT_fffec762 + 1;
    }
  }
  _DAT_fffec762 = sVar3;
  uVar7 = 0;
  if (((((((param_2 != '\0') && (uVar6 < 0x4a9)) && (0x7c < param_1)) &&
        (((param_1 < 0x91 && (0x7fa1 < *param_13)) &&
         ((*param_13 < 0x805f && ((0x7fa1 < param_13[1] && (param_13[1] < 0x805f)))))))) &&
       ((0x7fa1 < param_13[2] &&
        (((param_13[2] < 0x805f && (0x7fa1 < param_13[3])) && (param_13[3] < 0x805f)))))) &&
      ((((((uint)puVar8 & 0xffff) == 0 && ((param_9 != '\0' && bVar1 || (bVar2)))) &&
        (param_14 == '\0')) && (((uVar4 & 0xff) <= (param_11 & 0xff) && (param_16 == '\0')))))) &&
     ((param_17 == '\x04' && (((param_18 == '\0' && (param_20 == '\0')) && (param_21 == '\0')))))) {
    uVar7 = 1;
  }
  *param_22 = uVar7;
  return;
}

