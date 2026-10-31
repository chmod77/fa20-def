
void FUN_00108ae4(char param_1,char param_2,char param_3,char param_4,byte param_5,byte param_6,
                 undefined1 param_7,undefined1 *param_8)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  
  uVar3 = 0;
  if (param_3 != '\0') {
    uVar3 = DAT_fffedb88;
  }
  bVar1 = param_6 < DAT_fffedb85;
  bVar2 = DAT_fffedb8a <= param_5;
  if ((((bVar1) && (DAT_fffedb84 == '\0')) && (DAT_fffedb87 != '\0')) &&
     ((param_3 != '\0' && (bVar2)))) {
    uVar3 = 0;
  }
  if (((bVar1) && (DAT_fffedb89 != '\0')) &&
     ((DAT_fffedb87 == '\0' && ((param_3 != '\0' && (bVar2)))))) {
    uVar3 = 0;
  }
  if ((((bVar1) && (DAT_fffedb8c == '\0')) && (DAT_fffedb87 == '\0')) &&
     ((param_3 != '\0' && (bVar2)))) {
    uVar3 = 1;
  }
  bVar1 = false;
  if ((DAT_fffedb8b != '\0') && (DAT_fffedb87 != '\0')) {
    bVar1 = true;
  }
  if (((param_1 == '\0') && (param_2 != '\0')) ||
     ((((param_3 == '\0' ||
        (((param_4 != '\0' || (param_5 <= DAT_fffedb86)) || (DAT_fffedb88 = 0, !bVar1)))) &&
       (((DAT_fffedb88 = uVar3, param_3 != '\0' && (param_4 == '\0')) && (param_5 > DAT_fffedb86))))
      && (!bVar1)))) {
    DAT_fffedb88 = 1;
  }
  *param_8 = DAT_fffedb88;
  DAT_fffedb86 = param_5;
  DAT_fffedb85 = param_6;
  DAT_fffedb84 = DAT_fffedb88;
  DAT_fffedb8c = DAT_fffedb88;
  DAT_fffedb8b = DAT_fffedb88;
  DAT_fffedb8a = param_5;
  DAT_fffedb89 = DAT_fffedb88;
  DAT_fffedb87 = param_7;
  return;
}

