
uint FUN_000d0324(short param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = LK_135750((uint)&T_02ED38,param_2);
  if (DAT_fffecd88 == '\0') {
    DAT_fffecd88 = (int)(uVar1 & 0xffff) <= (int)param_1;
  }
  else {
    iVar2 = (uVar1 & 0xffff) - 0x66;
    if (iVar2 < 0x8000) {
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
    }
    else {
      iVar2 = 0x7fff;
    }
    DAT_fffecd88 = (short)iVar2 <= param_1;
  }
  *(char *)param_3 = DAT_fffecd88;
  return uVar1;
}

