
void FUN_00099558(char param_1,char param_2,undefined1 param_3,undefined2 param_4,ushort param_5,
                 char param_6,char param_7,char param_8,undefined2 param_9,char *param_10,
                 char *param_11,undefined1 *param_12)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  
  uVar1 = 0x20;
  if (param_8 != '\0') {
    uVar1 = (*(code *)PTR_FUN_00099608)(PTR_DAT_00099604,param_4,param_9);
    uVar1 = uVar1 & 0xff;
  }
  *param_12 = (char)uVar1;
  cVar2 = '\0';
  if (param_2 != '\0') {
    cVar2 = (*(code *)PTR_FUN_00099610)(PTR_DAT_0009960c,param_3,param_4);
  }
  *param_11 = cVar2;
  sVar3 = (short)param_1 + (param_5 & 0xff) + (short)param_6 + (short)param_7 + (short)cVar2 + uVar1
  ;
  if (DAT_000995fe < sVar3) {
    *param_10 = '\x7f';
  }
  else if (sVar3 < 0x20) {
    *param_10 = -0x80;
  }
  else {
    *param_10 = (char)sVar3 - (char)DAT_00099600;
  }
  return;
}

