
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008e2ec(char param_1,byte param_2,byte param_3,ushort param_4,char param_5,char param_6,
                 char param_7,char param_8,ushort param_9,uint param_10,char param_11,
                 ushort *param_12,byte *param_13)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  
  if (0x5000 < param_9) goto LAB_0008e482;
  bVar4 = param_3 + 1;
  if (bVar4 < param_3) {
    bVar4 = 0xff;
  }
  bVar3 = 0xb;
  if ((bVar4 < 0xc) && (bVar3 = 1, bVar4 != 0)) {
    bVar3 = bVar4;
  }
  bVar1 = false;
  if (((param_3 == 1) && (param_11 != '\0')) && (param_2 == 3)) {
    bVar1 = true;
  }
  DAT_fffebcd2 = 0xfe;
  if (bVar1) {
    DAT_fffebcd2 = 3;
    uVar2 = LK_135164((uint)&T_02CEA8,param_10 & 0xff);
    uVar6 = (ushort)uVar2;
    bVar4 = 3;
  }
  else {
    uVar6 = 0x1fe;
    bVar4 = DAT_fffebcd2;
  }
  if ((param_3 == 2) && (param_7 == '\0')) {
    uVar5 = 0x1fe;
    param_4 = 0x1fe;
  }
  else if (param_4 < 0x438) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_4 - 0x438;
    param_4 = uVar5;
  }
  if ((bVar3 == 1) ||
     (((bVar3 != 2 && (uVar6 = uVar5, bVar3 != 3)) &&
      ((((bVar3 == 4 ||
         ((((bVar3 == 5 || (bVar3 == 6)) || (bVar3 == 7)) || ((bVar3 == 8 || (bVar3 == 9)))))) ||
        (bVar3 == 10)) || (uVar6 = param_4, bVar3 == 0xb)))))) {
    uVar6 = 0x1fe;
  }
  if (bVar3 == 1) {
LAB_0008e42c:
    bVar4 = 0xfe;
  }
  else if (bVar3 != 2) {
    if (bVar3 == 3) {
      bVar4 = 3;
    }
    else if ((((bVar3 == 4) || (bVar3 == 5)) ||
             ((bVar3 == 6 || (((bVar3 == 7 || (bVar3 == 8)) || (bVar3 == 9)))))) ||
            ((bVar3 == 10 || (bVar4 = bVar3, bVar3 == 0xb)))) goto LAB_0008e42c;
  }
  if (param_5 == '\0') {
    uVar6 = _DAT_fffebcd4;
  }
  if (param_1 == '\x01') {
    uVar6 = 0x1fe;
  }
  _DAT_fffebcd4 = uVar6;
  if (((param_8 != '\0') || (_DAT_fffebcd0 = _DAT_fffebcd6, param_1 == '\x01')) &&
     ((param_2 != bVar4 || (_DAT_fffebcd0 = uVar6, _DAT_fffebcd6 = uVar6, param_6 != '\0')))) {
    _DAT_fffebcd0 = 0x1fe;
    _DAT_fffebcd6 = 0x1fe;
  }
LAB_0008e482:
  *param_13 = DAT_fffebcd2;
  if (0x5000 < param_9) {
    *param_12 = 0x1fe;
  }
  else {
    *param_12 = _DAT_fffebcd0;
  }
  return;
}

