
void FUN_0009d630(char param_1,char param_2,ushort param_3,char param_4,undefined1 *param_5)

{
  short sVar1;
  
  if (param_1 == '\0') {
    sVar1 = (short)param_2 + (param_3 & 0xff) + (short)param_4;
    if (sVar1 < 0x80) {
      if (sVar1 < -0x80) {
        sVar1 = -0x80;
      }
    }
    else {
      sVar1 = 0x7f;
    }
    *param_5 = (char)sVar1;
    return;
  }
  *param_5 = 0;
  return;
}

