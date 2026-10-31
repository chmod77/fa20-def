
void FUN_000c2900(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
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
    if (((bVar1) || (param_6 == '\0')) || (DAT_fffeca1c = 6, param_7 == '\0')) {
      DAT_fffeca1c = DAT_fffeca1d;
    }
    if (((bVar1) || (bVar2)) || (bVar3)) {
      if (((param_5 == '\0') || (bVar2)) || (bVar3)) {
        if (((bVar1) || (param_6 == '\0')) || (bVar3)) {
          if (((param_5 == '\0') || (param_6 == '\0')) || (bVar3)) {
            if (((bVar1) || (bVar2)) || (param_7 == '\0')) {
              DAT_fffeca1d = DAT_fffeca1c;
              if (((param_5 != '\0') && (!bVar2)) && (param_7 != '\0')) {
                DAT_fffeca1c = 5;
                DAT_fffeca1d = DAT_fffeca1c;
              }
            }
            else {
              DAT_fffeca1c = 4;
              DAT_fffeca1d = DAT_fffeca1c;
            }
          }
          else {
            DAT_fffeca1c = 3;
            DAT_fffeca1d = DAT_fffeca1c;
          }
        }
        else {
          DAT_fffeca1c = 2;
          DAT_fffeca1d = DAT_fffeca1c;
        }
      }
      else {
        DAT_fffeca1c = 1;
        DAT_fffeca1d = DAT_fffeca1c;
      }
    }
    else {
      DAT_fffeca1c = 0;
      DAT_fffeca1d = DAT_fffeca1c;
    }
  }
  if (bVar4) {
    DAT_fffeca1e = DAT_fffeca1c;
  }
  *param_8 = DAT_fffeca1e;
  return;
}

