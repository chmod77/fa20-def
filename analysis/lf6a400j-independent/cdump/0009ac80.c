
void FUN_0009ac80(uint param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  if ((param_1 & 0xff) < (uint)DAT_fffebfe4) {
    param_1 = param_1 & 0xff;
    iVar2 = (param_1 - DAT_fffebfe4) + 0x100;
    cVar1 = -1;
    if (iVar2 < 0x100) {
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      cVar1 = (char)iVar2;
    }
    *param_2 = cVar1;
  }
  else if ((param_1 & 0xff) < (uint)DAT_fffebfe4) {
    *param_2 = '\0';
  }
  else {
    *param_2 = (char)param_1 - DAT_fffebfe4;
  }
  DAT_fffebfe4 = (char)param_1;
  return;
}

