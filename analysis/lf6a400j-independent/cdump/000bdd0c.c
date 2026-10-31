
void FUN_000bdd0c(ushort param_1,uint param_2,uint param_3,char param_4,undefined1 *param_5)

{
  uint uVar1;
  
  if (param_1 < 0x5001) {
    if (param_4 == '\0') {
      uVar1 = LK_1395DC((uint)&T_02E634,param_2,param_3);
      DAT_fffec8fc = (char)uVar1;
    }
    else {
      DAT_fffec8fc = 0;
    }
  }
  *param_5 = DAT_fffec8fc;
  return;
}

