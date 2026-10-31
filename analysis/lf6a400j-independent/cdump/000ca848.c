
void FUN_000ca848(char param_1,char param_2,char param_3,char param_4,char param_5,char *param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  
  bVar1 = param_1 != '\0';
  bVar2 = param_2 != '\0';
  bVar3 = param_3 != '\0';
  bVar4 = param_4 != '\0';
  if ((((bVar4) || (bVar3)) || (bVar2)) || (cVar5 = '\b', bVar1)) {
    cVar5 = DAT_fffecbb4;
  }
  if (((bVar4) || (bVar3)) || ((bVar2 || (param_1 == '\0')))) {
    if (((bVar4) || (bVar3)) || ((param_2 == '\0' || (bVar1)))) {
      if ((((bVar4) || (bVar3)) || (param_2 == '\0')) || (param_1 == '\0')) {
        if (((bVar4) || (param_3 == '\0')) || ((bVar2 || (bVar1)))) {
          if ((((param_4 == '\0') || (bVar3)) || ((param_2 == '\0' || (bVar1)))) &&
             ((((param_4 == '\0' || (bVar3)) || (param_2 == '\0')) || (param_1 == '\0')))) {
            if (((param_4 == '\0') || (param_3 == '\0')) || ((bVar2 || (bVar1)))) {
              if ((((param_4 == '\0') || (param_3 == '\0')) || (bVar2)) || (param_1 == '\0')) {
                if ((((param_4 != '\0') && (param_3 != '\0')) && (param_2 != '\0')) && (!bVar1)) {
                  cVar5 = '\a';
                }
              }
              else {
                cVar5 = '\x06';
              }
            }
            else {
              cVar5 = '\x05';
            }
          }
          else {
            cVar5 = '\x04';
          }
        }
        else {
          cVar5 = '\x03';
        }
      }
      else {
        cVar5 = '\x02';
      }
    }
    else {
      cVar5 = '\x01';
    }
  }
  else {
    cVar5 = '\0';
  }
  if (param_5 == '\0') {
    *param_6 = param_3 * '\x04' + param_4 * '\b' + param_2 * '\x02' + param_1;
  }
  else {
    *param_6 = cVar5;
  }
  DAT_fffecbb4 = cVar5;
  return;
}

