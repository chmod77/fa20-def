
void FUN_00108f14(char param_1,uint param_2,uint param_3,char param_4,undefined1 *param_5)

{
  uint uVar1;
  
  if (param_4 != '\0') {
    uVar1 = 0xffffffff;
    if ((&LAB_00003e80 + (param_3 & 0xffff) < &UNK_00013e80) &&
       (uVar1 = 0, (undefined1 *)0x3e7f < &LAB_00003e80 + (param_3 & 0xffff))) {
      uVar1 = param_3 & 0xffff;
    }
    DAT_fffedbac = 0;
    if ((param_1 != '\0') && ((param_2 & 0xffff) < (uVar1 & 0xffff))) {
      DAT_fffedbac = 1;
    }
  }
  if (param_4 == '\0') {
    *param_5 = 0;
  }
  else {
    *param_5 = DAT_fffedbac;
  }
  return;
}

