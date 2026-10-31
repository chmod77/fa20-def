
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cd150(char param_1,char param_2,char param_3,char param_4,char param_5,ushort param_6,
                 uint param_7,uint param_8,char param_9,char param_10,char param_11,ushort param_12,
                 char param_13,char param_14,char param_15,undefined1 *param_16,undefined4 param_17,
                 short *param_18,undefined2 *param_19)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  undefined *puVar7;
  bool bVar8;
  
  bVar4 = false;
  if (((param_5 != '\0') && (param_14 != '\0')) && (0x14d4 < param_6)) {
    bVar4 = true;
  }
  bVar2 = false;
  if (param_5 == '\0') {
    if (param_6 < 0x14d5) {
      uVar6 = LK_133F40((uint)&T_02EB40,(uint)param_6);
      if (((param_7 & 0xffff) < (uVar6 & 0xffff)) &&
         (uVar6 = LK_133BCC((uint)&T_02EB4C,param_7 & 0xffff), (param_8 & 0xff) < (uVar6 & 0xff)))
      goto LAB_000cd230;
    }
    bVar2 = true;
  }
LAB_000cd230:
  bVar8 = false;
  if (param_11 == '\0') {
    bVar8 = 0x27 < _DAT_fffecc6a;
    sVar5 = -1;
    if (_DAT_fffecc6a != 0xffff) {
      sVar5 = _DAT_fffecc6a + 1;
    }
  }
  else {
    _DAT_fffecc6a = 0;
    sVar5 = _DAT_fffecc6a;
  }
  _DAT_fffecc6a = sVar5;
  bVar1 = false;
  if ((param_15 == '\0') && (param_3 != '\x03')) {
    bVar1 = true;
  }
  if ((param_10 == '\0') && (param_4 == '\0')) {
    uVar6 = LK_136050((uint)&T_02EB58,param_7 & 0xffff,param_8 & 0xff);
    puVar7 = (undefined *)(uVar6 & 0xffff);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  *param_19 = (short)puVar7;
  bVar3 = false;
  if ((param_5 != '\0') &&
     ((((param_9 == '\0' && (param_10 == '\0')) &&
       (((bVar8 && (0x5998 < param_12)) || (&UNK_000095ff < puVar7)))) ||
      (((param_9 != '\0' && (&UNK_000095ff < puVar7)) || ((param_9 == '\0' && (param_13 != '\0')))))
      ))) {
    bVar3 = true;
  }
  bVar8 = _DAT_fffecc68 == 0;
  if (!bVar1) {
    if (param_4 != '\0') {
      bVar8 = true;
      goto LAB_000cd320;
    }
    if ((((!bVar2) && (!bVar3)) && (!bVar4)) && (param_5 == '\0')) goto LAB_000cd320;
  }
  bVar8 = false;
LAB_000cd320:
  if ((param_1 == '\0') || (param_2 != '\0')) {
    *param_16 = 0;
  }
  else {
    *param_16 = bVar8;
  }
  *(bool *)param_17 = bVar8;
  if ((_DAT_fffecc68 == 0) || (_DAT_fffecc68 == 0)) {
    _DAT_fffecc68 = 0;
  }
  else {
    _DAT_fffecc68 = _DAT_fffecc68 + -1;
  }
  if ((bVar1) || (param_4 != '\0')) {
    _DAT_fffecc68 = 0;
  }
  else if ((((bVar2) || (bVar3)) || (bVar4)) || (param_5 != '\0')) {
    _DAT_fffecc68 = 100;
  }
  *param_18 = _DAT_fffecc68;
  return;
}

