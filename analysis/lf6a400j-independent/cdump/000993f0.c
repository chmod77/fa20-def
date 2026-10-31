
void FUN_000993f0(char param_1,char param_2,char param_3,char param_4,ushort param_5,char *param_6)

{
  char cVar1;
  short sVar2;
  
  if (0x5000 < param_5) goto LAB_00099488;
  cVar1 = param_2;
  if (DAT_fffebfa5 != '\0') {
    cVar1 = DAT_fffebfa6;
  }
  if (((param_3 != '\0') && (param_3 != '\x02')) && (cVar1 = param_4, param_3 != '\x03')) {
    cVar1 = param_1;
  }
  if (param_2 < cVar1) {
    sVar2 = cVar1 + -6;
    if (sVar2 < -0x80) {
      sVar2 = -0x80;
    }
    DAT_fffebfa4 = (char)sVar2;
    if (DAT_fffebfa4 < param_2) goto LAB_00099464;
  }
  else {
    sVar2 = cVar1 + 6;
    if (0x7f < sVar2) {
      sVar2 = 0x7f;
    }
    DAT_fffebfa4 = (char)sVar2;
    if (param_2 < DAT_fffebfa4) {
LAB_00099464:
      DAT_fffebfa4 = param_2;
    }
  }
  if (DAT_fffebfa4 < -0x18) {
    DAT_fffebfa4 = -0x19;
  }
  if ('~' < DAT_fffebfa4) {
    DAT_fffebfa4 = '\x7f';
  }
  DAT_fffebfa5 = '\x01';
  DAT_fffebfa6 = DAT_fffebfa4;
LAB_00099488:
  *param_6 = DAT_fffebfa4;
  return;
}

