
void FUN_000cd0e8(char param_1,ushort param_2,undefined1 *param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  
  if (DAT_fffecc64 == '\0') {
    uVar1 = 0xc4cd;
  }
  else {
    uVar1 = 0xc000;
  }
  DAT_fffecc64 = uVar1 <= param_2;
  uVar2 = 0;
  if (((bool)DAT_fffecc64) && (param_1 != '\0')) {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  return;
}

