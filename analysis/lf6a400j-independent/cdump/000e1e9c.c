
void FUN_000e1e9c(ushort param_1,ushort param_2,char param_3,char param_4,undefined1 *param_5)

{
  ushort uVar1;
  undefined1 uVar2;
  
  if (param_4 != -0x5b) {
    uVar1 = 0x1666;
  }
  else {
    uVar1 = 0x4cd;
  }
  uVar2 = 0;
  if ((((uVar1 <= param_1) && (param_3 == '\0')) &&
      (((param_2 < 9000 && (2999 < param_2)) || (param_4 == -0x5b)))) && (param_1 != 0)) {
    uVar2 = 1;
  }
  *param_5 = uVar2;
  return;
}

