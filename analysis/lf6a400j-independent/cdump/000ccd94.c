
void FUN_000ccd94(char param_1,char param_2,char param_3,char param_4,char param_5,
                 undefined1 *param_6,char *param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  undefined1 local_c;
  
  bVar4 = true;
  if (((param_1 == '\0') || (param_4 != '\x01')) && ((param_2 == '\0' || (param_5 != '\x01')))) {
    bVar4 = false;
  }
  if (!bVar4) goto LAB_000cce9a;
  bVar2 = true;
  if ((param_3 != '\x02') && (param_3 != '\a')) {
    bVar2 = false;
  }
  bVar3 = param_3 == '\0';
  bVar5 = false;
  if (((!bVar3) && (bVar2)) && (DAT_fffecc57 == '\0')) {
    bVar5 = true;
  }
  bVar6 = false;
  if ((DAT_fffecc57 == '\0') && (!bVar3)) {
    bVar6 = true;
  }
  if ((bVar5) || (bVar6)) {
    DAT_fffecc51 = '\x01';
  }
  else {
    DAT_fffecc51 = DAT_fffecc57;
  }
  if ((bVar3) || (!bVar2)) {
    bVar1 = false;
  }
  else {
    bVar1 = 9 < DAT_fffecc52;
  }
  if ((bVar3) || (!bVar2)) {
    DAT_fffecc52 = 0;
    bVar7 = DAT_fffecc52;
  }
  else {
    bVar7 = 0xff;
    if (DAT_fffecc52 != 0xff) {
      bVar7 = DAT_fffecc52 + 1;
    }
  }
  DAT_fffecc52 = bVar7;
  bVar2 = false;
  if (bVar3) {
    DAT_fffecc54 = 0;
    bVar7 = DAT_fffecc54;
  }
  else {
    bVar2 = 9 < DAT_fffecc54;
    bVar7 = 0xff;
    if (DAT_fffecc54 != 0xff) {
      bVar7 = DAT_fffecc54 + 1;
    }
  }
  DAT_fffecc54 = bVar7;
  DAT_fffecc50 = 0;
  if (!bVar2) {
    DAT_fffecc50 = DAT_fffecc53;
  }
  if (!bVar5) {
    if (bVar6) {
      DAT_fffecc50 = 0;
      DAT_fffecc53 = DAT_fffecc50;
      goto LAB_000cce9a;
    }
    DAT_fffecc53 = DAT_fffecc50;
    if (!bVar1) goto LAB_000cce9a;
  }
  DAT_fffecc50 = 1;
  DAT_fffecc53 = DAT_fffecc50;
LAB_000cce9a:
  if (bVar4) {
    local_c = DAT_fffecc50;
    DAT_fffecc56 = DAT_fffecc51;
  }
  else {
    local_c = DAT_fffecc55;
  }
  *param_7 = DAT_fffecc56;
  *param_6 = local_c;
  DAT_fffecc57 = DAT_fffecc56;
  DAT_fffecc55 = local_c;
  return;
}

