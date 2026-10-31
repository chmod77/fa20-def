
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008dfcc(char param_1,char param_2,byte param_3,ushort param_4,char param_5,char param_6,
                 char param_7,char param_8,ushort param_9,uint param_10,char param_11,
                 ushort *param_12,char *param_13,ushort *param_14)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  byte bVar7;
  ushort uVar5;
  ushort uVar6;
  char cStack_24;
  
  if (0x5000 < param_9) goto LAB_0008e16c;
  bVar7 = param_3 + 1;
  if (bVar7 < param_3) {
    bVar7 = 0xff;
  }
  bVar4 = 0xb;
  if ((bVar7 < 0xc) && (bVar4 = 1, bVar7 != 0)) {
    bVar4 = bVar7;
  }
  bVar1 = false;
  if (((param_3 == 1) && (param_11 != '\0')) && (param_2 == '\x03')) {
    bVar1 = true;
  }
  DAT_fffebcc0 = -2;
  if (bVar1) {
    DAT_fffebcc0 = '\x03';
  }
  if (bVar4 == 1) {
LAB_0008e09a:
    cVar2 = -2;
  }
  else {
    cVar2 = DAT_fffebcc0;
    if (bVar4 != 2) {
      if (bVar4 == 3) {
        cStack_24 = '\x03';
        cVar2 = cStack_24;
      }
      else if ((((bVar4 == 4) || (bVar4 == 5)) || ((bVar4 == 6 || ((bVar4 == 7 || (bVar4 == 8))))))
              || ((bVar4 == 9 || ((bVar4 == 10 || (cVar2 = cStack_24, bVar4 == 0xb))))))
      goto LAB_0008e09a;
    }
  }
  cStack_24 = cVar2;
  if (bVar1) {
    uVar3 = LK_135164((uint)&T_02CE9C,param_10 & 0xff);
    _DAT_fffebcbe = (ushort)uVar3;
  }
  else {
    _DAT_fffebcbe = 0x1fe;
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
  if ((bVar4 == 1) ||
     (((uVar6 = _DAT_fffebcbe, bVar4 != 2 && (uVar6 = uVar5, bVar4 != 3)) &&
      ((((bVar4 == 4 ||
         ((((bVar4 == 5 || (bVar4 == 6)) || (bVar4 == 7)) || ((bVar4 == 8 || (bVar4 == 9)))))) ||
        (bVar4 == 10)) || (uVar6 = param_4, bVar4 == 0xb)))))) {
    uVar6 = 0x1fe;
  }
  if (param_5 == '\0') {
    uVar6 = _DAT_fffebcc2;
  }
  if (param_1 == '\x01') {
    uVar6 = 0x1fe;
  }
  _DAT_fffebcc2 = uVar6;
  if (((param_8 != '\0') || (_DAT_fffebcbc = _DAT_fffebcc4, param_1 == '\x01')) &&
     ((param_2 != cStack_24 || (_DAT_fffebcbc = uVar6, _DAT_fffebcc4 = uVar6, param_6 != '\0')))) {
    _DAT_fffebcbc = 0x1fe;
    _DAT_fffebcc4 = 0x1fe;
  }
LAB_0008e16c:
  *param_13 = DAT_fffebcc0;
  *param_14 = _DAT_fffebcbe;
  if (0x5000 < param_9) {
    *param_12 = 0x1fe;
  }
  else {
    *param_12 = _DAT_fffebcbc;
  }
  return;
}

