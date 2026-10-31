
void FUN_000cd034(char param_1,char param_2,char param_3,char param_4,char param_5,ushort param_6,
                 ushort param_7,undefined1 *param_8)

{
  ushort uVar1;
  undefined1 uVar2;
  
  if (DAT_fffecc60 == '\0') {
    uVar1 = 0xc4cd;
  }
  else {
    uVar1 = 0xc000;
  }
  DAT_fffecc60 = uVar1 <= param_7;
  uVar2 = 1;
  if (((((param_1 == '\0') && (param_2 == '\0')) || (param_3 == '\0')) ||
      ((param_6 < 6000 || (!(bool)DAT_fffecc60)))) &&
     (((param_1 == '\0' && (param_4 != '\x03')) ||
      (((param_5 == '\0' || (param_6 < 6000)) || (!(bool)DAT_fffecc60)))))) {
    uVar2 = 0;
  }
  *param_8 = uVar2;
  return;
}

