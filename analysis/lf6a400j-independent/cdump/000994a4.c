
void FUN_000994a4(char param_1,char param_2,char param_3,char param_4,ushort param_5,char *param_6)

{
  char cVar1;
  short sVar2;
  
  if (0x5000 < param_5) goto LAB_0009953c;
  cVar1 = param_4;
  if (DAT_fffebfa9 != '\0') {
    cVar1 = DAT_fffebfaa;
  }
  if (((param_2 != '\0') && (param_2 != '\x02')) && (param_1 = cVar1, param_2 != '\x03')) {
    param_1 = param_3;
  }
  if (param_4 < param_1) {
    sVar2 = param_1 + -6;
    if (sVar2 < -0x80) {
      sVar2 = -0x80;
    }
    DAT_fffebfa8 = (char)sVar2;
    if (DAT_fffebfa8 < param_4) goto LAB_00099518;
  }
  else {
    sVar2 = param_1 + 4;
    if (0x7f < sVar2) {
      sVar2 = 0x7f;
    }
    DAT_fffebfa8 = (char)sVar2;
    if (param_4 < DAT_fffebfa8) {
LAB_00099518:
      DAT_fffebfa8 = param_4;
    }
  }
  if (DAT_fffebfa8 < -0x27) {
    DAT_fffebfa8 = -0x28;
  }
  if ('~' < DAT_fffebfa8) {
    DAT_fffebfa8 = '\x7f';
  }
  DAT_fffebfa9 = '\x01';
  DAT_fffebfaa = DAT_fffebfa8;
LAB_0009953c:
  *param_6 = DAT_fffebfa8;
  return;
}

