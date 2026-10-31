
void FUN_00108ec0(char param_1,char param_2,ushort param_3,ushort param_4,undefined1 *param_5)

{
  ushort uVar1;
  
  if (param_1 != '\0') {
    uVar1 = param_4 + 0x80;
    if (uVar1 < param_4) {
      uVar1 = 0xffff;
    }
    DAT_fffedba8 = 0;
    if ((param_2 != '\0') && (uVar1 < param_3)) {
      DAT_fffedba8 = 1;
    }
  }
  if (param_1 == '\0') {
    *param_5 = 0;
  }
  else {
    *param_5 = DAT_fffedba8;
  }
  return;
}

