
void FUN_000964bc(char param_1,byte param_2,byte param_3,undefined1 *param_4)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  
  bVar1 = param_1 != '\0';
  if (param_1 == '\0') {
    DAT_fffebf2b = '\0';
    bVar4 = DAT_fffebf2a;
  }
  else {
    if (DAT_fffebf2b == '\0') {
      DAT_fffebf2a = 0;
      DAT_fffebf2b = '\x01';
    }
    DAT_fffebf29 = 0x77 < DAT_fffebf2a;
    bVar4 = 0xff;
    if (DAT_fffebf2a != 0xff) {
      bVar4 = DAT_fffebf2a + 1;
    }
  }
  DAT_fffebf2a = bVar4;
  cVar5 = '\0';
  if (param_1 != '\0') {
    cVar5 = DAT_fffebf29;
  }
  bVar2 = false;
  if (((cVar5 != '\0') && (0xfe < param_2)) && (0xfe < param_3)) {
    bVar2 = true;
  }
  if (((!bVar2) || (uVar3 = bVar1, !bVar1)) &&
     (((!bVar2 && (!bVar1)) || ((uVar3 = DAT_fffebf28, bVar2 && (!bVar1)))))) {
    uVar3 = bVar1;
  }
  DAT_fffebf28 = uVar3;
  *param_4 = DAT_fffebf28;
  return;
}

