
int FUN_000d0a5c(short param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = __sdiv32_r1_by_r0((int)param_1,0x7d);
  if ((short)iVar1 < 0x80) {
    if ((short)iVar1 < -0x80) {
      *param_2 = '\0';
    }
    else {
      *param_2 = (char)iVar1 + -0x80;
    }
  }
  else {
    *param_2 = -1;
  }
  return iVar1;
}

