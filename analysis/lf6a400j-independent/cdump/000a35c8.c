
void FUN_000a35c8(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,undefined4 param_8,undefined1 *param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = false;
  if ((param_7 != '\0') && (param_5 != '\0')) {
    bVar3 = true;
  }
  bVar2 = false;
  if ((param_7 != '\0') && (param_5 == '\0')) {
    bVar2 = true;
  }
  bVar1 = false;
  if ((param_1 != '\0') && (param_4 == '\0')) {
    bVar1 = true;
  }
  if ((param_1 == '\0') || (param_2 == '\0')) {
    if (param_3 == '\0') {
      if ((bVar1) && (bVar2)) {
        *param_9 = 3;
      }
      else if ((!bVar1) || (bVar2)) {
        if ((param_1 == '\0') || (param_4 != '\0')) {
          if ((param_4 == '\0') || ((param_1 == '\0' || (!bVar3)))) {
            if ((bVar3) || ((param_1 == '\0' || (param_4 == '\0')))) {
              if (param_6 == '\0') {
                *param_9 = 0;
              }
              else {
                *param_9 = 8;
              }
            }
            else {
              *param_9 = 7;
            }
          }
          else {
            *param_9 = 6;
          }
        }
        else {
          *param_9 = 5;
        }
      }
      else {
        *param_9 = 4;
      }
    }
    else {
      *param_9 = 2;
    }
  }
  else {
    *param_9 = 1;
  }
  return;
}

