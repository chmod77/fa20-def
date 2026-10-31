
void FUN_0010beb0(short param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)param_1;
  if (&DAT_0000a8ba + iVar2 == (undefined *)0x0) {
    iVar1 = 0x7fffffff;
    if (iVar2 < 0) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = __sdiv32_r1_by_r0(iVar2 << 7,(int)(&DAT_0000a8ba + iVar2));
  }
  uVar3 = -iVar1;
  if ((0 < (int)-(uint)(0 < iVar1)) || ((-(uint)(0 < iVar1) == 0 && (0x7fffffff < uVar3)))) {
    uVar3 = 0x7fffffff;
  }
  if ((int)uVar3 < 0x80) {
    if ((int)uVar3 < -0x80) {
      *param_2 = '\0';
    }
    else {
      *param_2 = (char)uVar3 + -0x80;
    }
  }
  else {
    *param_2 = -1;
  }
  return;
}

