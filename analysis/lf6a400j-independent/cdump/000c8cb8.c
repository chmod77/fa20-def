
void FUN_000c8cb8(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,undefined1 *param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  bVar4 = true;
  if (((param_1 == '\0') || (param_3 != '\x01')) && ((param_2 == '\0' || (param_4 != '\x01')))) {
    bVar4 = false;
  }
  if (bVar4) {
    bVar1 = param_5 != '\0';
    bVar2 = param_6 != '\0';
    bVar3 = param_7 != '\0';
    if (((bVar1) || (param_6 == '\0')) || (DAT_fffecb34 = 6, param_7 == '\0')) {
      DAT_fffecb34 = DAT_fffecb36;
    }
    if (((bVar1) || (bVar2)) || (bVar3)) {
      if (((param_5 == '\0') || (bVar2)) || (bVar3)) {
        if (((bVar1) || (param_6 == '\0')) || (bVar3)) {
          if (((param_5 == '\0') || (param_6 == '\0')) || (bVar3)) {
            if (((bVar1) || (bVar2)) || (param_7 == '\0')) {
              DAT_fffecb36 = DAT_fffecb34;
              if (((param_5 != '\0') && (!bVar2)) && (param_7 != '\0')) {
                DAT_fffecb34 = 5;
                DAT_fffecb36 = DAT_fffecb34;
              }
            }
            else {
              DAT_fffecb34 = 4;
              DAT_fffecb36 = DAT_fffecb34;
            }
          }
          else {
            DAT_fffecb34 = 3;
            DAT_fffecb36 = DAT_fffecb34;
          }
        }
        else {
          DAT_fffecb34 = 2;
          DAT_fffecb36 = DAT_fffecb34;
        }
      }
      else {
        DAT_fffecb34 = 1;
        DAT_fffecb36 = DAT_fffecb34;
      }
    }
    else {
      DAT_fffecb34 = 0;
      DAT_fffecb36 = DAT_fffecb34;
    }
  }
  if (bVar4) {
    DAT_fffecb35 = DAT_fffecb34;
  }
  *param_8 = DAT_fffecb35;
  return;
}

