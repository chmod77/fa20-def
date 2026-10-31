
void FUN_00107a98(byte param_1,short param_2,char param_3,char param_4,int param_5,char param_6,
                 undefined1 param_7,undefined1 *param_8)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  
  bVar1 = false;
  iVar2 = 1;
  while( true ) {
    cVar3 = (char)iVar2;
    if (0x67 < cVar3) break;
    if (*(char *)(param_5 + (short)(cVar3 + -1)) != '\0') {
      bVar1 = true;
    }
    DAT_fffedb14 = !bVar1;
    iVar2 = cVar3 + 1;
  }
  if ((DAT_fffedb15 < param_1) && (param_6 != '\0')) {
    param_7 = 1;
  }
  if (((param_2 == 0x4055) || (param_3 != '\0')) || ((param_4 == '\x01' && (DAT_fffedb14 != '\0'))))
  {
    *param_8 = 0;
  }
  else {
    *param_8 = param_7;
  }
  DAT_fffedb15 = param_1;
  return;
}

