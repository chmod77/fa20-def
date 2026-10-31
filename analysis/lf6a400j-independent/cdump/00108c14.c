
void FUN_00108c14(char param_1,char param_2,char param_3,char param_4,byte param_5,byte param_6,
                 char param_7,undefined1 *param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  if (param_3 != '\0') {
    uVar4 = DAT_fffedb92;
  }
  bVar1 = param_6 < DAT_fffedb90;
  bVar3 = false;
  if ((param_7 != '\0') && (DAT_fffedb95 != '\0')) {
    bVar3 = true;
  }
  bVar2 = DAT_fffedb94 <= param_5;
  if ((((bVar1) && (param_7 == '\0')) && (DAT_fffedb97 != '\0')) && ((param_3 != '\0' && (bVar2))))
  {
    uVar4 = 0;
  }
  if (((bVar1) && (param_7 != '\0')) && ((DAT_fffedb93 == '\0' && ((param_3 != '\0' && (bVar2))))))
  {
    uVar4 = 1;
  }
  if ((((bVar1) && (param_7 == '\0')) && (DAT_fffedb96 == '\0')) && ((param_3 != '\0' && (bVar2))))
  {
    uVar4 = 0;
  }
  if (((param_1 == '\0') && (param_2 != '\0')) ||
     ((((param_3 == '\0' ||
        (((param_4 != '\0' || (param_5 <= DAT_fffedb91)) || (DAT_fffedb92 = 0, !bVar3)))) &&
       (((DAT_fffedb92 = uVar4, param_3 != '\0' && (param_4 == '\0')) && (param_5 > DAT_fffedb91))))
      && (!bVar3)))) {
    DAT_fffedb92 = 1;
  }
  *param_8 = DAT_fffedb92;
  DAT_fffedb91 = param_5;
  DAT_fffedb90 = param_6;
  DAT_fffedb97 = DAT_fffedb92;
  DAT_fffedb96 = DAT_fffedb92;
  DAT_fffedb95 = DAT_fffedb92;
  DAT_fffedb94 = param_5;
  DAT_fffedb93 = DAT_fffedb92;
  return;
}

