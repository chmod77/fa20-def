
void FUN_000cad88(char param_1,char param_2,char param_3,char param_4,char param_5,
                 undefined1 *param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  
  bVar1 = param_1 != '\0';
  bVar2 = param_2 != '\0';
  bVar3 = param_3 != '\0';
  bVar4 = param_4 != '\0';
  if ((((param_4 == '\0') || (param_3 == '\0')) || (param_2 == '\0')) || (uVar5 = 0xe, bVar1)) {
    uVar5 = DAT_fffecbc5;
  }
  if ((((bVar4) || (bVar3)) || ((bVar2 || (DAT_fffecbc5 = 0, bVar1)))) &&
     (((param_4 == '\0' || (param_3 == '\0')) ||
      ((param_2 == '\0' || (DAT_fffecbc5 = 0, param_1 == '\0')))))) {
    if ((((bVar4) || (bVar3)) || (bVar2)) || (param_1 == '\0')) {
      if (((bVar4) || (bVar3)) || ((param_2 == '\0' || (bVar1)))) {
        if (((bVar4) || (bVar3)) || ((param_2 == '\0' || (param_1 == '\0')))) {
          if ((((bVar4) || (param_3 == '\0')) || (bVar2)) || (bVar1)) {
            if (((bVar4) || (param_3 == '\0')) || ((bVar2 || (param_1 == '\0')))) {
              if (((bVar4) || (param_3 == '\0')) || ((param_2 == '\0' || (bVar1)))) {
                DAT_fffecbc5 = uVar5;
                if ((((param_4 != '\0') && (param_3 != '\0')) && (!bVar2)) && (param_1 != '\0')) {
                  DAT_fffecbc5 = 0xd;
                }
              }
              else {
                DAT_fffecbc5 = 6;
              }
            }
            else {
              DAT_fffecbc5 = 5;
            }
          }
          else {
            DAT_fffecbc5 = 4;
          }
        }
        else {
          DAT_fffecbc5 = 3;
        }
      }
      else {
        DAT_fffecbc5 = 2;
      }
    }
    else {
      DAT_fffecbc5 = 1;
    }
  }
  if (((param_4 == '\0') || (bVar3)) || ((bVar2 || (uVar5 = 9, param_1 == '\0')))) {
    uVar5 = DAT_fffecbc4;
  }
  if (((param_1 != '\0') || (param_2 != '\0')) || ((param_3 != '\0' || (param_4 != '\0')))) {
    if ((((!bVar4) && (!bVar3)) && (!bVar2)) && (param_1 != '\0')) {
      uVar5 = 1;
      goto LAB_000caf42;
    }
    if (((!bVar4) && (!bVar3)) && ((param_2 != '\0' && (!bVar1)))) {
      uVar5 = 2;
      goto LAB_000caf42;
    }
    if (((!bVar4) && (!bVar3)) && ((param_2 != '\0' && (param_1 != '\0')))) {
      uVar5 = 3;
      goto LAB_000caf42;
    }
    if ((((!bVar4) && (param_3 != '\0')) && (!bVar2)) && (!bVar1)) {
      uVar5 = 4;
      goto LAB_000caf42;
    }
    if (((!bVar4) && (param_3 != '\0')) && ((!bVar2 && (param_1 != '\0')))) {
      uVar5 = 5;
      goto LAB_000caf42;
    }
    if (((!bVar4) && (param_3 != '\0')) && ((param_2 != '\0' && (!bVar1)))) {
      uVar5 = 6;
      goto LAB_000caf42;
    }
    if ((((!bVar4) && (param_3 != '\0')) && (param_2 != '\0')) && (param_1 != '\0')) {
      uVar5 = 7;
      goto LAB_000caf42;
    }
    if (((param_4 == '\0') || (bVar3)) || ((bVar2 || (bVar1)))) goto LAB_000caf42;
  }
  uVar5 = 0;
LAB_000caf42:
  if (param_5 == '\0') {
    *param_6 = uVar5;
  }
  else {
    *param_6 = DAT_fffecbc5;
  }
  DAT_fffecbc4 = uVar5;
  return;
}

