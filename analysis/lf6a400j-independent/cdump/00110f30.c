
void FUN_00110f30(char param_1,char param_2,uint param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,char param_11,char param_12,
                 char param_13,byte *param_14)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = 0;
  bVar1 = 0;
  if (((param_1 == '\x02') && (param_2 == '\x14')) && ((param_3 & 3) != 0)) {
    if ((param_4 != '\0') || (param_8 != '\0')) {
      bVar2 = 1;
    }
    if ((param_5 != '\0') || (param_9 != '\0')) {
      bVar2 = bVar2 | 2;
    }
    if ((param_6 != '\0') || (bVar1 = bVar2, param_10 != '\0')) {
      bVar1 = bVar2 | 4;
    }
    if ((param_7 != '\0') || (param_11 != '\0')) {
      bVar1 = bVar1 | 8;
    }
    if ((param_12 != '\0') || (param_13 != '\0')) {
      bVar1 = bVar1 | 0x80;
    }
  }
  *param_14 = bVar1;
  return;
}

