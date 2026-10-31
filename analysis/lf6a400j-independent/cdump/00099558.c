
void FUN_00099558(char param_1,char param_2,uint param_3,uint param_4,ushort param_5,char param_6,
                 char param_7,char param_8,uint param_9,char *param_10,char *param_11,
                 undefined1 *param_12)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  
  uVar4 = 0x20;
  if (param_8 != '\0') {
    uVar1 = LK_13A834((uint)&T_02D5DC,param_4,param_9 & 0xffff);
    uVar4 = (ushort)uVar1 & 0xff;
  }
  *param_12 = (char)uVar4;
  cVar2 = '\0';
  if (param_2 != '\0') {
    uVar1 = LK_13AF58((uint)&T_02D5C8,param_3,param_4 & 0xffff);
    cVar2 = (char)uVar1;
  }
  *param_11 = cVar2;
  sVar3 = (short)param_1 + (param_5 & 0xff) + (short)param_6 + (short)param_7 + (short)cVar2 + uVar4
  ;
  if (sVar3 < 0x120) {
    if (sVar3 < 0x20) {
      *param_10 = -0x80;
    }
    else {
      *param_10 = (char)sVar3 + '`';
    }
  }
  else {
    *param_10 = '\x7f';
  }
  return;
}

