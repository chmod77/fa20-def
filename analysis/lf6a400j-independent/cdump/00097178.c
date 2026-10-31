
void FUN_00097178(ushort param_1,byte param_2,char param_3,char param_4,char *param_5)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte local_14;
  byte bStack_13;
  ushort uStack_10;
  ushort uStack_e;
  
  cVar4 = -2;
  if (param_3 != -1) {
    cVar4 = param_3;
  }
  bVar2 = cVar4 + 1;
  bVar3 = 5;
  if ((bVar2 < 6) && (bVar3 = 1, bVar2 != 0)) {
    bVar3 = bVar2;
  }
  if (bVar3 == 1) {
    local_14 = 0xff;
    bStack_13 = 0xff;
  }
  else if (bVar3 == 2) {
LAB_000971ce:
    local_14 = 0xff;
    bStack_13 = 0xff;
  }
  else if (bVar3 == 3) {
    local_14 = 0xff;
    bStack_13 = 0xff;
  }
  else {
    if (bVar3 == 4) goto LAB_000971ce;
    if (bVar3 == 5) {
      local_14 = 0xff;
      bStack_13 = 0;
    }
  }
  if (bVar3 == 1) {
    uStack_10 = 0xfe00;
    uStack_e = 0xfe00;
    goto LAB_00097224;
  }
  if (bVar3 != 2) {
    if (bVar3 == 3) {
      uStack_10 = 0xfe00;
      uStack_e = 0xfe00;
      goto LAB_00097224;
    }
    if (bVar3 != 4) {
      if (bVar3 == 5) {
        uStack_10 = 0xfe00;
        uStack_e = 0xfe00;
      }
      goto LAB_00097224;
    }
  }
  uStack_10 = 0xfe00;
  uStack_e = 0xfe00;
LAB_00097224:
  bVar1 = false;
  if (((DAT_fffebf70 == 0) || (DAT_fffebf70 == 0xff)) &&
     (((uStack_10 <= param_1 && (param_4 == '\0')) ||
      ((((uStack_e <= param_1 && (param_4 != '\0')) || (local_14 <= param_2)) ||
       (param_2 < bStack_13)))))) {
    bVar1 = true;
  }
  if ((bVar1) || (DAT_fffebf70 < 4)) {
    cVar4 = '\0';
  }
  else {
    cVar4 = DAT_fffebf70 - 4;
  }
  if ((!bVar1) && (param_1 = (short)(char)DAT_fffebf70 + 4, (param_1 & 0xff) < 4)) {
    param_1 = 0xff;
  }
  if ((param_4 == '\0') && (cVar4 = (char)param_1, bVar1)) {
    cVar4 = -1;
  }
  *param_5 = cVar4;
  DAT_fffebf70 = cVar4;
  return;
}

