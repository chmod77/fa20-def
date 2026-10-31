
void FUN_00096580(char param_1,char param_2,char param_3,char param_4,char param_5,byte param_6,
                 char param_7,undefined1 *param_8,byte *param_9,byte *param_10)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  
  bVar1 = false;
  if (((param_2 != '\0') && (param_1 != '\0')) && (param_4 != '\0')) {
    bVar1 = true;
  }
  bVar4 = DAT_fffebf2f;
  if ((bVar1) && (bVar4 = 0xff, DAT_fffebf2f != 0xff)) {
    bVar4 = DAT_fffebf2f + 1;
  }
  bVar5 = DAT_fffebf2d;
  if ((bVar1) && (bVar5 = 0xff, DAT_fffebf2d != 0xff)) {
    bVar5 = DAT_fffebf2d + 1;
  }
  bVar1 = true;
  if ((((param_3 == '\0') && (param_5 == '\0')) && (param_6 <= DAT_fffebf2e)) && (param_7 == '\0'))
  {
    bVar1 = false;
  }
  if (bVar1) {
    bVar5 = 0;
  }
  *param_10 = bVar5;
  if ((bVar1) || (param_2 == '\0')) {
    bVar4 = 0;
  }
  bVar2 = true;
  if ((bVar4 < 10) && (bVar5 < 10)) {
    bVar2 = false;
  }
  if (((!bVar2) || (uVar3 = !bVar1, bVar1)) &&
     (((!bVar2 && (bVar1)) || ((uVar3 = DAT_fffebf2c, bVar2 && (bVar1)))))) {
    uVar3 = !bVar1;
  }
  DAT_fffebf2c = uVar3;
  *param_8 = DAT_fffebf2c;
  *param_9 = bVar4;
  DAT_fffebf2f = bVar4;
  DAT_fffebf2d = bVar5;
  DAT_fffebf2e = param_6;
  return;
}

