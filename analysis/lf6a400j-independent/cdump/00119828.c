
void FUN_00119828(char param_1,ushort param_2,ushort param_3,ushort param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  
  if ((((param_1 == '\0') || (param_2 < 0x800)) || (param_3 < 0x6667)) ||
     (uVar1 = 1, param_4 < 0x32)) {
    uVar1 = DAT_fffedfcc;
  }
  *param_5 = uVar1;
  DAT_fffedfcc = uVar1;
  return;
}

