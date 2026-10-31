
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008e8fc(char param_1,byte param_2,byte param_3,ushort param_4,char param_5,char param_6,
                 char param_7,char param_8,ushort param_9,uint param_10,char param_11,
                 ushort *param_12,byte *param_13)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  byte bVar6;
  ushort uVar5;
  byte bVar7;
  
  if (0x5000 < param_9) goto LAB_0008ea8e;
  bVar1 = false;
  if (((param_3 == 1) && (param_11 != '\0')) && (param_2 == 3)) {
    bVar1 = true;
  }
  DAT_fffebcf2 = 0xfe;
  if (bVar1) {
    DAT_fffebcf2 = 3;
    uVar2 = LK_135164((uint)&T_02CEC0,param_10 & 0xff);
    uVar5 = (ushort)uVar2;
    bVar4 = 3;
  }
  else {
    uVar5 = 0x1fe;
    bVar4 = DAT_fffebcf2;
  }
  if (((param_3 != 2) || (uVar3 = 0x1fe, param_7 != '\0')) && (uVar3 = 0, 0x437 < param_4)) {
    uVar3 = param_4 - 0x438;
  }
  bVar7 = param_3 + 1;
  if (bVar7 < param_3) {
    bVar7 = 0xff;
  }
  if (bVar7 < 0xc) {
    bVar6 = bVar7;
    if (bVar7 == 0) {
      bVar6 = 1;
    }
  }
  else {
    bVar6 = 0xb;
  }
  if (bVar6 == 1) {
LAB_0008e9f8:
    bVar4 = 0xfe;
  }
  else if (bVar6 != 2) {
    if (bVar6 == 3) {
      bVar4 = 3;
    }
    else if (((bVar6 == 4) || (bVar6 == 5)) ||
            ((bVar6 == 6 ||
             ((((bVar6 == 7 || (bVar6 == 8)) || (bVar6 == 9)) ||
              ((bVar6 == 10 || (bVar4 = bVar7, bVar6 == 0xb)))))))) goto LAB_0008e9f8;
  }
  if ((bVar6 == 1) ||
     (((bVar6 != 2 && (uVar5 = uVar3, bVar6 != 3)) &&
      ((((bVar6 == 4 || (((bVar6 == 5 || (bVar6 == 6)) || (bVar6 == 7)))) ||
        (((bVar6 == 8 || (bVar6 == 9)) || (bVar6 == 10)))) || (uVar5 = (ushort)bVar6, bVar6 == 0xb))
      )))) {
    uVar5 = 0x1fe;
  }
  if (param_5 == '\0') {
    uVar5 = _DAT_fffebcf4;
  }
  if (param_1 == '\x01') {
    uVar5 = 0x1fe;
  }
  _DAT_fffebcf4 = uVar5;
  if (((param_8 != '\0') || (_DAT_fffebcf0 = _DAT_fffebcf6, param_1 == '\x01')) &&
     ((param_2 != bVar4 || (_DAT_fffebcf0 = uVar5, _DAT_fffebcf6 = uVar5, param_6 != '\0')))) {
    _DAT_fffebcf0 = 0x1fe;
    _DAT_fffebcf6 = 0x1fe;
  }
LAB_0008ea8e:
  *param_13 = DAT_fffebcf2;
  if (0x5000 < param_9) {
    *param_12 = 0x1fe;
  }
  else {
    *param_12 = _DAT_fffebcf0;
  }
  return;
}

