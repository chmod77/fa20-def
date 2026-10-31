
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008e5fc(char param_1,char param_2,byte param_3,ushort param_4,char param_5,char param_6,
                 char param_7,char param_8,ushort param_9,uint param_10,char param_11,
                 ushort *param_12,char *param_13)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  byte bVar6;
  
  if (0x5000 < param_9) goto LAB_0008e786;
  bVar1 = false;
  if (((param_3 == 1) && (param_11 != '\0')) && (param_2 == '\x03')) {
    bVar1 = true;
  }
  cVar5 = -2;
  if (bVar1) {
    cVar5 = '\x03';
  }
  uVar3 = 0x1fe;
  DAT_fffebce2 = cVar5;
  if (bVar1) {
    uVar2 = LK_135164((uint)&T_02CEB4,param_10 & 0xff);
    uVar3 = (ushort)uVar2;
  }
  bVar6 = param_3 + 1;
  if (bVar6 < param_3) {
    bVar6 = 0xff;
  }
  if (bVar6 < 0xc) {
    if (bVar6 == 0) {
      bVar6 = 1;
    }
  }
  else {
    bVar6 = 0xb;
  }
  if (bVar6 == 1) {
LAB_0008e6d6:
    cVar5 = -2;
  }
  else if (bVar6 != 2) {
    if (bVar6 == 3) {
      cVar5 = '\x03';
    }
    else if ((((bVar6 == 4) || (bVar6 == 5)) || ((bVar6 == 6 || ((bVar6 == 7 || (bVar6 == 8)))))) ||
            ((bVar6 == 9 || ((bVar6 == 10 || (bVar6 == 0xb)))))) goto LAB_0008e6d6;
  }
  if (((param_3 != 2) || (uVar4 = 0x1fe, param_7 != '\0')) && (uVar4 = 0, 0x437 < param_4)) {
    uVar4 = param_4 - 0x438;
  }
  if ((bVar6 == 1) ||
     (((bVar6 != 2 && (uVar3 = uVar4, bVar6 != 3)) &&
      ((((bVar6 == 4 || ((bVar6 == 5 || (bVar6 == 6)))) || (bVar6 == 7)) ||
       ((((bVar6 == 8 || (bVar6 == 9)) || (bVar6 == 10)) || (uVar3 = (ushort)bVar6, bVar6 == 0xb))))
      )))) {
    uVar3 = 0x1fe;
  }
  if (param_5 == '\0') {
    uVar3 = _DAT_fffebce4;
  }
  if (param_1 == '\x01') {
    uVar3 = 0x1fe;
  }
  _DAT_fffebce4 = uVar3;
  if (((param_8 != '\0') || (_DAT_fffebce0 = _DAT_fffebce6, param_1 == '\x01')) &&
     ((param_2 != cVar5 || (_DAT_fffebce0 = uVar3, _DAT_fffebce6 = uVar3, param_6 != '\0')))) {
    _DAT_fffebce0 = 0x1fe;
    _DAT_fffebce6 = 0x1fe;
  }
LAB_0008e786:
  *param_13 = DAT_fffebce2;
  if (0x5000 < param_9) {
    *param_12 = 0x1fe;
  }
  else {
    *param_12 = _DAT_fffebce0;
  }
  return;
}

