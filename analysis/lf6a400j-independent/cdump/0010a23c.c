
void FUN_0010a23c(char param_1,char param_2,ushort param_3,ushort param_4,undefined1 *param_5)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  
  uVar3 = param_3 - param_4;
  if (param_3 < param_4) {
    uVar3 = 0;
  }
  bVar1 = false;
  if (((param_1 != '\0') && (param_2 != '\0')) && (0x395 < uVar3)) {
    bVar1 = true;
  }
  bVar2 = 0;
  if (!bVar1) {
    bVar2 = DAT_fffedc4d;
  }
  if (((param_1 != '\0') && (param_2 != '\0')) &&
     ((0x395 >= uVar3 && (bVar2 = 0xff, DAT_fffedc4d != 0xff)))) {
    bVar2 = DAT_fffedc4d + 1;
  }
  if ((9 < bVar2) || (bVar1)) {
    DAT_fffedc4c = 1;
  }
  *param_5 = DAT_fffedc4c;
  DAT_fffedc4d = bVar2;
  return;
}

