
void FUN_000ca494(char param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  
  iVar1 = (int)((param_2 & 0xffff) >> 8) >> 1;
  if (DAT_fffecb9c == '\0') {
    DAT_fffecb9d = '\0';
    DAT_fffecb9c = '\x01';
  }
  if (DAT_fffecb9d == '\0') {
    DAT_ffff198e = (undefined1)iVar1;
  }
  else {
    FUN_0016b44c(&DAT_ffff198e,iVar1,0xffffffff);
  }
  DAT_fffecb9d = 1;
  if (param_1 == '\0') {
    *param_3 = DAT_ffff198e;
  }
  else {
    *param_3 = 7;
  }
  return;
}

