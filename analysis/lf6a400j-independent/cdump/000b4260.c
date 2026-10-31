
void FUN_000b4260(short param_1,uint param_2,uint param_3,char param_4,undefined1 *param_5)

{
  uint uVar1;
  
  if (param_4 != '\0') {
    if (param_1 < 0) {
      uVar1 = LK_13852C((uint)&T_02E27C,param_2 & 0xff,param_3 & 0xff);
      DAT_fffec714 = (undefined1)uVar1;
    }
    else {
      uVar1 = LK_13852C((uint)&T_02E268,param_2 & 0xff,param_3 & 0xff);
      DAT_fffec714 = (undefined1)uVar1;
    }
  }
  *param_5 = DAT_fffec714;
  return;
}

