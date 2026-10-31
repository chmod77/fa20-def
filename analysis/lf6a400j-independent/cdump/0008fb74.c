
void FUN_0008fb74(char param_1,uint param_2,ushort param_3,undefined1 *param_4)

{
  uint uVar1;
  
  if (param_3 < 0x5001) {
    if (param_1 == '\0') {
      uVar1 = LK_133BCC((uint)&T_02D0A0,param_2);
      DAT_fffebd3c = (char)uVar1;
    }
    else {
      DAT_fffebd3c = 0xff;
    }
  }
  *param_4 = DAT_fffebd3c;
  return;
}

