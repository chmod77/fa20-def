
void FUN_000d38c8(uint param_1,undefined1 param_2,uint param_3,undefined1 *param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = LK_133E10((uint)&T_02ED50,param_1);
  if (DAT_fffece01 == '\0') {
    DAT_fffece01 = (uVar1 & 0xffff) <= (param_3 & 0xffff);
  }
  else {
    iVar2 = (int)(char)((char)((uVar1 & 0xffff) * 100 >> 0x10) + -4);
    uVar1 = 0;
    if (-0x33 < iVar2) {
      uVar1 = iVar2 + 0x32;
    }
    DAT_fffece01 = (uVar1 & 0xff) <= ((param_3 & 0xffff) * 100 >> 0x10) + 0x32;
  }
  if (((3 < param_1) && (DAT_fffece00 == '\0')) && ((bool)DAT_fffece01)) {
    param_2 = 1;
  }
  if ((param_1 < 4) || ((!(bool)DAT_fffece01 && (DAT_fffece00 != '\0')))) {
    *param_4 = 0;
  }
  else {
    *param_4 = param_2;
  }
  DAT_fffece00 = DAT_fffece01;
  return;
}

