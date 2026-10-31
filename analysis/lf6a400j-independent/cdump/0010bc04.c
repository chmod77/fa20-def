
void FUN_0010bc04(byte param_1,ushort param_2,char *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = (uint)param_1;
  cVar2 = '\0';
  if (uVar3 != 0) {
    iVar1 = (uint)param_2 + uVar3 * -2;
    if (0x7fff < iVar1) {
      iVar1 = 0x7fff;
    }
    iVar1 = __sdiv32_r1_by_r0((int)(short)iVar1 << 6,(uint)param_1);
    cVar2 = '\x7f';
    if ((iVar1 < 0x80) && (cVar2 = (char)iVar1, iVar1 < -0x80)) {
      cVar2 = -0x80;
    }
  }
  if (uVar3 == 0) {
    if (param_2 == 0) {
      *param_3 = -0x80;
    }
    else {
      *param_3 = -1;
    }
  }
  else {
    *param_3 = cVar2 + -0x80;
  }
  return;
}

