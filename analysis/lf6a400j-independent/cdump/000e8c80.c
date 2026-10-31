
void FUN_000e8c80(byte param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,undefined1 *param_8)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  
  bVar1 = false;
  if (((param_3 != '\0') && (param_4 != '\0')) && (param_5 != '\0')) {
    bVar1 = true;
  }
  bVar2 = 0;
  if ((bVar1) && (param_6 != '\0')) {
    bVar2 = 1;
  }
  if (bVar1) {
    uVar3 = 1;
    if (bVar2 < DAT_fffed3f0) goto LAB_000e8cce;
  }
  uVar3 = DAT_fffed3f2;
LAB_000e8cce:
  if (((param_7 != '\0') || (DAT_fffed3f1 < param_1)) || (param_2 != '\0')) {
    uVar3 = 0;
  }
  *param_8 = uVar3;
  DAT_fffed3f2 = uVar3;
  DAT_fffed3f1 = param_1;
  DAT_fffed3f0 = bVar2;
  return;
}

