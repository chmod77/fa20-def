
void FUN_000e6a9c(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 undefined4 param_7,byte *param_8)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = false;
  if ((((param_1 == DAT_fffed36a) && (param_2 == DAT_fffed368)) && (param_3 == DAT_fffed369)) &&
     ((param_4 == DAT_fffed36c && (param_5 == DAT_fffed36b)))) {
    bVar1 = true;
  }
  bVar2 = 0;
  if (bVar1) {
    bVar2 = DAT_fffed36d;
  }
  *(bool *)param_7 = 0x7c < bVar2;
  if (param_6 == '\0') {
    *param_8 = bVar2;
  }
  else {
    *param_8 = 0;
  }
  if (bVar1) {
    if (bVar2 == 0xff) {
      DAT_fffed36d = -1;
    }
    else {
      DAT_fffed36d = bVar2 + 1;
    }
  }
  else {
    DAT_fffed36d = '\0';
  }
  DAT_fffed36a = param_1;
  DAT_fffed368 = param_2;
  DAT_fffed369 = param_3;
  DAT_fffed36c = param_4;
  DAT_fffed36b = param_5;
  return;
}

